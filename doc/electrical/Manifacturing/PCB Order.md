## Generate a BOM file from KiCad
1. To export the BOM from KiCAD you first have to go to [Arturo's BOM export script](https://gist.github.com/arturo182/a8c4a4b96907cfccf616a1edb59d0389), download the Zip and unpack it.
2. For each component that you want JLCPCB to assemble, select the component by clicking it, type E to edit, add a Field. The Name of the field will be LCSC, and the value will be the JLCPCB part number (Ex: C598568).
3. In the KiCad Schematic Editor, go to Tools >> Generate Legacy Bill of Materials... Then add another BOM Generator Script and select the script previously downloaded and click Generate.
## Generate a BOM file from KiCad
1. In the KiCad PCB Editor, go to File >> Fabrication Outputs >> Component Placement (.pos, .gbr)... Select The format CSV, mm and Single file for board. Then click on Generate Position File.
2. Open the generated file with Excel or OpenOffice and modify all the columns name to match what JLCPCB wants. Designator, Mid X, Mid Y, Layer, Rotation. THE COLUMN ORDER IS VERY IMPORTANT. You can remove all other column as they are not used by JLCPCB
3. Export the file in XLS format for JCLPCB