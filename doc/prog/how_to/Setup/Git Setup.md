# Git setup and how to use

Once you've got your ROS set up correctly and that you've done most of the tutorials, you need to setup [git](https://git-scm.com/).

The first thing to setup is your [ssh key\*](https://usherbrooke.sharepoint.com/:v:/r/sites/Robotique-UdeS/Documents%20partages/Rover%20-%20G%C3%A9n%C3%A9ral/Tutoriel%20nouveaux/Setup%20ssh%20key.mkv?csf=1&web=1&e=Nlbyax), this is needed because only members of the RobotiqueUdeS GitHub organisation can make changes to the our code.

Now you're ready to clone the repository and actually start coding: [This video\*](https://usherbrooke.sharepoint.com/:v:/r/sites/Robotique-UdeS/Documents%20partages/Rover%20-%20G%C3%A9n%C3%A9ral/Tutoriel%20nouveaux/Comment%20utiliser%20git%20ish.mkv?csf=1&web=1&e=d0ssRe) explains how you can make a local copy of the code, make modification safely (without breaking anything) and finally merge it to the "release branch".

\*you need to have access to the RobotiqueUdeS MS-Teams to listen to the video, ps: sorry the sound is quite low.

Lastly, make sure to both clone both the _rover_ and the _rover_micro_ repo.

- The _rover_ repo need to be cloned inside your /src folder inside of your ROS environment. If you followed the tutorials, the path should be `~/ros2_ws/src`.
- The _rover_micro_ repo can be cloned anywhere in your computer other than inside your ROS environment (so anywhere other than `~/ros2_ws/`)