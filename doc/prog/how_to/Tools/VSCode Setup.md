## Using the VS Code debugger with ROS

The VS Code debugger is a great tool to find and fix issues in your code. To effectively use the debugger you will need to create 2 new files for your `.vscode` folder.

```
rover 
 ┗.vscode  
  ┣ launch.json  
  ┗ tasks.json
```
### Creating the `launch.json` file
The `launch.json` file is where your debuggers are defined. You can have multiple debuggers but only one `launch.json` file. To create more debuggers simply add other configurations.

Here is a template for a c++ debugger in the `launch.json` file:
```JSON
{
	"version": "0.2.0",
	"configurations": [
	  {
		"name": "Your debugger name",
		"type": "cppdbg",
		"request": "launch",		
		"program":"your program name",
		"args": [],
		"stopAtEntry": false,
		"cwd": "${workspaceFolder}",
		"environment": [],
		"sourceFileMap": 
		{
			"/build/": "${workspaceFolder}/build/",
			"/src/": "${workspaceFolder}/src/"
		},
		"setupCommands": [
		  {
			"description": "Enable pretty printing",
			"text": "-enable-pretty-printing",
			"ignoreFailures": true
		  }
		],
	
	"externalConsole": false,
	"MIMode": "gdb",
	"miDebuggerPath": "/usr/bin/gdb",
	"preLaunchTask": "your prelaunch tasks (optional)"
	  }
	
	]
	
}
```

Here is an example for a program name, this one launches the rover media server node:
```json  
"${workspaceFolder}/../../install/rover_video/lib/rover_video/media_server"
```

### Creating the `tasks.json` file
While optional, the `tasks.json` file is a valuable tool for automating your debugging workflow. It can allows you to automatically build your ROS2 packages in debug mode each time you launch your custom debugger, streamlining the process and saving you time.

Here is a template for automating the colcon build debug process:
```JSON
{
	"version": "2.0.0",
	"tasks": [
	   {
		"label": "your task name",
		"type": "shell",
		"command": "bash",
		"args": [
		"-c",
		"pushd . > /dev/null && cd ~/ros2_ws && colcon build --symlink-install --cmake-args -DCMAKE_BUILD_TYPE=Debug && source ~/.bashrc && popd > /dev/null"
			],
		"group": {
			"kind": "build",
			"isDefault": true
		},
		"problemMatcher": [],
		"detail": "your task description"
	   }
	]
}
```

### Using the debugger
To use the debugger, navigate to the `Run and Debug` tab in VS Code or press `CTRL+SHIFT+D`
Select your desired debugger from the drop-down menu and click the play button to launch your node. You can then run commands as you would in a regular terminal, observing how they impact your code in real-time. In the event of segmentation faults, the debugger will display the sequence of function calls leading up to the point where the fault occurred, helping you quickly identify the issue.
#### Breakpoints
Breakpoints allow you to pause the execution of your code at specific points for closer inspection. To set a breakpoint, navigate to the desired line of code and click on the red dot in the margin next to the line number. To remove a breakpoint, simply click the red dot again. The next time you run the debugger, execution will stop at the breakpoint, giving you the opportunity to examine variable values, function calls, and the overall state of your program. This helps you troubleshoot and understand the behavior of your code more effectively.

## Extensions

### Necessary

- **Python**
- **C/C++**
- **C/C++ Extension Pack**
- **CMake**
- **CMake Tools**
- **Pylance**
- **Python Debugger**
- **ROS**
- **XML**
- **YAML**
- **Doxygen Documentation**: Easier c++ code documentation
- **Clang-Format:** C++ auto formattor
- **PlatformIO**: Microcontroller build tool
- **Remote - SSH**: Access rover file system inside VSCode

## Recommended

- **Error Lens**: Better error highlighting
- **Bracket Pair Color DLW**: Styling
- **Task Runner**: Add the play button for the debugger

### Styling

- **vscode-icons**: Adds icon to folders and files in the editor
- **One Monokaï**: VS Code theme
- **Atom One Dark Theme**: VS Code theme
