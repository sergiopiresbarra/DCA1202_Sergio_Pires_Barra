/**
 * @brief Trabalho 01 - Tratamento de polígonos.
 * @author Sérgio Pires Barra/Felipe Eutrópio
 * @version 0.1
 * Esse Projeto possui 3 classes:
 * ponto.cpp e seu arquivo .h
 * poligono.cpp e seu arquivo .h
 * retangulo.cpp e seu arquivo .h
 */

#include <stdio.h>
#include "ponto.h"
#include <iostream>
using namespace std;
//#include "poligono.h"
#include "retangulo.h"

/**
 * @brief main
 * @return
 */
int main(){
    /**
    *TESTE DA CLASSE PONTO;
    *Ponto p(1,2), p2(1,1), p3(2,2);
    *p.print();
    *p.add(p2);
    *p.print();
    *p2.sub(p);
    *p2.print();
    *cout<<"p3="<<p3.norma();
    *p3.translada(5,5);
    */


    /**
    *TESTE DA CLASSE POLIGONO;
    *Poligono P=6;
    *float vx[6]={1,7,10,11,8,3};
    *float vy[6]={3,2,0,5,7,6};
    *for(int i=0; i<6; i++){
    *P.a[i].setXY(vx[i],vy[i]);
        }
    *P.print();
    *P.area();
    *P.centrodegravidade();
    *P.rotaciona(6.7,4.0,180);
    *P.area();
    *P.centrodegravidade();
    *P.rotaciona(6.7,4.0,-180);
    *P.area();
    *P.centrodegravidade();
    *P.translada(1,1);
    *P.centrodegravidade();
    */
   float posX, posY, alturaRetangulo, larguraRetangulo, xtran, ytran, xrot, yrot, teta;
   int opcao, W=1;
   cout<<"Digite a Posicao (x,y) do Retangulo:\n";
   cout<<"x= \n";
   cin>>posX;
   cout<<"y= \n";
   cin>>posY;
   cout<<"Digite a Altura e Largura do Retangulo:\n";
   cout<<"Altura=\n";
   cin>>alturaRetangulo;
   cout<<"Largura=\n";
   cin>>larguraRetangulo;
   Retangulo Q(posX,posY,larguraRetangulo,alturaRetangulo);
   while(W==1){
   cout<<"Escolha as opcoes:\n";
   cout<<"1-Imprimir os pontos do Retangulo na tela. 2-Calcular Area.\n";
   cout<<"3-Calcular o Centro de Gravidade. 4-transladar.\n";
   cout<<"5-rotacionar. 6-Definir um novo Retangulo. 7-sair.\n";
   cin>>opcao;
   switch(opcao)
   {
   case 1:
     Q.print();
     cout<<"\n";
       break;

   case 2:
     Q.area();
     cout<<"\n";
       break;
   case 3:
     Q.centrodegravidade();
     cout<<"\n";
       break;
   case 4:
     cout<<"Digite as coordenadas x e y da transladacao:\n";
     cout<<"x= \n";
     cin>>xtran;
     cout<<"y= \n";
     cin>>ytran;
     Q.translada(xtran,ytran);
     cout<<"\n";
       break;
   case 5:
     cout<<"Primeiro digite as coordenadas x e y do ponto em que voce deseja fazer a rotacao:\n";
     cout<<"x= \n";
     cin>>xrot;
     cout<<"y= \n";
     cin>>yrot;
     cout<<"Agora digite o angulo que vc quer rotacionar:\n";
     cin>>teta;
     Q.rotaciona(xrot,yrot,teta);
     cout<<"\n";
       break;
   case 6:
       cout<<"Digite a Posicao (x,y) do Retangulo:\n";
       cout<<"x= \n";
       cin>>posX;
       cout<<"y= \n";
       cin>>posY;
       cout<<"Digite a Altura e Largura do Retangulo:\n";
       cout<<"Altura=\n";
       cin>>alturaRetangulo;
       cout<<"Largura=\n";
       cin>>larguraRetangulo;
       Q.a[0].setXY(posX,posY);
       Q.a[1].setXY(posX+larguraRetangulo,posY);
       Q.a[2].setXY(posX+larguraRetangulo,posY-alturaRetangulo);
       Q.a[3].setXY(posX,posY-alturaRetangulo);
       cout<<"\n";
         break;
   case 7:
       W=0;
      break;
   default:
       cout<<"Digite outra opcao! - Caractere Invalido!.\n";
       cout<<"Saindo...\n";
       W=0;
       break;
   }
  }

    /**
    *TESTE DA CLASSE RETANGULO;
    *Retangulo Q(0,0,4,3);
    *Q.print();
    *Q.area();
    *Q.centrodegravidade();
    *Q.translada(-3,4);
    *Q.area();
    *Q.centrodegravidade();
    *Q.rotaciona(-1,2.5,30);
    *Q.area();
    *Q.centrodegravidade();
    *Q.rotaciona(-1,2.5,30);
    *Q.area();
    */
    return 0;
}
