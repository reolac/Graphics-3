//////////////////////////////////////////////////////////////////////////////////////////
//	Scene.cpp
//	Draw the scene for shadow mapping
//	Downloaded from: www.paulsprojects.net
//	Created:	16th September 2003
//
//	Copyright (c) 2006, Paul Baker
//	Distributed under the New BSD Licence. (See accompanying file License.txt or copy at
//	http://www.paulsprojects.net/NewBSDLicense.txt)
//////////////////////////////////////////////////////////////////////////////////////////	
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <stdio.h>
#include <GL/glut.h>
#include "Maths/Maths.h"
#include "scene.h"
#include <iostream>
#include "Animation.h"

using namespace std;

float pos = 0.0f;
float movement = 0.001f;

void DrawScene(float angle, unsigned int scene)
{
	float time = angle / 500;
	float rotation = angle / 2;

	glColor3f(1.0f, 1.0f, 1.0f);
	glPushMatrix();
	glScalef(1.0f, 0.05f, 1.0f);
	glutSolidCube(3.0f);
	glPopMatrix();

	if (scene < 10)
	{
		VECTOR3D lightPosition(2.0f, 3.0f, -2.0f);
		glColor3f(1.0f, 1.0f, 0.0f);
		glPushMatrix();
		glTranslatef(1.0f, 1.7f, -1.5f);
		glutSolidSphere(0.2, 24, 24);
		glPopMatrix();
	}
	
	if (scene == 1)
	{
		if (time > 0.75f)
		{
			resetTimer();
		}

		glPushMatrix();
		glColor3f(1.0f, 0.0f, 0.0f);
		glTranslatef(0.0f, 0.5f, 0.0f);
		glutSolidCube(0.5);
		glPopMatrix();
	}

	else if (scene == 2)
	{	
		glPushMatrix();
		glColor3f(1.0f, 0.0f, 0.0f);

		if (time <= 1.0f)
		{		
			glTranslatef(time, 0.5f, 0.0f);
		}

		else {
			glTranslatef(0.0f, 0.5f, 0.0f);
			resetTimer();
			
		}

		glutSolidCube(0.5);
		glPopMatrix();	
	}

	else if (scene == 3)
	{
		glPushMatrix();
		glColor3f(1.0f, 0.0f, 0.0f);

		if (time *-1 >= -2.3f)
		{
			glTranslatef(1 - time, 0.5f, 0.0f);
		}

		else {
			glTranslatef(0.0f, 0.5f, 0.0f);
			resetTimer();
		}

		glutSolidCube(0.5);
		glPopMatrix();
	}

	else if (scene == 4)
	{
		glPushMatrix();
		glColor3f(1.0f, 0.0f, 0.0f);

		if (time < 2.3f)
		{
			glTranslatef(1 - time, 0.5f, -1.3 + time);
		}

		else {
			glTranslatef(-1.3f, 0.5f, 1.0f);
			resetTimer();
		}

		glutSolidCube(0.5);
		glPopMatrix();
	}

	else if (scene == 5)
	{
		glPushMatrix();
		glColor3f(1.0f, 0.0f, 0.0f);

		if (time < 2.3f) {
			glTranslatef(-1.3f + time, 0.5f, 1.0f - time);
		}

		else {
			glTranslatef(1.0f, 0.5f, -1.3f);
			resetTimer();
		}

		glutSolidCube(0.5);
		glPopMatrix();
	}

	else if (scene == 6)
	{
		glPushMatrix();
		glColor3f(1.0f, 0.0f, 0.0f);

		if (time <= 2.3f)
		{
			glTranslatef(-1.3f + time, 1.0f, -0.5f);

		}

		else {
			glTranslatef(1.0f, 1.0f, -0.5f);
			resetTimer();
		}

		glutSolidCube(0.5);
		glPopMatrix();

	}

	else if (scene == 7)
	{
		glPushMatrix();
		glColor3f(1.0f, 0.0f, 0.0f);

		if (time <= 2.0f)
		{
			glTranslatef(1.0f, 0.5f + time, -1.0);
		}

		else {
			glTranslatef(1.0f, 1.5f, -1.0f);
			resetTimer();
		}

		glutSolidCube(0.5);
		glPopMatrix();
	}

	else if (scene == 8)
	{
		glPushMatrix();
		glRotatef(rotation, 0.0f, 1.0f, 0.0f);

		glColor3f(1.0f, 0.0f, 0.0f);
		glPushMatrix();
		glTranslatef(1.0f, 0.2f, 0.45f);
		glutSolidSphere(0.2, 24, 24);
		glPopMatrix();

		glPopMatrix();
	}

	else if (scene == 9)
	{
		glPushMatrix();
		glRotatef(rotation, 0.0f, 1.0f, 0.0f);

		glColor3f(1.0f, 0.0f, 0.0f);
		glPushMatrix();
		glTranslatef(0.2f, 0.2f, 0.5f);
		glutSolidSphere(0.2, 24, 24);
		glPopMatrix();

		glPushMatrix();
		glTranslatef(0.2f, 1.0f, 0.5f);
		glutSolidSphere(0.2, 24, 24);
		glPopMatrix();

		glPopMatrix();

		glColor3f(0.0f, 1.0f, 0.0f);
		glPushMatrix();
		glTranslatef(0.0f, 0.5f, -0.05f);
		glScalef(1.0f, 5.0f, 1.0f);
		glutSolidCube(0.5);
		glPopMatrix();
	}

	else if (scene == 10)
	{
		if (time > 0.75f)
		{
			resetTimer();
		}


		glColor3f(1.0f, 1.0f, 0.0f);
		glPushMatrix();

		glTranslatef(2.0f, 1.0f, -1.0f + angle / 100);
		glutSolidSphere(0.25, 22, 22);
		glPopMatrix();


		glPushMatrix();
		glColor3f(1.0f, 0.0f, 0.0f);
		glTranslatef(0.0f, 0.5f, 0.0f);
		glutSolidCube(0.5);
		glPopMatrix();
	}

	else if (scene == 11)
	{
		if (time > 0.75f)
		{
			resetTimer();
		}


		glColor3f(1.0f, 1.0f, 0.0f);
		glPushMatrix();
		glTranslatef(2.0f - angle / 100, 1.0f, 2.0f);
		glutSolidSphere(0.25, 22, 22);
		glPopMatrix();


		glPushMatrix();
		glColor3f(1.0f, 0.0f, 0.0f);
		glTranslatef(0.0f, 0.5f, 0.0f);
		glutSolidCube(0.5);
		glPopMatrix();
	}
}





