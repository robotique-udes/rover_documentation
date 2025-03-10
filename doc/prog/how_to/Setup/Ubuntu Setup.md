## Ubuntu installation

The rover team run ros2 "Humble" which runs on "Ubuntu Desktop 22.04.\* LTS". Running a dual boot is very recommended because virtual machines don't work well with physical hardware. The next steps will help you setup a Ubuntu installation side by side (dual boot) of your windows installation.

If you are familiar with os installations, you can download the .iso from the [ubuntu website](https://ubuntu.com/download/desktop).

If you've never setup a dual boot before, we suggest you follow this installation [tutorial](https://medium.com/linuxforeveryone/how-to-install-ubuntu-20-04-and-dual-boot-alongside-windows-10-323a85271a73)

> [!WARNING]
> At step: "Installing updates and third-party software": We suggest selecting "Install third-party software for graphics and ..."

> [!WARNING]
> At step "Ubuntu dual boot setup": Click on "something else" and only create the [following partition](https://miro.medium.com/v2/resize:fit:720/format:webp/1*NHz494_x-btfTl4tnm0Muw.png) (allow minimum 50gb, 80gb is recommended for our project size), you don't need a swap partition or another partition for your /home folder. Then for the "Device for bootloader installation" select the device with the "Windows bootloader".
