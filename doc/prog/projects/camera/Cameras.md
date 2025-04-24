[Camera's IP addresses 2025](https://github.com/robotique-udes/rover_documentation/blob/main/doc/prog/projects/communication/Network%20Configuration.md)

[IP network shortcut](https://github.com/robotique-udes/rover_documentation/blob/main/doc/architecture/lan-network.svg)

New ip cameras have been bought in autumn 2024
Default IP is now : `192.168.1.18`
Default rtsp network address : \*rtsp://192.168.1.18:554/1/h264major

# Setting up camera Settings

user: admin
pw: 2xusual

# Gstreamer

Run this command to see the stream on your computer

```
gst-launch-1.0 rtspsrc location="rtsp://192.168.1.18:554/1/h264major" latency=0 ! decodebin ! videoconvert ! autovideosink sync=false
```

# API

The cameras have many parameters that can be edited: - Either on the chinese WebUI at 192.168.1.18 (or the IP address of your camera) - Or using our built-in API in rover_auxiliary/src/ipcamera_api
