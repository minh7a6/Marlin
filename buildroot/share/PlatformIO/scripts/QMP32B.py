import os,shutil
from SCons.Script import DefaultEnvironment
from platformio import util
Import("env")

env = DefaultEnvironment()
platform = env.PioPlatform()
board = env.BoardConfig()

FRAMEWORK_DIR = platform.get_package_dir("framework-arduinoststm32")
CMSIS_DIR = os.path.join(FRAMEWORK_DIR, "CMSIS", "CMSIS")
assert os.path.isdir(FRAMEWORK_DIR)
assert os.path.isdir(CMSIS_DIR)
assert os.path.isdir("buildroot/share/PlatformIO/variants")

mcu_type = board.get("build.mcu")[:-2]
variant = board.get("build.variant")
series = mcu_type[:7].upper() + "xx"
variant_dir = os.path.join(FRAMEWORK_DIR, "variants", variant)

source_dir = os.path.join("buildroot/share/PlatformIO/variants", variant)
assert os.path.isdir(source_dir)

if not os.path.isdir(variant_dir):
    os.mkdir(variant_dir)

for file_name in os.listdir(source_dir):
    full_file_name = os.path.join(source_dir, file_name)
    if os.path.isfile(full_file_name):
        shutil.copy(full_file_name, variant_dir)
env.Append(
    UPLOADERFLAGS=["-c port=USB1 -d {{$SOURCE}} -s"]
)
env.Replace(
    UPLOADER="STM32_Programmer_CLI.exe", 
    #for Linux, change to STM32_Programmer_CLI.sh 
    #for MacOS, change to STM32_Programmer_CLI
    UPLOADCMD="$UPLOADER $UPLOADERFLAGS"
)