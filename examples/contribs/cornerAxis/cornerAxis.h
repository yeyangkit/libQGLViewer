#include <QGLViewer/qglviewer.h>

class Viewer : public QGLViewer {
protected:
  virtual void draw();
  virtual void postDraw();
  virtual void init();
  virtual QString helpString() const;

private:
  void drawCornerAxis();
};
