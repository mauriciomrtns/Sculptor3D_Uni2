#include <iostream>
#include <fstream>
#include <string>
#include "sculptor.h"

int main(void) {

//---------------------------PROJETO UNIDADE 2---------------------------//



  //---------------------------ESCULTOR PRINCIPAL-----------------------//
  Sculptor dk(30, 30, 30);

  //Definição do barril maciço

  dk.setColor(0.82, 0.41, 0.12, 0);
  dk.putEllipsoid(12, 11, 12, 13, 30, 13);

  //Corte para espaço interno do barril
  dk.cutEllipsoid(12, 20, 12, 10, 19, 10);
  dk.cutBox(0, 1, 0, 25, 0, 25);

  //Letra D
  dk.setColor(1, 0, 0, 1);

  //Reta Vertical do D
  dk.putVoxel(1, 16, 7);
  dk.putVoxel(1, 15, 7);
  dk.putVoxel(1, 14, 7);
  dk.putVoxel(1, 13, 7);
  dk.putVoxel(1, 12, 7);
  dk.putVoxel(1, 11, 7);
  dk.putVoxel(1, 10, 7);
  dk.putVoxel(1, 9, 7);
  dk.putVoxel(1, 8, 7);

  dk.putVoxel(1, 8, 8);
  dk.putVoxel(1, 8, 9);
  dk.putVoxel(1, 8, 10);
  dk.putVoxel(1, 9, 11);
  dk.putVoxel(1, 10, 12);
  dk.putVoxel(1, 11, 12);
  dk.putVoxel(1, 12, 12);
  dk.putVoxel(1, 13, 12);
  dk.putVoxel(1, 14, 12);
  dk.putVoxel(1, 15, 11);
  dk.putVoxel(1, 16, 10);
  dk.putVoxel(1, 16, 9);
  dk.putVoxel(1, 16, 8);

  //Letra K
  dk.setColor(1, 0, 0, 1);
  dk.putVoxel(1, 16, 14);
  dk.putVoxel(1, 15, 14);
  dk.putVoxel(1, 14, 14);
  dk.putVoxel(1, 14, 14);
  dk.putVoxel(1, 13, 14);
  dk.putVoxel(1, 12, 14);
  dk.putVoxel(1, 11, 14);
  dk.putVoxel(1, 10, 14);
  dk.putVoxel(1, 9, 14);
  dk.putVoxel(1, 8, 14);

  //"Perna" Superior do K
  dk.putVoxel(1, 12, 15);
  dk.putVoxel(1, 13, 16);
  dk.putVoxel(1, 14, 17);
  dk.putVoxel(1, 15, 18);

  //"Perna" Inferior do K
  dk.putVoxel(1, 13, 14);
  dk.putVoxel(1, 12, 14);
  dk.putVoxel(1, 11, 15);
  dk.putVoxel(1, 10, 16);
  dk.putVoxel(1, 9, 17);
  dk.putVoxel(1, 8, 18);


  std::cout << "O ARQUIVO donkeykong.off FOI CRIADO!" << std::endl;

  dk.writeOFF("donkeykong.off");

  //----------------------FIM DO ESCULTOR PRINCIPAL----------------//

}
