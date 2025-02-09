
# How to Start a new project

1. Open KiCad
2. Open the project template
	- File->Open Project-> PCB/rover/Templates/ProjectTemplate/latest/ProjectTemplate.kicad_pro
3. Save as the template with the name of your new project (please follow the naming [conventions](KiCad%20Project%20Guidelines.md#Conventions))
	- File->Save As...->PCB/rover/`<YEAR>`/`<NewProjectName>`
4. Close the project
	- File->Close project
5. Exit KiCad
6. Open your new project folder in a file explorer
	- PCB/rover/`<YEAR>`/`<NewProjectName>`
7. Create a folder named `latest`
8. Drag and drop all generated file into the new `latest` folder
	-Your files you look like this [Project structure convention](KiCad%20Project%20Guidelines.md#Project%20Structure)

9. Open your new project
10. Open the schematics
11. Finally configure the variables in File->Schematic Setup->Text Variables
## Conventions
- Project name should be *CapitalCamelCase*
- You should only work in the *latest* folder.
	- All `REV<Nb>-<Date>` folder should be screenshots made when a new PCB version is ordered. This way we can easily reorder an exact copy of a specific version.
- REV versions should start at 0

### Project Structure

Your project structure should look like this:
```
<ProjectName>
├── latest
│   ├── board.kicad_sch
│   ├── fp-info-cache
│   ├── fp-lib-table
│   ├── <ProjectName>.kicad_pcb
│   ├── <ProjectName>.kicad_prl
│   ├── <ProjectName>.kicad_pro
│   ├── <ProjectName>.kicad_sch
│   └── sym-lib-table
└── REV<Nb>-<Date>
    ├── FAB-REV<Nb>-<Date>.zip
    ├── latest-REV<Nb>-<Date>.zip
    ├── <ProjectName>-REV<Nb>-<Date>.pdf
    └── <ProjectName>-REV<Nb>-<Date>.step
```

### Schematics
-  The first page should include 

## Changing number of copper layers

12. Go into the PCB editor
13. Click on Board Setup: PCB logo with a gear on top of it (should be at the top left of the window)
14. Go into Board Stackup >> Physical Stackup and change the Copper Layers value to 4
15. Click "OK"
