

#include <windows.h>
#include <GL/glut.h>


void display() {

	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(10.0);

	glBegin(GL_POINTS);
	glColor3f(2.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 6.0f);
	glVertex2f(7.0f, 10.0f);
	glVertex2f(10.0f, 2.0f);

    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(6.0f, 15.0f);
	glVertex2f(9.0f, 12.0f);
	glVertex2f(12.0f, 4.0f);

    /*A(3,5)
    B(5,8)
    C(10,4)*/
	glEnd();


	glFlush();
}

void Init(){

    glClearColor(1.0f, 1.0f, 0.6f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 20.0, 0.0, 20.0, -10.0, 10.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Setup Test");
	glutInitWindowSize(320, 320);
	Init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
