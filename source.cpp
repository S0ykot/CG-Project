#include<iostream>
#include <glut.h>
# define PI           3.14159265358979323846


using namespace std;



void Quads(float x,float y,float x1,float y1,float x2,float y2,float x3,float y3,int r,int g,int b)  // Quad Function
{
	glBegin(GL_QUADS);
	glColor3ub(r,g,b);
	glVertex2f(x,y);
	glVertex2f(x1,y1);
	glVertex2f(x2,y2);
	glVertex2f(x3,y3);
	glEnd();
}


void Triangle(float x,float y,float x1,float y1,float x2,float y2,int r,int g,int b)				//Triangle Function
{
	glBegin(GL_TRIANGLES);
	glColor3ub(r,g,b);
	glVertex2f(x,y);
	glVertex2f(x1,y1);
	glVertex2f(x2,y2);
	glEnd();
}


void Circle(float x,float y,int triangleAmount,float radius,int r,int g,int b)						//Circle Function
{
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(r,g,b);
	float twicePi=2*PI;
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}





void display()
{
	glClearColor(1,1,1,1);
	glClear(GL_COLOR_BUFFER_BIT);

	

	glFlush();
}



int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutCreateWindow("CG");
	glutInitWindowSize(320,320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}