# Overview

![](../../../../Pasted%20image%2020250411152422.png)

# Revision history

## REVX - Not ordered yet

- Changed 3.3V LED color from blue to green to match [electrical standard](doc/electrical/Electric%20Standard)
- Switched CAN_H and CAN_L signal on the CAN transceiver because they were reversed.
- Switched the CAN_RX and CAN_TX net names at the CAN receiver to match CAN RX/TX naming specification.
- Removed SPI from all 3 ifx9201SG to use dir/PWM control instead.
- Removed one limit switch from board to gain one missing io.
- Fixed silk layer typo

### REV0

Initial release
