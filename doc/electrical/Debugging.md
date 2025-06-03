> [!ERROR] VERY IMPORTANT!
> This note document every problems our PCB design had which required a new revision. Every designer should use this note as a checklist at the start and end of each projects/revision to make sure they don't reproduce these error by mistake.

## ESP32-S3 Boot up problems
### Problem:
ESP32-S3 did not boot by default when connected to power for the first time after a while (~1h). This suggested a capacitor problem which doesn't happen once a cap as been charged.
### Workaround:
The current workaround was to power cycle the rover on first startup two times.
### Solution:
The reason why this happen was that a filter was created in parallel with the "boot" button (GPIO-0). On all our board, following the esp32-s3 dev board, placed a 0805 1uF capacitor in parallel with the button. This made the board always fall into the bootloader at startup instead of loading and executing the code in the flash. 

## Mapping Pins with default behaviors to actuator Pins
### Problem:
ESP32-S3 has not a lot of pins so sometimes a designer needs to use some GPIO which have default functionnality (ex: RX0, TX0). This is fine as long as those pin do not drive actuator drivers (servo motor, dc motor driver, etc.). Since these pins have default behaviors they can be "high" when the device is booting, when uploading code or when the device is in the bootloader. This is dangerous for our team members and create a lot of problems when needing to keep persistant calibration value in the flash (because the actuator moves when the device hasn't booted yet).   
### Workaround:
Manual fix on pcb
### Solution:
Don't do it unless you know what you're doing and take the time to check the microcontroller's datasheet when assigning ANY pins. 
