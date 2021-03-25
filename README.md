# Nils Olav
A simple-to-build, low-profile, ortholinear keyboard named after a [famous penguin.](https://en.wikipedia.org/wiki/Nils_Olav) This keyboard is based around the Elite-C v4. It features a left-sided numpad, (useful for design work), 2U spacebar, a cute little penguin, and as low a parts count as possible to make it easy for individuals to build with very simple soldering tools.

![Image of keyboard](https://github.com/ajharvie/nilsolav/blob/main/doc/images/PXL_20210324_182517592~2.jpg)

[A pre-compiled firmware hex](firmware/nilsolav_default.hex) (nilsolav_default.hex) is provided for my slightly unusual default keymap ([shown here](firmware/nilsolav/keymaps/default/keymap.c). QMK users who wish to build their own keymap can do so using the source code provided in the [firmware](firmware) folder.

In the default keymap, double-tapping the numlock key toggles a layer where the numpad is transformed into a nav cluster.

Parts needed:
* PCB x1
* Bottom plate x1 
* Top plate x1 (1.5 mm thick)
* 8mm M2 standoffs x7
* M2 screws x14 (length depends on bottom plate thickness)
* Elite C v4 x1
* 2U stabiliser x1
* SOD-123 SMD diodes x77
* Your choice of MX switches x77
* Keycaps

[A build guide is included here.](doc/buildguide.md)
