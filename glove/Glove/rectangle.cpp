#include "rectangle.h"

Rectangle::Rectangle()
{

}
Rectangle::~Rectangle(){

}
void Rectangle::DrawCube(){
    /* create 3D-Cube */
        glBegin(GL_QUADS);

            //front
            glColor3f(1.0,0.0,0.0);

            glVertex3f(1.0,1.0,1.0);
            glVertex3f(-1.0,1.0,1.0);
            glVertex3f(-1.0,-1.0,1.0);
            glVertex3f(1.0,-1.0,1.0);


            //back

            glColor3f(0.0,1.0,0.0);

            glVertex3f(1.0,1.0,-1.0);
            glVertex3f(-1.0,1.0,-1.0);
            glVertex3f(-1.0,-1.0,-1.0);
            glVertex3f(1.0,-1.0,-1.0);


            //top
            //glColor3f(0.0,0.0,1.0);

            glVertex3f(-1.0,1.0,1.0);
            glVertex3f(1.0,1.0,1.0);
            glVertex3f(1.0,1.0,-1.0);
            glVertex3f(-1.0,1.0,-1.0);


            //bottom
            glColor3f(0.0,1.0,1.0);

            glVertex3f(1.0,-1.0,1.0);
            glVertex3f(1.0,-1.0,-1.0);
            glVertex3f(-1.0,-1.0,-1.0);
            glVertex3f(-1.0,-1.0,1.0);

            //right
            glColor3f(1.0,0.0,1.0);

            glVertex3f(1.0,1.0,1.0);
            glVertex3f(1.0,-1.0,1.0);
            glVertex3f(1.0,-1.0,-1.0);
            glVertex3f(1.0,1.0,-1.0);


            //left
            glColor3f(1.0,1.0,0.0);

            glVertex3f(-1.0,1.0,1.0);
            glVertex3f(-1.0,-1.0,1.0);
            glVertex3f(-1.0,-1.0,-1.0);
            glVertex3f(-1.0,1.0,-1.0);


        glEnd();
}
