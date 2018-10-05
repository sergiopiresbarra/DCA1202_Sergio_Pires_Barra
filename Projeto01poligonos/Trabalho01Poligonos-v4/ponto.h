/**
 * CLASSE PONTO - AQUI ARMAZENA AS COORDENADAS X E Y DE UM PONTO;
 */
#ifndef PONTO_H
#define PONTO_H

/**
 * @brief The Ponto class
 */
class Ponto{
private:
    /**
   * @brief x
   */
  float x;
  /**
   * @brief y
   */
  float y;

public:
  /**
   * @brief Ponto
   * @param mx
   * @param my
   */
  Ponto(float mx=0, float my=0);
  ~Ponto(); //DESTRUTOR DO PONTO;
  /**
   * @brief setX
   * @param mx
   */
  void setX(float mx); //Define o valor da coordenada x do ponto;
  /**
   * @brief getX
   * @return
   */
  float getX(void);    //Recupera o valor da coordenada x do ponto;
  /**
   * @brief setY
   * @param my
   */
  void setY(float my); //Define o valor da coordenada y do ponto;
  /**
   * @brief getY
   * @return
   */
  float getY(void);    //Recupera o valor da coordenada y do ponto;
  /**
   * @brief print
   */
  void print(void);    //Imprime o ponto na forma (xpos, ypos);
  /**
   * @brief add
   * @param p
   */
  void add(Ponto p);   //Adiciona as coordenadas (x,y) do ponto com as coordenadas de um ponto P1(x1,y1) fornecido, armazenando o resultado (x+x1,y+y1) nas coordenadas de um novo ponto;
  /**
   * @brief sub
   * @param p
   */
  void sub(Ponto p);   //Subtrai as coordenadas (x,y) do ponto com as coordenadas de um ponto P1(x1,y1) fornecido, armazenando o resultado (x−x1,y−y1) nas coordenadas de um novo ponto;
  /**
   * @brief norma
   * @return
   */
  float norma(void);   //Calcula a distância do ponto para a origem do sistema de coordenadas;
  /**
   * @brief translada
   * @param a
   * @param b
   */
  void translada(float a, float b); //Translada o ponto (x,y) de (+a,+b), de modo que, após a execução do método, as coordenadas do ponto serão (x+a,y+b);
  /**
   * @brief setXY
   * @param mx
   * @param my
   */
  void setXY(float mx, float my);   //Define, em uma mesma função, os valores da coordenadas x e y do ponto;

};



#endif // PONTO_H
