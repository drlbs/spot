
#ifndef DISPLAY
#define DISPLAY

#include "opengl.h"
#include "structs.h"
#include "globals.h"
#include "prototypes.h"

GLUquadric *earth;

void display(void)
{

   extern float SPIN;
   struct box faces[6];

   /* Set up view and buffers needed in MODELVIEW */ 
   glMatrixMode(GL_MODELVIEW);
   glEnable(GL_DEPTH_TEST);
   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
   glLoadIdentity ();             /* clear the matrix */
   gluLookAt (10.0, 9.0, 4.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);

   /* Draw and label axes */
   glColor3ub(255,255,255);
   drawAxes(7);


   /* Let's set up some matrial properties for lighting */
   glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
   glColorMaterial(GL_FRONT, GL_SPECULAR);

   /* Now Set up a red light along the x-axis */

   float *light0 = malloc(4*sizeof(float));
   light0[0]= 15.0; light0[1] = 0.0; light0[2]=0.0; light0[3] = 1.0;
   glLightfv(GL_LIGHT0, GL_POSITION, light0);
   light0[0]= 0.5; light0[1] = 0.0; light0[2]=0.0; light0[3] = 1.0;
   glLightfv(GL_LIGHT0, GL_DIFFUSE, light0);
   glLightfv(GL_LIGHT0, GL_SPECULAR, light0);

   /* Now Set up a blue light along the z-axis */

   float *light1 = malloc(4*sizeof(float));
   light1[0]= 0.0; light1[1] = 0.0; light1[2]=15.0; light1[3] = 1.0;
   glLightfv(GL_LIGHT1, GL_POSITION, light1);
   light1[0]= 0.0; light1[1] = 0.0; light1[2]=0.5; light1[3] = 1.0;
   glLightfv(GL_LIGHT1, GL_DIFFUSE, light1);
   glLightfv(GL_LIGHT1, GL_SPECULAR, light1);


   /* Now add a green spotlight */ 

   glLightf(GL_LIGHT2, GL_SPOT_CUTOFF, 3.0);
   glLightf(GL_LIGHT2, GL_SPOT_EXPONENT, 30.0);
   glLightf(GL_LIGHT2, GL_LINEAR_ATTENUATION, 0.0);

   /* Spotlight is going to be positioned on the arc of the circle
    * connectint he y-z axis
    * x=y=0.7071*15=10.61
    */

   float *light2 = malloc(4*sizeof(float));
   /* NOTE -- the spotlight MUST be a positional light, w=1.0, to get the proper effect. */
   light2[0]= 0.0; light2[1] = 10.61; light2[2]= 10.61; light2[3] = 1.0;
   glLightfv(GL_LIGHT2, GL_POSITION, light2);
   light2[0]= 0.0; light2[1] = 0.0; light2[2]=0.0; light2[3] = 1.0;
   glLightfv(GL_LIGHT2, GL_AMBIENT, light2);
   light2[0]= 0.0; light2[1] = 0.5; light2[2]=0.0; light2[3] = 1.0;
   glLightfv(GL_LIGHT2, GL_DIFFUSE, light2);
   glLightfv(GL_LIGHT2, GL_SPECULAR, light2);

   /* the direction will be through the axis in the negative y-z plane */
   float *direction = malloc(3*sizeof(float));
   direction[0]= 0.0; direction[1] = -1.0; direction[2]=-1.0; ;
   glLightfv(GL_LIGHT2, GL_SPOT_DIRECTION, direction);

   /* Turn on Lighting */ 
   glShadeModel(GL_SMOOTH);
   glEnable(GL_COLOR_MATERIAL);
   glEnable(GL_LIGHT0);
   glEnable(GL_LIGHT1);
   glEnable(GL_LIGHT2);
   glEnable(GL_LIGHTING);

   earth = gluNewQuadric();
   gluQuadricNormals(earth, GLU_SMOOTH);
   gluSphere( earth, 2.0, 144, 144);

   free(earth);
   free(light0);
   free(light1);
   free(light2);
   free(direction);
   glDisable(GL_LIGHTING);
   glFlush();

}

#endif
