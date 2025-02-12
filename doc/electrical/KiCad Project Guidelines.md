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

- Project name should be _CapitalCamelCase_
- You should only work in the _latest_ folder.
  - All `REV<Nb>-<Date>` folder should be screenshots made when a new PCB version is ordered. This way we can easily reorder an exact copy of a specific version.
- REV versions should start at 0
- The `.pdf` x

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

- The first page should include

## Changing number of copper layers

1. Go into the PCB editor
2. Click on Board Setup: PCB logo with a gear on top of it (should be at the top left of the window)
3. Go into Board Stackup >> Physical Stackup and change the Copper Layers value to 4
4. Click "OK"

## Exporting fabrication files (Gerber)

1. To export the Gerber files from KiCad, open your PCB design in the **KiCad PCB Editor** (Pcbnew).
2. Go to **File >> Plot** to open the Plot window.
3. In the Plot window:
   - Set the **Plot format** to **Gerber**.
   - Select the necessary layers for manufacturing. For a standard 4-layer board, select:
     - F.Cu (Front Copper)
     - In1.Cu (Inner Layer 1)
     - In2.Cu (Inner Layer 2)
     - B.Cu (Back Copper)
     - F.SilkS (Front Silkscreen)
     - B.SilkS (Back Silkscreen)
     - F.Mask (Front Solder Mask)
     - B.Mask (Back Solder Mask)
     - Edge.Cuts (Board Outline)
   - Enable **Use Protel filename extensions**.
   - Click **Plot** to generate the Gerber files.
4. To export the drill files, click **Generate Drill Files** in the same Plot window.
5. In the Drill File Generation window:
   - Set the **Drill Units** to **Millimeters**.
   - Select **PTH and NPTH in single file**.
   - Click **Generate Drill File**.
6. After the files are generated, navigate to your project folder and locate the **Gerber** and **Drill** files.
7. Zip all the generated files and submit them to your PCB manufacturer for production.

### Exporting a Schematic as PDF

1. Open your schematic in the **KiCad Schematic Editor** (Eeschema).
2. Go to **File >> Plot** and select **PDF** as the plot format to export the schematic.

### Exporting a Circuit as STEP

1. Open your schematic in the **KiCad PCB Editor.
2. Go to **File >> Export >> STEP...** and export with the default settings.