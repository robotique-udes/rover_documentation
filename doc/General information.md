**This file should be split into multiples**

# Table of content

- [Welcome!](#welcome)
- [Table of content](#table-of-content)
- [General information](#general-information)
  - [Useful links](#useful-links)
  - [Task tracking and team organisation](#task-tracking-and-team-organisation)
  - [Architecture](#architecture)
  - [Software development](#software-development)
  - [Electrical development](#electrical-development)
- [Dependencies](#dependencies)
- [ESP32 and micro controller ROS development](#esp32-and-micro-controller-ros-development)

# General information

To setup your computer for development, [read this page](prog/how_to/Setup/1_read_first.md). The rest of the documentation takes for granted that you are all set up.

## Useful links

## Task tracking and team organisation

We now use _GitHub project_ to manage tasks, all members of the GitHub Rovus team can now access the project on the [RobotiqueUdeS project tab](https://github.com/orgs/robotique-udes/projects/1/views/1)

## Architecture

![[attachements/VeryHighLevelSoftwareStructure.drawio.svg]]

- **TODO: Bring the ROS architecture from Teams to GitHub**

The current ROS architecture is located on the _RobotiqueUdeS MSTeams_ -> _Rovus-General_ channel -> _architecture_ tab. Refer to it when naming topics, services, nodes, namespaces, etc. and update the diagram if you see find mismatch.

## Software development

All the code base is regrouped into two distinct repositories:

- [rover](https://github.com/robotique-udes/rover): Contains all the code running on the base station computer or the rover main computer

  - The _rover_ repo is a ROS meta-package and should only be cloned into your ROS workspace (_ros2_ws/src_).

- [rover_micro](https://github.com/robotique-udes/rover_micro): Contains all micro controller projects which runs on our multiple PCBs

  - The rover_micro repo shouldn't be cloned inside your ROS workspace as a requirement for [micro ros](https://micro.ros.org/) because the repo might include micro ROS projects in the future.

A folder structure example is in [the setup documentation](prog/how_to/Setup/1_read_first.md).

The use of [gitsource](https://sourcegit-scm.github.io/) offers a GUI for git (for windows and linux) which is very convenient for new users. It's used by most of the team members, ask any software team member for a quick tutorial if needed.

For more info about development see the in [detail readme](TODO)

## Electrical development

All the electrical projects (mostly PCBs) are located into the shared [PCB](https://github.com/robotique-udes/PCB) repo. Its a shared repo with the other RobotiqueUdeS group and doesn't have any branch protection. As of now, it's only used as a storage and sharing space.

# Dependencies

Dependencies can be install by running the following command
```bash
~/ros2_ws/src/rover/scripts/provision.sh
```

After installing new deps, it's always a good idea to clean your build environnement. If you're [bashrc](doc/prog/how_to/Setup/bashrc_file.md) is up-to-date, run the `clean` command in a terminal.
