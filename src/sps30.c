// Include the header file to get access to the MicroPython API
#include "py/dynruntime.h"
#include "src/sensirion-arduino-sps/sps30.h"
#include <string.h>

#include "src/sensirion-arduino-sps/sps_git_version.h"
// #include "src/sensirion-arduino-sps/sensirion_common.h"
// #include "src/sensirion-arduino-sps/sensirion_arch_config.h"
// #include "src/sensirion-arduino-sps/i2c_master_lib.h"
// #include "src/sensirion-arduino-sps/sensirion_i2c.h"
// #include "src/sensirion-arduino-sps/sps30.h"


STATIC mp_obj_t get_driver_version() {
    const char *result = "abc";//sps_get_driver_version();
    return mp_obj_new_str(result, strlen(result));
}
STATIC MP_DEFINE_CONST_FUN_OBJ_0(get_driver_version_obj, get_driver_version);

// FIXME:
STATIC mp_obj_t i2c_init() {
    // FIXME: sensirion_i2c_init();
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_0(i2c_init_obj, i2c_init);


// This is the entry point and is called when the module is imported
mp_obj_t mpy_init(mp_obj_fun_bc_t *self, size_t n_args, size_t n_kw, mp_obj_t *args) {
    // This must be first, it sets up the globals dict and other things
    MP_DYNRUNTIME_INIT_ENTRY

    // Make the function available in the module's namespace
    mp_store_global(MP_QSTR_i2c_init, MP_OBJ_FROM_PTR(&i2c_init_obj));
    mp_store_global(MP_QSTR_get_driver_version, MP_OBJ_FROM_PTR(&get_driver_version_obj));

    // This must be last, it restores the globals dict
    MP_DYNRUNTIME_INIT_EXIT
}
