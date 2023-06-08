micropython-sensirion-sps30
===========================

Micropython module for Sensirion SPS30, based on Sensirion official C driver packaged as mpy file.


Installation
-
TODO: `micropython -m upip install micropython-sensirion-sps30`


Development
-
### Install toolchain
* Initialize the git submodules and pull the submodules to the commit/release compatible with your architecture (eg. pull micropython 1.20.0 if you want to run the .mpy on micropython 1.20.0):
    * `git submodule init` 
    * `git submodule toolchain/micropython ...` to same release of your micropython firmware flashed to your ESP (eg. v1.20.0)
    * `git submodule toolchain/esp-idf ...` latest release (or commit) usually works
    * `git submodule src/arduino-sps ...` release (or commit) you want to use

* Install prerequisites:
    * `sudo apt install git wget flex bison gperf python3 python3-pip python3-venv cmake ninja-build ccache libffi-dev libssl-dev dfu-util libusb-1.0-0`

* Install **gcc-multilib** if you want to cross-compile:
    * `sudo apt install gcc-multilib`

* Install **ESP-IDF toolchain**: 
    * `toolchain/esp-idf/install.sh esp32`

### Compile native C module to .mpy file
* `. toolchain/esp-idf/export.sh`
* `make`

This creates an .mpy file for ESP32 (`xtensawin` architecture). If you want to compile for another architecture, use eg. `make ARCH=xtensa`.


Notes
-
Documentation:
* Sensirion SPS30 official driver: https://github.com/Sensirion/arduino-sps
* Native machine code in .mpy files: https://docs.micropython.org/en/latest/develop/natmod.html
    * Examples: https://github.com/micropython/micropython/tree/master/examples/natmod
* ESP-IDF toolchain install: https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/linux-macos-setup.html
* About `ValueError: incompatible .mpy file` on `import sps30`: https://github.com/orgs/micropython/discussions/11125
* About compling C++ in native modules (FIXME)

We follow the versions of the Sensiron SPS-30 official driver.
