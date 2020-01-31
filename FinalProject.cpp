#include<GL/gl.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include<cstring>
#include<windows.h>
#include<mmsystem.h>
#include <GL/glut.h>

char text[] = "Press F to Start";
char text1[] = "the Ferries Wheel";
char text2[] = "and f to Stop";
char text3[] = "Press C to Start";
char text4[] = "and c to Stop";
char text5[] = "the Carousel";
char text6[] = "Popcorn";
char text7[] = "Press t to Start";
char text8[] = "and T to Stop";
char text9[] = "the Train";

float cloudy=0;
float cloudy1=-2.5;
float cloudy2=-4.0;
float cloudy3=5.5;
float cloudy4=-8.8;
float cloudy5=4.0;
float y=0;
float sun=0;

float cs1=1.8;
float cs2=1.8;
float sc=0;

float Cangle=30.0;
float Cangle2=30.0;
float Cangle3=30.0;
float Cangle4=30.0;
float Cangle5=30.0;
float carA=4.0;
float carB=-4.0;
float carC=1.0;
int carD=3.0;
float train=-3.0;

void Sprint( float x, float y, char *st)
{
    int l,i;


    l=strlen( st ); // see how many characters are in text string.
    glColor3f(1.0,1.0,1.0);
    //glDisable(GL_LIGHTING);
    glRasterPos2f( x, y); // location to start printing text
    for( i=0; i < l; i++) // loop until i is greater then l
    {
       glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, st[i]);

    }


}
void initRendering() {
	glEnable(GL_DEPTH_TEST);
	//glEnable(GL_DEPTH_BUFFER_BIT);

}

