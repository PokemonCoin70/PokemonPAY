
Debian
====================
This directory contains files used to package pokemond/pokemon-qt
for Debian-based Linux systems. If you compile pokemond/pokemon-qt yourself, there are some useful files here.

## pokemon: URI support ##


pokemon-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install pokemon-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your pokemon-qt binary to `/usr/bin`
and the `../../share/pixmaps/pokemon128.png` to `/usr/share/pixmaps`

pokemon-qt.protocol (KDE)

