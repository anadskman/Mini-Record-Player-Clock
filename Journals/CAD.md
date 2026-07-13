# CAD
***(4:15hr)***

I started by Setting up my workspace, I created a component called `PCB` and imported my pcb.step into it.

Then I created another component called `Front` and uploaded a model of the display.

Then I used that model to "Trace" where it would go and extruded the front plane.

Afterwards I create a near scale of my actual buttons and put it inside a component inside `Front`, I called it `Button`.

Then I put it where I wanted it to go and cut that into the front body,
so with that the front should be complete.

***************ScreenSHOT***************

I made a new component `Sides`
This is where the speakers will be and the play, prev, next buttons.

I made a sketch on the left wall and projected the barrel jack out and then cut it out.
On the same wall I cut out 3 circles for the 3 buttons too.

I moved the pcb to the right a little bit to give the buttons some space.
I also adjusted the cutout for the barrel jack by pushing the wall back on that area.

Then I just extruded the other wall 115mm aswell.
I made a new component called `Speaker` and made a 40m diameter x 5mm circle *(thats what the aliexpress item has)*.
I actually forgot to allow room for a speaker on the Left, so to fix it I just extrude the walls down further, so they were 140mm.

Then I cut out the speaker holes on both sides

***************ScreenSHOT***************

The next component I made was `Top`.

I started by making a big 80mm circle *(This will be the record)* and a 2mm hole in the middle of it of the motor.
From the same center point I made another circle 20mm diameter, this will let the motor stick out a little bit.

Next thing I did was sketch out the needle arm bit which connects to the servo, now for this part I did take inspiration from the "reference" image I had in my first journal log.

I started by adding a model of a servo and start marking around it.

I extruded the whole top piece and then made a new component `Disc` and extruded... The disc of course.

I made a quick model of my motor and put it into place

Afterwards I made a cover to go over the servo hiding it, I added to holes for it to be screwed into the top.

Then I made a new component inside `Top` called `Needle`.
From there I designed the needle and ensured to make it screwable to the servo horn.

I test it to see that it would reach the disc properly and it does.

Now thats about half the top done.

***************ScreenSHOT***************

**Next up**
- Motor mount *(I have a mount I just need to make it connectable to the case)*
- Lid for top *(I have some clear petg ill try to use)*
- Hinge for mount *(Ill just do the same color as rest of case instead of clear, I think itll look nicer)*
- bottom
- revise how everything connects
- sanity check