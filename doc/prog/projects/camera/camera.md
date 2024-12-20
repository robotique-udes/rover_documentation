New ip cameras have been bought in autumn 2024
Default IP is now : 192.168.1.18
Default rtsp network address : rtsp://192.168.1.18:554/1/h264major

# Gstreamer

gst-launch-1.0 rtspsrc location="rtsp://192.168.1.18:554/1/h264major" latency=50 ! decodebin ! videoconvert ! autovideosink sync=false

# API

The cameras have many parameters that can be edited: - Either on the chinese webui at 192.168.1.18 (or the IP address of your camera) - Or using the built-in API in rover_auxiliary/src/ipcamera_api
