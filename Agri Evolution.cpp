#include<stdlib.h>
#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#include<string.h>
#include "imageloader.h"
#include <iostream>
 void drawLines();

int a;
int id1;
int id2;
int id3;
int id4;
int id5;
int id6;
int id7;
int id8;
int id9;
int id10;
int id11;
int id12;
int id13;
float SpinAngle=0;

int CreateWindow1;
int CreateWindow2;
int CreateWindow3;
int CreateWindow4;
int CreateWindow5;
int CreateWindow6;
int CreateWindow7;
int CreateWindow8;
int CreateWindow9;
int CreateWindow10;
int CreateWindow11;
int CreateWindow12;
int CreateWindow13;

float carPos = 0;

float x2, y2;

//void display();
void display1();
void display2();
void display3();
void display4();
void display5();
void display6();
void display7();
void display8();
void display9();
void display10();
void display11();
void display12();
void display13();

void Mytimer(int v);
GLuint loadTexture(Image* image);
GLuint loadTexture1(Image* image);
GLuint loadTexture2(Image* image);
GLuint loadTexture3(Image* image);
GLuint loadTexture4(Image* image);
GLuint loadTexture5(Image* image);
GLuint loadTexture6(Image* image);
GLuint loadTexture7(Image* image);

void initRendering();
void initRendering1();
void initRendering2();
void initRendering3();
void initRendering4();
void initRendering5();
void initRendering6();
void initRendering7();

void drawImage();
void drawImage1();
void drawImage2();
void drawImage3();
void drawImage4();
void drawImage5();
void drawImage6();
void drawImage7();


GLuint loadTexture(Image* image) {
	GLuint textureId;
	glGenTextures(1, &textureId); //Make room for our texture
	glBindTexture(GL_TEXTURE_2D, textureId); //Tell OpenGL which texture to edit
	//Map the image to the texture
	glTexImage2D(GL_TEXTURE_2D,                //Always GL_TEXTURE_2D
		0,                            //0 for now
		GL_RGB,                       //Format OpenGL uses for image
		image->width, image->height,  //Width and height
		0,                            //The border of the image
		GL_RGB, //GL_RGB, because pixels are stored in RGB format
		GL_UNSIGNED_BYTE, //GL_UNSIGNED_BYTE, because pixels are stored
		//as unsigned numbers
		image->pixels);               //The actual pixel data
	return textureId; //Returns the id of the texture
}

//GLuint _textureId; //The id of the texture
GLuint loadTexture1(Image* image) {
	GLuint textureId;
	glGenTextures(1, &textureId); //Make room for our texture
	glBindTexture(GL_TEXTURE_2D, textureId); //Tell OpenGL which texture to edit
	//Map the image to the texture
	glTexImage2D(GL_TEXTURE_2D,                //Always GL_TEXTURE_2D
		0,                            //0 for now
		GL_RGB,                       //Format OpenGL uses for image
		image->width, image->height,  //Width and height
		0,                            //The border of the image
		GL_RGB, //GL_RGB, because pixels are stored in RGB format
		GL_UNSIGNED_BYTE, //GL_UNSIGNED_BYTE, because pixels are stored
		//as unsigned numbers
		image->pixels);               //The actual pixel data
	return textureId; //Returns the id of the texture
}

//GLuint _textureId; //The id of the texture

GLuint loadTexture2(Image* image) {
	GLuint textureId;
	glGenTextures(1, &textureId); //Make room for our texture
	glBindTexture(GL_TEXTURE_2D, textureId); //Tell OpenGL which texture to edit
	//Map the image to the texture
	glTexImage2D(GL_TEXTURE_2D,                //Always GL_TEXTURE_2D
		0,                            //0 for now
		GL_RGB,                       //Format OpenGL uses for image
		image->width, image->height,  //Width and height
		0,                            //The border of the image
		GL_RGB, //GL_RGB, because pixels are stored in RGB format
		GL_UNSIGNED_BYTE, //GL_UNSIGNED_BYTE, because pixels are stored
		//as unsigned numbers
		image->pixels);               //The actual pixel data
	return textureId; //Returns the id of the texture
}

//GLuint _textureId; //The id of the texture

GLuint loadTexture3(Image* image) {
	GLuint textureId;
	glGenTextures(1, &textureId); //Make room for our texture
	glBindTexture(GL_TEXTURE_2D, textureId); //Tell OpenGL which texture to edit
	//Map the image to the texture
	glTexImage2D(GL_TEXTURE_2D,                //Always GL_TEXTURE_2D
		0,                            //0 for now
		GL_RGB,                       //Format OpenGL uses for image
		image->width, image->height,  //Width and height
		0,                            //The border of the image
		GL_RGB, //GL_RGB, because pixels are stored in RGB format
		GL_UNSIGNED_BYTE, //GL_UNSIGNED_BYTE, because pixels are stored
		//as unsigned numbers
		image->pixels);               //The actual pixel data
	return textureId; //Returns the id of the texture
}

//GLuint _textureId; //The id of the texture
GLuint loadTexture4(Image* image) {
	GLuint textureId;
	glGenTextures(1, &textureId); //Make room for our texture
	glBindTexture(GL_TEXTURE_2D, textureId); //Tell OpenGL which texture to edit
	//Map the image to the texture
	glTexImage2D(GL_TEXTURE_2D,                //Always GL_TEXTURE_2D
		0,                            //0 for now
		GL_RGB,                       //Format OpenGL uses for image
		image->width, image->height,  //Width and height
		0,                            //The border of the image
		GL_RGB, //GL_RGB, because pixels are stored in RGB format
		GL_UNSIGNED_BYTE, //GL_UNSIGNED_BYTE, because pixels are stored
		//as unsigned numbers
		image->pixels);               //The actual pixel data
	return textureId; //Returns the id of the texture
}

//GLuint _textureId; //The id of the texture
GLuint loadTexture5(Image* image) {
	GLuint textureId;
	glGenTextures(1, &textureId); //Make room for our texture
	glBindTexture(GL_TEXTURE_2D, textureId); //Tell OpenGL which texture to edit
	//Map the image to the texture
	glTexImage2D(GL_TEXTURE_2D,                //Always GL_TEXTURE_2D
		0,                            //0 for now
		GL_RGB,                       //Format OpenGL uses for image
		image->width, image->height,  //Width and height
		0,                            //The border of the image
		GL_RGB, //GL_RGB, because pixels are stored in RGB format
		GL_UNSIGNED_BYTE, //GL_UNSIGNED_BYTE, because pixels are stored
		//as unsigned numbers
		image->pixels);               //The actual pixel data
	return textureId; //Returns the id of the texture
}

//GLuint _textureId; //The id of the texture
GLuint loadTexture6(Image* image) {
	GLuint textureId;
	glGenTextures(1, &textureId); //Make room for our texture
	glBindTexture(GL_TEXTURE_2D, textureId); //Tell OpenGL which texture to edit
	//Map the image to the texture
	glTexImage2D(GL_TEXTURE_2D,                //Always GL_TEXTURE_2D
		0,                            //0 for now
		GL_RGB,                       //Format OpenGL uses for image
		image->width, image->height,  //Width and height
		0,                            //The border of the image
		GL_RGB, //GL_RGB, because pixels are stored in RGB format
		GL_UNSIGNED_BYTE, //GL_UNSIGNED_BYTE, because pixels are stored
		//as unsigned numbers
		image->pixels);               //The actual pixel data
	return textureId; //Returns the id of the texture
}


GLuint loadTexture7(Image* image) {
	GLuint textureId;
	glGenTextures(1, &textureId); //Make room for our texture
	glBindTexture(GL_TEXTURE_2D, textureId); //Tell OpenGL which texture to edit
	//Map the image to the texture
	glTexImage2D(GL_TEXTURE_2D,                //Always GL_TEXTURE_2D
		0,                            //0 for now
		GL_RGB,                       //Format OpenGL uses for image
		image->width, image->height,  //Width and height
		0,                            //The border of the image
		GL_RGB, //GL_RGB, because pixels are stored in RGB format
		GL_UNSIGNED_BYTE, //GL_UNSIGNED_BYTE, because pixels are stored
		//as unsigned numbers
		image->pixels);               //The actual pixel data
	return textureId; //Returns the id of the texture
}
GLuint _textureId;
void initRendering() 
{

	glEnable(GL_NORMALIZE);
	glEnable(GL_COLOR_MATERIAL);

	Image* image = loadBMP("image.bmp");
	_textureId = loadTexture(image);
	delete image;
}
void initRendering1() {

	glEnable(GL_NORMALIZE);
	glEnable(GL_COLOR_MATERIAL);

	Image* image = loadBMP("convo1.bmp");
	_textureId = loadTexture1(image);
	delete image;
}

void initRendering2() {

	glEnable(GL_NORMALIZE);
	glEnable(GL_COLOR_MATERIAL);

	Image* image = loadBMP("convo2.bmp");
	_textureId = loadTexture2(image);
	delete image;
}
void initRendering3() {

	glEnable(GL_NORMALIZE);
	glEnable(GL_COLOR_MATERIAL);

	Image* image = loadBMP("convo3.bmp");
	_textureId = loadTexture3(image);
	delete image;
}
void initRendering4() {

	glEnable(GL_NORMALIZE);
	glEnable(GL_COLOR_MATERIAL);

	Image* image = loadBMP("convo4.bmp");
	_textureId = loadTexture4(image);
	delete image;
}
void initRendering5() {

	glEnable(GL_NORMALIZE);
	glEnable(GL_COLOR_MATERIAL);

	Image* image = loadBMP("convo5.bmp");
	_textureId = loadTexture5(image);
	delete image;
}
void initRendering6() {

	glEnable(GL_NORMALIZE);
	glEnable(GL_COLOR_MATERIAL);

	Image* image = loadBMP("convo6.bmp");
	_textureId = loadTexture6(image);
	delete image;
}
void initRendering7() {

	glEnable(GL_NORMALIZE);
	glEnable(GL_COLOR_MATERIAL);

	Image* image = loadBMP("convo7.bmp");
	_textureId = loadTexture7(image);
	delete image;
}
void drawImage()
{
	glTranslatef(0.0f, 0.0f, -1.0f);

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureId);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

	glColor3f(1,1,1);


	glBegin(GL_QUADS);

	glNormal3f(0.0, 1.0f, 0.0f);

	glTexCoord2f(0.0f, 0.0f);	glVertex2f(-10, -10);

	glTexCoord2f(1.0f, 0.0f);	glVertex2f(10, -10);

	glTexCoord2f(1.0f, 1.0f);	glVertex2f(10, 10);

	glTexCoord2f(0.0f, 1.0f);	glVertex2f(-10, 10);

	glEnd();
	glFlush();

	glutSwapBuffers();
}
void drawImage1()
{
	glTranslatef(0.0f, 0.0f, -1.0f);

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureId);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

	glColor3f(1, 1, 1);


	glBegin(GL_QUADS);

	glNormal3f(0.0, 1.0f, 0.0f);

	glTexCoord2f(0.0f, 0.0f);	glVertex2f(-10, -10);

	glTexCoord2f(1.0f, 0.0f);	glVertex2f(10, -10);

	glTexCoord2f(1.0f, 1.0f);	glVertex2f(10, 10);

	glTexCoord2f(0.0f, 1.0f);	glVertex2f(-10, 10);

	glEnd();

	glutSwapBuffers();
}
void drawImage2()
{
	glTranslatef(0.0f, 0.0f, -1.0f);

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureId);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

	glColor3f(1, 1, 1);


	glBegin(GL_QUADS);

	glNormal3f(0.0, 1.0f, 0.0f);

	glTexCoord2f(0.0f, 0.0f);	glVertex2f(-10, -10);

	glTexCoord2f(1.0f, 0.0f);	glVertex2f(10, -10);

	glTexCoord2f(1.0f, 1.0f);	glVertex2f(10, 10);

	glTexCoord2f(0.0f, 1.0f);	glVertex2f(-10, 10);

	glEnd();

	glutSwapBuffers();
}
void drawImage3()
{
	glTranslatef(0.0f, 0.0f, -1.0f);

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureId);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

	glColor3f(1, 1, 1);


	glBegin(GL_QUADS);

	glNormal3f(0.0, 1.0f, 0.0f);

	glTexCoord2f(0.0f, 0.0f);	glVertex2f(-10, -10);

	glTexCoord2f(1.0f, 0.0f);	glVertex2f(10, -10);

	glTexCoord2f(1.0f, 1.0f);	glVertex2f(10, 10);

	glTexCoord2f(0.0f, 1.0f);	glVertex2f(-10, 10);

	glEnd();

	glutSwapBuffers();
}

