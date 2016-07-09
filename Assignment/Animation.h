#ifndef MAIN_H
#define MAIN_H

void drawObjects();

void drawFromLight();

void drawFromCamera();

void renderShadow();

void changeScene();

int main(int argc, char** argv);

bool Init(void);

void Display(void);

void Reshape(int w, int h);

#endif
