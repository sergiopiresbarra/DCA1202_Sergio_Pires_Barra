// diretiva de compilacao condicional
#ifndef PONTO_H
#define PONTO_H

class Ponto{
private:
  float x;
  float y;
public:

  // construtor com argumentos
  Ponto(float mx=0, float my=0);
//  Vetor(float mxy);

  ~Ponto();

  void setX(float mx);
  float getX(void);
  void setY(float my);
  float getY(void);
  void print(void);
  void add(Ponto p);
  void sub(Ponto p);
  float norma(void);
  void translada(float a, float b);
  void setXY(float mx, float my);

};



#endif // PONTO_H
