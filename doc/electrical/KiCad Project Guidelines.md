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
    ├── <ProjectName>-REV<Nb>-<Date>.zip
    ├── latest-REV<Nb>-<Date>.zip
    ├── <ProjectName>-REV<Nb>-<Date>.pdf
    └── <ProjectName>-REV<Nb>-<Date>.step
    └── <ProjectName>-REV<Nb>-<Date>.csv
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
   - Enable **Check zone fills before plotting**
   - Enable **Tent vias**
   - Enable **Substract soldermask from silkscreen**
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

1. Open your schematic in the \*\*KiCad PCB Editor.
2. Go to **File >> Export >> STEP...** and export with the default settings.

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

# JLCPCB order

## Generate a BOM file from KiCad for pick and place

1. To export the BOM from KiCAD you first have to go to [Arturo's BOM export script](https://gist.github.com/arturo182/a8c4a4b96907cfccf616a1edb59d0389), download the Zip and unpack it.
2. For each component that you want JLCPCB to assemble, select the component by clicking it, type E to edit, add a Field. The Name of the field will be LCSC, and the value will be the JLCPCB part number (Ex: C598568).
3. In the KiCad Schematic Editor, go to Tools >> Generate Legacy Bill of Materials... Then add another BOM Generator Script and select the script previously downloaded and click Generate.

## Generate a BOM file from KiCad for pick and place

4. In the KiCad PCB Editor, go to File >> Fabrication Outputs >> Component Placement (.pos, .gbr)... Select The format CSV, mm and Single file for board. Then click on Generate Position File.
5. Open the generated file with Excel or OpenOffice and modify all the columns name to match what JLCPCB wants. Designator, Mid X, Mid Y, Layer, Rotation. THE COLUMN ORDER IS VERY IMPORTANT. You can remove all other column as they are not used by JLCPCB
6. Export the file in XLS format for JCLPCB

# Digikey Order

1. Open the schematic editor
2. _Tools -> Generate Bill of Materials..._
3. Enter theses settings:
   - Export Tab:
     - Output file: `../REV<Nb>-<Date>/<ProjectName>-REV<Nb>-<Date>.csv` (Refer to [project structure guidelines](KiCad%20Project%20Guidelines.md#Project%20Structure) for file name)
     - Field delimiter: `,`
     - String delimiter: `"`
     - Reference delimiter: `,`
   - Edit Tab:
     - Scope: Entire project
     - Cross-probe action: Highlight
     - Select only the field in the table below

| Field       | Value | Group By |
| ----------- | ----- | -------- |
| Reference   | x     |          |
| Value       | x     | x        |
| Footprint   | x     |          |
| Description | x     |          |
| Qty         | x     |          |
| Digikey     | x     |          |

4. _Apply, Save Schematic & Continue_
5. _Export_
6. _OK_
