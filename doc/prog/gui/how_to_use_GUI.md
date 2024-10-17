# How to use the rover GUI

The GUI is a Qt6 application. TODO: Create and explain link to ROS

## Launching the app

To launch the app only, run the following command (don't forget to build):

```bash
ros2 run rover_gui main_gui
```

To run the GUI and the rest of the rover run:

```bash
ros2 launch rover_helper base.launch.py
```

In another terminal (only necessary if not connected with the rover (standalone))

```bash
ros2 launch rover_helper rover.launch.py
```

If you encounter errors when building make sure to update your [dependencies](../../General%20information.md#dependencies).

## Software development on the roverGUI

### How to create and compile a .ui file

Using **Qt Designer** you can create .ui files which gives a visual feedback of element and can speed-up the developpement process. Follow theses steps:

- Open **Qt 5 Designer** (the app should have installed with the ROS installation)
- Create or open a new _<file_name>.ui_ file (should be a _Widget_ and NOT a _Main Window_)
- Build the desired UI
- Save the file in this folder:
  - rover/rover_gui/ui/ui
- Compile the UI (creates a .h from the .ui file)
  ```bash
  cd ~/ros2_ws/src/rover/rover_gui/ui
  ./generate_ui.sh # Can probably be added to the CMakeFile
  ```
- A UI\_<file*name>.h should have generated inside of \_rover/rover_gui/ui/include*
- Include the .h file in your app
  ```cpp
  #include "UI_<file_name>.h"
  ```
- Compile and execute the app

### How to add a widget

TODO

### ROS communication

TODO
