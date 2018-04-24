
#include <GLUT/glut.h>
#include <OpenGL/glu.h>
#include <OpenGL/gl.h>
#include <stdlib.h>
#include <stdio.h>

int x = 0, y = 0, z = 0;

void init(void){
  glClearColor (0.0, 0.0, 0.0, 0.0);
}

void display(void){
  glClear (GL_COLOR_BUFFER_BIT);
  glPushMatrix();

  /* Cubo 1 */
  glPushMatrix();
  glRotatef(x, 1.0, 0.0, 0.0);
  glRotatef(y, 0.0, 1.0, 0.0);
  glRotatef(z, 0.0, 0.0, 1.0);
  // glTranslatef (-2.0, 0.0, 0.0);
  // glScalef (3.0, 2.0, 5.0);
  glutWireCube (1.0);
  glPopMatrix();
   
  /* Cubo 2 */
/*  
  glPushMatrix();
  glRotatef (25.0, 0.0, 0.0, 1.0);
  glTranslatef (2.0, 0.0, 0.0);
  glScalef (2.0, 1.0, 4.0);
  glutWireCube (1.0);
  glPopMatrix();
*/
   /* Cubo 3 */
/*
  glPushMatrix();
  glTranslatef (0.0, 2.0, 0.0);
  glScalef (2.0, 1.0, 4.0);
  glutWireCube (1.0);
  glPopMatrix();
*/
     /* Cubo 4 */
/*
  glPushMatrix();
  glTranslatef (0.0, -2.0, 0.0);
  glScalef (2.0, 1.0, 4.0);
  glutWireCube (1.0);
  glPopMatrix();
*/
  glPopMatrix();
  glutSwapBuffers();
}

void reshape (int w, int h){
  glViewport (0, 0, (GLsizei) w, (GLsizei) h);
  glMatrixMode (GL_PROJECTION);
  glLoadIdentity ();
  gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
  gluLookAt (0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
  // glMatrixMode(GL_MODELVIEW);
  // glLoadIdentity();
  // glTranslatef (0.0, 0.0, -10.0);
}
void keyboard(unsigned char key, int x, int y){
  switch (key) {
  case 27:                                         // tecla Esc (encerra o programa)
	exit(0);
	break;
  }
}

void mouse(int button, int state, int mx, int my, int mz) {
  if (state == GLUT_DOWN) {
     x = mx;
     y = glutGet(GLUT_WINDOW_HEIGHT) - my;
     z = mz;

   glutPostRedisplay();
  }
}

int main(int argc, char** argv){
  glutInit(&argc, argv);
  glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
  glutInitWindowSize (500, 500); 
  glutInitWindowPosition (100, 100);
  glutCreateWindow (argv[0]);
  init ();
  glutDisplayFunc(display); 
  glutReshapeFunc(reshape);
  glutKeyboardFunc(keyboard);
  glutMouseFunc(mouse);
  glutMainLoop();
  printf("%d %d %d\n", x, y, z); 
  return 0;
}