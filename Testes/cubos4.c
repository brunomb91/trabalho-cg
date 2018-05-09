
#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <stdlib.h>
#include <stdio.h>

float x = 0, y = 0, z = 0;

void init(void){
  glClearColor (0.0, 0.0, 0.0, 0.0);
  
}

void display(void){
  glClear (GL_COLOR_BUFFER_BIT);
  // Retângulo com o sino  
  glPushMatrix();
  
  glRotatef(x, 1.0, 0.0, 0.0);
  glRotatef(y, 0.0, 1.0, 0.0);
  glRotatef(z, 0.0, 0.0, 1.0);
  
  glBegin(GL_LINE_STRIP);
     glVertex3f(0.0f, 0.0f, 0.0f);   
     glVertex3f(1.0f, 0.0f, 0.0f);  
     glVertex3f(1.0f, 4.0f, 0.0f); 
     glVertex3f(0.0f, 4.0f, 0.0f);     
     
     glVertex3f(0.0f, 0.0f, 0.0f);
     glVertex3f(0.0f, 4.0f, 0.0f);
     glVertex3f(0.0f, 4.0f, 1.0f);
     glVertex3f(0.0f, 0.0f, 1.0f);
     
     glVertex3f(0.0f, 0.0f, 0.0f);  
     glVertex3f(0.0f, 0.0f, 1.0f); 
     glVertex3f(1.0f, 0.0f, 1.0f);  
     glVertex3f(1.0f, 0.0f, 0.0f);     
     
  glEnd();
  glPopMatrix();
  // Parte do retângulo
  glPushMatrix();
  
  glRotatef(x, 1.0, 0.0, 0.0);
  glRotatef(y, 0.0, 1.0, 0.0);
  glRotatef(z, 0.0, 0.0, 1.0); 
  
  glBegin(GL_LINE_STRIP);
     glVertex3f(0.0f, 4.0f, 0.0f);
     glVertex3f(1.0f, 4.0f, 0.0f);
     glVertex3f(1.0f, 4.0f, 1.0f);
     glVertex3f(0.0f, 4.0f, 1.0f);
  glEnd();
  glPopMatrix();

  glPushMatrix();
  
  glRotatef(x, 1.0, 0.0, 0.0);
  glRotatef(y, 0.0, 1.0, 0.0);
  glRotatef(z, 0.0, 0.0, 1.0); 
  
  
  glBegin(GL_LINE_STRIP);
     glVertex3f(1.0f, 0.0f, 1.0f);
     glVertex3f(1.0f, 4.0f, 1.0f); 
  glEnd();
  glPopMatrix();
  // Contorno do retângulo  
  glPushMatrix();
  
  glRotatef(x, 1.0, 0.0, 0.0);
  glRotatef(y, 0.0, 1.0, 0.0);
  glRotatef(z, 0.0, 0.0, 1.0); 
  
  glBegin(GL_LINE_STRIP);
     glVertex3f(1.0f, 0.0f, 0.0f);
     glVertex3f(1.25f, 0.0f, 0.0f);
     glVertex3f(1.25f, -0.25f, 0.0f);
     glVertex3f(1.5f, -0.25f, 0.0f);
     glVertex3f(1.5f, -0.5f, 0.0f);
     glVertex3f(1.75f, -0.5f, 0.0f);
     glVertex3f(1.75f, -2.0f, 0.0f);
  glEnd();
  glPopMatrix();
  
  glPushMatrix();
  
  glRotatef(x, 1.0, 0.0, 0.0);
  glRotatef(y, 0.0, 1.0, 0.0);
  glRotatef(z, 0.0, 0.0, 1.0);
  
  glBegin(GL_LINE_STRIP);
     glVertex3f(0.0f, 0.0f, 0.0f);
     glVertex3f(-0.25f, 0.0f, 0.0f);
     glVertex3f(-0.25f, -0.25f, 0.0f);
     glVertex3f(-0.5f, -0.25f, 0.0f);
     glVertex3f(-0.5f, -0.5f, 0.0f);
     glVertex3f(-0.75f, -0.5f, 0.0f);
     glVertex3f(-0.75f, -2.0f, 0.0f);
  glEnd();
  glPopMatrix();
  
  glPushMatrix();
  
  glRotatef(x, 1.0, 0.0, 0.0);
  glRotatef(y, 0.0, 1.0, 0.0);
  glRotatef(z, 0.0, 0.0, 1.0);
  
  glBegin(GL_LINE_STRIP);
     glVertex3f(1.0f, 2.0f, 0.25f);
     glVertex3f(1.25f, 2.0f, 0.25f);
     glVertex3f(1.25f, 1.75f, 0.25f);
     glVertex3f(1.5f, 1.75f, 0.25f);
     glVertex3f(1.5f, 1.5f, 0.25f);
     glVertex3f(1.75f, 1.5f, 0.25f);
     glVertex3f(1.75f, 1.0f, 0.25f);
     glVertex3f(2.0f, 1.0f, 0.25f);
     glVertex3f(2.0f, 0.75f, 0.25f);
     glVertex3f(2.25f, 0.75f, 0.25f);
     glVertex3f(2.25f, 0.25f, 0.25f);
     glVertex3f(2.5f, 0.25f, 0.25f);
     glVertex3f(2.5f, 0.0f, 0.25f);
     glVertex3f(2.75f, 0.0f, 0.25f);
     glVertex3f(2.75f, -0.25f, 0.25f);
     glVertex3f(3.0f, -0.25f, 0.25f);
     glVertex3f(3.0f, -2.5f, 0.25f);
  glEnd();
  glPopMatrix();
  
  glPushMatrix();
  
  glRotatef(x, 1.0, 0.0, 0.0);
  glRotatef(y, 0.0, 1.0, 0.0);
  glRotatef(z, 0.0, 0.0, 1.0);
  
  glBegin(GL_LINE_STRIP);
     glVertex3f(0.0f, 2.0f, 0.25f);
     glVertex3f(-0.25f, 2.0f, 0.25f);
     glVertex3f(-0.25f, 1.75f, 0.25f);
     glVertex3f(-0.5f, 1.75f, 0.25f);
     glVertex3f(-0.5f, 1.5f, 0.25f);
     glVertex3f(-0.75f, 1.5f, 0.25f);
     glVertex3f(-0.75f, 1.0f, 0.25f);
     glVertex3f(-1.0f, 1.0f, 0.25f);
     glVertex3f(-1.0f, 0.75f, 0.25f);
     glVertex3f(-1.25f, 0.75f, 0.25f);
     glVertex3f(-1.25f, 0.25f, 0.25f);
     glVertex3f(-1.5f, 0.25f, 0.25f);
     glVertex3f(-1.5f, 0.0f, 0.25f);
     glVertex3f(-1.75f, 0.0f, 0.25f);
     glVertex3f(-1.75f, -0.25f, 0.25f);
     glVertex3f(-2.0f, -0.25f, 0.25f);
     glVertex3f(-2.0f, -2.5f, 0.25f);
  glEnd(); 
  glPopMatrix();

  glPushMatrix();  
  glRotatef(x, 1.0, 0.0, 0.0);
  glRotatef(y, 0.0, 1.0, 0.0);
  glRotatef(z, 0.0, 0.0, 1.0);
  glBegin(GL_LINE_STRIP);
     glVertex3f(-2.0f, 1.25f, 0.5f);
     glVertex3f(3.0f, 1.25f, 0.5f);
     glVertex3f(3.0f, -2.5f, 0.5f);
    
  glEnd();
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
  glutInitWindowSize (600, 600); 
  glutInitWindowPosition (100, 100);
  glutCreateWindow (argv[0]);
  init ();
  glutDisplayFunc(display); 
  glutReshapeFunc(reshape);
  glutKeyboardFunc(keyboard);
  glutMouseFunc(mouse);
  glutMainLoop();
  printf("%f %f %f\n", x, y, z); 
  return 0;
}
