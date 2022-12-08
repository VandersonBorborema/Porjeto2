#ifndef FIGURAGEOMETRICA
#define FIGURAGEOMETRICA
#include "sculptor.h"

class FiguraGeometrica{
protected:
  float r, g, b, a;
public:
  FiguraGeometrica(){};
  virtual void draw(Sculptor &s)=0;
  virtual ~FiguraGeometrica(){}
};



#endif
