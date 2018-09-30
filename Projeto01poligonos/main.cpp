#include <stdio.h>
#include "Ponto.h"
#include "Poligono.h"
#include "Retangulo.h"
int main()
{
    printf("Hello World");
   //Ponto p1;
   //p1=(2,3);
   //p1.print();
   //Poligono P=4;
   //P.print();
  // P.a[0].setXY(1,1);
   //P.a[1].setXY(1,2);
  // P.a[2].setXY(2,1);
  // P.a[3].setXY(2,2);
   //P.area();
   Retangulo R(0,0,3,4);
   R.print();
   R.area();
   R.translada(1,1);
   R.area();
   R.rotaciona(0,0,3.1415);
   R.area();
    return 0;
}
