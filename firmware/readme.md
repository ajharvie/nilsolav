Firmware for the keyboard. [A pre-compiled firmware hex](nilsolav_default.hex)(nilsolav_default.hex) is provided for the default keymap ([shown here](nilsolav/keymaps/default/keymap.c)).

In the default keymap, double-tapping the numlock key toggles a layer where the numpad is transformed into a nav cluster.

QMK users can copy the nilsolav directory into their qmk_firmware folder if they want to customise the keymap or compile themselves for any other reason. The correct file structure is then:

../qmk_firmware/keyboards/nilsolav/..
