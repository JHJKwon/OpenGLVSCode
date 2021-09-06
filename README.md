# OpenGLVSCode
Using OpenGL in C++ on VSCode.

## Goal
1. Successfully build C++ on VSCode using OpenGL
1.1. Setup VSCode to use C++
1.2. Add OpenGL dependencies

## Setup
### Current environment.
Windows 10 with WSL

```
sudo apt install mesa-utils // to call glxgears
sudo apt-get update
sudo apt-get install build-essential gdb libglfw3-dev libglew-dev libglm-dev
```

Note 2021-09-06
glxgears error
as per this [link](https://azrael.digipen.edu/~mmead/www/public/wsl/index.html), X window is required.
with following command
```
export DISPLAY=localhost:0.0
export LIBGL_ALWAYS_INDIRECT=1
```

glxgears is now available but libGL errors.
```
libGL error: No matching fbConfigs or visuals found
libGL error: failed to load driver: swrast
Running synchronized to the vertical refresh.  The framerate should be
approximately the same as the monitor refresh rate.
```

install nvidia 470 driver in WSL
```
sudo apt install libnvidia-gl-470
```
