## Current project state
Early design

## Why
Some/our IP cameras only support one client connected to their RTSP streams. For this reason we'll want to have a service which would redistribute the stream to support multiple clients.

## Wanted features
- Handle multiple cameras
- Watchdog 
- Camera config in JSON/YAML file
	- Supported values in MAP
- Report:
	- Configuration state
	- Connection state
	- Number of active client
	- Log new connection/disconnection
- Gstreamer based