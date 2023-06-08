# Example from: https://docs.micropython.org/en/latest/develop/natmod.html

# Location of top-level MicroPython directory
MPY_DIR = toolchain/micropython

# Name of module
MOD = sps30

# Source files (.c or .py)
SRC = src/sps30.c  # FIXME: .cpp files are ignored: src/sensirion-arduino-sps/sps30.cpp src/sensirion-arduino-sps/sps_git_version.cpp

# Architecture to build for (x86, x64, armv6m, armv7m, xtensa, xtensawin)
ARCH = xtensawin

# Include to get the rules for compiling and linking the module
include $(MPY_DIR)/py/dynruntime.mk
