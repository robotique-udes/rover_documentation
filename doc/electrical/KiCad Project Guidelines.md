

# Conventions
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
    ├── FAB-REV0-<Date>.zip
    ├── latest-REV<Nb>-<Date>.zip
    ├── <ProjectName>-REV<Nb>-<Date>.pdf
    └── <ProjectName>-REV<Nb>-<Date>.step
```

### Schematics
-  The first page should include 

## Changing number of copper layers

1. Go into the PCB editor
2. Click on Board Setup: PCB logo with a gear on top of it (should be at the top left of the window)
3. Go into Board Stackup >> Physical Stackup and change the Copper Layers value to 4
4. Click "OK"