void drawImage4()
{
	glTranslatef(0.0f, 0.0f, -1.0f);

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureId);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

	glColor3f(1, 1, 1);


	glBegin(GL_QUADS);

	glNormal3f(0.0, 1.0f, 0.0f);

	glTexCoord2f(0.0f, 0.0f);	glVertex2f(-10, -10);

	glTexCoord2f(1.0f, 0.0f);	glVertex2f(10, -10);

	glTexCoord2f(1.0f, 1.0f);	glVertex2f(10, 10);

	glTexCoord2f(0.0f, 1.0f);	glVertex2f(-10, 10);

	glEnd();

	glutSwapBuffers();
}

void drawImage5()
{
	glTranslatef(0.0f, 0.0f, -1.0f);

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureId);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

	glColor3f(1, 1, 1);


	glBegin(GL_QUADS);

	glNormal3f(0.0, 1.0f, 0.0f);

	glTexCoord2f(0.0f, 0.0f);	glVertex2f(-10, -10);

	glTexCoord2f(1.0f, 0.0f);	glVertex2f(10, -10);

	glTexCoord2f(1.0f, 1.0f);	glVertex2f(10, 10);

	glTexCoord2f(0.0f, 1.0f);	glVertex2f(-10, 10);

	glEnd();

	glutSwapBuffers();
}
void drawImage6()
{
	glTranslatef(0.0f, 0.0f, -1.0f);

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureId);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

	glColor3f(1, 1, 1);


	glBegin(GL_QUADS);

	glNormal3f(0.0, 1.0f, 0.0f);

	glTexCoord2f(0.0f, 0.0f);	glVertex2f(-10, -10);

	glTexCoord2f(1.0f, 0.0f);	glVertex2f(10, -10);

	glTexCoord2f(1.0f, 1.0f);	glVertex2f(10, 10);

	glTexCoord2f(0.0f, 1.0f);	glVertex2f(-10, 10);

	glEnd();

	glutSwapBuffers();
}
void drawImage7()
{
	glTranslatef(0.0f, 0.0f, -1.0f);

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureId);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

	glColor3f(1, 1, 1);


	glBegin(GL_QUADS);

	glNormal3f(0.0, 1.0f, 0.0f);

	glTexCoord2f(0.0f, 0.0f);	glVertex2f(-10, -10);

	glTexCoord2f(1.0f, 0.0f);	glVertex2f(10, -10);

	glTexCoord2f(1.0f, 1.0f);	glVertex2f(10, 10);

	glTexCoord2f(0.0f, 1.0f);	glVertex2f(-10, 10);

	glEnd();

	glutSwapBuffers();
}

void display6()
{
	CreateWindow1 = 0;
	CreateWindow2 = 1;
	CreateWindow3 = 0;
	CreateWindow4 = 0;
	CreateWindow5 = 0;
	CreateWindow6 = 0;
	CreateWindow7 = 0;
	CreateWindow8 = 0;
	CreateWindow9 = 0;
	CreateWindow10 = 0;
	CreateWindow11 = 0;
	CreateWindow12 = 0;
	CreateWindow13 = 0;

	glClearColor(0, 0, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-10, 10, -10, 10,-10,10);
	glMatrixMode(GL_MODELVIEW);


	glLoadIdentity();
	
	

	initRendering();
	drawImage();

	glBindTexture(GL_TEXTURE_2D, 0);
		
/*	glColor3f(1, 0, 1);
	char s100[50] = { "Press '2' to continue" };
	glRasterPos2f(0, 0);
	for(int i = 0; i<strlen(s100); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s100[i]);


	char s8[] = { "Press 'e' to Exit" };
	glRasterPos2f(0, -6);
	for (int i = 0; i<strlen(s8); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s8[i]);
//	glutSwapBuffers();
	*/
	glFlush();

}
void display7()
{
	CreateWindow1 = 0;
	CreateWindow2 = 0;
	CreateWindow3 = 0;
	CreateWindow4 = 0;
	CreateWindow5 = 0;
	CreateWindow6 = 1;
	CreateWindow7 = 0;
	CreateWindow8 = 0;
	CreateWindow9 = 0;
	CreateWindow10 = 0;
	CreateWindow11 = 0;
	CreateWindow12 = 0;
	CreateWindow13 = 0;

	glClearColor(0, 0, 0, 0.1);
	glClear(GL_COLOR_BUFFER_BIT);
//	glEnable(GL_DOUBLE);
//	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10, 10, -10, 10);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	initRendering1();
	drawImage1();

	glBindTexture(GL_TEXTURE_2D, 0);
/*	glColor3f(1, 0, 0);
	char s60[50] = { "Press '6' to continue" };
	glRasterPos2f(0, -5);
	for (int i = 0; i<strlen(s60); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s60[i]);
	char s8[] = { "Press 'e' to Exit" };
	glRasterPos2f(0, -7);
	for (int i = 0; i<strlen(s8); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s8[i]);
	*/

	glFlush();
//	glutSwapBuffers();

}
void display8()
{
	CreateWindow1 = 0;
	CreateWindow2 = 0;
	CreateWindow3 = 0;
	CreateWindow4 = 0;
	CreateWindow5 = 0;
	CreateWindow6 = 0;
	CreateWindow7 = 1;
	CreateWindow8 = 0;
	CreateWindow9 = 0;
	CreateWindow10 = 0;
	CreateWindow11 = 0;
	CreateWindow12 = 0;
	CreateWindow13 = 0;

	glClearColor(0, 0, 0, 0.1);
	glClear(GL_COLOR_BUFFER_BIT);
	//glEnable(GL_DOUBLE);
//	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10, 10, -10, 10);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	initRendering2();
	drawImage2();

	glBindTexture(GL_TEXTURE_2D, 0);
/*	glColor3f(1, 0, 0);
	char s61[50] = { "Press '7' to continue" };
	glRasterPos2f(0, -5);
	for (int i = 0; i<strlen(s61); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s61[i]);
	char s8[] = { "Press 'e' to Exit" };
	glRasterPos2f(0, -7);
	for (int i = 0; i<strlen(s8); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s8[i]);
*/	
	glFlush();
//	glutSwapBuffers();

}
void display9()
{
	CreateWindow1 = 0;
	CreateWindow2 = 0;
	CreateWindow3 = 0;
	CreateWindow4 = 0;
	CreateWindow5 = 0;
	CreateWindow6 = 0;
	CreateWindow7 = 0;
	CreateWindow8 = 1;
	CreateWindow9 = 0;
	CreateWindow10 = 0;
	CreateWindow11 = 0;
	CreateWindow12 = 0;
	CreateWindow13 = 0;
	glClearColor(0, 0, 0, 0.1);
	glClear(GL_COLOR_BUFFER_BIT);
	//glEnable(GL_DOUBLE);
	//glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10, 10, -10, 10);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	initRendering3();
	drawImage3();

	glBindTexture(GL_TEXTURE_2D, 0);
/*	glColor3f(1, 0, 0);
	char s61[50] = { "Press '8' to continue" };
	glRasterPos2f(0, -5);
	for (int i = 0; i<strlen(s61); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s61[i]);
	char s8[] = { "Press 'e' to Exit" };
	glRasterPos2f(0, -7);
	for (int i = 0; i<strlen(s8); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s8[i]);
	*/
	
	glFlush();
	//glutSwapBuffers();

}
void display10()
{
	CreateWindow1 = 0;
	CreateWindow2 = 0;
	CreateWindow3 = 0;
	CreateWindow4 = 0;
	CreateWindow5 = 0;
	CreateWindow6 = 0;
	CreateWindow7 = 0;
	CreateWindow8 = 0;
	CreateWindow9 = 1;
	CreateWindow10 = 0;
	CreateWindow11 = 0;
	CreateWindow12 = 0;
	CreateWindow13 = 0;

	glClearColor(0, 0, 0, 0.1);
	glClear(GL_COLOR_BUFFER_BIT);
//	glEnable(GL_DOUBLE);
//	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10, 10, -10, 10);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	initRendering4();
	drawImage4();

	glBindTexture(GL_TEXTURE_2D, 0);
/*	glColor3f(1, 0, 0);
	char s62[50] = { "Press '9' to continue" };
	glRasterPos2f(0, -5);
	for (int i = 0; i<strlen(s62); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s62[i]);
	char s8[] = { "Press 'e' to Exit" };
	glRasterPos2f(0, -7);
	for (int i = 0; i<strlen(s8); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s8[i]);
*/	
	glFlush();
//	glutSwapBuffers();

}
void display11()
{
	CreateWindow1 = 0;
	CreateWindow2 = 0;
	CreateWindow3 = 0;
	CreateWindow4 = 0;
	CreateWindow5 = 0;
	CreateWindow6 = 0;
	CreateWindow7 = 0;
	CreateWindow8 = 0;
	CreateWindow9 = 0;
	CreateWindow10 = 1;
	CreateWindow11 = 0;
	CreateWindow12 = 0;
	CreateWindow13 = 0;
	glClearColor(0, 0, 0, 0.1);
	glClear(GL_COLOR_BUFFER_BIT);
//	glEnable(GL_DOUBLE);
//	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10, 10, -10, 10);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	initRendering5();
	drawImage5();

	glBindTexture(GL_TEXTURE_2D, 0);
/*	glColor3f(1, 0, 0);
	char s63[50] = { "Press 'z' to continue" };
	glRasterPos2f(0, -5);
	for (int i = 0; i<strlen(s63); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s63[i]);
	char s8[] = { "Press 'e' to Exit" };
	glRasterPos2f(0, -7);
	for (int i = 0; i<strlen(s8); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s8[i]);
*/	
	glFlush();
//	glutSwapBuffers();

}

void display12()
{
	CreateWindow1 = 0;
	CreateWindow2 = 0;
	CreateWindow3 = 0;
	CreateWindow4 = 0;
	CreateWindow5 = 0;
	CreateWindow6 = 0;
	CreateWindow7 = 0;
	CreateWindow8 = 0;
	CreateWindow9 = 0;
	CreateWindow10 = 0;
	CreateWindow11 = 1;
	CreateWindow12 = 0;
	CreateWindow13 = 0;

	glClearColor(0, 0, 0, 0.1);
	//glClear(GL_COLOR_BUFFER_BIT);
//	glEnable(GL_DOUBLE);
//	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10, 10, -10, 10);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	initRendering6();
	drawImage6();

	glBindTexture(GL_TEXTURE_2D, 0);
/*	glColor3f(1, 0, 0);
	char s64[50] = { "Press 'x' to continue" };
	glRasterPos2f(0, -5);
	for (int i = 0; i<strlen(s64); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s64[i]);
/*	char s8[] = { "Press 'e' to Exit" };
	glRasterPos2f(0, -7);
	for (int i = 0; i<strlen(s8); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s8[i]);
	*/glFlush();
//	glutSwapBuffers();

}
void display13()
{
	CreateWindow1 = 0;
	CreateWindow2 = 0;
	CreateWindow3 = 0;
	CreateWindow4 = 0;
	CreateWindow5 = 0;
	CreateWindow6 = 0;
	CreateWindow7 = 0;
	CreateWindow8 = 0;
	CreateWindow9 = 0;
	CreateWindow10 = 0;
	CreateWindow11 = 0;
	CreateWindow12 = 1;
	CreateWindow13 = 0;

	glClearColor(0, 0, 0, 0.1);
	//glClear(GL_COLOR_BUFFER_BIT);
//	glEnable(GL_DOUBLE);
//	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10, 10, -10, 10);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	initRendering7();
	drawImage7();

	glBindTexture(GL_TEXTURE_2D, 0);
/*	glColor3f(1, 0, 0);
	char s65[50] = { "Press 'c' to continue" };
	glRasterPos2f(0, -5);
	for (int i = 0; i<strlen(s65); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s65[i]);
	char s8[] = { "Press 'e' to Exit" };
	glRasterPos2f(0, -7);
	for (int i = 0; i<strlen(s8); i++)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s8[i]);
	*/
	glFlush();
//	glutSwapBuffers();

}
/*declaration for tree*/
/*TREES*/
void drawTree();
void drawTreeBranch();
void drawTreeLeaves();
void Treeleaves();
/* definition of function for tree*/

void drawTree()
{
	drawTreeBranch();
	drawTreeLeaves();
}

void drawTreeBranch()
{
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.2, 0);
	glVertex2f(0, -1);
	glVertex2f(2.5, -1);
	glVertex2f(3.6, 3.4);
	glVertex2f(3.8, 5.2);
	glVertex2f(3.9, 5.7);
	glVertex2f(4, 7.1);
	glVertex2f(4.3, 7.5);
	glVertex2f(4.6, 7.1);
	glVertex2f(4.7, 6.2);
	glVertex2f(4.8, 5.7);
	glVertex2f(5.1, 0.5);
	glVertex2f(6.5, -1);
	glEnd();

}

