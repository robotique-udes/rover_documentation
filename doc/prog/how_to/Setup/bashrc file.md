# .bashrc

The .basrc file is loaded each time a linux terminal is launched. You'll want to enter multiple command each time you work in ROS, adding them to your .bashrc file will simplify your life:

- Open your bashrc file

```bash
sudo nano ~/.bashrc
```

- Navigate to the end with _shift-down_arrow_

- Paste these lines (_ctrl+shift+v_):

```bash
# Additions
source /opt/ros/humble/setup.bash
source ~/ros2_ws/install/local_setup.bash
export ROS_DOMAIN_ID=69 # Set on which DOMAIN_ID ros will talk with other computer, all our computer are set on 69
```

- Save and exit by typing: ctrl+x -> y -> enter (or follow on screen commands)
- Finally source the bashrc with it's modification:

```bash
source ~/.bashrc
```

At this point you might get error msgs if you have not install ROS, don't worry about it and continue your setup.

---

The next commands are optional but are nice to have in your bashrc:

#### Compile from everywhere

The following cmd _create_ a cmd to always compile and build ROS into the right folder no matter where your terminal is. Add this line to the end of your bashrc and you'll be able to compile by entering "b" in any bash terminal, anywhere.

```bash
alias b='pushd . > /dev/null && cd ~/ros2_ws && colcon build --symlink-install && popd > /dev/null'
```

#### Enable ros logging colors

```bash
export RCUTILS_COLORIZED_OUTPUT=1
```
