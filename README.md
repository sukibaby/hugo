# Hu-Go! PC Engine/TurboGrafx-16 Emulator

My personal fork based on rofl0r's fork. Mostly exists to provide patches back to rofl0r's fork, so please refer to that.

I have ARM64 binaries provided here however.

![Screenshot from 2025-02-25 04-37-04](https://github.com/user-attachments/assets/5255ca68-2b58-4937-96b1-0adcc933baad)

_Screenshot from public domain ROM "Blox Graphics Slideshow"_

## Building (Linux)

Prerequisites:
- gcc
- gnu make
- autotools (should be included with the above)
- pkg-config
- GTK 2.0 libraries (used libgtk2.0-dev on Armbian)
- SDL libraries (used libsdl1.2-dev on Armbian)
- zlib libraries (optional)

After entering the `hugo` directory,
1. Set build.sh to be executable: `chmod +x build.sh`
2. Run build.sh: `./build.sh`
3. Run `make`
4. (optional) Run `make install`
5. Launch Hu-Go! by typing `hugo`