float j, r = 2;
void drawTreeLeaves()
{
	glPushMatrix();
	//glLoadIdentity();
	glTranslatef(2, 5.5, 0);
	Treeleaves();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 5.7, 0);
	Treeleaves();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-1, 7.7, 0);
	Treeleaves();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-1, 10, 0);
	Treeleaves();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.81, 12, 0);
	Treeleaves();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(2.5, 12.5, 0);
	Treeleaves();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(5, 12.5, 0);
	Treeleaves();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(7, 12.2, 0);
	Treeleaves();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(8.5, 10, 0);
	Treeleaves();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(8.5, 7.5, 0);
	Treeleaves();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(6, 6, 0);
	Treeleaves();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(2.2, 8.5, 0);
	Treeleaves();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(4, 8.5, 0);
	Treeleaves();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(6, 8.5, 0);
	Treeleaves();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(6, 10, 0);
	Treeleaves();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(4, 10, 0);
	Treeleaves();
	glPopMatrix();
}


void Treeleaves()
{
	float i;
	for (i = 0; i <= 360; i++)
	{
		j = (i*3.14) / 180;
		glColor3f(0, 1, 0);
		glBegin(GL_POLYGON);
		glVertex2d(cos(j)*r, sin(j)*r);

	}
	glEnd();

}


/* declaration of functions for farmer*/

void drawPloughing();
void drawOx();
void drawEquipment();
//float SpinAngle=0;
void drawNoga();
void drawNegilu();
void drawOxBody();
void drawOxHorn();
void drawOxTale();
void drawOxEyes();
void drawOxFoot();
/* for farmer */
void drawFarmer();
void drawFarmerShirt();
void drawFarmerShort();
void drawFarmerHands();
void drawFarmerLegs();
void drawFarmerHead();
void drawFarmerFingers();
void drawStick();
void Plough();
void uturn();
void hold();
void spin();
//void arrow(unsigned char,int x,int y);
void arrow(int key, int x, int y);
float x, y = 0;
int DIRECT_FRONT = 1;
int DIRECT_UTURN = 0;

/* definition of function for farmer*/

void display2()
{
	CreateWindow1 = 0;
	CreateWindow2 = 0;
	CreateWindow3 = 1;
	CreateWindow4 = 0;
	CreateWindow5 = 0;
	CreateWindow6 = 0;
	CreateWindow7 = 0;
	CreateWindow8 = 0;
	CreateWindow9 = 0;
	CreateWindow10 = 0;
	CreateWindow11 = 0;
	CreateWindow12 = 0;
	CreateWindow13 = 0;

	//glClearColor(0.8,0.91,0.8,1);
	glClearColor(0.8, 0.6, 0.5, 1);
	glEnable(GL_DOUBLE);
	glutInitDisplayMode(GLUT_DOUBLE);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-20, 20, -20, 20, -20, 20);
	glMatrixMode(GL_MODELVIEW);

	glColor3f(1, 0, 0);
	char s50[50] = { "Press '3' to continue" };
	glRasterPos2f(5, -18);
	for (int i = 0; i<strlen(s50); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s50[i]);
	char s8[] = { "Press 'e' to Exit" };
	glRasterPos2f(5, -20);
	for (int i = 0; i<strlen(s8); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s8[i]);
	
	for(int i = 0; i<40 ; i = i+2)
	{
	glPushMatrix();
	glTranslatef(0,i,0);
	drawLines();
	glPopMatrix();
	}

	glPushMatrix();
	if (x > 17){
		y += 2;
		DIRECT_FRONT = 0;
	}
	else if (x < -17){
		DIRECT_FRONT = 1;
		y += 2;
	}

	if (DIRECT_FRONT == 1)
		Plough(); /*this for movement*/
	else if (DIRECT_FRONT == 0)
		uturn();
	else
		hold();

	glDisable(GL_DEPTH_TEST);
	glColor3f(0.8,0.91,0.8);
	glRectf(-50,1.5,50,50);
	glRectf(0,-0.5,50,2);
	glEnable(GL_DEPTH_TEST);

	drawPloughing();
	glPopMatrix();
	spin();

	glFlush();
	glutSwapBuffers();
}


void drawLines()
{
	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glColor3f(0,0,0);
	
	glVertex2f(-20,-18);
	glVertex2f(20,-18);
	glPointSize(2);
	glEnd();
}

void hold()
{
	glTranslatef(x, 0, 0);
}
void Plough()
{
	glTranslatef(x, y, 0);
	x += 0.005;
}

void uturn()
{
	glTranslatef(x, y, 0);
	glRotatef(180, 0, 1, 0);

	x -= 0.01;
}

void spin()
{
	glutPostRedisplay();
}
void drawPloughing()
{
	glPushMatrix();
	glTranslatef(0, -2, 0);
	glColor3f(0.5, 0.8, 1);
	drawOx();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 4.5, 0);
	glColor3f(1, 1, 0);
	drawOx();
	glPopMatrix();


	drawEquipment();

}
void drawEquipment()
{
	drawNoga();
	drawNegilu();
	drawFarmer();

	//glFlush();
}

void drawOx()
{
	//float x=0.0;
	drawOxBody();
	drawOxHorn();
	drawOxTale();
	drawOxEyes();
	drawOxFoot();
}

void drawOxBody()
{
	glBegin(GL_POLYGON);
	//	glColor3f(0.7,0,0);
	glVertex2f(3, 4);
	glVertex2f(7, 4);
	glVertex2f(7.5, 4);
	glVertex2f(8.2, 4);
	glVertex2f(8.5, 4.15);
	glVertex2f(9.5, 4.15);
	glVertex2f(9.6, 4);
	glVertex2f(10, 2.5);
	glVertex2f(9.8, 2.7);
	glVertex2f(9.5, 2.5);
	glVertex2f(9.1, 3);
	glVertex2f(8.8, 2.6);
	//	glVertex2f(8.5,-1.5);
	//	glVertex2f(8.2,-1.5);
	glVertex2f(8, 1.5);
	glVertex2f(7.5, 1);
	glVertex2f(4.1, 0.9);
	//	glVertex2f(4,0);
	//	glVertex2f(3.5,-1.7);
	//	glVertex2f(3.2,-1.7);
	glVertex2f(3, 0);
	glVertex2f(2.5, 1);
	glVertex2f(2.5, 3.2);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(8.8, 2.6);
	glVertex2f(8.5, -1.5);
	glVertex2f(8.2, -1.5);
	glVertex2f(8, 1.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(4.1, 0.9);
	glVertex2f(4, 0);
	glVertex2f(3.5, -1.7);
	glVertex2f(3.2, -1.7);
	glVertex2f(3, 0);
	glEnd();

}

/* fro right horn*/

void drawOxHorn()
{
	glEnable(GL_DEPTH_TEST);
	glClear(GL_DEPTH_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glColor3f(0, 0.4, 0.1);
	glVertex2f(9.4, 4.15);
	glVertex2f(9.5, 5);
	//glVertex2f(9.2,6);
	glVertex2f(9.8, 5);
	glVertex2f(9.6, 4);
	glVertex2f(9.5, 4.15);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(9.5, 5);
	glVertex2f(9.2, 6);
	glVertex2f(9.8, 5);
	glEnd();

	/*for left horn*/
	glBegin(GL_POLYGON);
	//	glEnable(GL_DEPTH_TEST);
	//	glClear(GL_DEPTH_BUFFER_BIT);
	glColor3f(0, 0.4, 0.1);
	glVertex2f(8.5, 4.15);
	glVertex2f(8.4, 5);
	//glVertex2f(8.9,6);
	glVertex2f(8, 5);
	glVertex2f(8.2, 4);
	glVertex2f(8.5, 4.15);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(8.4, 5);
	glVertex2f(8.9, 6);
	glVertex2f(8, 5);
	glEnd();

}

/* for tale*/
void drawOxTale()
{
	glBegin(GL_LINES);
	glColor3f(0.1, 0.2, 0.4);
	glVertex2f(2.5, 3.2);
	glVertex2f(2, 1);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(2, 1);
	glVertex2f(0.1, 0.1);
	glVertex2f(1, 0);
	glEnd();
}

/* for eyes */
void drawOxEyes()
{
	glPointSize(3);
	//	glEnable(GL_DEPTH_TEST);
	//	glClear(GL_DEPTH_BUFFER_BIT);
	glBegin(GL_POINTS);
	glColor3f(0, 0, 0);
	glVertex2f(9.2, 3.5);
	glPointSize(2);
	glEnd();
}

/* for  front shoe */
void drawOxFoot()
{
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(8.5, -1.5);
	glVertex2f(9, -2);
	glVertex2f(8.2, -2);
	glVertex2f(8.2, -1.5);
	glEnd();


	/* for back shoe */
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(3.5, -1.7);
	glVertex2f(4, -2.2);
	glVertex2f(3.2, -2.2);
	glVertex2f(3.2, -1.7);
	glEnd();
}



void drawNoga()
{
	glEnable(GL_DEPTH_TEST);
	glClear(GL_DEPTH_BUFFER_BIT);
	glLineWidth(3);
	glBegin(GL_LINES);
	glVertex2f(7.65, 1.5);
	glVertex2f(7.65, 8.5);
	glEnd();

	glLineWidth(1);
}

void drawNegilu()
{
	glEnable(GL_DEPTH_TEST);
	glClear(GL_DEPTH_BUFFER_BIT);
	glLineWidth(3);
	glBegin(GL_LINES);
	glVertex2f(7.7, 5);
	glVertex2f(1, 2);
	glEnd();
	//glLineWidth(1);

	glBegin(GL_POLYGON);
	glColor3f(0.5, 0, 0.8);
	glVertex2f(1.5, 3);
	glVertex2f(1, 2);
	glVertex2f(0.8, 1);
	glVertex2f(3, 2);
	glEnd();

	/*for hand support*/
	glLineWidth(1.8);
	glBegin(GL_LINE_STRIP);
	glVertex2f(3, 2);
	glVertex2f(1, 2);
	glVertex2f(0.5, 6);
	glVertex2f(-0.7, 6);
	glEnd();
	glLineWidth(1);


}

/* for former*/
void drawFarmer()
{
	//glLoadIdentity();
	glTranslatef(3, 0, 0);
	glColor3f(1, 0, 0.3);
	drawFarmerShirt();
	drawFarmerShort();
	drawFarmerHands();
	drawFarmerLegs();
	drawFarmerHead();
	drawFarmerFingers();
	drawStick();
}

/* for shirt */
void drawFarmerShirt()
{
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	//glVertex2f(-3.5,7.2);
	//glVertex2f(-3.5,7.7);
	glVertex2f(-4.5, 7.8);
	glVertex2f(-4.6, 8);
	glVertex2f(-4.68, 7.9);
	glVertex2f(-5.8, 8);
	glVertex2f(-6.2, 7.8);
	glVertex2f(-7.2, 5.2);
	glVertex2f(-6.5, 5.2);
	glVertex2f(-6.3, 5.4);
	glVertex2f(-5.8, 5.1);
	glVertex2f(-4.8, 5);
	glVertex2f(-4.5, 7.1);
	glEnd();

	/*sleeves for shirt*/
	glEnable(GL_DEPTH_TEST);
	glClear(GL_DEPTH_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0.3);
	glVertex2f(-4.5, 7.8);
	glVertex2f(-4.5, 6.8);
	glVertex2f(-4, 6.8);
	glVertex2f(-4, 7.8);
	glEnd();

	glBegin(GL_POLYGON);
	glEnable(GL_DEPTH_TEST);
	glClear(GL_DEPTH_BUFFER_BIT);
	glColor3f(0, 1, 0.3);
	glVertex2f(-6.2, 7.8);
	glVertex2f(-6.6, 6.2);
	glVertex2f(-5.6, 7);
	glVertex2f(-5.82, 7.9);
	glEnd();
}

/*for shorts */
void drawFarmerShort()
{
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0.4);
	glVertex2f(-7.1, 5.2);
	glVertex2f(-6.6, 3.8);
	glVertex2f(-6.7, 3.5);
	glVertex2f(-6.2, 3.6);
	glVertex2f(-6, 5.2);
	glVertex2f(-6.3, 5.4);
	glVertex2f(-6.5, 5.2);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-6, 5.2);
	glVertex2f(-5.8, 3.4);
	glVertex2f(-5.2, 3.5);
	glVertex2f(-5, 5);
	glEnd();

}


