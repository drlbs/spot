#ifndef MAIN
#define MAIN

#include "opengl.h"
#include "stdio.h"
#include "structs.h"
#include "prototypes.h"
#include "globals.h"
#include "constants.h"


int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_DEPTH | GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize (WINDOW_HEIGHT, WINDOW_WIDTH); 
   glutInitWindowPosition (100, 100);
   glutCreateWindow ("Death Star");
   init ();
   glutDisplayFunc(display); 
   glutReshapeFunc(reshape);
   glutMainLoop();
   return 0;
}

#endif
