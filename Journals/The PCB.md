# PCB
***(2hr)***

## Placing Footprints

I started by setting my grid to 50 mils.
I also set my trace sizes:

- Logic .25mm
- +5V to esp/display .4mm
- +5V to Pam8403/Servo/Motor .5mm
- Main +5V from barrel jack .8mm

For GND Ill be using a ground plane

Before placing the ILI9341 I fixed the Schematic of it, labeling each pin in order.
Then I placed it at the bottom of the PCB

I also fixed the servos pin order

I made sure to keep each section together and the caps near their components power pins.

Once I had all my components placed I Started routing


![Screenshot](Images/screenshot_20260711_194332.png)

## Routing

I started with the +5V rails, using .8mm from barrel jack to power led, and then branching from the power led to everything else.

To make thing as easy as possible I highlighted the +5V Net.

After 5v routed the button's logic, I swap the placement i orginally had for the buttons because the pins are place the other way round so it would mean using vias when theres a work around.

Everything else is pretty simple, not really anything to journal about.
Unless I write everything, I mean everything, R-In dx151.13 dx 133.35.
But no, I wont be doing that.

Once I routed everything I ran a quick DRC, and beside unconnect GNDs *(I didnt make copper plate yet)* it was all fine.

So then I made the edge cuts around the Mounting Holes and made the copper plate,
I also put fillets on every corner to make it all look that bit nicer.
Lastly I ran one last DRC and... 
2 Errors, unconnect gnds.

Thats because I forgot to let the copper plate run on B.cu aswell, ran DRC again; only 1 error about thermal, moved a few traces and...
0 Errors!!

So with that, the PCB is DONE!!!!!!


![Screenshot](Images/screenshot_20260711_210837.png)

Last thing I did was get 3d model of esp and audio amp module and upload them, then export the .step



![Screenshot](Images/screenshot_20260711_212644.png)