/* right leg */
void drawFarmerLegs()
{
	glBegin(GL_POLYGON);
	glVertex2f(-6.6, 3.8);
	glVertex2f(-6.7, 2.8);
	glVertex2f(-6.9, 2.3);
	glVertex2f(-6, 2);
	glVertex2f(-6.5, 2.8);
	glVertex2f(-6.2, 3.6);
	glEnd();

	/*left leg*/
	glBegin(GL_POLYGON);
	glVertex2f(-5.8, 3.4);
	glVertex2f(-5.8, 2.4);
	glVertex2f(-5.3, 2.4);
	//glVertex2f(-5.4,2.7);
	glVertex2f(-5.6, 2.9);
	glVertex2f(-5.2, 3.5);
	glEnd();

}

/* right hand */
void drawFarmerHands()
{
	glBegin(GL_POLYGON);
	glColor3f(1, 0.7, 0.6);
	glVertex2f(-6.6, 6.2);
	glVertex2f(-6.38, 5.8);
	glVertex2f(-6.3, 5.6);
	glVertex2f(-3.5, 5.8);
	glVertex2f(-3.5, 6);
	glVertex2f(-5.8, 6.1);
	//glVertex2f(-5.8,6.1);
	glVertex2f(-5.9, 6.9);
	glEnd();

	/*left hand*/
	glBegin(GL_POLYGON);
	glVertex2f(-4, 7.2);
	glVertex2f(-3.2, 7.25);
	glVertex2f(-2.9, 8.5);
	glVertex2f(-3.2, 8.55);
	glVertex2f(-3.5, 7.8);
	glVertex2f(-4, 7.7);
	glEnd();
}

/* for head */
void drawFarmerHead()
{
	glBegin(GL_POLYGON);
	glColor3f(1, 0.7, 0.6);
	glVertex2f(-5.8, 8);
	glVertex2f(-5.8, 8.8);
	glVertex2f(-6, 9.4);
	glVertex2f(-5.6, 9.9);
	glVertex2f(-4.6, 9.9);
	glVertex2f(-4, 9.4);
	glVertex2f(-4.7, 9.2);
	glVertex2f(-4.7, 8.8);
	glVertex2f(-4.2, 8.8);
	glVertex2f(-4.2, 8.4);
	glVertex2f(-4.8, 8.2);
	glVertex2f(-4.8, 8);
	glEnd();

	/*for eye*/
	glPushMatrix();
	glEnable(GL_DEPTH_TEST);
	glClear(GL_DEPTH_BUFFER_BIT);
	glBegin(GL_POINTS);
	glPointSize(3);
	glColor3f(0, 0, 0);
	glVertex2f(-4.7, 9.6);
	glPointSize(1);
	glEnd();
	glDisable(GL_DEPTH_TEST);
	glPopMatrix();
	/*for towel on head*/
	glBegin(GL_POLYGON);
	//glEnable(GL_DEPTH_TEST);
	//glClear(GL_DEPTH_BUFFER_BIT);
	glColor3f(1, 0, 0);
	glVertex2f(-6, 9.4);
	glVertex2f(-6.3, 9.7);
	glVertex2f(-5.9, 10.3);
	glVertex2f(-4.4, 10.3);
	glVertex2f(-4.6, 9.9);
	glVertex2f(-5.6, 9.9);
	glEnd();

}

/*for finger*/
void drawFarmerFingers()
{
	glBegin(GL_LINE_LOOP);
	glColor3f(1, 0.7, 0.6);
	glVertex2f(-3.2, 8.55);
	glVertex2f(-3.25, 9);
	glVertex2f(-3.1, 8.7);
	glVertex2f(-2.9, 8.9);
	glVertex2f(-2.3, 8.8);
	glVertex2f(-2.9, 8.5);
	glEnd();
}

/* for stick*/
void drawStick()
{
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(-3.0, 8.5);
	glVertex2f(-3.5, 10.8);
	glEnd();
}

void arrow(int key, int x, int y)
{

	if (key == GLUT_KEY_RIGHT)
	{
		DIRECT_FRONT = 1;
		glutPostRedisplay();

	}

	else if (key == GLUT_KEY_LEFT)
	{
		DIRECT_FRONT = 0;
		glutPostRedisplay();
	}
}

/*void arrow(unsigned char k,int x,int y)
{
if(k=='f'||k=='F')
{
DIRECT_FRONT=1;
glutPostRedisplay();
}
else if(k=='u'||k=='U')
{
DIRECT_FRONT=0;
glutPostRedisplay();
}

}
*/


/* declaration of functions for workers*/
void drawWorker();
void drawWorkerBody();
void drawWorkerHands();
void drawWorkerHand();
void drawWorkerLegs();
void drawWorkerEye();
int flag = 0;
float angle = -5;
void drawWorkerHandPart1();
void drawWorkerHandPart2();
void Myinit();
void idle();
//float x;
/*for paddy field*/
void drawpaddyField();
void drawPaddyPlants();
void drawPaddyPlant();
void drawPaddyBody();
void drawPaddyLeaves();
void PaddyLeaves();

/* definition of funtion for workers*/
void display3()
{
	CreateWindow1 = 0;
	CreateWindow2 = 0;
	CreateWindow3 = 0;
	CreateWindow4 = 1;
	CreateWindow5 = 0;
	CreateWindow6 = 0;
	CreateWindow7 = 0;
	CreateWindow8 = 0;
	CreateWindow9 = 0;
	CreateWindow10 = 0;
	CreateWindow11 = 0;
	CreateWindow12 = 0;
	CreateWindow13 = 0;

	glClearColor(0, 1, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	Myinit();

	/*for paddy field*/
	glPushMatrix();
	//glColor3f(0.1, 0.6, 1);
	glColor3f(0.6, 1, 1);
	
	glScalef(3,4,3);
	drawpaddyField();
	glPopMatrix();
	
		
		drawPaddyPlants();
	
	glPushMatrix();
	glTranslatef(0,6,0);
	drawPaddyPlants();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0,12,0);
	drawPaddyPlants();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0,-6,0);
	drawPaddyPlants();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(9,0,0);
	drawPaddyPlants();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(9,6,0);
	drawPaddyPlants();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(9,12,0);
	drawPaddyPlants();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(9,-6,0);
	drawPaddyPlants();
	glPopMatrix();
	
	
	glPushMatrix();
	glTranslatef(18,6,0);
	drawPaddyPlants();
	glPopMatrix();

	
	glPushMatrix();
	glTranslatef(18,-6,0);
	drawPaddyPlants();
	glPopMatrix();

	
	glPushMatrix();
	glTranslatef(18,12,0);
	drawPaddyPlants();
	glPopMatrix();

	
	glPushMatrix();
	glTranslatef(18,0,0);
	drawPaddyPlants();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-9,6,0);
	drawPaddyPlants();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-9,12,0);
	drawPaddyPlants();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-9,0,0);
	drawPaddyPlants();
	glPopMatrix();

/*	glPushMatrix();
	glTranslatef(-9,18,0);
	drawPaddyPlants();
	glPopMatrix();
*/


	glPushMatrix();
	glTranslatef(-9,-6,0);
	drawPaddyPlants();
	glPopMatrix();
	



/*	glPushMatrix();
	glTranslatef(-9,-12,0);
	drawPaddyPlants();
	glPopMatrix();
*/
	glPushMatrix();
	glTranslatef(angle * 0.05, angle * 0.05, 0);

	glPushMatrix();
	glTranslatef(x, 0, 0);
	x += 0.0001;
	drawWorker();
	glPushMatrix();
	glScalef(0.6,0.6,0.6);
	glTranslatef(0,15,0);
	drawWorker();
	glPopMatrix();
	glPopMatrix();

	glPopMatrix();

	glColor3f(1, 0, 0);
	char s51[50] = { "Press '4' to continue" };
	glRasterPos2f(5, -15);
	for (int i = 0; i<strlen(s51); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s51[i]);
	char s8[] = { "Press 'e' to Exit" };
	glRasterPos2f(5, -17);
	for (int i = 0; i<strlen(s8); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s8[i]);
	glFlush();
	glutSwapBuffers();
}
void drawWorker()
{
	drawWorkerHands();
	glPushMatrix();
	glTranslatef(-6.3, -10.1, 0);
	drawWorkerBody();
	drawWorkerLegs();
	drawWorkerEye();
	glPopMatrix();
}

void drawWorkerHands()
{
	if (angle <= -5)
	{
		flag = 1;


	}
	else if (angle >= 10)
	{
		flag = 0;

	}
	if (flag == 1)
		angle += 0.005;
	else
		angle -= 0.005;
	glPushMatrix();
	glScalef(0.9, 0.9, 1);
	glTranslatef(0.5, 0.75, 0);
	drawWorkerHand();
	glPopMatrix();

}
void drawWorkerFarmer()
{
	drawWorkerHands();
	glPushMatrix();
	glTranslatef(-6.3, -10.1, 0);
	drawWorkerBody();
	drawWorkerLegs();
	drawWorkerEye();
	glPopMatrix();
}

void drawWorkerBody()
{
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 0);
	glVertex2f(2.7, 11);
	glVertex2f(2.7, 11.6);
	glVertex2f(3.8, 12.2);
	glVertex2f(4.3, 12.5);
	glVertex2f(5.1, 12.55);
	glVertex2f(5.9, 12.4);
	glVertex2f(11, 12.5);
	glVertex2f(4.3, 11.1);
	glEnd();

	/*C,B,A,j*/
	glBegin(GL_POLYGON);
	glVertex2f(4.3, 11.1);
	glVertex2f(5.5, 10.6);
	glVertex2f(6.3, 10.1);
	glVertex2f(11, 12.5);
	glEnd();

	/*A,z,j*/
	glBegin(GL_POLYGON);
	glVertex2f(6.3, 10.1);
	glVertex2f(6.9, 9.4);
	glVertex2f(11, 12.5);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0.2, 1);
	glVertex2f(11, 12.5);
	glVertex2f(12.5, 12.3);
	glVertex2f(13.1, 12.1);
	glVertex2f(13.3, 11.2);
	glVertex2f(9.5, 9.6);

	glEnd();

	/*j,z,v*/
	glBegin(GL_POLYGON);
	glColor3f(1, 0.8, 0.8);
	glVertex2f(11, 12.5);
	glVertex2f(6.9, 9.4);
	glVertex2f(9.5, 9.6);
	glEnd();

	/*j,k,l,m,n,o,p,q,r,s,t,u,v*/
	glBegin(GL_POLYGON);
	glColor3f(0, 0.2, 1);
	glVertex2f(13.3, 11.2);
	glVertex2f(13.3, 10.1);
	glVertex2f(13.1, 9.5);

	glVertex2f(13, 8.7);
	glVertex2f(12.5, 7.6);
	glVertex2f(11.2, 6.2);
	glVertex2f(9.6, 6);
	glVertex2f(9.2, 7.2);
	glVertex2f(9.1, 8.9);
	glVertex2f(9.5, 9.6);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(9.5, 9.6);
	glVertex2f(9, 9.5);
	glVertex2f(8, 9);
	glVertex2f(6.5, 8.5);
	glVertex2f(6.9, 9.4);
	glVertex2f(6.3, 10.1);
	glVertex2f(5.5, 10.6);
	glVertex2f(4.3, 11.1);
	glEnd();

	/*D,#,E,F,G,H,I,J,K,L,O*/
	glBegin(GL_LINE_STRIP);
	glVertex2f(2.7, 11);
	glVertex2f(2.6, 10.3);
	glVertex2f(2.8, 10.3);
	glVertex2f(3, 9.8);
	glVertex2f(3.2, 9.2);
	glVertex2f(3.5, 9.5);
	glVertex2f(3.8, 9.2);
	glVertex2f(4.2, 9.5);
	glVertex2f(4, 9.1);
	glVertex2f(4.6, 9);
	glVertex2f(5.3, 9.8);
	glVertex2f(6, 9.3);
	glEnd();

	/*J,M,N,O,L,K*/
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 0.5);
	glVertex2f(4, 9.1);
	glVertex2f(4.5, 8.6);
	glVertex2f(4.6, 9);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(5.9, 8.8);
	glVertex2f(6, 9.3);
	glVertex2f(5.3, 9.8);
	glVertex2f(4.6, 9);
	glVertex2f(4.5, 8.6);
	glEnd();

	/*z---j*/
	glBegin(GL_LINE_STRIP);
	glVertex2f(6.9, 9.4);
	glVertex2f(7.1, 9.3);
	glVertex2f(7.5, 9.4);
	glVertex2f(8.9, 10.85);
	glVertex2f(11, 12.5);
	glEnd();

	/*hair*/
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);
	glVertex2f(2.6, 10.3);
	glVertex2f(2.8, 10.3);
	glVertex2f(3, 10.4);
	glVertex2f(3.7, 10.53);
	glVertex2f(4.8, 10.3);
	glEnd();
}

