#include "glovewidget.h"
#include <QOpenGLWidget>
GloveWidget::GloveWidget(QWidget *parent) : QOpenGLWidget(parent)
{

}
void GloveWidget::initializeGL(){
    glClearColor(0,0,0,1);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
}
void GloveWidget::paintGL(){
    glClear( GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
}
void GloveWidget::resizeGL(int w, int h){
    glViewport( 0, 0, w, h );
}
