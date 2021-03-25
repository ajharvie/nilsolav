Parts you need to hand: 
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

1) Before you start, check that the Elite-C works by flashing it with the default firmware. Nothing worse than soldering everything together then realising your controller is borked!
2) Start the build by soldering the diodes onto the bottom side of the PCB in the marked positions. The little bar on the cathode side of the diode should go against the "closed" side of the marking, and the anode against the "open" side, as shown:

![Soldering diodes](https://github.com/ajharvie/nilsolav/blob/main/doc/images/diodes.jpg)

The easiest way to solder the diodes on with an iron is to add solder to one of the pads, then with the iron still in contact with the molten solder, slide the diode into place. Then remove the iron. You can then solder the second terminal to the other pad. A bit of flux added to the pads before you start can help but is not necessary if you have decent flux-cored solder.
3) Solder the Elite-C in place, flat onto the PCB, using the castellated holes, as pictured. This is done similarly to the PCB. Sparkfun has a nice tutorial [here](https://learn.sparkfun.com/tutorials/how-to-solder-castellated-mounting-holes/all) on how to do it.

![Soldering controller](https://github.com/ajharvie/nilsolav/blob/main/doc/images/elite%20c.jpg)

4) Plug in your PCB and test it by shorting the pads for each switch and checking that the right keypress is registered. If a key is not working, it's most likely you've got a bad solder joint on the diode.
5) Add your 2U stabiliser to the PCB, then mount the switches by pushing them into their spaces on the top plate and into the PCB. If you've got it right, the reset button on the elite-c should line up with the little hole in the top plate. When you're happy that everything's seated correctly, solder the switches into their sockets.
6) Prepare the bottom plate with 7 8 mm-long M2 standoffs and M2 screws, as pictured:

![Standoffs](https://github.com/ajharvie/nilsolav/blob/main/doc/images/bottom%20plate.jpg)

7) Fasten the plates together using 7 more M2 screws. What you now have should look like this:

![Together](https://github.com/ajharvie/nilsolav/blob/main/doc/images/topview-layout.jpg)

8) You're nearly done! Add your keycaps, flash your firmware and enjoy! 

![Assembled](https://github.com/ajharvie/nilsolav/blob/main/doc/images/PXL_20210324_182517592~2.jpg)
