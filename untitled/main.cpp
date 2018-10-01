//main
#include <iostream>
#include <cmath>
//#include "ponto.h"
//#include "poligono.h"
#include "retangulo.h"

using namespace std;

int main(){
    Retangulo Q(0,0,4,3);
    Q.print();
    Q.area();
    Q.translada(-3,4);
    Q.area();
    Q.rotaciona(-1,2.5,3.1415/6);
    Q.area();

  /*Ponto p1;
  Poligono poli;
  poli=4;
  poli.vertices();
  poli.a[0].setXY(1,1);
  poli.a[1].setXY(1,2);
  poli.a[2].setXY(2,2);
  poli.a[3].setXY(2,1);
  poli.area();
  poli.translada(0,0);
  //poli.rotaciona(0,0,2*3.1415);
  poli.print();
  Ponto p2(3,3);
  p1.setX(3);
  p1.setY(4);
  p1.print();
  p2.print();
  cout<<"getX: "<<p1.getX()<<"\n";
  cout<<"getY: "<<p1.getY()<<"\n";
  p1.add(p2);
  p1.sub(p2);
  p1.translada(5,5);
  p1.setXY(7,7);
  cout<<"getXY: ";
  p1.print();
  cout<<"\nprint P2:";
  p2.print();
  cout<<"norma de p1: "<<p1.norma()<<"\n";
  cout<<"norma de p2: "<<p2.norma()<<"\n";
*/
  return 0;
}