void drawWorkerHand()
{


	glPushMatrix();
	glRotatef(angle, 0, 0, 1);
	glPushMatrix();
	glRotatef(180, 1, 0, 0);
	glRotatef(180, 0, 1, 0);
	//glTranslatef(-6.3,-10.1,0);
	drawWorkerHandPart1();

	glPopMatrix();
	//glPushMatrix();
	//glTranslatef(0.75,0, 0);
	//glRotatef(angle, 0, 0, 1);
	//drawHandPart2();
	//glPopMatrix();
	glPopMatrix();

}

void drawWorkerHandPart1()
{                                    /*handaPart1 is at the origin for easier movement*/
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0.7);
	glVertex2f(0, 0);
	glVertex2f(0.4, 1.3);
	glVertex2f(-0.2, 1.6);
	glVertex2f(-0.6, 0.7);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1, 0.9, 0.7);
	glVertex2f(0.35, 1.3);
	glVertex2f(0.8, 2.2);
	glVertex2f(2.3, 3.5);
	glVertex2f(2.1, 3.9);
	glVertex2f(1.3, 3.5);
	glVertex2f(0.5, 3.1);
	glVertex2f(0.2, 2.7);
	glVertex2f(-0.16, 1.6);
	glEnd();


	glBegin(GL_POLYGON);
	//glColor3f(1, 0.7, 0.6);
	glVertex2f(1.3, 3.5);
	glVertex2f(1.8, 4.1);
	glVertex2f(1.3, 4.5);
	glVertex2f(0.5, 3.1);
	glEnd();


	/*fingers*/
	glBegin(GL_POLYGON);
	glColor3f(1, 0.7, 0.6);
	glVertex2f(2.3, 3.5);
	glVertex2f(3.6, 4.1);
	glVertex2f(3.7, 4.4);
	glVertex2f(3.1, 4.8);
	glVertex2f(3.4, 4.3);
	glVertex2f(3.3, 4.1);
	glVertex2f(3.1, 4.8);
	glVertex2f(2.7, 4.2);
	glVertex2f(2.1, 3.9);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(1.8, 4.1);
	glVertex2f(2.4, 5);
	glVertex2f(2.2, 5.5);
	glVertex2f(2.18, 5);
	glVertex2f(1.8, 5.5);
	glVertex2f(1.8, 5.6);
	glVertex2f(1.7, 5);
	glVertex2f(1.3, 4.5);
	glEnd();

}

void drawWorkerLegs()
{
	glBegin(GL_POLYGON);
	glColor3f(1, 0.7, 0.6);
	glVertex2f(9.6, 6);
	glVertex2f(9.8, 3.5);
	glVertex2f(10.4, 4.1);
	glVertex2f(11.2, 6.2);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(9.8, 3.5);
	glVertex2f(10.4, 4.1);
	glVertex2f(10.5, 3.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(10.5, 3.5);
	glVertex2f(10.8, 2.9);
	glVertex2f(10.1, 2.6);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(9.8, 3.5);
	glVertex2f(9.1, 2.5);
	glVertex2f(9.2, 2.3);
	glVertex2f(9.4, 2.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(9.4, 2.5);
	glVertex2f(9.3, 2.1);
	glVertex2f(9.9, 2);
	glVertex2f(10.1, 2.6);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2f(9.8, 3.5);
	glVertex2f(9.4, 2.5);
	glVertex2f(9.2, 2.3);
	glVertex2f(10.5, 3.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(9.4, 2.5);
	glVertex2f(10.1, 2.6);
	glVertex2f(10.5, 3.5);
	glEnd();
	/*glVertex2f(9.1, 2.5);
	glVertex2f(9.2, 2.3);
	glVertex2f(9.4, 2.5);
	glVertex2f(9.3, 2.1);
	glVertex2f(9.9, 2);
	glVertex2f(10.1, 2.6);
	glVertex2f(10.8, 2.9);
	glVertex2f(10.5, 3.5);
	glVertex2f(10.4, 4.1);
	glVertex2f(11.2, 6.2);
	glEnd();
	*/
}
void drawWorkerEye()
{
	glBegin(GL_TRIANGLES);
	glColor3f(0,0,0);
	glVertex2f(3.5, 10.25);
	glVertex2f(3.32, 10.05);
	glVertex2f(3.5, 9.9);
	glEnd();

	glPointSize(3);
	glBegin(GL_POINTS);
	glVertex2f(3.4, 10);
	glEnd();
	glPointSize(1);
}

/*void Mytimer(int v)
{
glutTimerFunc(100, Mytimer, 20);
glutPostRedisplay();
}
*/
void idle()
{
	glutPostRedisplay();
}

void Myinit()
{
	//glEnable(GL_DEPTH_TEST);
	glEnable(GL_DOUBLE);
	glutInitDisplayMode(GLUT_DOUBLE);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-20, 20, -20, 20, -20, 20);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

/*paddy field*/

void drawPaddyPlants()
{
	glPushMatrix();
	glScalef(0.6, 0.6, 0.6);
	drawPaddyPlant();

	glPushMatrix();
	glTranslatef(3, 0, 0);
	drawPaddyPlant();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-3, 0, 0);
	drawPaddyPlant();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-6, 0, 0);
	drawPaddyPlant();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-9, 0, 0);
	drawPaddyPlant();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-9, -5, 0);
	drawPaddyPlant();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-9, -10, 0);
	drawPaddyPlant();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-6, -10, 0);
	drawPaddyPlant();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-6, -5, 0);
	drawPaddyPlant();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-3, -10, 0);
	drawPaddyPlant();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-3, -5, 0);
	drawPaddyPlant();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(3, -5, 0);
	drawPaddyPlant();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(3, -10, 0);
	drawPaddyPlant();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, -5, 0);
	drawPaddyPlant();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, -10, 0);
	drawPaddyPlant();
	glPopMatrix();
	glPopMatrix();

}

void drawPaddyPlant()
{
	drawPaddyBody();
	drawPaddyLeaves();
	glPushMatrix();
	glTranslatef(0.12, -1.4, 0);
	drawPaddyLeaves();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.3, 1.3, 0);
	drawPaddyLeaves();
	glPopMatrix();

	PaddyLeaves();
	glPushMatrix();
	glTranslatef(0, -1.4, 0);
	PaddyLeaves();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(0.2, 0.8, 0);
	PaddyLeaves();
	glPopMatrix();
}

void drawPaddyBody()
{
	glBegin(GL_TRIANGLES);
	glColor3f(0, 1, 0);
	glVertex2f(0.5, 0);
	glVertex2f(1.85, 0);
	glVertex2f(1, 5);
	glEnd();

}
void drawPaddyLeaves()
{

	glBegin(GL_POLYGON);
	//glColor3f(0, 1, 0);
	glVertex2f(1.4, 2.6);
	glVertex2f(2, 3.2);
	glVertex2f(2.1, 3.5);
	glVertex2f(1.3, 3.1);
	glEnd();

	glBegin(GL_TRIANGLES);
	//glColor3f(0, 1, 0);
	glVertex2f(2, 3.2);
	glVertex2f(2.1, 3.5);
	glVertex2f(2.1, 2.5);
	glEnd();

}

void PaddyLeaves()
{
	glBegin(GL_POLYGON);
	//glColor3f(0, 1, 0);
	glVertex2f(0.8, 2.6);
	glVertex2f(0.9, 3);
	glVertex2f(0, 3.3);
	glVertex2f(0.1, 3.1);
	glEnd();

	glBegin(GL_TRIANGLES);
	//glColor3f(0, 1, 0);
	glVertex2f(0, 3.3);
	glVertex2f(0.1, 3.1);
	glVertex2f(0.1, 2.5);
	glEnd();
}

void drawpaddyField()
{
	//glColor3f(0.8,1,1);
	glRectf(-8, -8, 8, 5);
}

/*declaration of function for introduction*/

/*definition of function for introduction */
void display1()
{
	CreateWindow1 = 1;
	CreateWindow2 = 0;
	CreateWindow3 = 0;
	CreateWindow4 = 0;
	CreateWindow5 = 0;
	CreateWindow6 = 0;
	CreateWindow7 = 0;
	CreateWindow8 = 0;
	CreateWindow9 = 0;
	CreateWindow10 = 0;
	CreateWindow11 = 0;
	CreateWindow12 = 0;
	CreateWindow13 = 0;

	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-50, 50, -50, 50);
	glMatrixMode(GL_MODELVIEW);
	glClearColor(0.5, 1, 0.31, 1);
	glColor3f(0.3, 0.4, 0.6);
	char s1[70] = { "SAHYADRI COLLEGE OF ENGINEERING AND MANAGEMENT" };
	glRasterPos2f(-42, 35);
	for (int i = 0; i<strlen(s1); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s1[i]);
	glColor3f(0.196078, 0.6, 0.8);
	char s2[50] = { "COMPUTER GRAPHICS MINI PROJECT" };
	glRasterPos2f(-25, 25);
	for (int i = 0; i<strlen(s2); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s2[i]);
	glColor3f(0.196078, 0.6, 0.8);
	char s3[50] = { "Press '1' to continue" };
	glRasterPos2f(15, -40);
	for (int i = 0; i<strlen(s3); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s3[i]);
/*	char s14[] = { "Press 'e' to Exit" };
	glRasterPos2f(15, -45);
	for (int i = 0; i<strlen(s14); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s14[i]);
	*/
	glColor3f(0.196078, 0.6, 0.8);
	char s8[50] = { "AGRIEVOLUTION" };
	glRasterPos2f(-13, 15);
	for (int i = 0; i<strlen(s8); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s8[i]);
	glColor3f(0.3, 0.4, 0.6);
	char s9[50] = { "RAGHAVENDRA (4SF12CS072)" };
	glRasterPos2f(-20, -20);
	for (int i = 0; i<strlen(s9); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s9[i]);
	glColor3f(0.3, 0.4, 0.6);
	char s10[50] = { "  RAKSHITH M (4SF12CS075)" };
	glRasterPos2f(-20, -25);
	for (int i = 0; i<strlen(s10); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s10[i]);
	glColor3f(0.3, 0.4, 0.6);
	char s11[50] = { "GUIDED BY: " };
	glRasterPos2f(-8.5, 5);
	for (int i = 0; i<strlen(s11); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s11[i]);
	glColor3f(0.3, 0.4, 0.6);
	char s12[50] = { "Ms.SADHANA SHETTY" };
	glRasterPos2f(-16, 0);
	for (int i = 0; i<strlen(s12); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s12[i]);
	glColor3f(0.3, 0.4, 0.6);
	char s13[50] = { " Mr.SHAILESH SHETTY" };
	glRasterPos2f(-14.5, -5);
	for (int i = 0; i<strlen(s13); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s13[i]);

	glFlush();
}


/*declaration of function for car with OR*/
/*this for car*/
void drawCarSeat();
void drawRoad();
void drawCarWheel();
void drawCarBackWheel();
void drawCarFrontWheel();
void drawCar();
void drawCarBody();
void drawCarWindow();
void drawCarDoor();
void drawCarIndicator();
void drawCarFrontGlass();
void Spin();
void move();
void stop();
void reverse();
void walk(); //this is for movement of OR

/*this for OR*/
void drawOR();
void drawOrHead();
void drawOrManBody();
void drawOrShirt();
void drawOrTie();
void drawOrLegs();
void drawOrHands();
void drawOrEyes();
void drawOrEyeLashe();
void drawOrMouth();
void drawOrNose();
void drawOrHair();

void keys(int key, int x, int y);

int MOVEFORWARD = -1;
int OPENDOOR = 0;
int RESEARCHER = 0;

/* definition of function for CAR with OR */

