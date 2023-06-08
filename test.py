import time
time.sleep(1)

import sps30
print(dir(sps30))
print(sps30.i2c_init())
print(sps30.get_driver_version())
