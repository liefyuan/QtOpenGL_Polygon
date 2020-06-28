#ifndef MYWIDGET_H
#define MYWIDGET_H
#include <QOpenGLWidget>
#include <QOpenGLFunctions>

#include <QGLFramebufferObjectFormat>

class myWidget : public QOpenGLWidget, protected QOpenGLFunctions
{
public:
    explicit myWidget(QWidget *parent = 0);

protected:
    void initializeGL() Q_DECL_OVERRIDE;
    void resizeGL(int w, int h)Q_DECL_OVERRIDE;
    void paintGL()Q_DECL_OVERRIDE;
    void graficarLineas();

public:
    double rotate_y=0;
    double rotate_x=0;
    double rotate_z=0;
    private:
};

#endif // MYWIDGET_H