void display4()
{
	CreateWindow1 = 0;
	CreateWindow2 = 0;
	CreateWindow3 = 0;
	CreateWindow4 = 0;
	CreateWindow5 = 1;
	CreateWindow6 = 0;
	CreateWindow7 = 0;
	CreateWindow8 = 0;
	CreateWindow9 = 0;
	CreateWindow10 = 0;
	CreateWindow11 = 0;
	CreateWindow12 = 0;
	CreateWindow13 = 0;

	glClearColor(1, 1, 1, 1);
	glEnable(GL_DOUBLE);
	glutInitDisplayMode(GLUT_DOUBLE);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	
	glOrtho(-12, 12, -12, 12, -12, 12);
	glMatrixMode(GL_MODELVIEW);
	

	glPushMatrix();
	glScalef(0.3, 0.3, 0.3);
	glTranslatef(0, 22, 0);
	drawTree();
	glPushMatrix();
	glTranslatef(-20, 0, 0);
	drawTree();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(20, 0, 0);
	drawTree();
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, -2, 0);
	//drawpaddyField();
	glPopMatrix();


	drawRoad();

	glPushMatrix();
	//glLoadIdentity();   //this for move the car
	if (MOVEFORWARD == 0)
		move();
	else if (MOVEFORWARD == 1)
		reverse();
	else
		stop();
	
	drawCar();
	glPopMatrix();

	if (RESEARCHER == 1)
	{
		glPushMatrix();
		glScalef(0.5, 0.5, 0.5);
		glTranslatef(8, -4, 10);
		//glColor3f(0,0,1);
		glPushMatrix();
		//	if(RESEARCHER==1)
		walk();
		drawOR();
		glPopMatrix();
		//drawOR();
		glPopMatrix();

	}

	/*	glPushMatrix();
	glScalef(0.8,0.5,0.5);
	glTranslatef(-7,-14,0);
	glColor3f(0.3,0.15,0);
	drawpaddyField();
	glPopMatrix();
	*/



	/*workers in the field*/

	glPushMatrix();
	glScalef(0.5, 0.5, 0.5);
	glTranslatef(15, -6, 0);
	glColor3f(0.8, 1, 1);
	drawpaddyField();
	drawPaddyPlants();

	glPushMatrix();
	glTranslatef(angle * 0.05, angle * 0.05, 0);

	//glPushMatrix();
	//	glTranslatef(x,0,0);
	//	x+=0.0001;
	glPushMatrix();
	glScalef(0.5, 0.5, 0.5);
	drawWorker();
	glPopMatrix();
	//glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, -12, 0);
	glColor3f(0.8, 1, 1);
	drawpaddyField();
	drawPaddyPlants();
	glPopMatrix();

	glPopMatrix();


	/* for Ox and Farmer*/
	/*OX Standing in the field*/

	glPushMatrix();

	glColor3f(0.8, 0.9, 0.8);
	glScalef(0.8, 0.8, 0.8);
	glTranslatef(-6, -10, 0);
	glColor3f(0.3, 0.15, 0);
	drawpaddyField();
	glPopMatrix();

	glPushMatrix();
	glEnable(GL_DEPTH_TEST);
	glClear(GL_DEPTH_BUFFER_BIT);
	glScalef(0.4, 0.4, 0.4);
	glTranslatef(-15, -23, 0);
	drawPloughing();
	glDisable(GL_DEPTH_TEST);
	glPopMatrix();

	glColor3f(1, 0, 0);
	char s52[50] = { "Press '5' to continue" };
	glRasterPos2f(-12, 11);
	for (int i = 0; i<strlen(s52); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s52[i]);
	char s8[] = { "Press 'e' to Exit" };
	glRasterPos2f(-12, 10);
	for (int i = 0; i<strlen(s8); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s8[i]);
	
	glFlush();
	glutSwapBuffers();
}
void stop()
{
	glTranslatef(x, 0, 0);
}
void move()
{
	glTranslatef(x, 0, 0);
	x -= 0.02;
	carPos = x * 2;
	printf("\n%f", x);
}

void reverse()
{
	glTranslatef(x, 0, 0);
	carPos = x;
	x += 0.02;
}
void Spin()
{
	glutPostRedisplay();
}
void drawCar()
{
	drawCarBody();
	drawCarSeat();
	drawCarWindow();
	drawCarFrontGlass();
	glPushMatrix();
	//glLoadIdentity();
	glTranslatef(3.8, 1.7, 0);
	glPushMatrix();
	if (OPENDOOR == 1)
	{
		glRotatef(60, 0, 1, 0);
		glRotatef(-10, 0, 0, 1);

	}

	drawCarDoor();
	glPopMatrix();
	glPopMatrix();

	/*if(RESEARCHER==1)
	{
	glPushMatrix();
	glScalef(0.5,0.5,0.5);
	glTranslatef(8,-4,0);
	//glColor3f(0,0,1);
	glPushMatrix();
	//	if(RESEARCHER==1)
	walk();
	drawOR();
	glPopMatrix();
	//drawOR();
	glPopMatrix();

	}*/
	//	OPENDOOR=0;
	//	MOVEFORWARD=0;

	drawCarWheel();
	drawCarIndicator();
}

void drawCarBody()
{
	/*B,C,D,E,F,I,K,j,l,n,o,p,q,r,u,1,v,w,x,2,z,y,A,3,4*/
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 0);
	glVertex2f(7.4, 1.5);
	glVertex2f(8, 1.5);
	glVertex2f(8.2, 1.65);
	glVertex2f(8.2, 2);
	glVertex2f(8.1, 2.25);
	glVertex2f(8.1, 2.7);
	glVertex2f(8.1, 2.9);
	glVertex2f(8, 2.9);
	glVertex2f(7.5, 3.8);
	glVertex2f(7.35, 3.9);
	glVertex2f(4.2, 3.9);
	glVertex2f(3.7, 3.9);
	glVertex2f(3.5, 3.8);
	glVertex2f(3.1, 3.1);
	glVertex2f(1.2, 2.65);
	glVertex2f(1, 2.2);
	glVertex2f(1, 1.7);
	glVertex2f(1.1, 1.5);
	glVertex2f(1.9, 1.5);
	glVertex2f(2, 1.9);
	glVertex2f(2.95, 1.9);
	glVertex2f(3, 1.5);
	glVertex2f(6.2, 1.5);
	glVertex2f(6.3, 1.9);
	glVertex2f(7.25, 1.9);
	glEnd();

	/*B,4,3,A*/
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex2f(7.4, 1.5);
	glVertex2f(7.25, 1.9);
	glVertex2f(6.3, 1.9);
	glVertex2f(6.2, 1.5);
	glEnd();

	/*y,z,2,x*/
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex2f(3, 1.5);
	glVertex2f(2.95, 1.9);
	glVertex2f(2, 1.9);
	glVertex2f(1.9, 1.5);
	glEnd();
}

void drawCarFrontGlass()
{
	glBegin(GL_POLYGON);
	glVertex2f(3.5, 3.8);
	glVertex2f(3.1, 3.1);
	glVertex2f(3.75, 3);
	glVertex2f(4.1, 3.7);
	glEnd();
}
void drawCarDoor()
{
	glBegin(GL_POLYGON);
	glColor3f(1, 0.9, 0);
	glVertex2f(0, 0);   /*d*/
	glVertex2f(0, 1.3); /*e*/
	glVertex2f(2, 1.3);    /*b*/
	glVertex2f(2, 0);  /*c*/
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(0.4, 2.1);  /*f*/
	glVertex2f(2, 2.1);  /*a*/
	glVertex2f(2, 1.3);    /*b*/
	glVertex2f(0, 1.3); /*e*/
	glEnd();
}

void drawCarWindow()
{
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(5.7, 3.8);
	glVertex2f(5.7, 3);
	glVertex2f(7.5, 3);
	glVertex2f(7.2, 3.8);
	glEnd();
}

void drawCarIndicator()
{
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex2f(8.1, 2.25);
	glVertex2f(7.7, 2.25);
	glVertex2f(7.7, 2.7);
	glVertex2f(8.1, 2.7);
	glEnd();
}
double i;
void drawCarWheel()
{
	drawCarBackWheel();
	drawCarFrontWheel();
}

void drawCarBackWheel()
{
	/* back wheel*/
	for (i = 0; i <= 360; i++)
	{
		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex2f(cos(i)*0.5 + 6.9, sin(i)*0.3 + 1.5);
	}
	glEnd();

	for (i = 0; i <= 360; i++)
	{
		glBegin(GL_POLYGON);
		glColor3f(1, 1, 1);
		glVertex2f(cos(i)*0.2 + 6.9, sin(i)*0.1 + 1.5);
	}
	glEnd();

}
void drawCarFrontWheel()
{
	glPushMatrix();
	//	glLoadIdentity();
	glTranslatef(-4.5, 0, 0);
	drawCarBackWheel();
	glPopMatrix();

}

void keys(int key, int x, int y)
{
	if (key == GLUT_KEY_UP)
	{
		MOVEFORWARD = 0;
		OPENDOOR = 0;
		//		RESEARCHER=0;
		glutPostRedisplay();
	}

	else if (key == GLUT_KEY_DOWN)
	{

		//glutIdleFunc(NULL);
		MOVEFORWARD = -1;
		OPENDOOR = 1;

		x2 = carPos;
		y2 = 0;
		RESEARCHER = 1;
		/*		glPushMatrix();

		walk();
		drawOR();
		glPopMatrix();
		*/

	}
	else if (key == GLUT_KEY_RIGHT)
	{

		MOVEFORWARD = 1;
		OPENDOOR = 0;
		//	RESEARCHER=0;
		glutPostRedisplay();
	}

	else if (key == GLUT_KEY_LEFT)
	{
		//STARTWALK=0;
		MOVEFORWARD = -1;
		//OPENDOOR=1;
		RESEARCHER = -1;
		x = carPos;
		OPENDOOR = 0;
		glutPostRedisplay();
	}
}
void drawRoad()
{
	glBegin(GL_POLYGON);
	glColor3f(0.3, 0.3, 0.3);
	glVertex2f(-13, 3);
	glVertex2f(13, 3);
	glVertex2f(13, 0);
	glVertex2f(-13, 0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.3, 0.3, 0.3);
	glVertex2f(-13, 7);
	glVertex2f(13, 7);
	glVertex2f(13, 4);
	glVertex2f(-13, 4);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.3, 0.8, 0.3);
	glVertex2f(-13, 3);
	glVertex2f(13, 3);
	glVertex2f(13, 4);
	glVertex2f(-13, 4);
	glEnd();

}

void drawCarSeat()
{
	glBegin(GL_POLYGON);
	glColor3f(0.9, 0.9, 0.9);
	glVertex2f(5.5, 3.7);
	glVertex2f(5.5, 2);
	glVertex2f(5, 2);
	glVertex2f(5.5, 3.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(5.5, 2);
	glVertex2f(4, 2);
	glVertex2f(4, 2.5);
	glVertex2f(5.5, 2.5);
	glEnd();

}


void drawOR()
{
	drawOrManBody();
	drawOrHands();
	drawOrLegs();
	drawOrHead();
	drawOrHair();
	drawOrMouth();

	drawOrNose();
	glPushMatrix();
	glTranslatef(0.31, 0, 5);
	drawOrNose();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.16, -0.07, 5);
	drawOrNose();
	glPopMatrix();



	drawOrEyes();
	glPushMatrix();
	glTranslatef(1, 0, 5);
	drawOrEyes();
	glPopMatrix();

	drawOrEyeLashe();
	glPushMatrix();
	glTranslatef(1, 0, 5);
	drawOrEyeLashe();
	glPopMatrix();
	//	drawEyeLashe();

}

void drawOrManBody()
{
	drawOrShirt();
	drawOrTie();
}

void drawOrShirt()
{
	/* 22,1,9,8,6,5,21,20,19,18,17,16,15,23*/
	glBegin(GL_POLYGON);

	glColor3f(0, 0, 1);
	glVertex2f(2.75, 7.25);
	glVertex2f(2.1, 6.6);
	glVertex2f(2.4, 5.8);
	glVertex2f(2.4, 5.4);
	glVertex2f(2.25, 5);
	glVertex2f(2, 4.6);
	glVertex2f(1.85, 4.4);
	glVertex2f(2, 4.4);
	glVertex2f(2.4, 4.35);
	glVertex2f(2.6, 4.4);
	glVertex2f(2.75, 4.7);
	glVertex2f(2.9, 5.1);
	glVertex2f(3, 5.7);
	glVertex2f(2.8, 6.4);
	glEnd();

	/*26,25,15,32,34,35,36,37,38,39,40*/
	glBegin(GL_POLYGON);
	glVertex2f(3.3, 7.35);
	glVertex2f(3.3, 6.4);
	glVertex2f(3, 5.7);
	glVertex2f(3.2, 5.1);
	glVertex2f(3.4, 4.4);
	glVertex2f(3.7, 4.35);
	glVertex2f(3.9, 4.4);
	glVertex2f(4.2, 4.4);
	glVertex2f(3.8, 5.5);
	glVertex2f(4, 5.9);
	glVertex2f(4.15, 6.45);
	glEnd();

	/*collar*/
	glBegin(GL_POLYGON);
	glColor3f(0.2, 0.2, 1);
	glVertex2f(2.7, 7.6);
	glVertex2f(2.45, 7.2);
	glVertex2f(2.6, 6.9);
	glVertex2f(2.55, 6.5);
	glVertex2f(2.65, 6.2);
	glVertex2f(3, 5.7);
	glVertex2f(2.8, 6.4);
	glVertex2f(2.75, 7.25);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(3.25, 7.6);
	glVertex2f(3.3, 7.35);
	glVertex2f(3.3, 6.4);
	glVertex2f(3, 5.7);
	glVertex2f(3.4, 6.2);
	glVertex2f(3.5, 6.5);
	glVertex2f(3.45, 6.9);
	glVertex2f(3.6, 7.2);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(2.6, 4.4);
	glVertex2f(3.4, 4.4);
	glEnd();
}

