

THE FINAL IS DUE BY NOON ON THURSDAY (12/13/18).  YOU ARE
ENCOURAGED TO COMPLETE IT EARLY SO YOU CAN TEST IT.  COMMITS
THAT FAIL TO COMPILE OR RUN WILL NOT BE GRADED.
  

Instructions:

1. Compile and run the code.  You should see a single cube at the
   center of the coordinate axis.   Create a new branch called
   "single". Move to this branch. 

2. In this README.md file, add your name after the "Submitted by:"
   at the bottom of the file to signify that you have read this
   file and that you are bound by the Mercer Honor Code.  You may
   not talk to anyone about this code except Dr. Pounds and you are
   free to use the class notes, man pages, and resources from the
   internet to help you write your code.  Once you add your name, add
   the modified file to your repo and commit and push the "single"
   branch with the commit message "signing honor code pledge".

3. Working on the "single" branch, you may ONLY modify code in the
   display.c file. You may not, under any circumstances, change
   the coordinetes or colors of the cube as they are defined. Your
   first task is to move the cube to the position so that the
   bottom of the cube is sitting on the x-y plane. Commit and push
   your changes with the message "you moved me".  To see what this is 
   supposed to look like, visit
   http://theochem.mercer.edu/transfer/part1.png    ( 50 pts )

4. Create a new branch from your "single" branch and call it
   "double".  You still may not modify the defineBox.c or
   drawBox.c files, but you may change other portions of the code
   to animate the box so it rotates around the Z-axis as shown here
   http://theochem.mercer.edu/transfer/part2.mp4.  You must implement
   a single call to glutIdleFunc in main and create an idle function.
   You may make other calls to whatever function is you actual idle function,
   but you only need one glutIdleFunc call to registar the function with
   glut.  You will have to make some other small changes to several of
   the other files and the Makefile.  Note each time the display refreshes
   the angle of the box should change by 0.5 degrees -- this will be true
   for all remaining rotations in the code.  Commit and push your changes to 
   the "double" branch with the commit message "You Spun Me Around".   ( 50 pts )

5. Still in your double branch, and not modifying
   defineBox.c or drawBox.c, create the animation shown at
   http://theochem.mercer.edu/transfer/part3.mp4.  Note that the
   Z-Axis passes through the middle of the cube at the corners.
   Modify the Makefile and code so that this version of the code is
   enabled with the -DTOP compiler flag.  Push these changes to the
   double branch of your repo with the commit message "Spinning Top".
   (50 pts)

6. Continue to modify the display function  only and make it produce the 
   animation shown at   http://theochem.mercer.edu/transfer/part4.mp4.  
   Pay particular attention to which colors are showing initially and how the
   cubes are rotating. The locations of the four cubes are at:
            (  0.0,  1.4,  1.0)
            (  0.0, -1.4,  1.0)
            (  5.0,  0.0,  5.0)
            ( -5.0,  0.0, -5.0) 
   Modify the Makefile and code so that this version of the code is
   enabled with the -DBALOK compiler flag.   Push the final changes
   to the "double" branch of your repo with the commit message
   "The Corbomite Maneuver". (50 pts)

CHECK YOUR CODE.  In the "double" branch when I build and run your
code with no active compiler flags I should see what you created in
Problem 4.  When I run make with the compiler flag -DTOP and then
run your code I should see what what was produced in Problem 5.
When I make and run with the compiler flag -DBALOK I should see
what you produced in Problem 6.

-- EXTRA CREDIT --

Only after all other parts are working correctly may you attempt
this.  Still in your double branch create the animation shown at
http://theochem.mercer.edu/transfer/xcredit.mp4.   You should only
modify the code in display.c.  Building on what you did in Problem
6, this code should be activated with TWO compiler flags -DBALOK
-DTRANYA in your Makefile.  In other words, when I compile and run
your code with the compiler flags -DBALOK -DTRANYA I should see
something like the animation shown at the URL above.  Notice that
the smaller cube is rotating about its own axis as well as the larger
cube. When done, commit and push your change to the double branch
with the commit message "I drank the tranya!"   
(25 pts Extra Credit)




p.s. - if you want to take a break and laugh, get on either Amazon
Prime or Netflix and watch the episode from the original "Star Trek" series
in season 1 called "The Corbomite Maneuver."
 


 Submitted by:  
   
   
   
   
   
   
   
