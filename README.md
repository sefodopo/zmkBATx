# Installing Multiperipheral version on Arch based systems

Directions are the same as listed for AUR packages on the Arch Wiki,
except the PKGBUILD files are located here. If enough people want to
use this, then make an issue and I can work on moving this to the AUR.

## Simple Steps
1. Ensure `base-devel` is installed
2. Get pkgbuild files `git clone --branch arch-packages --depth 1 https://github.com/sefodopo/zmkBATx`
3. Build and install simpleble:
    a. Enter directory `cd zmkBATx/simpleble`
    b. Build and install package `makepkg -sci`
4. Build and install zmkBATx:
    a. Enter directory `cd ../zmkbatx`
    b. Build and install package `makepkg -sci`
