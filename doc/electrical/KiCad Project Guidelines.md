


## Project Structure
A project structure should look like this:
-- Project_Name
	-- latest
		-- Project_Name.kicad_pro
		-- Project_Name.kicad_sch	
		-- Project_Name.kicad_pcb
	-- 2025-02-05-REV0
		-- Project_Name.step
		-- Project_Name.pdf
		-- FAB.zip
		-- latest-BAK.zip
	-- 2025-02-10-REV1
		-- Project_Name.step
		-- Project_Name.pdf
		-- FAB.zip
		-- latest-BAK.zip

## Changing number of copper layers
1. Go into the PCB editor
2. Click on Board Setup: PCB logo with a gear on top of it (should be at the top left of the window)
3. Go into Board Stackup >> Physical Stackup and change the Copper Layers value to 4
4. Click "OK"