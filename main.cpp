// Adaptado de http://hohohuhu.blogspot.com.br/2011/02/opengl-linear-equation.html

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>

float linearCoefficient(float x1, float y1, float x2, float y2) {
   return (y2 - y1)/(x2 - x1);
}

void setup(){
    glClearColor(1.0, 1.0, 1.0, 1.0);
    gluOrtho2D(-10.0, 10.0, -10.0, 10.0);  // -x, x, -y, y
}

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glPointSize(3.0);

    float x, y, z, r=10;

    // Círculo central
    glBegin(GL_POINTS);
    for(x=-100; x<=100; x++){
        y = 45 + sqrt(pow(r, 2) - pow(x + 23.5, 2));
        glVertex2f(x/10, y/10);
    }
    glEnd();

    glBegin(GL_POINTS);
    for(x=-100; x<=100; x++){
        y = 45 - sqrt(pow(r, 2) - pow(x + 23.5, 2));
        glVertex2f(x/10, y/10);
    }
    glEnd();

    // Linha central
    glBegin(GL_POINTS);
    for(y=-80; y<=80; y++){
    z = sqrt(pow(0, 2) + pow(y + (-10), 2));
    glVertex2f((-23.5)/10, z/10);
    }
    glEnd();

    // Círculo da área direita
    glBegin(GL_POINTS);
    for(x=-100; x<=100; x++){
        y = 45 + sqrt(pow(r, 2) - pow(x - 20, 2));
        glVertex2f(x/10, y/10);
    }
    glEnd();

    glBegin(GL_POINTS);
    for(x=-100; x<=100; x++){
        y = 45 - sqrt(pow(r, 2) - pow(x - 20, 2));
        glVertex2f(x/10, y/10);
    }
    glEnd();

    // Círculo da área esquerda
    glBegin(GL_POINTS);
    for(x=-100; x<=100; x++){
        y = 45 + sqrt(pow(r, 2) - pow(x + 60, 2));
        glVertex2f(x/10, y/10);
    }
    glEnd();

    glBegin(GL_POINTS);
    for(x=-100; x<=100; x++){
        y = 45 - sqrt(pow(r, 2) - pow(x + 60, 2));
        glVertex2f(x/10, y/10);
    }
    glEnd();

    // Linhas laterais
    glBegin(GL_POINTS);
    for(x=-90; x<=50; x++){
    y = (0 + linearCoefficient(-30, 10, 30, 10) * (x - 10));
        glVertex2f(x/10, y/10);
    }
    glEnd();


    glBegin(GL_POINTS);
    for(x=-90; x<=50; x++){
    y = (90 + linearCoefficient(-30, -10, 30, -10) * (x - (-10)));
        glVertex2f(x/10, y/10);
    }
    glEnd();

    // Área esquerda
    glBegin(GL_POINTS);
    for(x=-90; x<=-60; x++){
    y = (55 + linearCoefficient(-30, -10, 30, -10) * (x - (-10)));
        glVertex2f(x/10, y/10);
    }
    glEnd();

    glBegin(GL_POINTS);
    for(x=-90; x<=-60; x++){
    y = (35 + linearCoefficient(-30, -10, 30, -10) * (x - (-10)));
        glVertex2f(x/10, y/10);
    }
    glEnd();

    glBegin(GL_POINTS);
    for(y=45; y<=65; y++){
    z = sqrt(pow(0, 2) + pow(y + (-10),2));
    glVertex2f((-65)/10, z/10);
    }
    glEnd();

    glBegin(GL_POINTS);
    for(x=-90; x<=-80; x++){
    y = (80 + linearCoefficient(-30, -10, 30, -10) * (x - (-10)));
        glVertex2f(x/10, y/10);
    }
    glEnd();

    glBegin(GL_POINTS);
    for(x=-90; x<=-80; x++){
    y = (10 + linearCoefficient(-30, -10, 30, -10) * (x - (-10)));
        glVertex2f(x/10, y/10);
    }
    glEnd();

    glPushMatrix();
    glRotatef(-90.0, 0.0, 0.0, 1.0);
    glTranslatef(-4.5, -8.5, 0.0);
    glBegin(GL_POINTS);
    for(x=-100; x<=100; x++){
        y = sqrt(pow(35, 2) - pow(x, 2));
        glVertex2f(x/10, y/10);
    }
    glEnd();
    glPopMatrix();

    // Área direita
    glBegin(GL_POINTS);
    for(x=20; x<=50; x++){
    y = (55 + linearCoefficient(-30, -10, 30, -10) * (x - (-10)));
        glVertex2f(x/10, y/10);
    }
    glEnd();

    glBegin(GL_POINTS);
    for(x=20; x<=50; x++){
    y = (35 + linearCoefficient(-30, -10, 30, -10) * (x - (-10)));
        glVertex2f(x/10, y/10);
    }
    glEnd();

    glBegin(GL_POINTS);
    for(y=45; y<=65; y++){
    z = sqrt(pow(0, 2) + pow(y + (-10),2));
    glVertex2f((25)/10, z/10);
    }
    glEnd();

    glBegin(GL_POINTS);
    for(x=40; x<=50; x++){
    y = (80 + linearCoefficient(-30, -10, 30, -10) * (x - (-10)));
        glVertex2f(x/10, y/10);
    }
    glEnd();

    glBegin(GL_POINTS);
    for(x=40; x<=50; x++){
    y = (10 + linearCoefficient(-30, -10, 30, -10) * (x - (-10)));
        glVertex2f(x/10, y/10);
    }
    glEnd();

    glPushMatrix();
    glRotatef(90.0, 0.0, 0.0, 1.0);
    glTranslatef(4.5, -4.5, 0.0);
    glBegin(GL_POINTS);
    for(x=-100; x<=100; x++){
        y = sqrt(pow(35, 2) - pow(x, 2));
        glVertex2f(x/10, y/10);
    }
    glEnd();
    glPopMatrix();

    // Linhas de fundo
    glBegin(GL_POINTS);
    for(y=-80; y<=80; y++){
    z = sqrt(pow(0, 2) + pow(y + (-10),2));
    glVertex2f((-90)/10, z/10);
    }
    glEnd();

    glBegin(GL_POINTS);
    for(y=-80; y<=80; y++){
    z = sqrt(pow(0, 2) + pow(y + (-10), 2));
    glVertex2f(50/10, z/10);
    }
    glEnd();

    // create coordinate line
    glBegin(GL_LINES);
        glVertex2f(-10.0, 0.0);
        glVertex2f(10.0, 0.0);
        glVertex2f(0.0, 10.0);
        glVertex2f(0.0, -10.0);
    glEnd();

    glFlush();
}

int main(int argc, char *argv[]){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(200, 100);
    glutInitWindowSize(400, 300);
    glutCreateWindow("Basquete");
    glutDisplayFunc(display);

    setup();
    glutMainLoop();

    return 0;
}
