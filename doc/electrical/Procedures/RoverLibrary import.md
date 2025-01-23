## Import Symbole Library

1. Pull the latest main branch from github
2. Open a KiCad project
3. Go into Preferences >> Manage Symbol Libraries...
4. Add a new line at the end of the list
5. In the Nickname, type "RoverLibrary"
6. In the library path, add the full path to the "RoverLibrary.kicad_sym" (should be found in PCB/rover/RoverLib/RoverLibrary.kicad_sym)

## Import Footprint Library

1. Go into Preferences >> Manage Footprint Libraries...
2. Add a new line at the end of the list
3. In the Nickname, type "RoverFootprint"
4. In the library path, add the full path to the "RoverFootprint.pretty" (should be found in PCB/rover/RoverLib/RoverFootprint.pretty)

## Testing the library

1. Open a new project
2. Open the schematic editor
3. Type "A" or click on the "Add component" in the right tool bar
4. Find the folder named "RoverLibrary" and double click on a component inside the Rover Library to place it in the schematic
5. Once the symbol is placed, go into Tools >> Update PCB from Schematic
6. When prompted, click on "Update PCB", then "Close"
7. Click anywhere to place the component footprint
8. Go to View >> 3D Viewer
9. You should see the component footprint on a PCB
10. If the component has no 3D body, advise Lucas Bonenfant to resolve the problem