void drawOrTie()
{
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex2f(2.7, 7.6);
	glVertex2f(2.75, 7.25);
	glVertex2f(2.9, 7);
	glVertex2f(3, 7.4);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(3.25, 7.6);
	glVertex2f(3, 7.4);
	glVertex2f(3.2, 7);
	glVertex2f(3.3, 7.35);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(2.9, 7);
	glVertex2f(3, 6.85);
	glVertex2f(3.15, 6.85);
	glVertex2f(3.2, 7);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0);
	glVertex2f(3.05, 6.8);
	glVertex2f(2.8, 6.4);
	glVertex2f(3, 5.7);
	glVertex2f(3.3, 6.4);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(3, 5.7);
	glVertex2f(2.9, 5.1);
	glVertex2f(3, 4.7);
	glVertex2f(3.2, 5.1);
	glEnd();
}

void drawOrHands()
{
	glBegin(GL_POLYGON);
	glColor3f(0.2, 0.2, 0.2);
	glVertex2f(2.1, 6.6);
	glVertex2f(1.9, 6.4);
	glVertex2f(1.7, 5.2);
	glVertex2f(1.7, 4.8);
	glVertex2f(2, 4.6);
	glVertex2f(2.25, 5);
	glVertex2f(2.2, 5.5);
	glVertex2f(2.4, 5.8);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(4, 5.9);
	glVertex2f(4.15, 6.45);
	glVertex2f(4.5, 5.9);
	glVertex2f(5, 6.4);
	glVertex2f(5.15, 5.9);
	glVertex2f(4.4, 5.35);
	glEnd();
}

void drawOrLegs()
{
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(2, 4.4);
	glVertex2f(2.2, 3.5);
	glVertex2f(3, 3.9);
	glVertex2f(3, 4.4);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(2.2, 3.5);
	glVertex2f(2.2, 2.6);
	glVertex2f(2.6, 2.6);
	glVertex2f(3, 3.9);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(2.2, 2.6);
	glVertex2f(2.2, 2.4);
	glVertex2f(2.55, 2.4);
	glVertex2f(2.6, 2.6);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(2.2, 2.4);
	glVertex2f(1.9, 1.5);
	glVertex2f(2, 1.49);
	glVertex2f(2.4, 1.49);
	glVertex2f(2.4, 1.45);
	glVertex2f(2.55, 2.4);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(3, 4.4);
	glVertex2f(3, 3.9);
	glVertex2f(3.7, 3.25);
	glVertex2f(3.75, 4.4);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(3, 3.9);
	glVertex2f(3.7, 3.25);
	glVertex2f(3.6, 2.75);
	glVertex2f(3.2, 1.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(3.6, 2.75);
	glVertex2f(3.2, 1.5);
	glVertex2f(3.6, 1.5);
	glEnd();

	/*	this for shoe*/


}

void drawOrHead()
{
	double i;
	for (i = 0; i <= 360; i++)
	{
		glBegin(GL_POLYGON);
		glColor3f(0.9, 0.8, 0.8);
		glVertex2d(cos(i)*0.85 + 3, sin(i)*0.85 + 8.5);

	}
	glEnd();
}

void drawOrEyes()
{


	double i;
	for (i = 0; i <= 360; i++)
	{
		glColor3f(0, 0, 0);
		glBegin(GL_POINTS);
		glVertex2d(cos(i)*0.18 + 2.5, sin(i)*0.15 + 8.5);
		glEnd();
	}

}
void drawOrEyeLashe()
{
	double i, j;
	for (i = 0; i<180; i++)
	{
		j = (i*3.14) / 180;
		glBegin(GL_POINTS);
		glVertex2d(cos(j)*0.18 + 2.5, sin(j)*0.15 + 8.7);
		glEnd();
	}
}

void drawOrMouth()
{
	double i, j;
	for (i = 180; i<360; i++)
	{
		j = (i*3.14) / 180;
		glColor3f(1, 0, 0);
		glBegin(GL_POINTS);
		glVertex2d(cos(j)*0.3 + 3.05, sin(j)*0.15 + 8.13);
		glEnd();
	}

	glBegin(GL_LINE_LOOP);
	glVertex2f(2.84, 8);
	glVertex2f(2.92, 7.8);
	glVertex2f(3.15, 7.8);
	glVertex2f(3.2, 8);
	glEnd();
}

void drawOrNose()
{
	double i, j;
	for (i = 180; i<360; i++)
	{
		j = (i*3.14) / 180;
		glBegin(GL_POINTS);
		glVertex2d(cos(j)*0.09 + 2.89, sin(j)*0.09 + 8.33);
		glEnd();
	}
}

void drawOrHair()
{
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(2.2, 8.5);
	glVertex2f(2.2, 9);
	glVertex2f(2, 8.9);
	glVertex2f(2.1, 9.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(2.1, 9.5);
	glVertex2f(2.2, 9);
	glVertex2f(2.75, 9.45);
	glVertex2f(2.7, 9.7);
	glVertex2f(2.65, 10);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(2.68, 10);
	glVertex2f(2.69, 9.7);
	glVertex2f(2.76, 9.45);
	glVertex2f(3.2, 9.1);
	glVertex2f(3.4, 10.35);
	glVertex2f(3, 10.35);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(3.2, 9.1);
	glVertex2f(3.85, 9.45);
	glVertex2f(3.4, 10.35);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(3.4, 9.3);
	glVertex2f(3.85, 9.45);
	glVertex2f(3.75, 8.7);
	glEnd();
}



void walk()
{
	if (y2>-4)
	{
		//glTranslatef(x2,y2,0);
		x2 = x2 - 0.005;
		y2 = y2 - 0.005;

	}
	glTranslatef(x2, y2, 5);


	glutPostRedisplay();
}



/* declaration of function for TILLER */
void drawTillerWheel();
void drawTiller();
void drawMachineBody();
void drawFarmer1();
/* definition of functions*/
void display5()
{
	CreateWindow1 = 0;
	CreateWindow2 = 0;
	CreateWindow3 = 0;
	CreateWindow4 = 0;
	CreateWindow5 = 0;
	CreateWindow6 = 0;
	CreateWindow7 = 0;
	CreateWindow8 = 0;
	CreateWindow9 = 0;
	CreateWindow10 = 0;
	CreateWindow11 = 0;
	CreateWindow12 = 0;
	CreateWindow13 = 0;

	//glClearColor(0, 0.41, 0.5, 0);
	//glClearColor(0.8,0.6,0.7,1);
	glClearColor(0.6,0.3,0.2,0);
	//glEnable(GL_DEPTH_TEST);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-20, 20, -20, 20, -20, 20);
	glMatrixMode(GL_MODELVIEW);

	for(int i = 0; i<40 ; i = i+2)
	{
	glPushMatrix();
	glTranslatef(0,i,0);
	drawLines();
	glPopMatrix();
	}

/*	glPushMatrix();
	glTranslatef(0, 3.5, 0);
	glScalef(2, 1.2, 1);
	drawRoad();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.5, 0.5, 0.5);
	glTranslatef(0, 24.5, 0);
	drawTree();
	glPushMatrix();
	glTranslatef(-20, 0, 0);
	drawTree();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(20, 0, 0);
	drawTree();
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glScalef(4, 1, 0.5);
	glTranslatef(0, -3, 0);
	glColor3f(0.3, 0.15, 0);
	//drawpaddyField();
	glPopMatrix();
*/
	//float z;
	/*if(y>10)
	{
		glTranslatef(x,y,z);
	}
	*/
	glPushMatrix();
	if (x > 17){
		y += 2;
		DIRECT_FRONT = 0;
	}
	else if (x < -17){
		DIRECT_FRONT = 1;
		y += 2;
	}

	if (DIRECT_FRONT == 1)
		Plough(); /*this for movement*/
	else if (DIRECT_FRONT == 0)
		uturn();
	else
		hold();

	glDisable(GL_DEPTH_TEST);
	
		glColor3f(0.8,0.91,0.8);
	glRectf(-50,1.5,50,50);
	glRectf(0,-0.5,50,2);
	glEnable(GL_DEPTH_TEST);

	glPushMatrix();
	glTranslatef(-3,7,0);
	drawTiller();
	glPopMatrix();
	glPopMatrix();

	spin();

	glColor3f(1, 0, 0);
	
	char s53[] = { "The End.."};
	glRasterPos2f(0, -18);
		for (int i = 0; i<strlen(s53); i++)
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s53[i]);
		glColor3f(1, 0, 0);
	
	char s8[]=  {"Press 'e' to Exit"};
		glRasterPos2f(10, -19);
		for (int i = 0; i<strlen(s8); i++)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s8[i]);
	
	glFlush();
	glutSwapBuffers();
}
void drawTiller()
{
	glPushMatrix();
	glTranslatef(0, -10.8, 0);
	drawFarmer1();
	glPopMatrix();

//	glPushMatrix();
//	glRotatef(SpinAngle,0,0,1);
//	SpinAngle+=0.1;
	drawTillerWheel();
//	glPopMatrix();
	drawMachineBody();

}