void handleResize(int w, int h) {
    glClearColor(0.0, 0.8, 0.1, 0.0);
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

float _angle = 0.0;
float _wheel = 0.0;
float _cameraAngle = 0.0;
float _ang_tri = 0.0;
float an=30.0f;
float _ang=0.0;
int ferries=1;
int horse1=1;
int horse2=1;
int tra=1;


void cloud1(){

/// CLOUD1 ////////////////////////////////////////////////////...........////////////////////////////////


glPushMatrix();
glScalef(0.6,0.6,1.0);
glColor3f(0.9,0.9,0.9);
glutSolidSphere(0.2,100,100);



glPopMatrix();
///right/////////////////////////////////////////////////
glPushMatrix();
glTranslatef(0.3,0,0);
glColor3f(0.9,0.9,0.9);
glutSolidSphere(0.2,100,100);

///2nd////////
glTranslatef(0.3,0,0);
glutSolidSphere(0.2,100,100);

glPopMatrix();

///left/////////////////////////////////////////////////

glPushMatrix();
glTranslatef(-0.3,0,0);
glColor3f(0.9,0.9,0.9);
glutSolidSphere(0.2,100,100);

///2nd///////
glTranslatef(-0.3,0,0);
glColor3f(0.9,0.9,0.9);
glutSolidSphere(0.2,100,100);



glPopMatrix();

///Above//////////////////////////////

glPushMatrix();
glTranslatef(0.0,0.2,0);
glColor3f(0.9,0.9,0.9);
glutSolidSphere(0.2,100,100);
glPopMatrix();
glPushMatrix();
///leftA///

//glPushMatrix();
glTranslatef(-0.3,0.2,0);
glColor3f(0.9,0.9,0.9);
glutSolidSphere(0.2,100,100);
glPopMatrix();
///2nd RightA////
glPushMatrix();
glTranslatef(0.3,0.2,0);
glColor3f(0.9,0.9,0.9);
glutSolidSphere(0.2,100,100);


glPopMatrix();

///below/////////////////////
glPushMatrix();


glTranslatef(0,-0.2,0);
//glScalef(1.0,2.0,1.0);
glColor3f(0.9,0.9,0.9);
glutSolidSphere(0.2,100,100);


glPopMatrix();

glPushMatrix();

glTranslatef(0.3,-0.2,0);
glColor3f(0.9,0.9,0.9);
glutSolidSphere(0.2,100,100);


glPopMatrix();

glPushMatrix();

glTranslatef(-0.3,-0.2,0);
glColor3f(0.9,0.9,0.9);
glutSolidSphere(0.2,100,100);


glPopMatrix();





}


void cloud2(){

///cloud2/////////////////////////////////

glPushMatrix();
//glScalef(0.6,0.6,1.0);

glColor3f(0.9,0.9,0.9);
glutSolidSphere(0.2,100,100);



glPopMatrix();
///right/////////////////////////////////////////////////
glPushMatrix();
glTranslatef(0.3,0,0);
glColor3f(0.9,0.9,0.9);
glutSolidSphere(0.2,100,100);

///2nd////////
glTranslatef(0.3,0,0);
glutSolidSphere(0.2,100,100);

glPopMatrix();

///left/////////////////////////////////////////////////

glPushMatrix();
glTranslatef(-0.3,0,0);
glColor3f(0.9,0.9,0.9);
glutSolidSphere(0.2,100,100);

///2nd///////
glTranslatef(-0.3,0,0);
glColor3f(0.9,0.9,0.9);
glutSolidSphere(0.2,100,100);



glPopMatrix();

///Above//////////////////////////////

glPushMatrix();
glTranslatef(0.0,0.2,0);
glColor3f(0.9,0.9,0.9);
glutSolidSphere(0.2,100,100);
glPopMatrix();
glPushMatrix();
///leftA///

//glPushMatrix();
glTranslatef(-0.3,0.2,0);
glColor3f(0.9,0.9,0.9);
glutSolidSphere(0.2,100,100);
glPopMatrix();
///2nd RightA////
glPushMatrix();
glTranslatef(0.3,0.2,0);
glColor3f(0.9,0.9,0.9);
glutSolidSphere(0.2,100,100);


glPopMatrix();

///Above//Above//////////////


glPushMatrix();
glTranslatef(0.0,0.4,0);
glColor3f(0.9,0.9,0.9);
glutSolidSphere(0.2,100,100);
glPopMatrix();







}

void cloud3(){


/// Cloud 3//////////////////



glPushMatrix();
//glScalef(0.6,0.6,1.0);

glColor3f(0.9,0.9,0.9);
glutSolidSphere(0.2,100,100);



glPopMatrix();
///right/////////////////////////////////////////////////
glPushMatrix();
glTranslatef(0.3,0,0);
glColor3f(0.9,0.9,0.9);
glutSolidSphere(0.3,100,100);

glPopMatrix();









}



void car1(){
///car//////////////////////////////////////
      glPushMatrix();


    glPushMatrix();
    glColor3f(0.0,0.0,0.5);
    glBegin(GL_QUADS);
    glVertex3f(-0.9, 0.2, 1.0);
	glVertex3f(-0.9, 0.31, 1.0);
	glVertex3f(-0.75, 0.37, 1.0);
	glVertex3f(-0.75, 0.2, 1.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
    glColor3f(0.0,0.0,0.5);
    glBegin(GL_QUADS);
    glVertex3f(-0.75, 0.2, 1.0);
	glVertex3f(-0.75, 0.37, 1.0);
	glVertex3f(-0.3, 0.37, 1.0);
	glVertex3f(-0.3, 0.2, 1.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
    glColor3f(0.0,0.0,0.5);
    glBegin(GL_QUADS);
    glVertex3f(-0.3, 0.2, 1.0);
	glVertex3f(-0.3, 0.37, 1.0);
	glVertex3f(-0.15, 0.3, 1.0);
	glVertex3f(-0.15, 0.2, 1.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
    glColor3f(0.950,0.950,0.950);
    glBegin(GL_QUADS);
    glVertex3f(-0.73, 0.38, 1.0);
	glVertex3f(-0.69, 0.47, 1.0);
	glVertex3f(-0.53, 0.47, 1.0);
	glVertex3f(-0.53, 0.38, 1.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
    glColor3f(0.950,0.950,0.950);
    glBegin(GL_QUADS);
    glVertex3f(-0.5, 0.38, 1.0);
	glVertex3f(-0.5, 0.47, 1.0);
	glVertex3f(-0.36, 0.47, 1.0);
	glVertex3f(-0.32, 0.38, 1.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
    glColor3f(0.0,0.0,0.5);
    glBegin(GL_QUADS);
    glVertex3f(-0.75, 0.37, 1.0);
	glVertex3f(-0.7, 0.48, 1.0);
	glVertex3f(-0.35, 0.48, 1.0);
	glVertex3f(-0.3, 0.37, 1.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
    glColor3f(0.0,0.0,0.5);
	glTranslatef(-0.75, 0.2, 1.0);
	glRotatef(_angle, 0.0, 0.0, 1.0);
	glutSolidTorus(0.01,0.06,5,20);
    glColor3f(1.0,1.0,1.0);
	glutSolidTorus(0.01,0.04,5,20);
    glColor3f(0.0,0.0,0.0);
	glutSolidTorus(0.02,0.02,5,20);
	glPopMatrix();

	glPushMatrix();
    glColor3f(0.0,0.0,0.5);
	glTranslatef(-0.3, 0.2, 1.0);
	glRotatef(_angle, 0.0, 0.0, 1.0);
	glutSolidTorus(0.01,0.06,5,20);
    glColor3f(1.0,1.0,1.0);
	glutSolidTorus(0.01,0.04,5,20);
    glColor3f(0.0,0.0,0.0);
	glutSolidTorus(0.02,0.02,5,20);
	glPopMatrix();


	glPopMatrix();}


void car2(){

///car2//////////////////////////////////////
      glPushMatrix();


    glPushMatrix();
    glColor3f(0.8,0.8,0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.9, 0.2, 1.0);
	glVertex3f(-0.9, 0.31, 1.0);
	glVertex3f(-0.75, 0.37, 1.0);
	glVertex3f(-0.75, 0.2, 1.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
    glColor3f(0.8,0.8,0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.75, 0.2, 1.0);
	glVertex3f(-0.75, 0.37, 1.0);
	glVertex3f(-0.3, 0.37, 1.0);
	glVertex3f(-0.3, 0.2, 1.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
    glColor3f(0.8,0.8,0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.3, 0.2, 1.0);
	glVertex3f(-0.3, 0.37, 1.0);
	glVertex3f(-0.15, 0.3, 1.0);
	glVertex3f(-0.15, 0.2, 1.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
    glColor3f(0.950,0.950,0.950);
    glBegin(GL_QUADS);
    glVertex3f(-0.73, 0.38, 1.0);
	glVertex3f(-0.69, 0.47, 1.0);
	glVertex3f(-0.53, 0.47, 1.0);
	glVertex3f(-0.53, 0.38, 1.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
    glColor3f(0.950,0.950,0.950);
    glBegin(GL_QUADS);
    glVertex3f(-0.5, 0.38, 1.0);
	glVertex3f(-0.5, 0.47, 1.0);
	glVertex3f(-0.36, 0.47, 1.0);
	glVertex3f(-0.32, 0.38, 1.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
    glColor3f(0.8,0.8,0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.75, 0.37, 1.0);
	glVertex3f(-0.7, 0.48, 1.0);
	glVertex3f(-0.35, 0.48, 1.0);
	glVertex3f(-0.3, 0.37, 1.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
    glColor3f(0.8,0.8,0.0);
	glTranslatef(-0.75, 0.2, 1.0);
	glRotatef(_angle, 0.0, 0.0, 1.0);
	glutSolidTorus(0.01,0.06,5,20);
    glColor3f(1.0,1.0,1.0);
	glutSolidTorus(0.01,0.04,5,20);
    glColor3f(0.0,0.0,0.0);
	glutSolidTorus(0.02,0.02,5,20);
	glPopMatrix();

	glPushMatrix();
    glColor3f(0.8,0.8,0.0);
	glTranslatef(-0.3, 0.2, 1.0);
	glRotatef(_angle, 0.0, 0.0, 1.0);
	glutSolidTorus(0.01,0.06,5,20);
    glColor3f(1.0,1.0,1.0);
	glutSolidTorus(0.01,0.04,5,20);
    glColor3f(0.0,0.0,0.0);
	glutSolidTorus(0.02,0.02,5,20);
	glPopMatrix();


	glPopMatrix();









}


void car3(){
///car3//////////////////////////////////////
      glPushMatrix();


    glPushMatrix();
    glColor3f(0.8,0.0,0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.9, 0.2, 1.0);
	glVertex3f(-0.9, 0.31, 1.0);
	glVertex3f(-0.75, 0.37, 1.0);
	glVertex3f(-0.75, 0.2, 1.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
    glColor3f(0.8,0.0,0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.75, 0.2, 1.0);
	glVertex3f(-0.75, 0.37, 1.0);
	glVertex3f(-0.3, 0.37, 1.0);
	glVertex3f(-0.3, 0.2, 1.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
    glColor3f(0.8,0.0,0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.3, 0.2, 1.0);
	glVertex3f(-0.3, 0.37, 1.0);
	glVertex3f(-0.15, 0.3, 1.0);
	glVertex3f(-0.15, 0.2, 1.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
    glColor3f(0.950,0.950,0.950);
    glBegin(GL_QUADS);
    glVertex3f(-0.73, 0.38, 1.0);
	glVertex3f(-0.69, 0.47, 1.0);
	glVertex3f(-0.53, 0.47, 1.0);
	glVertex3f(-0.53, 0.38, 1.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
    glColor3f(0.950,0.950,0.950);
    glBegin(GL_QUADS);
    glVertex3f(-0.5, 0.38, 1.0);
	glVertex3f(-0.5, 0.47, 1.0);
	glVertex3f(-0.36, 0.47, 1.0);
	glVertex3f(-0.32, 0.38, 1.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
    glColor3f(0.8,0.0,0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.75, 0.37, 1.0);
	glVertex3f(-0.7, 0.48, 1.0);
	glVertex3f(-0.35, 0.48, 1.0);
	glVertex3f(-0.3, 0.37, 1.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
    glColor3f(0.8,0.0,0.0);
	glTranslatef(-0.75, 0.2, 1.0);
	glRotatef(_angle, 0.0, 0.0, 1.0);
	glutSolidTorus(0.01,0.06,5,20);
    glColor3f(1.0,1.0,1.0);
	glutSolidTorus(0.01,0.04,5,20);
    glColor3f(0.0,0.0,0.0);
	glutSolidTorus(0.02,0.02,5,20);
	glPopMatrix();

	glPushMatrix();
    glColor3f(0.8,0.0,0.0);
	glTranslatef(-0.3, 0.2, 1.0);
	glRotatef(_angle, 0.0, 0.0, 1.0);
	glutSolidTorus(0.01,0.06,5,20);
    glColor3f(1.0,1.0,1.0);
	glutSolidTorus(0.01,0.04,5,20);
    glColor3f(0.0,0.0,0.0);
	glutSolidTorus(0.02,0.02,5,20);
	glPopMatrix();


	glPopMatrix();







}

void FW(unsigned char key, int x, int y)
{

	switch (key) {
	case 'F':		//ferries start
		ferries = 1;
		break;
	case 'f':		//ferries stop
		ferries = 0;
		break;

		case 'C':		//ferries start
		horse1 = 1;
		break;

	case 'c':		//ferries stop
		horse1 = 0;
		break;

	case 't':
        tra=1;
        break;

      case 'T':
      tra=0;
      break;

	default:
    break;
	}
}
void drawScene() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective
	glRotatef(-_cameraAngle, 0.0, 1.0, 0.0); //Rotate the camera
	glTranslatef(0.0, 0.0, -7.0);
    glPushMatrix();
    glTranslatef(-1.5,-0.8,0.0);
    Sprint(-3.5,0,text);
	Sprint(-3.5,-0.12,text2);
	Sprint(-3.5,-0.24,text1);
	glTranslatef(3.3,0.5,0.0);
	Sprint(-1.5,0,text3);
	Sprint(-1.5,-0.12,text4);
	Sprint(-1.5,-0.24,text5);
	Sprint(-3.85,0.2,text6);
	glTranslatef(0.0,-0.2,0.0);
	Sprint(0.25,0.3,text9);
	Sprint(0.25,0.4,text8);
	Sprint(0.25,0.5,text7);
    glPopMatrix();

    glPushMatrix();

    glTranslatef(-4.6,0.6,0);
    glScalef(0.4,0.5,0);

        glLineWidth(1.0);

    	glBegin(GL_LINE_LOOP);

    	glColor3ub(255,0,255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.5;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

     glLineWidth(1.0);
    	glBegin(GL_LINE_LOOP);

    	glColor3ub(255,0,255);

	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.2;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();


	  glLineWidth(2.0);
    	glBegin(GL_LINE_LOOP);

    	glColor3ub(255,0,255);

	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=1.0;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();


	  	glBegin(GL_LINE_LOOP);

    	glColor3ub(255,0,255);

	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=1.1;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
glPushMatrix();
if(ferries==1){
glRotatef(_angle, 0.0, 0.0, -0.1);}
glLineWidth(5.0);
	  	glBegin(GL_LINES);

    	glColor3ub(255,0,255);

	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=1.5;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

	  	glBegin(GL_LINES);

    	glColor3ub(255,0,255);

	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=1.6;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();





		glBegin(GL_LINES);

    	glColor3ub(255,0,255);

	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=1.7;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );

	}
	glEnd();


///LINES//////////////////////////////////////////////////////////////
glColor3ub(250,250,0);
for(int i=0;i<200;)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.2;
		float x = r * cos(A);
		float y = r * sin(A);

		float r1=2.0;
		float x1 = r1 * cos(A);
		float y1 = r1 * sin(A);
	glBegin(GL_LINES);
	glVertex2f(x,y);
	glVertex2f(x1,y1);






	i=i+10;
	}
	glEnd();


glColor3ub(255,0,0);

//glTranslatef(1.6,1.6,0);
for(int i=0;i<100;)
{
float pi=3.1416;
float A=(i*2*pi)/100;
   float r1=2.2;
		float x1 = r1 * cos(A);
		float y1 = r1 * sin(A);

	glBegin(GL_POLYGON);



	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.2;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x1+x,y1+y );}

	glEnd();

	i=i+10;


if(i==10||i==30){glColor3ub(255,255,255);}

if(i==20||i==40){glColor3ub(0,0,0);}

if(i==50||i==70){glColor3ub(0,0,200);}

if(i==60||i==90){glColor3ub(0,255,255);}

if(i==80){glColor3ub(255,0,0);}


}

glPopMatrix();

glPushMatrix();
		glBegin(GL_POLYGON);

    	glColor3ub(255,0,255);


		float pi=3.1416;
		float A=(75*2*pi)/100;
		float r5=0.1;
		float x5 = r5 * cos(A);
		float y5 = r5 * sin(A);
		//glVertex2f(x,y );

	glBegin(GL_TRIANGLES);
	glVertex2f(x5,y5);
	glVertex2f(x5-0.2,y5-1.3);
	glVertex2f(x5+0.2,y5-1.3);

	glEnd();
glPopMatrix();



	glBegin(GL_POLYGON);

    	glColor3ub(255,0,0);

for(int i=0;i<200;i++){
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r8=0.1;
		float x8 = r8 * cos(A);
		float y8 = r8 * sin(A);
		glVertex2f(x8,y8 );}
		glEnd();

glPopMatrix();



///HORSE////////////////////////////////////////////////////////////////


glPushMatrix();
glScalef(0.7,0.7,0);
glTranslatef(0.9,0.3,0);
glPushMatrix();

glScalef(0.6,0.6,0);

//glRotatef(_angle,0.0,0.0,0.0);
glScalef(0.7,0.7,0.0);
glTranslatef(0.55,0.0,0.0);
glLineWidth(1.0);
if(horse1==1){
glTranslatef(0.0,y,0.0);}
	glColor3ub(0,155,190);
	/*glBegin(GL_TRIANGLES);
	glVertex2f(0.5,0.8);
	glVertex2f(0.3,0.5);
	glVertex2f(0.7,0.5);
	glEnd();*/

	glBegin(GL_POLYGON);
	glVertex2f(0.55,0.95);
	glVertex2f(0.2,0.95);
	glVertex2f(0.2,0.4);
	glVertex2f(0.3,0.4);
	glVertex2f(0.3,0.6);
	glVertex2f(0.5,0.65);
	glVertex2f(0.7,0.6);
	glVertex2f(0.7,0.4);
	glVertex2f(0.7,0.4);
	glVertex2f(0.8,0.4);


	glVertex2f(0.8,0.9);
	glVertex2f(1.0,0.75);
	glVertex2f(1.02,0.85);
	glVertex2f(0.8,1.2);
	glVertex2f(0.7,1.2);
	glVertex2f(0.6,1.3);
	glVertex2f(0.65,1.2);
	glVertex2f(0.55,0.8);
	//glVertex2f(0.35,0.6);



	glEnd();
	glPopMatrix();
	///2nd Horse/////////////////////////////////


	glPushMatrix();
	glScalef(0.6,0.6,0);
//glRotatef(_angle,0.0,0.0,0.0);
glScalef(0.7,0.7,0.0);
glTranslatef(-1.7,0.0,0.0);
glLineWidth(1.0);
if(horse1==1){
glTranslatef(0.0,y,0.0);}
	glColor3ub(200,0,155);
	/*glBegin(GL_TRIANGLES);
	glVertex2f(0.5,0.8);
	glVertex2f(0.3,0.5);
	glVertex2f(0.7,0.5);
	glEnd();*/

	glBegin(GL_POLYGON);
	glVertex2f(0.55,0.95);
	glVertex2f(0.2,0.95);
	glVertex2f(0.2,0.4);
	glVertex2f(0.3,0.4);
	glVertex2f(0.3,0.6);
	glVertex2f(0.5,0.65);
	glVertex2f(0.7,0.6);
	glVertex2f(0.7,0.4);
	glVertex2f(0.7,0.4);
	glVertex2f(0.8,0.4);


	glVertex2f(0.8,0.9);
	glVertex2f(1.0,0.75);
	glVertex2f(1.02,0.85);
	glVertex2f(0.8,1.2);
	glVertex2f(0.7,1.2);
	glVertex2f(0.6,1.3);
	glVertex2f(0.65,1.2);
	glVertex2f(0.55,0.8);
	//glVertex2f(0.35,0.6);



	glEnd();
	glPopMatrix();

















if(y>=0){

y=y+0.03;}

if(y>0.2){
    y=0;

}
glPushMatrix();
glScalef(0.6,0.6,0);
glTranslatef(0.0,-0.3,0);

glRotatef(70.0,1.0,0.0,0.0);
if(horse1==1){
glRotatef(_ang_tri,0.0,0.0,-1.0);}
glColor3ub(255,255,255);
glutWireTorus(0.3,0.9,10,50);
glPopMatrix();

glPushMatrix();
glScalef(0.6,0.6,0);
glScalef(2.5,2.5,2.5);
glTranslatef(0.0,0.5,0.0);
glRotatef(-118.0,1.0,1.0,1.0);
if(horse1==1){
glRotatef(_ang_tri,0.0,0.0,-1.0);}
//glTranslatef(-8.0,-8.5,0.0);
glutWireCone(0.4,0.5,10,20);
glPopMatrix();

glPushMatrix();
glScalef(0.6,0.6,0);
glLineWidth(2.0);
glColor3ub(255,0,0);
glBegin(GL_LINES);

glVertex2f(0.8,1.23);
glVertex2f(0.8,0.8);
glEnd();
glPopMatrix();

///2nd LINE////////
glPushMatrix();
glScalef(0.6,0.6,0);
//glLineWidth(2.0);
glTranslatef(-1.54,0,0);
glColor3ub(255,0,0);
glBegin(GL_LINES);

glVertex2f(0.8,1.2);
glVertex2f(0.8,0.8);
glEnd();
glPopMatrix();

glPopMatrix();

glPushMatrix();
glScalef(1,1.5,1);
glTranslatef(0.12,-0.3,0);
glBegin(GL_LINES);

glColor3ub(255,255,255);
glVertex2f(0.5,0.2);
glVertex2f(0.5,1.1);
glEnd();
glPopMatrix();



///tree1

glPushMatrix();
glScalef(1.3,1.7,1.0);
glTranslatef(0.85,-0.85,0);

glPushMatrix();
glScalef(0.25,0.25,0);
glTranslatef(5.5,2.5,0);
glPushMatrix();
glTranslatef(2.25,0.5,0);
//glScalef(0.5,0.5,0);
glBegin(GL_TRIANGLES);
glColor3f(0,0.5,0);
glVertex2f(0,0.5);
glVertex2f(-1,-1);
glVertex2f(1,-1);
glEnd();
glPopMatrix();


glPushMatrix();
glTranslatef(2.25,-0.15,0);
//glScalef(0.5,0.5,0);
glBegin(GL_TRIANGLES);
glColor3f(0,0.5,0);
glVertex2f(0,0.5);
glVertex2f(-1.5,-1);
glVertex2f(1.5,-1);
glEnd();
glPopMatrix();


glPushMatrix();
glTranslatef(2.25,-0.72,0);
//glScalef(0.5,0.5,0);
glBegin(GL_TRIANGLES);
glColor3f(0,0.5,0);
glVertex2f(0,0.5);
glVertex2f(-2,-1);
glVertex2f(2,-1);
glEnd();
glPopMatrix();
glPopMatrix();


glPushMatrix();
glTranslatef(1.85,0,0);
glScalef(0.25,0.5,0);
glBegin(GL_POLYGON);
glColor3ub(139,69,19);
glVertex2f(0,0.5);
glVertex2f(0,-1);
glVertex2f(0.75,-1);
glVertex2f(0.75,0.5);
glEnd();
glPopMatrix();

glPopMatrix();


///tree2

glPushMatrix();
glScalef(0.95,1.0,0);
glTranslatef(2.65,0.6,0);

glPushMatrix();
glScalef(0.25,0.25,0);
glTranslatef(5.5,2.5,0);
glPushMatrix();
glTranslatef(2.25,0.5,0);
//glScalef(0.5,0.5,0);
glBegin(GL_TRIANGLES);
glColor3f(0,0.5,0);
glVertex2f(0,0.5);
glVertex2f(-1,-1);
glVertex2f(1,-1);
glEnd();
glPopMatrix();


glPushMatrix();
glTranslatef(2.25,-0.15,0);
//glScalef(0.5,0.5,0);
glBegin(GL_TRIANGLES);
glColor3f(0,0.5,0);
glVertex2f(0,0.5);
glVertex2f(-1.5,-1);
glVertex2f(1.5,-1);
glEnd();
glPopMatrix();


glPushMatrix();
glTranslatef(2.25,-0.72,0);
//glScalef(0.5,0.5,0);
glBegin(GL_TRIANGLES);
glColor3f(0,0.5,0);
glVertex2f(0,0.5);
glVertex2f(-2,-1);
glVertex2f(2,-1);
glEnd();
glPopMatrix();
glPopMatrix();


glPushMatrix();
glTranslatef(1.85,0,0);
glScalef(0.25,0.5,0);
glBegin(GL_POLYGON);
glColor3ub(139,69,19);
glVertex2f(0,0.5);
glVertex2f(0,-1);
glVertex2f(0.75,-1);
glVertex2f(0.75,0.5);
glEnd();
glPopMatrix();

glPopMatrix();




///tree3

glPushMatrix();
//glRotatef(45.0,0.0,1.0,0.0);
glTranslatef(-5.0,1.3,0);
glScalef(0.6,0.7,0);

glPushMatrix();
glScalef(0.25,0.25,0);
glTranslatef(5.5,2.5,0);
glPushMatrix();
glTranslatef(2.25,0.5,0);
//glScalef(0.5,0.5,0);
glBegin(GL_TRIANGLES);
glColor3f(0,0.5,0);
glVertex2f(0,0.5);
glVertex2f(-1,-1);
glVertex2f(1,-1);
glEnd();
glPopMatrix();


glPushMatrix();
glTranslatef(2.25,-0.15,0);
//glScalef(0.5,0.5,0);
glBegin(GL_TRIANGLES);
glColor3f(0,0.5,0);
glVertex2f(0,0.5);
glVertex2f(-1.5,-1);
glVertex2f(1.5,-1);
glEnd();
glPopMatrix();


glPushMatrix();
glTranslatef(2.25,-0.72,0);
//glScalef(0.5,0.5,0);
glBegin(GL_TRIANGLES);
glColor3f(0,0.5,0);
glVertex2f(0,0.5);
glVertex2f(-2,-1);
glVertex2f(2,-1);
glEnd();
glPopMatrix();
glPopMatrix();


glPushMatrix();
glTranslatef(1.85,0,0);
glScalef(0.25,0.5,0);
glBegin(GL_POLYGON);
glColor3ub(139,69,19);
glVertex2f(0,0.5);
glVertex2f(0,-1);
glVertex2f(0.75,-1);
glVertex2f(0.75,0.5);
glEnd();
glPopMatrix();

glPopMatrix();






sc=sc+0.2;



///        SKY /////////////////////////////////////////////////

if(sc<10){
    glColor3f(0.0,0.8,1.0);
}
if(sc>=10){glColor3f(0.2,0.2,0.5);}

if(sc>16){glColor3f(0.3,0.3,0.3);}
if(sc>30){sc=0;}

glPushMatrix();

glBegin(GL_POLYGON);

glVertex2f(-6.75,3.47);
glVertex2f(-6.75,1.0);
glVertex2f(6.75,1.0);
glVertex2f(6.75,3.47);
glEnd();
glPopMatrix();






/// SUN////////////////////////////////////////////////////

glPushMatrix();
glColor3f(1.0,0.3,0.0);
if(sc>=10){glColor3f(0.2,0.2,0.5);}

if(sc>16){glColor3f(0.9,0.9,0.9);}///0.3,0.3,0.3
glTranslatef(0,2.3,0);
//glTranslatef(0,sun,0);


glutSolidSphere(0.3,100,100);
glPopMatrix();













///truck

glPushMatrix();
glTranslatef(-2.5,0.58,0);
glScalef(0.4,0.4,0.0);

glPushMatrix();

glTranslatef(-0.6,-0.5,0);
glScalef(0.5,0.5,0);

glBegin(GL_POLYGON);
glColor3f(255,255,255);
glVertex2f(-2.9,0.95);
glColor3f(0,0,255);
glVertex2f(-2.9,-0.95);
glColor3f(255,255,255);
glVertex2f(-0.88,-0.95);
glColor3f(0,0,255);
glVertex2f(-0.88,0.95);
glEnd();

glPopMatrix();


glPushMatrix();
glColor3f(255,255,0);
glTranslatef(0,-0.65,0);
glScalef(0.75,0.75,0);

glBegin(GL_POLYGON);
glVertex2f(-3,1.0);
glVertex2f(-3.0,-1.0);
glVertex2f(0.05,-1.0);
glVertex2f(0.05,-0.15);
glVertex2f(-0.95,-0.15);
glVertex2f(-0.95,1.0);
glEnd();

glPopMatrix();


glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-1.75,-1.4,0);
glutSolidSphere(0.2,100,100);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-0.85,-1.4,0);
glutSolidSphere(0.2,100,100);
glPopMatrix();


glPushMatrix();
glColor3f(2,0.5,1);
glTranslatef(-1.5,0.54,0);
//glRotatef(180,0,0,0);
//glScalef(1.5,1.5,0);
glutSolidTorus(0.15,0.3,20,20);
glPopMatrix();
glPopMatrix();




///palace//
    glPushMatrix();
    glScalef(0.63,0.8,0);
    glTranslatef(7.5, -2.1, 0.0);
	glPushMatrix(); //Save the current state of transformations
	//glTranslatef(0.0, -1.0, 1.0); //Move to the center of the triangle
	//glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)
   ///main part///
    glColor3ub(255,192,203);

    glutSolidCube(1.60);

   ///left bottom pillar///
    glColor3ub(245,184,145);
    glScalef(0.7,0.9,0.5);
    glTranslatef(-1.5, -0.3, 0.0);
    glutSolidCube(1.0);
///right bottom pillar///
    glColor3ub(245,184,145);
    glScalef(1.0,1.0,0.5);
    glTranslatef(3.0 ,-0.02, 0.0);
    glutSolidCube(1.0);

///left middle pillar///
    glColor3ub(135,206,250);
    glScalef(1.4,0.5,0.0);
    glTranslatef(-2.2 ,1.56, 0.0);
    glutSolidCube(1.0);
///right middle pillar///
    glColor3ub(135,206,250);
    glScalef(0.8,1.0,0.0);
    glTranslatef(2.95,-0.03, 0.0);
    glutSolidCube(1.0);

///right top pillar///
    glColor3ub(188,143,143);
    glScalef(0.6,3.6,0.5);
    glTranslatef(-0.19 ,0.6, 0.0);
    glutSolidCube(1.0);


///left top pillar///
    glColor3ub(188,143,143);
    glScalef(1.0,1.0,0.5);
    glTranslatef(-4.75 ,0.0, 0.0);
    glutSolidCube(1.0);



 ///roof///
    glColor3ub(135,206,250);
    glScalef(3.66,0.3,0.0);
    glTranslatef(-1.85,-3.2,0);
    glBegin(GL_POLYGON);
    glVertex2f(2,2);
    glVertex2f(3,2);
    glVertex2f(2.5,4);


glEnd();



///back pillar///

   glColor3ub(188,143,143);
   glScalef(0.3,3.2,0.0);
   glTranslatef(9.0,1.2,0);
   glutSolidCube(1.0);


///back bit pillar///
   glColor3ub(245,184,145);
   glScalef(1.4,0.1,0.0);
   glTranslatef(0,5.5,0);
   glutSolidCube(1.0);



///left bit pillar///
   glColor3ub(245,184,145);
   glScalef(1.0,1.0,0.0);
   glTranslatef(-2.04,-2.1,0);
   glutSolidCube(1.0);


///right bit pillar///
   glColor3ub(245,184,145);
   glScalef(1.0,1.0,0.0);
   glTranslatef(3.1,0,0);
   glutSolidCube(1.0);



 ///right gomb///
    glColor3ub(135,206,250);
    glScalef(1.0,1.6,0.0);
    glTranslatef(-2.5,-1.7,0);
    glBegin(GL_POLYGON);
    glVertex2f(2,2);
    glVertex2f(3,2);
    glVertex2f(2.5,4);
    glEnd();


///middle gomb///
    glColor3ub(135,206,250);
    glScalef(1.0,1.6,0.0);
    glTranslatef(-1.05,0.05,0);
    glBegin(GL_POLYGON);
    glVertex2f(2,2);
    glVertex2f(3,2);
    glVertex2f(2.5,4);
    glEnd();


///left gomb///
    glColor3ub(135,206,250);
    glScalef(1.0,0.6,0.0);
    glTranslatef(-2.05,0.01,0);
    glBegin(GL_POLYGON);
    glVertex2f(2,2);
    glVertex2f(3,2);
    glVertex2f(2.5,4);
    glEnd();








glPopMatrix();
glPopMatrix();
    //Undo the


/// Triangle right/////////////////////////////////////////////////////////////////////////////////////////////
glPushMatrix();
if(sc<10){
    glColor3f(0.0,0.8,1.0);
}
if(sc>=10){glColor3f(0.2,0.2,0.5);}

if(sc>16){glColor3f(0.3,0.3,0.3);}
if(sc>30){sc=0;}
glTranslatef(1.7,-0.4,0);
glScalef(5.0,3.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(0.8,0.5);
glVertex2f(0.5,0.5);
glVertex2f(0.8,0.1);
glEnd();
glPopMatrix();

///Triangle left//////////////////////////////////////////////////////////////////////////////

glPushMatrix();
glTranslatef(-8.4,-0.4,0);
glScalef(5.0,3.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(0.5,0.5);
glVertex2f(0.5,0.1);
glVertex2f(0.8,0.5);
glEnd();
glPopMatrix();













///Slide////////////////////////////////////////////////////////////////////////////////
    glPushMatrix();

    glTranslatef(-0.8,0.1,0.0);
    glScalef(0.23,0.23,0.0);

    glPushMatrix();

    glColor3ub(138,43,226); //Top house
    glBegin(GL_POLYGON);
    glVertex2f(1.25,1.9);
    glVertex2f(0.48,1.9);
    glVertex2f(0.48,2.5);
    glVertex2f(1.25,2.5);
    glEnd();
   glPopMatrix();
   glPushMatrix();
    glColor3ub(138,43,226); //Stairs
    glBegin(GL_POLYGON);
    glVertex2f(0.0,-1.0);
    glVertex2f(-2.1,-1.0);
    glVertex2f(-2.1,-0.5);
    glVertex2f(0.0,-0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.0,-1.0);
    glVertex2f(-1.7,-1.0);
    glVertex2f(-1.7,-0.0);
    glVertex2f(0.0,-0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.0,-1.0);
    glVertex2f(-1.3,-1.0);
    glVertex2f(-1.3,0.5);
    glVertex2f(0.0,0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.0,-1.0);
    glVertex2f(-0.9,-1.0);
    glVertex2f(-0.9,1.0);
    glVertex2f(0.0,1.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.0,-1.0);
    glVertex2f(-0.5,-1.0);
    glVertex2f(-0.5,1.5);
    glVertex2f(0.0,1.5);
    glEnd();

    glColor3ub(220,20,60); //Bars
    glBegin(GL_POLYGON);
    glVertex2f(0.2,-1.0);
    glVertex2f(0.0,-1.0);
    glVertex2f(0.0,1.5);
    glVertex2f(0.2,1.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1.7,-1.0);
    glVertex2f(1.5,-1.0);
    glVertex2f(1.5,1.5);
    glVertex2f(1.7,1.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1.7,1.2);
    glVertex2f(-0.5,1.2);
    glVertex2f(-0.5,1.5);
    glVertex2f(1.7,1.5);
    glEnd();

    glBegin(GL_POLYGON); // Extra up
    glVertex2f(1.9,1.2);
    glVertex2f(1.7,1.2);
    glVertex2f(1.7,1.5);
    glVertex2f(1.9,1.5);
    glEnd();

    glTranslatef(0.0,0.1,0.0);
    glBegin(GL_POLYGON); // Extra up
    glVertex2f(3.65,-1.0);
    glVertex2f(3.11,-1.0);
    glVertex2f(3.11,-0.8);
    glVertex2f(3.65,-0.8);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glColor3ub(0,206,209); //Top house
    glBegin(GL_POLYGON);
    glVertex2f(1.7,1.5);
    glVertex2f(0.0,1.5);
    glVertex2f(0.0,2.8);
    glVertex2f(1.7,2.8);
    glEnd();

    glColor3ub(138,43,226);
    glBegin(GL_TRIANGLES);
    glVertex2f(2.0,2.8);
    glVertex2f(-0.3,2.8);
    glVertex2f(0.85,3.8);
    glEnd();

    glPopMatrix();



    glPopMatrix();
    glPopMatrix();






///Road  1//////////////////////////////////////////////////////////////////////////////////////////////////////////

glColor3f(.3,.3,.3);

glPushMatrix();
glTranslatef(0.29,-2.3,0);
glBegin(GL_QUADS);


glVertex3f(-6.0,0.8,0);
glVertex3f(-6.0,0.1,0.0);
glVertex3f(2.7,0.1,0.0);
glVertex3f(2.5,0.8,0.0);
glEnd();
glPopMatrix();






glPopMatrix();




///Straight Road///////////////////////////////////////////////////////////////


glPushMatrix();


glTranslatef(0.98,-1.58,0);
glScalef(1.5,1,1);
glBegin(GL_QUADS);


glVertex3f(1.33,-0.6,0.0);
glVertex3f(1.2,1.9,0.0);
glVertex3f(0.59,1.9,0.0);
glVertex3f(0.59,0.1,0.0);
glEnd();
glPopMatrix();
///turned Right road////////////////////////////////////////////////////////////////////////////
glPushMatrix();

glTranslatef(0.866,-0.4,0);
glBegin(GL_QUADS);


glVertex3f(1.0,1.0,0.0);
glVertex3f(1.0,0.6,0.0);
glVertex3f(4.2,0.6,0.0);
glVertex3f(4.2,1.0,0.0);
glEnd();

glPopMatrix();




glPushMatrix();
glTranslatef(carB,-1.8,0);
glScalef(1.4,1.4,1);

if(carB>2.6){

//glRotatef(45.0,0,1.0,0);
    carB=-7.0;
}
carB=carB+0.07;



car1();


glPopMatrix();





glPushMatrix();
glTranslatef(carC,-1.8,0);
glScalef(1.3,1.3,1);

if(carC>2.6){

//glRotatef(45.0,0,1.0,0);
    carC=-7.0;
}
carC=carC+0.07;



car2();


glPopMatrix();

glPushMatrix();

carA=carA+0.07;
glTranslatef(carA,-1.8,0);
glScalef(1.3,1.3,1);

if(carA>2.6){
    carA=-7.0;
}

car3();


glPopMatrix();

glPushMatrix();
glTranslatef(carD,0.2,0);
carD=carD+0.05;
if (carD>3.5){
    carD=2.5;
}


car3();
glPopMatrix();












///cloud Starts/////////////////////////

glPushMatrix();
glTranslatef(0.0,0.8,0);
glScalef(0.7,0.7,1);
glPushMatrix();

glTranslatef(cloudy,1.9,0);

cloudy=cloudy+0.05;

cloud2();

//cloudy=cloudy+0.5;
if (cloudy>1.5){

    cloudy=-8.5;

}





glPopMatrix();

if(cloudy1>7.0){
    cloudy1=-4.0;
}
cloudy1=cloudy1+0.05;
glPushMatrix();
glTranslatef(cloudy1,1.9,0);

cloud1();


glPopMatrix();

glPushMatrix();
glTranslatef(cloudy1-5.0,1.9,0);
cloud2();


glPopMatrix();

glPushMatrix();
glTranslatef(cloudy1,1.9,0);
cloudy1=cloudy1+0.01;
if(cloudy1>3){

    cloudy1=-3.0;
}

glPopMatrix();



    glPushMatrix();
    cloudy3=cloudy3+0.05;
if(cloudy3>9.5){
    cloudy3=4.0;
}
    glTranslatef(cloudy3,1.9,0);
    cloud3();
    glPopMatrix();


glPushMatrix();
cloudy4=cloudy4+0.05;
glTranslatef(cloudy4,1.9,0);
cloud3();
glPopMatrix();




glPushMatrix();
glTranslatef(cloudy5,1.9,0);

if(cloudy5>10.5){
    cloudy5=2.0;
}
cloudy5=cloudy5+0.05;

cloud1();


glPopMatrix();

glPopMatrix();


/// popcorn cart/////////////////////////////////////////////////////////////////////////////////

glPushMatrix();
glTranslatef(-1.8,0.0,0);
glScalef(0.3,0.2,1);
	glPushMatrix();
    glTranslatef(-1.0,-2.8,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(220,20,60);//Down bar
    glVertex2f(0.2,0.0);
    glVertex2f(0.0,0.0);
    glVertex2f(0.0,2.5);
    glVertex2f(0.2,2.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1.6,0.6);
    glVertex2f(1.4,0.6);
    glVertex2f(1.4,2.5);
    glVertex2f(1.6,2.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1.4,0.6);
    glVertex2f(0.2,0.6);
    glVertex2f(0.2,0.8);
    glVertex2f(1.4,0.8);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1.6,1.9);
    glVertex2f(0.0,1.9);
    glVertex2f(0.0,3.0);
    glVertex2f(1.6,3.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(169,169,169);
    glVertex2f(1.6,3.0);
    glVertex2f(0.0,3.0);
    glVertex2f(0.0,3.5);
    glVertex2f(1.6,3.5);
    glEnd();

    glBegin(GL_POLYGON); //Upper right bar
    glVertex2f(1.6,3.5);
    glVertex2f(1.4,3.5);
    glVertex2f(1.4,5.0);
    glVertex2f(1.6,5.0);
    glEnd();

    glBegin(GL_POLYGON); //Upper left bar
    glVertex2f(0.2,3.5);
    glVertex2f(0.0,3.5);
    glVertex2f(0.0,5.0);
    glVertex2f(0.2,5.0);
    glEnd();

    glBegin(GL_POLYGON); //Cart roof
    glColor3ub(220,20,60);
    glVertex2f(2.0,5.0);
    glVertex2f(-0.4,5.0);
    glVertex2f(0.0,5.5);
    glVertex2f(1.6,5.5);
    glEnd();

    glBegin(GL_POLYGON); //Mid box
    glColor3ub(169,169,169);
    glVertex2f(1.1,4.5);
    glVertex2f(0.5,4.5);
    glVertex2f(0.5,4.8);
    glVertex2f(1.1,4.8);
    glEnd();

    glBegin(GL_POLYGON); //Mid box
    glColor3ub(169,169,169);
    glVertex2f(0.9,4.8);
    glVertex2f(0.7,4.8);
    glVertex2f(0.7,5.0);
    glVertex2f(0.9,5.0);
    glEnd();

    glPushMatrix();
    glTranslatef(1.5,0.62,0.0);
    glLineWidth(4.0); //Wheel
    glBegin(GL_LINE_LOOP);
    glLineWidth(1.2);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.55;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glTranslatef(-0.5,-4.8,0.0);
    glBegin(GL_LINES); //Mid box
    glColor3ub(255,255,255);
    glVertex2f(-0.06,4.8);
    glVertex2f(1.05,4.8);
    glEnd();

    glTranslatef(0.45,-0.60,0.0);
    glBegin(GL_LINES); //Mid box
    glColor3ub(255,255,255);
    glVertex2f(0.06,4.85);
    glVertex2f(0.06,5.94);
    glEnd();

	glPopMatrix();

    glPopMatrix();

    glPopMatrix();







    ///slide//////////////////////////


     glPushMatrix();
    glTranslatef(0.0,-0.06,0.0);
    glScalef(1,0.8,1);

    glRotatef(30,0.0,0.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.0);
    glVertex2f(-0.08,0.0);
    glVertex2f(-0.08,0.70);
    glVertex2f(0.0,0.70);
    glEnd();
    glPopMatrix();


   ///train

glPushMatrix();
glTranslatef(train,0,0);
if(tra==1){
train=train+0.06;}
if(train>5.0){
    train=-3.0;
}
    glPushMatrix(); //Left Cube
    glTranslatef(0.6,0.7,0);
    glScalef(0.3,0.3,1.0);
    glPushMatrix();
    glScalef(-0.5,-0.5,0.0);
    glTranslatef(5.5,0.0,0.0);
    glRotatef(_wheel,0.0,0.0,-1.0);
    glLineWidth(2.0);
    glBegin(GL_LINE_LOOP);
    glColor3ub(255,255,0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.4;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y);
	}
    glEnd();
    glPushMatrix();
    glTranslatef(1.5,0.0,0.0);
    glColor3ub(255,0,0);
    glBegin(GL_LINES);
    glVertex2f(-1.90,0.0);
    glVertex2f(-1.10,0.0);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-1.50,-0.4);
    glVertex2f(-1.50,0.4);
    glEnd();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.7,0.0,0.0);
    glPushMatrix();

    glScalef(-0.5,-0.5,0.0);
    glTranslatef(5.5,0.0,0.0);
    glRotatef(_wheel,0.0,0.0,-1.0);
    glBegin(GL_LINE_LOOP);
    glColor3ub(255,255,0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.4;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y);
	}
    glEnd();
    glPushMatrix();
    glTranslatef(1.5,0.0,0.0);
    glColor3ub(255,0,0);
    glBegin(GL_LINES);
    glVertex2f(-1.90,0.0);
    glVertex2f(-1.10,0.0);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-1.50,-0.4);
    glVertex2f(-1.50,0.4);
    glEnd();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,0,225);
    glBegin(GL_POLYGON);
    glVertex2f(-3.1,0.19);
    glVertex2f(-3.1,0.95);
    glVertex2f(-1.7,0.95);
    glVertex2f(-1.7,0.19);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glColor3ub(0,0,255);
    glBegin(GL_POLYGON);
    glVertex2f(-3.1,0.0);
    glVertex2f(-3.1,0.2);
    glVertex2f(-2.95,0.2);
    glVertex2f(-2.95,0.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glColor3ub(0,0,255);
    glBegin(GL_POLYGON);
    glVertex2f(-1.7,0.0);
    glVertex2f(-1.84,0.0);
    glVertex2f(-1.84,0.95);
    glVertex2f(-1.7,0.95);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,0,255);
    glBegin(GL_POLYGON);
    glVertex2f(-2.545,0.0);
    glVertex2f(-2.25,0.0);
    glVertex2f(-2.25,0.95);
    glVertex2f(-2.545,0.95);
    glEnd();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix(); //Left Cube
    glTranslatef(1.6,0.7,0);
    glScalef(0.3,0.3,1.0);
    glPushMatrix();
    glScalef(-0.5,-0.5,0.0);
    glTranslatef(5.5,0.0,0.0);
    glRotatef(_wheel,0.0,0.0,-1.0);
    glLineWidth(2.0);
    glBegin(GL_LINE_LOOP);
    glColor3ub(255,255,0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.4;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y);
	}
    glEnd();
    glPushMatrix();
    glTranslatef(1.5,0.0,0.0);
    glColor3ub(255,0,0);
    glBegin(GL_LINES);
    glVertex2f(-1.90,0.0);
    glVertex2f(-1.10,0.0);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-1.50,-0.4);
    glVertex2f(-1.50,0.4);
    glEnd();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.7,0.0,0.0);
    glPushMatrix();

    glScalef(-0.5,-0.5,0.0);
    glTranslatef(5.5,0.0,0.0);
    glRotatef(_wheel,0.0,0.0,-1.0);
    glBegin(GL_LINE_LOOP);
    glColor3ub(255,255,0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.4;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y);
	}
    glEnd();
    glPushMatrix();
    glTranslatef(1.5,0.0,0.0);
    glColor3ub(255,0,0);
    glBegin(GL_LINES);
    glVertex2f(-1.90,0.0);
    glVertex2f(-1.10,0.0);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-1.50,-0.4);
    glVertex2f(-1.50,0.4);
    glEnd();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,0,225);
    glBegin(GL_POLYGON);
    glVertex2f(-3.1,0.19);
    glVertex2f(-3.1,0.95);
    glVertex2f(-1.7,0.95);
    glVertex2f(-1.7,0.19);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glColor3ub(0,0,255);
    glBegin(GL_POLYGON);
    glVertex2f(-3.1,0.0);
    glVertex2f(-3.1,0.2);
    glVertex2f(-2.95,0.2);
    glVertex2f(-2.95,0.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glColor3ub(0,0,255);
    glBegin(GL_POLYGON);
    glVertex2f(-1.7,0.0);
    glVertex2f(-1.84,0.0);
    glVertex2f(-1.84,0.95);
    glVertex2f(-1.7,0.95);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,0,255);
    glBegin(GL_POLYGON);
    glVertex2f(-2.545,0.0);
    glVertex2f(-2.25,0.0);
    glVertex2f(-2.25,0.95);
    glVertex2f(-2.545,0.95);
    glEnd();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix(); //Middle cube
    glTranslatef(1.1,0.7,0);
    glScalef(0.3,0.3,1.0);
    glPushMatrix();
    glScalef(-0.5,-0.5,0.0);
    glTranslatef(5.5,0.0,0.0);
    glRotatef(_wheel,0.0,0.0,-1.0);
    glBegin(GL_LINE_LOOP);
    glColor3ub(255,255,0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.4;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y);
	}
    glEnd();
    glPushMatrix();
    glTranslatef(1.5,0.0,0.0);
    glColor3ub(255,0,0);
    glBegin(GL_LINES);
    glVertex2f(-1.90,0.0);
    glVertex2f(-1.10,0.0);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-1.50,-0.4);
    glVertex2f(-1.50,0.4);
    glEnd();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.7,0.0,0.0);
    glPushMatrix(); //Left Circle

    glScalef(-0.5,-0.5,0.0);
    glTranslatef(5.5,0.0,0.0);
    glRotatef(_wheel,0.0,0.0,-1.0);
    glBegin(GL_LINE_LOOP);
    glColor3ub(255,255,0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.4;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y);
	}
    glEnd();
    glPushMatrix();
    glTranslatef(1.5,0.0,0.0);
    glColor3ub(255,0,0);
    glBegin(GL_LINES);
    glVertex2f(-1.90,0.0);
    glVertex2f(-1.10,0.0);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-1.50,-0.4);
    glVertex2f(-1.50,0.4);
    glEnd();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,0,225);
    glBegin(GL_POLYGON);
    glVertex2f(-3.1,0.19);
    glVertex2f(-3.1,0.95);
    glVertex2f(-1.7,0.95);
    glVertex2f(-1.7,0.19);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glColor3ub(0,0,255);
    glBegin(GL_POLYGON);
    glVertex2f(-3.1,0.0);
    glVertex2f(-3.1,0.2);
    glVertex2f(-2.95,0.2);
    glVertex2f(-2.95,0.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glColor3ub(0,0,255);
    glBegin(GL_POLYGON);
    glVertex2f(-1.7,0.0);
    glVertex2f(-1.84,0.0);
    glVertex2f(-1.84,0.95);
    glVertex2f(-1.7,0.95);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,0,255);
    glBegin(GL_POLYGON);
    glVertex2f(-2.545,0.0);
    glVertex2f(-2.25,0.0);
    glVertex2f(-2.25,0.95);
    glVertex2f(-2.545,0.95);
    glEnd();
    glPopMatrix();



    glPopMatrix();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0,0.65,0.0);
    glColor3ub(0,0,0);
    glPushMatrix();
    glBegin(GL_LINES);
    glVertex2i(-15.0,0.0);
    glVertex2i(5.0,0);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glBegin(GL_LINES);
    glVertex2i(-14.0,-0.58);
    glVertex2i(5.0,-0.58);
    glEnd();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,0.73,0.0);
    glColor3ub(0,0,0);
    glPushMatrix();
    glBegin(GL_LINES);
    glVertex2i(-15.0,0.0);
    glVertex2i(5.0,0);
    glEnd();
    glPopMatrix();

    //glPopMatrix();
glutSwapBuffers();
}



void update(int value) {
	_angle += 2.0f;
	if (_angle > 360) {
		_angle -= 360;
	}
	_ang_tri += 5.0f;
	if (_ang_tri > 360) {
		_ang_tri -= 360;
	}
	_ang += 5.0f;
	if (_ang > 360) {
		_ang -= 360;
	}
    _wheel += 7.0f;
	if (_wheel > 360) {
		_wheel -= 360;
	}

glutPostRedisplay(); //Tell GLUT that the display has changed

	//Tell GLUT to call update again in 25 milliseconds
glutTimerFunc(150, update, 0);
}




int main(int argc, char** argv) {
	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1350, 695);
	glutInitWindowPosition(0,0);

	glutCreateWindow("THEME PARK");
initRendering();

glutKeyboardFunc(FW);

	glutDisplayFunc(drawScene);

	glutReshapeFunc(handleResize);



    glutTimerFunc(150, update, 0);
    sndPlaySound("joy.wav",SND_ASYNC|SND_LOOP);
	glutMainLoop();
	return 0;
}


