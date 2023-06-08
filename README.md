micropython-sps30
=================

Micropython module for Sensirion SPS-30, based on Sensirion official C driver packaged as mpy file.


Installation
-
...


Development
-
Install toolchain:
* Pull the needed submodules: `git submodule init` and pull the submodules to commit/release compatible with your architecture
  * Eg. pull micropython 1.20.0 if you want to run the .mpy on micropython 1.20.0
* Install prerequisites:
    `sudo apt install git wget flex bison gperf python3 python3-pip python3-venv cmake ninja-build ccache libffi-dev libssl-dev dfu-util libusb-1.0-0`
* Install **gcc-multilib** if you want to cross-compile:
    `sudo apt install gcc-multilib`
* Install **ESP-IDF toolchain**: 
    `.toolchain/esp-idf/install.sh esp32`

Compile native C module (.mpy file):
* `. toolchain/esp-idf/export.sh`
* Build the **.mpy file**: `make`, or eg. `make ARCH=x86` if you want to cross compile


Notes
-
Documentation:
* Sensirion SPS-30 official driver: https://github.com/Sensirion/arduino-sps
* Native machine code in .mpy files: https://docs.micropython.org/en/latest/develop/natmod.html
    * Examples: https://github.com/micropython/micropython/tree/master/examples/natmod
* ESP-IDF toolchain install: https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/linux-macos-setup.html
* About `ValueError: incompatible .mpy file` on `import sps30`: https://github.com/orgs/micropython/discussions/11125

We follow the versions of the Sensiron SPS-30 official driver.