void drawMachineBody()
{
	glColor3f(0.4, 0, 1);
	/* K,M,G,J*/
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0, 0);
	glVertex2f(12.5, -2.7);
	glVertex2f(12, -2.5);
	glVertex2f(12, -4);
	glVertex2f(12.5, -3.6);
	glEnd();

	/*M,N,O,G*/
	glBegin(GL_LINE_LOOP);
	glColor3f(0.3, 0.6, 0.6);
	glVertex2f(12, -2.5);
	glVertex2f(9, -2.5);
	glVertex2f(9, -4);
	glVertex2f(12, -4);
	glEnd();

	/*H,G,F,$,E */
	glBegin(GL_POLYGON);
	glColor3f(0, 1, 1);
	glVertex2f(9.8, -4);
	glVertex2f(12, -4);
	glVertex2f(12, -5.2);
	glVertex2f(11.6, -5.6);
	glVertex2f(9.8, -5.6);
	glEnd();

	/* G,I,F*/
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex2f(12, -4);
	glVertex2f(12.2, -4.8);
	glVertex2f(12, -5.2);
	glEnd();

	/*E,A,B,D,C,B*/
	/*	glBegin(GL_LINE_STRIP);
	glVertex2f(9.8,-5.6);
	glVertex2f(12,-5.6);
	glVertex2f(12,-6.2);
	glVertex2f(9,-6.2);
	glVertex2f(9.2,-7.1);
	glVertex2f(12,-6.2);
	glEnd();
	*/
	/*P,Q,T,R,S,O*/
	glBegin(GL_POLYGON);
	glColor3f(0.5, 1, 1);
	glVertex2f(9, -3.8);
	glVertex2f(7.7, -3.8);
	glVertex2f(7.7, -4.2);
	glVertex2f(9.5, -4.2);
	glVertex2f(9.5, -4);
	glVertex2f(9, -4);
	glEnd();

	/*S,R,g,h,1,H*/
	glBegin(GL_POLYGON);
	glVertex2f(9.5, -4);
	glVertex2f(9.5, -4.2);
	glVertex2f(7.7, -4.2);
	glVertex2f(7.8, -5);
	glVertex2f(9.8, -5);
	glVertex2f(9.8, -4);
	glEnd();

	/* U,V,W,X,Y,T*/
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex2f(6.9, -4.2);
	glVertex2f(6.9, -3.2);
	glVertex2f(7.1, -3);
	glVertex2f(7.5, -3);
	glVertex2f(7.7, -3.2);
	glVertex2f(7.7, -4.2);
	glEnd();

	/*W,X,a,Z*/
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 1);
	glVertex2f(7.1, -3);
	glVertex2f(7.5, -3);
	glVertex2f(7.5, -2);
	glVertex2f(7.1, -2);
	glEnd();

	/*c,d,e,f*/
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex2f(6.9, -2);
	glVertex2f(7.1, -1.5);
	glVertex2f(7.5, -1.5);
	glVertex2f(7.7, -2);
	glEnd();

	/*i,j,h,g,U */
	glBegin(GL_POLYGON);
	glColor3f(0.3, 1, 1);
	glVertex2f(4, -3.8);
	glVertex2f(4, -4);
	glVertex2f(7.8, -5);
	glVertex2f(7.7, -4.2);
	glVertex2f(6.9, -4.2);
	glEnd();

	/*l,m,h,k*/
	glBegin(GL_POLYGON);
	glVertex2f(5.5, -4.8);
	glVertex2f(5.8, -4.6);
	glVertex2f(7.8, -5);
	glVertex2f(7.8, -5.3);
	glEnd();

	/*n,o,p,l*/
	glBegin(GL_POLYGON);
	glVertex2f(5.5, -5);
	glVertex2f(1.7, -5);
	glVertex2f(1.78, -4.5);
	glVertex2f(5.5, -4.8);
	glEnd();

	/*q,r,s,t,u,v,w*/
	glBegin(GL_POLYGON);
	glColor3f(0.4, 0.4, 0.2);
	glVertex2f(3.8, -5);
	glVertex2f(2.5, -6.2);
	//glVertex2f(3.2,-7.9);
	//glVertex2f(4.8,-7.9);
	glVertex2f(5, -6.8);
	glVertex2f(5.3, -5.8);
	glVertex2f(5, -5);
	glEnd();

	/*r,s,t,u*/
	glBegin(GL_POLYGON);
	glColor3f(0, 0.6, 0);
	glVertex2f(2.5, -6.2);
	glVertex2f(3.2, -7.9);
	glVertex2f(4.8, -7.9);
	glVertex2f(5, -6.8);
	glEnd();

	/* s,x,y */
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0, 0);
	glVertex2f(3.2, -7.9);
	glVertex2f(3.2, -8.7);
	glVertex2f(3.6, -7.9);
	glEnd();


	/*2,3,4,v,u,t*/
	glBegin(GL_LINE_LOOP);
	glVertex2f(4.7, -8.3);
	glVertex2f(5.2, -8.5);
	glVertex2f(5.8, -6);
	//glVertex2f(5.1,-5.8);
	glVertex2f(5.3, -5.8);
	glVertex2f(5, -6.8);
	glVertex2f(4.8, -7.9);
	glEnd();

	/*10,11,12,13*/
	glBegin(GL_LINE_LOOP);
	glEnable(GL_DEPTH_TEST);
	glClear(GL_DEPTH_BUFFER_BIT);
	glColor3f(1, 0, 0);
	glVertex2f(9.8, -3);
	glVertex2f(10.9, -3);
	glVertex2f(10.9, -3.7);
	glVertex2f(9.8, -3.7);
	glEnd();

	/* h,1,E,A,B,D*/
	glBegin(GL_POLYGON);
	glColor3f(0.3, 1, 1);
	glVertex2f(7.8, -5);
	glVertex2f(9.8, -5);
	glVertex2f(9.8, -5.6);
	glVertex2f(12, -5.6);
	glVertex2f(12, -6.2);
	glVertex2f(9, -6.2);
	glEnd();

	/*B,D,C*/
	glBegin(GL_POLYGON);
	glColor3f(0.3, 1, 1);
	glVertex2f(12, -6.2);
	glVertex2f(9, -6.2);
	glVertex2f(9.2, -7.1);
	glEnd();

	/*4,v,w,n,k,H,1,E,D*/
	glBegin(GL_POLYGON);
	glColor3f(0.3, 1, 1);
	glVertex2f(5.8, -6);
	glVertex2f(5.3, -5.8);
	glVertex2f(5, -5);
	glVertex2f(5.5, -5);
	glVertex2f(7.8, -5.3);
	glVertex2f(9.8, -4);
	glVertex2f(9.8, -5);
	glVertex2f(9.8, -5.6);
	glVertex2f(9, -6.2);
	glEnd();


	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(9.8, -3.2);
	glVertex2f(10.9, -3.2);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(9.8, -3.5);
	glVertex2f(10.9, -3.5);
	glEnd();

	glBegin(GL_LINES);

	glVertex2f(1.78, -4.2);
	glVertex2f(1.2, -7);
	glEnd();

	glBegin(GL_LINES);

	glVertex2f(5.7, -4);
	glVertex2f(1.2, -2);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(1.2, -2);
	glVertex2f(0.35, -2);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(1.78, -4.2);
	glVertex2f(0.5, -4.2);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(0.5, -4.2);
	glVertex2f(-0.2, -4.7);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(1.2, -2);
	glVertex2f(1, -2.5);
	glVertex2f(1, -3.5);
	glVertex2f(1.2, -4.2);
	glEnd();

	/*support for back wheel*/
	glBegin(GL_LINE_STRIP);
	glVertex2f(0.9, -7);
	glVertex2f(0.95, -6.87);
	glVertex2f(1.45, -6.85);
	glVertex2f(1.4, -7.1);
	glEnd();


	/* for gear */
	glBegin(GL_LINES);
	glVertex2f(6.9, -4.2);
	glVertex2f(2, -2);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(2, -2);
	glVertex2f(2.2, -0.8);
	glEnd();

	glPointSize(7);
	glBegin(GL_POINTS);
	glColor3f(0, 0, 0);

	glVertex2f(2.2, -0.8);
	glEnd();
	glPointSize(1);

	glBegin(GL_LINE_LOOP);
	glVertex2f(2, -2.1);
	glVertex2f(1.8, -1.7);
	glVertex2f(2.1, -1.5);
	glVertex2f(2.3, -1.9);
	glEnd();

	/* front wheel*/
	//	drawWheel();
	/*for points */
	glPointSize(6);
	glBegin(GL_POINTS);

	glColor3f(0, 0, 0);

	glVertex2f(4.95, -8.1);
	glVertex2f(5.49, -6.1);

	glEnd();
	glPointSize(1);
	glFlush();
}
void drawTillerWheel()
{
	double x;
	float r = 1.5;
	for (x = 0; x <= 360; x++)
	{

		//	glEnable(GL_DEPTH_TEST);
		//	glClear(GL_DEPTH_BUFFER_BIT);
		glColor3f(0, 0, 0);
		glBegin(GL_POINTS);
		glVertex2d(cos(x)*r + 7.7, sin(x)*r - 7.2);
		glEnd();
	}


	for (x = 0; x <= 360; x++)
	{
		glBegin(GL_POLYGON);

		glColor3f(0, 0, 0);
		glVertex2d(cos(x) * 1 + 7.7, sin(x) * 1 - 7.2);

	}
	glEnd();

	/*back wheel*/
	for (x = 0; x <= 360; x++)
	{
		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex2d(cos(x)*0.9 + 0.93, sin(x)*0.9 - 7.95);
	}
	glEnd();

	/*circle on head*/
	for (x = 0; x <= 360; x++)
	{

		glBegin(GL_POINTS);
		//glEnable(GL_DEPTH_TEST);
		//glClear(GL_DEPTH_BUFFER_BIT);
		glColor3f(1, 1, 0);
		glVertex2d(cos(x)*0.25 + 12.23, sin(x)*0.25 - 3.2);
		glEnd();
	}

}
void drawFarmer1()
{
	glTranslatef(3, 0, 0);
	glColor3f(1, 0, 0.3);
	drawFarmerShirt();
	drawFarmerShort();
	drawFarmerHands();
	drawFarmerLegs();
	drawFarmerHead();
	drawFarmerFingers();

	glPushMatrix();
	glTranslatef(-0.4, -2.59, 0);
	drawFarmerFingers();
	glPopMatrix();

}


void keyboard(GLubyte key, int x, int y);
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	id1 = glutCreateWindow("INTRODUCTION");
	glutReshapeWindow(850, 680);
	glutDisplayFunc(display1);
	glutIdleFunc(spin);
	glutKeyboardFunc(keyboard);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutMainLoop();
}


void keyboard(GLubyte key, int x, int y)   // For keyboard interactive
{
	switch (key)
	{
	case '1': 
	if(CreateWindow1 == 1)
	{
		glutDestroyWindow(id1);
		id2 = glutCreateWindow("Certification");
//		glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

		glutDisplayFunc(display6);
		glutReshapeWindow(850, 680);	
		
		glutTimerFunc(1000, Mytimer, 0);
	//	glutSpecialFunc(arrow);
		glutKeyboardFunc(keyboard);
		glutMainLoop();
	}	
		break;
		

	case '2':
	if(CreateWindow2 == 1)
	{
		glutDestroyWindow(id2);
		id3 = glutCreateWindow("PLOUGHING FARMER");
		glutReshapeWindow(850, 680);
		glutDisplayFunc(display2);
		//glutIdleFunc(spin);
		glutTimerFunc(1000, Mytimer, 0);
		glutSpecialFunc(arrow);
		glutKeyboardFunc(keyboard);
		glutMainLoop();
	}
		break;

	case '3':
	if(CreateWindow3 == 1)
	{
		glutDestroyWindow(id3);
		id4 = glutCreateWindow("WORKERS");
		glutReshapeWindow(850, 680);
		glutDisplayFunc(display3);
		//glutIdleFunc(idle);
		glutTimerFunc(1000, Mytimer, 0);
		glutKeyboardFunc(keyboard);
		glutMainLoop();
	}
		break;
	case '4':
	if(CreateWindow4 == 1)
	{
		glutDestroyWindow(id4);
		id5 = glutCreateWindow("ROAD");
		glutReshapeWindow(850, 680);
		glutDisplayFunc(display4);
		// glutIdleFunc(Spin);
		glutTimerFunc(1000, Mytimer, 0);
		glutSpecialFunc(keys);
		glutKeyboardFunc(keyboard);
		glutMainLoop();
	}
		break;
	case '5':
	if(CreateWindow5 == 1)
	{
		glutDestroyWindow(id5);
		id6 = glutCreateWindow("Convo1");
		glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

		glutDisplayFunc(display7);
		glutReshapeWindow(850, 680);


		glutTimerFunc(1000, Mytimer, 0);
	//	glutSpecialFunc(arrow);
		glutKeyboardFunc(keyboard);
		glutMainLoop();
	}
		break;
	case '6':
	if(CreateWindow6 == 1)
	{
		glutDestroyWindow(id6);
		id7 = glutCreateWindow("Convo2");
		glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

		glutDisplayFunc(display8);
		glutReshapeWindow(850, 680);


		glutTimerFunc(1000, Mytimer, 0);
		//	glutSpecialFunc(arrow);
		glutKeyboardFunc(keyboard);
		glutMainLoop();
	}
		break;
	case '7':
	if(CreateWindow7 == 1)
	{
		glutDestroyWindow(id7);
		id8 = glutCreateWindow("Convo3");
		glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

		glutDisplayFunc(display9);
		glutReshapeWindow(850, 680);


		glutTimerFunc(1000, Mytimer, 0);
		//	glutSpecialFunc(arrow);
		glutKeyboardFunc(keyboard);
		glutMainLoop();
	}
		break;
	case '8':
	if(CreateWindow8 == 1)
	{
		glutDestroyWindow(id8);
		id9 = glutCreateWindow("Convo4");
		glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

		glutDisplayFunc(display10);
		glutReshapeWindow(850, 680);


		glutTimerFunc(1000, Mytimer, 0);
		//	glutSpecialFunc(arrow);
		glutKeyboardFunc(keyboard);
		glutMainLoop();
	}
		break;
	case '9':
	if(CreateWindow9 == 1)
	{
		glutDestroyWindow(id9);
		id10 = glutCreateWindow("Convo5");
		glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

		glutDisplayFunc(display11);
		glutReshapeWindow(850, 680);


		glutTimerFunc(1000, Mytimer, 0);
		//	glutSpecialFunc(arrow);
		glutKeyboardFunc(keyboard);
		glutMainLoop();
	}
		break;
	case 'z':
	if(CreateWindow10 == 1)
	{
		glutDestroyWindow(id10);
		id11 = glutCreateWindow("Convo6");
		glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

		glutDisplayFunc(display12);
		glutReshapeWindow(850, 680);


		glutTimerFunc(1000, Mytimer, 0);
		//	glutSpecialFunc(arrow);
		glutKeyboardFunc(keyboard);
		glutMainLoop();
	}
		break;

	case 'x':
	if(CreateWindow11 == 1)
	{
		glutDestroyWindow(id11);
		id12 = glutCreateWindow("Convo7");
		glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

		glutDisplayFunc(display13);
		glutReshapeWindow(850, 680);


		glutTimerFunc(1000, Mytimer, 0);
		//	glutSpecialFunc(arrow);
		glutKeyboardFunc(keyboard);
		glutMainLoop();
	}
		break;

	case 'c':
	if(CreateWindow12 == 1)
	{
		glutDestroyWindow(id12);
		id13 = glutCreateWindow("TILLER");
		glutReshapeWindow(850, 680);
		glutDisplayFunc(display5);
		// glutIdleFunc(spin);
		glutTimerFunc(1000, Mytimer, 0);
		glutSpecialFunc(arrow);
		glutKeyboardFunc(keyboard);
		glutMainLoop();
	}
		break;
		
	

	case 'e':
		exit(0);
		break;

	default:
		break;

	}
}

void Mytimer(int v)
{
	glutTimerFunc(1000, Mytimer, 20);
	glutPostRedisplay();
}