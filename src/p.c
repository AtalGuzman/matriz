#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main(int argc, char * argv[]){

  int cantidadH,i,j,h,suma;

//Leer la matriz 1 y matriz 2
  int temp2[6];
  int matrizA[8] = {2,3,1,2,3,1,2,3};
  int matrizB[8] = {3,2,1,1,2,2,3,3};
  if(matrizA[1]==matrizB[0]){
    temp2[0] = matrizA[1];
    temp2[1] = matrizB[0];
    for(i=0;i<matrizA[0];i++){
      for(j=0;j<matrizB[1];j++){
        suma = 0;
        for(h=0;h<matrizA[1];h++){
          suma = suma + matrizA[h+i*matrizA[1]+2]*matrizB[j+h*matrizB[1]+2];
        }
        temp2[j+i*matrizA[0]+2] = suma;
        printf("%d\n",suma);
      }
    }
  }

  /*if(matrizA[1]==matrizB[0]){
    temp2[0] = matrizA[0];
    temp2[1] = matrizB[1];
    for(i=0;i<matrizA[0];i++){
      for(j=0;j<matrizB[1];j++){
        suma = 0;
        for(h=0;h<matrizA[1];h++){
          suma = suma + matrizA[h+i*matrizA[1]+2]*matrizB[j+h*matrizB[1]+2];
        }
        temp2[j+i*matrizA[1]+2] = suma;
      }
    }
    for(i=0;i<temp2[0]*temp2[1]+2;i++){
      printf("%d\n",temp2[1]);
    }
    cantidadH =matrizA[1]*matrizB[0]+2;
  }*/
  //Enviar la matriz resultado
  //free(temp2);
  return 0;}
