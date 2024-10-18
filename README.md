# Welcome!

Welcome to the rover documentation repo. You'll find all the documentation inside the [doc folder](doc/).

# How to write new documentation

All the documentation is written in markdown files (.md) for simplicity and portability. You can edit these files in any text editor but markdown editors are nicer. We recommend [obsidian](https://obsidian.md/).

## Writing documentation with Obsidian

1. Clone the rover_documentation repository locally
   1. [Follow this guide to learn how to configure your ssh key and clone a repo](doc/prog/how_to/intial_setup#Git-setup-and-how-to-use)
2. Install Obsidian (available for windows, linux, MacOS)

   - **Linux installation**
     ```bash
     mkdir ~/Downloads/tmp
     cd ~/Downloads/tmp
     curl -O https://github.com/obsidianmd/obsidian-releases/releases/download/v1.7.4/obsidian_1.7.4_amd64.deb
     sudo apt install ./obsidian_*
     ```
   - **Windows installation**
     - [Download from their website](https://obsidian.md/)
   - **MacOS installation**
     - [Download from their website](https://obsidian.md/)

3. Launch Obsidian (There should now be an app called "obsidian" in the activities panel)
4. Select "Open Folder as vault"
   - Open the _rover_documentation_ folder
5. You should now be able to edit the documentation easily. Once you're done, don't forget to commit and push your changes

> [!NOTE] Keep in mind
> Right now, most obsidian settings are stored inside the .obsidian folder. This means that if you change some settings, they'll get shared to everyone.
>
> _This was decided by the team to make it simpler. Mention it if you don't like it_

> [!NOTE] Warning
> Each night at 5 am, an auto-formater parse the whole documentation folder and format all markdown files. Try to always pull before making new modifications to minimise the chances of conflicts