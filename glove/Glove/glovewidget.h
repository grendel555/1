#ifndef GLOVEWIDGET_H
#define GLOVEWIDGET_H

#include <QWidget>
#include <QOpenGLWidget>

class GloveWidget : public QOpenGLWidget
{
    Q_OBJECT
public:
    explicit GloveWidget(QWidget *parent = 0);
protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int w,int h);

signals:

public slots:
};

#endif // GLOVEWIDGET_H
