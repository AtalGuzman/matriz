#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "archivos.h"

#define LEER 0
#define ESCRIBIR 1

int main(int argc, char* argv[]){
	int pid, cont, bandera,bandera2;
	int pipefd1[2];
	int pipefd2[2];
	//pipe(pipefd1);
	//pipe(pipefd2);
	/*Se inicializan todas las matrices en valores nulos*/
	char *intruccion = malloc(50*sizeof(char));
	int* A = NULL;
	int* B = NULL;
	int* C = NULL;
	int* D = NULL;
	int* E = NULL;
	int* F = NULL;
	int* G = NULL;
	int* H = NULL;
	int* I = NULL;
	int* J = NULL;
	int* K = NULL;
	int* L = NULL;
	int* M = NULL;
	int* N = NULL;
	int* O = NULL;
	int* P = NULL;
	int* Q = NULL;
	int* R = NULL;
	int* S = NULL;
	int* T = NULL;
	int* U = NULL;
	int* V = NULL;
	int* W = NULL;
	int* X = NULL;
	int* Y = NULL;
	int* Z = NULL;

	char a,b,c;
	char *ptr;
	char *s1;
	char buffer2[255];
	char s2[5]= " \n\t";
	while(1){

		printf(">>> ");
		fgets(buffer2,50,stdin);
		if(buffer2[0]!='\0' && buffer2[0]!='\n'){
			ptr = strtok( buffer2, s2 );
		}
		if(strcmp(ptr,"load")==0){
		//Hacer un case con cada una de las matrices
		//Ahí se guarda con el parámetros de la entrada
			if((ptr = strtok(NULL," \n"))!=NULL){
				if(strcmp(ptr,"A")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(A);
							A = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"B")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(B);
							B = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"C")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){

						if(verificar(ptr)) {
							free(C);
							C = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"D")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(D);
							D = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"E")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(E);
							E = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"F")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(F);
							F = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"G")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(G);
							G = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"H")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(H);
							H = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"I")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(I);
							I = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"J")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(J);
							J = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"K")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(K);
							K = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"L")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(L);
							L = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"M")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(M);
							M = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"N")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(N);
							N = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"O")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(O);
							O = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"P")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(P);
							P = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"Q")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(Q);
							Q = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"R")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(R);
							R = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"S")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(S);
							S = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"T")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(T);
							T = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"U")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(U);
							U = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"V")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(V);
							V = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"W")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(W);
							W = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"X")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(X);
							X = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"Y")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(Y);
							Y = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"Z")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(Z);
							Z = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else{
					printf("Error: El nombre de la matriz debe ser una letra mayúscula, excepto la Ñ\n");
				}
			}
			else{
				printf("Error: faltan parámetros \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
			}
		}
		else if(strcmp(ptr,"print")==0)
		{
			if((ptr = strtok(NULL," \n"))!=NULL){
				if(strcmp(ptr,"A")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(A);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"B")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(B);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"C")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(C);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"D")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(D);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"E")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(E);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"F")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(F);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"G")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(G);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"H")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(H);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"I")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(I);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"J")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(J);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"K")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(K);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"L")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(L);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"M")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(M);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"N")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(N);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"O")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(O);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"P")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(P);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"Q")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(Q);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"R")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(R);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"S")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(S);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"T")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(T);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"U")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(U);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"V")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(V);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"W")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(W);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"X")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(X);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"Y")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(Y);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"Z")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(Z);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else{
					printf("Error: El nombre de la matriz debe ser una letra mayúscula, excepto la Ñ\n");
				}
			}
			else{
				printf("Error: faltan parámetros \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
			}
		}
		else if(strcmp(ptr,"save")==0)
		{
			printf("Se guardó la matriz \n");
			if((ptr = strtok(NULL," \n"))!=NULL){
				if(strcmp(ptr,"A")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(A,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: save <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"B")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(B,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: save <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"C")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(C,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: save <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"D")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(D,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: save <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"E")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(E,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: save <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"F")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(F,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: save <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"G")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(G,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: save <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"H")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(H,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: save <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"I")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(I,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: save <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"J")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(J,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: save <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"K")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(K,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: save <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"L")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(L,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: save <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"M")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(M,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: save <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"N")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(N,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: save <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"O")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(O,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: save <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"P")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(P,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: save <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"Q")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(Q,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: save <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"R")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(R,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: save <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"S")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(S,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: save <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"T")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(T,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: save <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"U")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(U,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: save <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"V")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(V,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: save <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"W")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(W,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: save <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"X")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(X,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: save <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"Y")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(Y,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: save <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"Z")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(Z,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: save <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else{
					printf("Error: El nombre de la matriz debe ser una letra mayúscula, excepto la Ñ\n");
				}
			}
			else{
				printf("Error: faltan parámetros \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
			}
		}
		else if(strlen(ptr)==3){
			cont = 2;
			bandera = 0;
			bandera2= 0;
			int* copia = malloc(sizeof(int));
			while(cont>=0){
				if(ptr[cont] == 'A'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(A);
					}else{
						A = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'B'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(B);
					}else{
						B = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'C'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(C);
					}else{
						C = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'D'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(D);
					}else{
						D = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'E'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(E);
					}else{
						E = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'F'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(F);
					}else{
						F = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'G'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(G);
					}else{
						G = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'H'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(H);
					}else{
						H = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'I'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(I);
					}else{
						I = copiarMatriz(copia);
					};
				}else if(ptr[cont] == 'J'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(J);
					}else{
						J = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'K'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(K);
					}else{
						K = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'L'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(L);
					}else{
						L = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'M'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(M);
					}else{
						M = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'N'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(N);
					}else{
						N = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'O'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(O);
					}else{
						O = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'P'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(P);
					}else{
						P = copiarMatriz(copia);
					};
				}else if(ptr[cont] == 'Q'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(Q);
					}else{
						Q = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'R'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(R);
					}else{
						R = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'S'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(S);
					}else{
						S = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'T'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(T);
					}else{
						T = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'U'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(U);
					}else{
						U = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'V'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(V);
					}else{
						V = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'W'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(W);
					}else{
						W = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'X'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(X);
					}else{
						X = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'Y'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(Y);
					}else{
						Y = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'Z'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(Z);
					}else{
						Z = copiarMatriz(copia);
					}
				}
				cont =  cont - 2;
			}
			borrarMatriz(copia);
		}
		else if(strcmp(ptr,"clear")==0){
			if((ptr = strtok(NULL," \n"))!=NULL){
				if(strcmp(ptr,"A")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						if(A==NULL){
							 printf("Esta matriz no existe.\n");
						}else{
							borrarMatriz(A);
							A=NULL;
						}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"B")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						if(B==NULL){
							 printf("Esta matriz no existe.\n");
						}else{
							borrarMatriz(B);
							B=NULL;
						}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"C")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						if(C==NULL){
							 printf("Esta matriz no existe.\n");
						}else{

							borrarMatriz(C);
							C=NULL;
						}					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"D")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						if(D==NULL){
							 printf("Esta matriz no existe.\n");
						}else{

							borrarMatriz(D);
							D=NULL;
						}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"E")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						if(E==NULL){
							 printf("Esta matriz no existe.\n");
						}else{

							borrarMatriz(E);
							E=NULL;
						}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"F")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						if(F==NULL){
							 printf("Esta matriz no existe.\n");
						}else{

							borrarMatriz(F);
							F=NULL;
						}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"G")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						if(G==NULL){
							 printf("Esta matriz no existe.\n");
						}else{

							borrarMatriz(G);
							G=NULL;
						}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"H")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						if(H==NULL){
							 printf("Esta matriz no existe.\n");
						}else{

							borrarMatriz(H);
							H=NULL;
						}					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"I")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						if(I==NULL){
							 printf("Esta matriz no existe.\n");
						}else{

							borrarMatriz(I);
							I=NULL;
						}					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"J")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						if(J==NULL){
							 printf("Esta matriz no existe.\n");
						}else{

							borrarMatriz(J);
							J=NULL;
						}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"K")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						if(K==NULL){
							 printf("Esta matriz no existe.\n");
						}else{

							borrarMatriz(K);
							K=NULL;
						}					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"L")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						if(L==NULL){
							 printf("Esta matriz no existe.\n");
						}else{

							borrarMatriz(L);
							L=NULL;
						}					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"M")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						if(M==NULL){
							 printf("Esta matriz no existe.\n");
						}else{

							borrarMatriz(M);
							M=NULL;
						}					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"N")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						if(N==NULL){
							 printf("Esta matriz no existe.\n");
						}else{

							borrarMatriz(N);
							N=NULL;
						}					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"O")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						if(O==NULL){
							 printf("Esta matriz no existe.\n");
						}else{

							borrarMatriz(O);
							O=NULL;
						}					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"P")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						if(P==NULL){
							 printf("Esta matriz no existe.\n");
						}else{

							borrarMatriz(P);
							P=NULL;
						}					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"Q")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						if(Q==NULL){
							 printf("Esta matriz no existe.\n");
						}else{

							borrarMatriz(Q);
							Q=NULL;
						}					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"R")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						if(R==NULL){
							 printf("Esta matriz no existe.\n");
						}else{

							borrarMatriz(R);
							R=NULL;
						}					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"S")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						if(S==NULL){
							 printf("Esta matriz no existe.\n");
						}else{

							borrarMatriz(S);
							S=NULL;
						}					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"T")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						if(T==NULL){
							 printf("Esta matriz no existe.\n");
						}else{

							borrarMatriz(T);
							T=NULL;
						}					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"U")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						if(U==NULL){
							 printf("Esta matriz no existe.\n");
						}else{

							borrarMatriz(U);
							U=NULL;
						}					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"V")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						if(V==NULL){
							 printf("Esta matriz no existe.\n");
						}else{

							borrarMatriz(V);
							V=NULL;
						}					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"W")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						if(W==NULL){
							 printf("Esta matriz no existe.\n");
						}else{

							borrarMatriz(W);
							W=NULL;
						}					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"X")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						if(X==NULL){
							 printf("Esta matriz no existe.\n");
						}else{

							borrarMatriz(X);
							X=NULL;
						}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"Y")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						if(Y==NULL){
							printf("Esta matriz no existe.\n");
						}else{
							borrarMatriz(Y);
							Y=NULL;
						}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"Z")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						if(Z==NULL){
							 printf("Esta matriz no existe.\n");
						}else{

							borrarMatriz(Z);
							Z=NULL;
						}					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else{
					printf("Error: El nombre de la matriz debe ser una letra mayúscula, excepto la Ñ\n");
				}
			}
			else{
				printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
			}
		}else if(strlen(ptr)==5 || ptr[3] == '*'){

			pipe(pipefd1);
			pipe(pipefd2);
			pid = fork();
			cont = 1;

			if (pid == 0) {

				close(pipefd1[LEER]); //Solo puede escribir en pipefd1
				close(pipefd2[ESCRIBIR]); //solo puede leer en pipefd2

				dup2(pipefd1[ESCRIBIR],STDOUT_FILENO);
				dup2(pipefd2[LEER],STDIN_FILENO);
				if(ptr[3]=='+'){
					execl("suma2","ls","-al",NULL);
				}else if(ptr[3] == '-'){
					execl("resta2","ls","-al",NULL);
				}else if((ptr[3] == '*') && (ptr[4] == '0' || ptr[4] == '1' || ptr[4] == '2' || ptr[4] == '3' || ptr[4] == '4' || ptr[4] == '5' || ptr[4] == '6' || ptr[4] == '7' || ptr[4] == '8' || ptr[4] == '9')){
					execl("multiplicacion2_c","ls","-al",NULL);
				}else if(ptr[3] == '*'){
					execl("multiplicacion2","ls","-al",NULL);
				}
			}else {
				close(pipefd1[ESCRIBIR]); //solo puede leer en pipefd1
				close(pipefd2[LEER]); //solo puede escribir en pipefd2
				int * temp;
				int cantidad = 0;
				int k,l, constante;
				int mul_c = 0;
				cont = 2;
				bandera = 0;
				bandera2=0;
				while(cont<5){
					if(ptr[cont]=='\0'){
						bandera2=0;
						break;
					}
					if(ptr[cont] == 'A'){
						if(A!=NULL){
							if(bandera == 0){
								cantidad = cantidad + A[0]*A[1]+2;
							}else if(cont == 2){
								for ( k = 0; k < (A[0]*A[1]+2); k++) {
									temp[k]=A[k];
								}
							}else if(cont == 4){
								l = temp[0]*temp[1]+2;
								for ( k = l; k < cantidad; k++) {
									temp[k]=A[k-l];
								}
							}
							bandera2=1;
						}
						else{
							bandera2=0;
							printf("La matriz A no existe.\n");
							break;
						}
					}
					else if(ptr[cont] == 'B'){
						if(B!=NULL){
							if(bandera == 0){
								cantidad = cantidad + B[0]*B[1]+2;
							}else if(cont == 2){
								for ( k = 0; k < (B[0]*B[1]+2); k++) {
									temp[k]=B[k];
								}
							}else if(cont == 4){
								l = temp[0]*temp[1]+2;
								for ( k = l; k < cantidad; k++) {
									temp[k]=B[k-l];
								}
							}
							bandera2=1;
						}
						else{
							bandera2=0;
							printf("La matriz B no existe.\n");
							break;
						}
					}else if(ptr[cont] == 'C'){
						if(C!=NULL){
							if(bandera == 0){
								cantidad = cantidad + C[0]*C[1]+2;
							}else if(cont == 2){
								for ( k = 0; k < (C[0]*C[1]+2); k++) {
									temp[k]=C[k];
								}
							}else if(cont == 4){
								l = temp[0]*temp[1]+2;
								for ( k = l; k < cantidad; k++) {
									temp[k]=C[k-l];
								}
							}
							bandera2=1;
						}
						else{
							bandera2=0;
							printf("La matriz C no existe.\n");
							break;
						}
					}else if(ptr[cont] == 'D'){
						if(D!=NULL){
							if(bandera == 0){
								cantidad = cantidad + D[0]*D[1]+2;
							}else if(cont == 2){
								for ( k = 0; k < (D[0]*D[1]+2); k++) {
									temp[k]=D[k];
								}
							}else if(cont == 4){
								l = temp[0]*temp[1]+2;
								for ( k = l; k < cantidad; k++) {
									temp[k]=D[k-l];
								}
							}
							bandera2=1;
						}
						else{
							bandera2=0;
							printf("La matriz D no existe.\n");
							break;
						}
					}else if(ptr[cont] == 'E'){
						if(E!=NULL){
							if(bandera == 0){
								cantidad = cantidad + E[0]*E[1]+2;
							}else if(cont == 2){
								for ( k = 0; k < (E[0]*E[1]+2); k++) {
									temp[k]=E[k];
								}
							}else if(cont == 4){
								l = temp[0]*temp[1]+2;
								for ( k = l; k < cantidad; k++) {
									temp[k]=E[k-l];
								}
							}
							bandera2=1;
						}
						else{
							bandera2=0;
							printf("La matriz E no existe.\n");
							break;
						}
					}else if(ptr[cont] == 'F'){
						if(F!=NULL){
							if(bandera == 0){
								cantidad = cantidad + F[0]*F[1]+2;
							}else if(cont == 2){
								for ( k = 0; k < (F[0]*F[1]+2); k++) {
									temp[k]=F[k];
								}
							}else if(cont == 4){
								l = temp[0]*temp[1]+2;
								for ( k = l; k < cantidad; k++) {
									temp[k]=F[k-l];
								}
							}
							bandera2=1;
						}
						else{
							bandera2=0;
							printf("La matriz F no existe.\n");
							break;
						}
					}else if(ptr[cont] == 'G'){
						if(G!=NULL){
							if(bandera == 0){
								cantidad = cantidad + G[0]*G[1]+2;
							}else if(cont == 2){
								for ( k = 0; k < (G[0]*G[1]+2); k++) {
									temp[k]=G[k];
								}
							}else if(cont == 4){
								l = temp[0]*temp[1]+2;
								for ( k = l; k < cantidad; k++) {
									temp[k]=G[k-l];
								}
							}
							bandera2=1;
						}
						else{
							bandera2=0;
							printf("La matriz G no existe.\n");
							break;
						}
					}else if(ptr[cont] == 'H'){
						if(H!=NULL){
							if(bandera == 0){
								cantidad = cantidad + H[0]*H[1]+2;
							}else if(cont == 2){
								for ( k = 0; k < (H[0]*H[1]+2); k++) {
									temp[k]=H[k];
								}
							}else if(cont == 4){
								l = temp[0]*temp[1]+2;
								for ( k = l; k < cantidad; k++) {
									temp[k]=H[k-l];
								}
							}
							bandera2=1;
						}
						else{
							bandera2=0;
							printf("La matriz H no existe.\n");
							break;
						}
					}else if(ptr[cont] == 'I'){
						if(I!=NULL){
							if(bandera == 0){
								cantidad = cantidad + I[0]*I[1]+2;
							}else if(cont == 2){
								for ( k = 0; k < (I[0]*I[1]+2); k++) {
									temp[k]=I[k];
								}
							}else if(cont == 4){
								l = temp[0]*temp[1]+2;
								for ( k = l; k < cantidad; k++) {
									temp[k]=I[k-l];
								}
							}
							bandera2=1;
						}
						else{
							bandera2=0;
							printf("La matriz I no existe.\n");
							break;
						}
					}else if(ptr[cont] == 'J'){
						if(J!=NULL){
							if(bandera == 0){
								cantidad = cantidad + J[0]*J[1]+2;
							}else if(cont == 2){
								for ( k = 0; k < (J[0]*J[1]+2); k++) {
									temp[k]=J[k];
								}
							}else if(cont == 4){
								l = temp[0]*temp[1]+2;
								for ( k = l; k < cantidad; k++) {
									temp[k]=J[k-l];
								}
							}
							bandera2=1;
						}
						else{
							bandera2=0;
							printf("La matriz J no existe.\n");
							break;
						}
					}else if(ptr[cont] == 'K'){
						if(K!=NULL){
							if(bandera == 0){
								cantidad = cantidad + K[0]*K[1]+2;
							}else if(cont == 2){
								for ( k = 0; k < (K[0]*K[1]+2); k++) {
									temp[k]=K[k];
								}
							}else if(cont == 4){
								l = temp[0]*temp[1]+2;
								for ( k = l; k < cantidad; k++) {
									temp[k]=K[k-l];
								}
							}
							bandera2=1;
						}
						else{
							bandera2=0;
							printf("La matriz K no existe.\n");
							break;
						}
					}else if(ptr[cont] == 'L'){
						if(L!=NULL){
							if(bandera == 0){
								cantidad = cantidad + L[0]*L[1]+2;
							}else if(cont == 2){
								for ( k = 0; k < (L[0]*L[1]+2); k++) {
									temp[k]=L[k];
								}
							}else if(cont == 4){
								l = temp[0]*temp[1]+2;
								for ( k = l; k < cantidad; k++) {
									temp[k]=L[k-l];
								}
							}
							bandera2=1;
						}
						else{
							bandera2=0;
							printf("La matriz L no existe.\n");
							break;
						}
					}else if(ptr[cont] == 'M'){
						if(M!=NULL){
							if(bandera == 0){
								cantidad = cantidad + M[0]*M[1]+2;
							}else if(cont == 2){
								for ( k = 0; k < (M[0]*M[1]+2); k++) {
									temp[k]=M[k];
								}
							}else if(cont == 4){
								l = temp[0]*temp[1]+2;
								for ( k = l; k < cantidad; k++) {
									temp[k]=M[k-l];
								}
							}
							bandera2=1;
						}
						else{
							bandera2=0;
							printf("La matriz M no existe.\n");
							break;
						}
					}else if(ptr[cont] == 'N'){
						if(N!=NULL){
							if(bandera == 0){
								cantidad = cantidad + N[0]*N[1]+2;
							}else if(cont == 2){
								for ( k = 0; k < (N[0]*N[1]+2); k++) {
									temp[k]=N[k];
								}
							}else if(cont == 4){
								l = temp[0]*temp[1]+2;
								for ( k = l; k < cantidad; k++) {
									temp[k]=N[k-l];
								}
							}
							bandera2=1;
						}
						else{
							bandera2=0;
							printf("La matriz N no existe.\n");
							break;
						}
					}else if(ptr[cont] == 'O'){
						if(O!=NULL){
							if(bandera == 0){
								cantidad = cantidad + O[0]*O[1]+2;
							}else if(cont == 2){
								for ( k = 0; k < (O[0]*O[1]+2); k++) {
									temp[k]=O[k];
								}
							}else if(cont == 4){
								l = temp[0]*temp[1]+2;
								for ( k = l; k < cantidad; k++) {
									temp[k]=O[k-l];
								}
							}
							bandera2=1;
						}
						else{
							bandera2=0;
							printf("La matriz O no existe.\n");
							break;
						}
					}else if(ptr[cont] == 'P'){
						if(P!=NULL){
							if(bandera == 0){
								cantidad = cantidad + P[0]*P[1]+2;
							}else if(cont == 2){
								for ( k = 0; k < (P[0]*P[1]+2); k++) {
									temp[k]=P[k];
								}
							}else if(cont == 4){
								l = temp[0]*temp[1]+2;
								for ( k = l; k < cantidad; k++) {
									temp[k]=P[k-l];
								}
							}
							bandera2=1;
						}
						else{
							bandera2=0;
							printf("La matriz P no existe.\n");
							break;
						}
					}else if(ptr[cont] == 'Q'){
						if(Q!=NULL){
							if(bandera == 0){
								cantidad = cantidad + Q[0]*Q[1]+2;
							}else if(cont == 2){
								for ( k = 0; k < (Q[0]*Q[1]+2); k++) {
									temp[k]=Q[k];
								}
							}else if(cont == 4){
								l = temp[0]*temp[1]+2;
								for ( k = l; k < cantidad; k++) {
									temp[k]=Q[k-l];
								}
							}
							bandera2=1;
						}
						else{
							bandera2=0;
							printf("La matriz Q no existe.\n");
							break;
						}
					}else if(ptr[cont] == 'R'){
						if(R!=NULL){
							if(bandera == 0){
								cantidad = cantidad + R[0]*R[1]+2;
							}else if(cont == 2){
								for ( k = 0; k < (R[0]*R[1]+2); k++) {
									temp[k]=R[k];
								}
							}else if(cont == 4){
								l = temp[0]*temp[1]+2;
								for ( k = l; k < cantidad; k++) {
									temp[k]=R[k-l];
								}
							}
							bandera2=1;
						}
						else{
							bandera2=0;
							printf("La matriz R no existe.\n");
							break;
						}
					}else if(ptr[cont] == 'S'){
						if(S!=NULL){
							if(bandera == 0){
								cantidad = cantidad + S[0]*S[1]+2;
							}else if(cont == 2){
								for ( k = 0; k < (S[0]*S[1]+2); k++) {
									temp[k]=S[k];
								}
							}else if(cont == 4){
								l = temp[0]*temp[1]+2;
								for ( k = l; k < cantidad; k++) {
									temp[k]=S[k-l];
								}
							}
							bandera2=1;
						}
						else{
							bandera2=0;
							printf("La matriz S no existe.\n");
							break;
						}
					}else if(ptr[cont] == 'T'){
						if(T!=NULL){
							if(bandera == 0){
								cantidad = cantidad + T[0]*T[1]+2;
							}else if(cont == 2){
								for ( k = 0; k < (T[0]*T[1]+2); k++) {
									temp[k]=T[k];
								}
							}else if(cont == 4){
								l = temp[0]*temp[1]+2;
								for ( k = l; k < cantidad; k++) {
									temp[k]=T[k-l];
								}
							}
							bandera2=1;
						}
						else{
							bandera2=0;
							printf("La matriz T no existe.\n");
							break;
						}
					}else if(ptr[cont] == 'U'){
						if(U!=NULL){
							if(bandera == 0){
								cantidad = cantidad + U[0]*U[1]+2;
							}else if(cont == 2){
								for ( k = 0; k < (U[0]*U[1]+2); k++) {
									temp[k]=U[k];
								}
							}else if(cont == 4){
								l = temp[0]*temp[1]+2;
								for ( k = l; k < cantidad; k++) {
									temp[k]=U[k-l];
								}
							}
							bandera2=1;
						}
						else{
							bandera2=0;
							printf("La matriz U no existe.\n");
							break;
						}
					}else if(ptr[cont] == 'V'){
						if(V!=NULL){
							if(bandera == 0){
								cantidad = cantidad + V[0]*V[1]+2;
							}else if(cont == 2){
								for ( k = 0; k < (V[0]*V[1]+2); k++) {
									temp[k]=V[k];
								}
							}else if(cont == 4){
								l = temp[0]*temp[1]+2;
								for ( k = l; k < cantidad; k++) {
									temp[k]=V[k-l];
								}
							}
							bandera2=1;
						}
						else{
							bandera2=0;
							printf("La matriz V no existe.\n");
							break;
						}
					}else if(ptr[cont] == 'W'){
						if(W!=NULL){
							if(bandera == 0){
								cantidad = cantidad + W[0]*W[1]+2;
							}else if(cont == 2){
								for ( k = 0; k < (W[0]*W[1]+2); k++) {
									temp[k]=W[k];
								}
							}else if(cont == 4){
								l = temp[0]*temp[1]+2;
								for ( k = l; k < cantidad; k++) {
									temp[k]=W[k-l];
								}
							}
							bandera2=1;
						}
						else{
							bandera2=0;
							printf("La matriz W no existe.\n");
							break;
						}
					}else if(ptr[cont] == 'X'){
						if(X!=NULL){
							if(bandera == 0){
								cantidad = cantidad + X[0]*X[1]+2;
							}else if(cont == 2){
								for ( k = 0; k < (X[0]*X[1]+2); k++) {
									temp[k]=X[k];
								}
							}else if(cont == 4){
								l = temp[0]*temp[1]+2;
								for ( k = l; k < cantidad; k++) {
									temp[k]=X[k-l];
								}
							}
							bandera2=1;
						}
						else{
							bandera2=0;
							printf("La matriz X no existe.\n");
							break;
						}
					}else if(ptr[cont] == 'Y'){
						if(Y!=NULL){
							if(bandera == 0){
								cantidad = cantidad + Y[0]*Y[1]+2;
							}else if(cont == 2){
								for ( k = 0; k < (Y[0]*Y[1]+2); k++) {
									temp[k]=Y[k];
								}
							}else if(cont == 4){
								l = temp[0]*temp[1]+2;
								for ( k = l; k < cantidad; k++) {
									temp[k]=Y[k-l];
								}
							}
							bandera2=1;
						}
						else{
							bandera2=0;
							printf("La matriz Y no existe.\n");
							break;
						}
					}else if(ptr[cont] == 'Z'){
						if(Z!=NULL){
							if(bandera == 0){
								cantidad = cantidad + Z[0]*Z[1]+2;
							}else if(cont == 2){
								for ( k = 0; k < (Z[0]*Z[1]+2); k++) {
									temp[k]=Z[k];
								}
							}else if(cont == 4){
								l = temp[0]*temp[1]+2;
								for ( k = l; k < cantidad; k++) {
									temp[k]=Z[k-l];
								}
							}
							bandera2=1;
						}
						else{
							bandera2=0;
							printf("La matriz Z no existe.\n");
							break;
						}
					}else if( bandera == 1 && (ptr[4] == '0' || ptr[4] == '1' || ptr[4] == '2' || ptr[4] == '3' || ptr[4] == '4' || ptr[4] == '5' || ptr[4] == '6' || ptr[4] == '7' || ptr[4] == '8' || ptr[4] == '9')){
						mul_c = 1;
						ptr = strtok( buffer2, "*" );
						ptr = strtok( NULL, "\n");
						constante = atoi(ptr);
						ptr = strtok( buffer2, "\n" );
					}

					cont = cont + 2;
					if(cont == 6 && bandera == 0){
						bandera = 1;
						cont = 2;
						temp = malloc(sizeof(int)*cantidad);
					}
				}

				//agregar validaciones de tamaño
				//Escribir la matriz 1 y matriz 2
				if(bandera2){
					write(pipefd2[ESCRIBIR],&cantidad,sizeof(int));

					if(mul_c==1){
						write(pipefd2[ESCRIBIR],&constante,sizeof(int));
					}

					for(k=0;k<cantidad;k++){
						write(pipefd2[ESCRIBIR],&temp[k],sizeof(int));
					}
					//Leer la matriz resultado
					read(pipefd1[LEER],&cantidad,sizeof(int));
					if(cantidad!=-1){
						cont = 0;
						if(ptr[cont] == 'A'){
							A = (int*) malloc(sizeof(int)*cantidad);
							free(A);
							int* A = (int*) malloc(sizeof(int)*cantidad);
							for(k =0;k<cantidad;k++) read(pipefd1[LEER],A+k,sizeof(int));
						}else if(ptr[cont] == 'B'){
							B = (int*) malloc(sizeof(int)*cantidad);
							free(B);
							int* B = (int*) malloc(sizeof(int)*cantidad);
							for(k =0;k<cantidad;k++) read(pipefd1[LEER],B+k,sizeof(int));
						}else if(ptr[cont] == 'C'){
							C = (int*) malloc(sizeof(int)*cantidad);
							free(C);
							int* C = (int*) malloc(sizeof(int)*cantidad);
							for(k =0;k<cantidad;k++) read(pipefd1[LEER],C+k,sizeof(int));
						}else if(ptr[cont] == 'D'){
							D = (int*) malloc(sizeof(int)*cantidad);
							free(D);
							int* D = (int*) malloc(sizeof(int)*cantidad);
							for(k =0;k<cantidad;k++) read(pipefd1[LEER],D+k,sizeof(int));
						}else if(ptr[cont] == 'E'){
							E = (int*) malloc(sizeof(int)*cantidad);
							free(E);
							int* E = (int*) malloc(sizeof(int)*cantidad);
							for(k =0;k<cantidad;k++) read(pipefd1[LEER],E+k,sizeof(int));
						}else if(ptr[cont] == 'F'){
							F = (int*) malloc(sizeof(int)*cantidad);
							free(F);
							int* F = (int*) malloc(sizeof(int)*cantidad);
							for(k =0;k<cantidad;k++) read(pipefd1[LEER],F+k,sizeof(int));
						}else if(ptr[cont] == 'G'){
							G = (int*) malloc(sizeof(int)*cantidad);
							free(G);
							int* G = (int*) malloc(sizeof(int)*cantidad);
							for(k =0;k<cantidad;k++) read(pipefd1[LEER],G+k,sizeof(int));
						}else if(ptr[cont] == 'H'){
							H = (int*) malloc(sizeof(int)*cantidad);
							free(H);
							int* H = (int*) malloc(sizeof(int)*cantidad);
							for(k =0;k<cantidad;k++) read(pipefd1[LEER],H+k,sizeof(int));
						}else if(ptr[cont] == 'I'){
							I = (int*) malloc(sizeof(int)*cantidad);
							free(I);
							int* I = (int*) malloc(sizeof(int)*cantidad);
							for(k =0;k<cantidad;k++) read(pipefd1[LEER],I+k,sizeof(int));
						}else if(ptr[cont] == 'J'){
							J = (int*) malloc(sizeof(int)*cantidad);
							free(J);
							int* J = (int*) malloc(sizeof(int)*cantidad);
							for(k =0;k<cantidad;k++) read(pipefd1[LEER],J+k,sizeof(int));
						}else if(ptr[cont] == 'K'){
							K = (int*) malloc(sizeof(int)*cantidad);
							free(K);
							int* K = (int*) malloc(sizeof(int)*cantidad);
							for(k =0;k<cantidad;k++) read(pipefd1[LEER],K+k,sizeof(int));
						}else if(ptr[cont] == 'L'){
							L = (int*) malloc(sizeof(int)*cantidad);
							free(L);
							int* L = (int*) malloc(sizeof(int)*cantidad);
							for(k =0;k<cantidad;k++) read(pipefd1[LEER],L+k,sizeof(int));
						}else if(ptr[cont] == 'M'){
							M = (int*) malloc(sizeof(int)*cantidad);
							free(M);
							int* M = (int*) malloc(sizeof(int)*cantidad);
							for(k =0;k<cantidad;k++) read(pipefd1[LEER],M+k,sizeof(int));
						}else if(ptr[cont] == 'N'){
							N = (int*) malloc(sizeof(int)*cantidad);
							free(N);
							int* N = (int*) malloc(sizeof(int)*cantidad);
							for(k =0;k<cantidad;k++) read(pipefd1[LEER],N+k,sizeof(int));
						}else if(ptr[cont] == 'O'){
							O = (int*) malloc(sizeof(int)*cantidad);
							free(O);
							int* O = (int*) malloc(sizeof(int)*cantidad);
							for(k =0;k<cantidad;k++) read(pipefd1[LEER],O+k,sizeof(int));
						}else if(ptr[cont] == 'P'){
							P = (int*) malloc(sizeof(int)*cantidad);
							free(P);
							int* P = (int*) malloc(sizeof(int)*cantidad);
							for(k =0;k<cantidad;k++) read(pipefd1[LEER],P+k,sizeof(int));
						}else if(ptr[cont] == 'Q'){
							Q = (int*) malloc(sizeof(int)*cantidad);
							free(Q);
							int* Q = (int*) malloc(sizeof(int)*cantidad);
							for(k =0;k<cantidad;k++) read(pipefd1[LEER],Q+k,sizeof(int));
						}else if(ptr[cont] == 'R'){
							R = (int*) malloc(sizeof(int)*cantidad);
							free(R);
							int* R = (int*) malloc(sizeof(int)*cantidad);
							for(k =0;k<cantidad;k++) read(pipefd1[LEER],R+k,sizeof(int));
						}else if(ptr[cont] == 'S'){
							S = (int*) malloc(sizeof(int)*cantidad);
							free(S);
							int* S = (int*) malloc(sizeof(int)*cantidad);
							for(k =0;k<cantidad;k++) read(pipefd1[LEER],S+k,sizeof(int));
						}else if(ptr[cont] == 'T'){
							T = (int*) malloc(sizeof(int)*cantidad);
							free(T);
							int* T = (int*) malloc(sizeof(int)*cantidad);
							for(k =0;k<cantidad;k++) read(pipefd1[LEER],T+k,sizeof(int));
						}else if(ptr[cont] == 'U'){
							U = (int*) malloc(sizeof(int)*cantidad);
							free(U);
							int* U = (int*) malloc(sizeof(int)*cantidad);
							for(k =0;k<cantidad;k++) read(pipefd1[LEER],U+k,sizeof(int));
						}else if(ptr[cont] == 'V'){
							V = (int*) malloc(sizeof(int)*cantidad);
							free(V);
							int* V = (int*) malloc(sizeof(int)*cantidad);
							for(k =0;k<cantidad;k++) read(pipefd1[LEER],V+k,sizeof(int));
						}else if(ptr[cont] == 'W'){
							W = (int*) malloc(sizeof(int)*cantidad);
							free(W);
							int* W = (int*) malloc(sizeof(int)*cantidad);
							for(k =0;k<cantidad;k++) read(pipefd1[LEER],W+k,sizeof(int));
						}else if(ptr[cont] == 'X'){
							X = (int*) malloc(sizeof(int)*cantidad);
							free(X);
							int* X = (int*) malloc(sizeof(int)*cantidad);
							for(k =0;k<cantidad;k++) read(pipefd1[LEER],X+k,sizeof(int));
						}else if(ptr[cont] == 'Y'){
							Y = (int*) malloc(sizeof(int)*cantidad);
							free(Y);
							int* Y = (int*) malloc(sizeof(int)*cantidad);
							for(k =0;k<cantidad;k++) read(pipefd1[LEER],Y+k,sizeof(int));
						}else if(ptr[cont] == 'Z'){
							Z = (int*) malloc(sizeof(int)*cantidad);
							free(Z);
							int* Z = (int*) malloc(sizeof(int)*cantidad);
							for(k =0;k<cantidad;k++) read(pipefd1[LEER],Z+k,sizeof(int));
						}
						free(temp);
					}
					else{
						printf("Las matrices deben cumplir con las condiciones de dimensión.\n");
					}
				}
				else
				{
					printf("Asegurese de que los parámetros de entrada son correctos\n");
					free(temp);
				}
			}

		}else if(strlen(buffer2)==7 && buffer2[1] == '=' && buffer2[2] == 't' && buffer2[3] == 'r' && buffer2[4] == 'a' && buffer2[5] == 'n' && buffer2[6] == 's'){

			pipe(pipefd1);
			pipe(pipefd2);
			pid = fork();
			cont = 1;

			if (pid == 0) {

				close(pipefd1[LEER]); //Solo puede escribir en pipefd1
				close(pipefd2[ESCRIBIR]); //solo puede leer en pipefd2

				dup2(pipefd1[ESCRIBIR],STDOUT_FILENO);
				dup2(pipefd2[LEER],STDIN_FILENO);
				execl("traspuesta","ls","-all",NULL);

			}else{
				close(pipefd1[ESCRIBIR]); //solo puede leer en pipefd1
				close(pipefd2[LEER]); //solo puede escribir en pipefd2
				int * temp;
				int cantidad = 0;
				int k,l;
				cont = 8;
				bandera = 0;
				while(cont==8){

					if(ptr[cont] == 'A'){
						if(A!=NULL){
							if(bandera == 0){
								cantidad = cantidad + A[0]*A[1]+2;
							}else{
								for ( k = 0; k < cantidad; k++) {
									temp[k]=A[k];
								}
							}
							bandera2=1;
						}
						else{
							printf("La matriz A no exite\n");
							break;
						}
					}else if(ptr[cont] == 'B'){
						if(B!=NULL){
							if(bandera == 0){
								cantidad = cantidad + B[0]*B[1]+2;
							}else{
								for ( k = 0; k < cantidad; k++) {
									temp[k]=B[k];
								}
							}
							bandera2=1;
						}
						else{
							printf("La matriz B no exite\n");
							break;
						}
					}else if(ptr[cont] == 'C'){
						if(C!=NULL){
							if(bandera == 0){
								cantidad = cantidad + C[0]*C[1]+2;
							}else{
								for ( k = 0; k < cantidad; k++) {
									temp[k]=C[k];
								}
							}
							bandera2=1;
						}
						else{
							printf("La matriz C no exite\n");
							break;
						}
					}else if(ptr[cont] == 'D'){
						if(D!=NULL){
							if(bandera == 0){
								cantidad = cantidad + D[0]*D[1]+2;
							}else{
								for ( k = 0; k < cantidad; k++) {
									temp[k]=D[k];
								}
							}
							bandera2=1;
						}
						else{
							printf("La matriz D no exite\n");
							break;
						}
					}else if(ptr[cont] == 'E'){
						if(E!=NULL){
							if(bandera == 0){
								cantidad = cantidad + E[0]*E[1]+2;
							}else{
								for ( k = 0; k < cantidad; k++) {
									temp[k]=E[k];
								}
							}
							bandera2=1;
						}
						else{
							printf("La matriz E no exite\n");
							break;
						}
					}else if(ptr[cont] == 'F'){
						if(F!=NULL){
							if(bandera == 0){
								cantidad = cantidad + F[0]*F[1]+2;
							}else{
								for ( k = 0; k < cantidad; k++) {
									temp[k]=F[k];
								}
							}
							bandera2=1;
						}
						else{
							printf("La matriz F no exite\n");
							break;
						}
					}else if(ptr[cont] == 'G'){
						if(G!=NULL){
							if(bandera == 0){
								cantidad = cantidad + G[0]*G[1]+2;
							}else{
								for ( k = 0; k < cantidad; k++) {
									temp[k]=G[k];
								}
							}
							bandera2=1;
						}
						else{
							printf("La matriz G no exite\n");
							break;
						}
					}else if(ptr[cont] == 'H'){
						if(H!=NULL){
							if(bandera == 0){
								cantidad = cantidad + H[0]*H[1]+2;
							}else{
								for ( k = 0; k < cantidad; k++) {
									temp[k]=H[k];
								}
							}
							bandera2=1;
						}
						else{
							printf("La matriz H no exite\n");
							break;
						}
					}else if(ptr[cont] == 'I'){
						if(I!=NULL){
							if(bandera == 0){
								cantidad = cantidad + I[0]*I[1]+2;
							}else{
								for ( k = 0; k < cantidad; k++) {
									temp[k]=I[k];
								}
							}
							bandera2=1;
						}
						else{
							printf("La matriz I no exite\n");
							break;
						}
					}else if(ptr[cont] == 'J'){
						if(J!=NULL){
							if(bandera == 0){
								cantidad = cantidad + J[0]*J[1]+2;
							}else{
								for ( k = 0; k < cantidad; k++) {
									temp[k]=J[k];
								}
							}
							bandera2=1;
						}
						else{
							printf("La matriz J no exite\n");
							break;
						}
					}else if(ptr[cont] == 'K'){
						if(K!=NULL){
							if(bandera == 0){
								cantidad = cantidad + I[0]*I[1]+2;
							}else{
								for ( k = 0; k < cantidad; k++) {
									temp[k]=K[k];
								}
							}
							bandera2=1;
						}
						else{
							printf("La matriz K no exite\n");
							break;
						}
					}else if(ptr[cont] == 'L'){
						if(L!=NULL){
							if(bandera == 0){
								cantidad = cantidad + L[0]*L[1]+2;
							}else{
								for ( k = 0; k < cantidad; k++) {
									temp[k]=L[k];
								}
							}
							bandera2=1;
						}
						else{
							printf("La matriz L no exite\n");
							break;
						}
					}else if(ptr[cont] == 'M'){
						if(M!=NULL){
							if(bandera == 0){
								cantidad = cantidad + M[0]*M[1]+2;
							}else{
								for ( k = 0; k < cantidad; k++) {
									temp[k]=I[k];
								}
							}
							bandera2=1;
						}
						else{
							printf("La matriz M no exite\n");
							break;
						}
					}else if(ptr[cont] == 'N'){
						if(N!=NULL){
							if(bandera == 0){
								cantidad = cantidad + N[0]*N[1]+2;
							}else{
								for ( k = 0; k < cantidad; k++) {
									temp[k]=N[k];
								}
							}
							bandera2=1;
						}
						else{
							printf("La matriz N no exite\n");
							break;
						}
					}else if(ptr[cont] == 'O'){
						if(O!=NULL){
							if(bandera == 0){
								cantidad = cantidad + O[0]*O[1]+2;
							}else{
								for ( k = 0; k < cantidad; k++) {
									temp[k]=I[k];
								}
							}
							bandera2=1;
						}
						else{
							printf("La matriz O no exite\n");
							break;
						}
					}else if(ptr[cont] == 'P'){
						if(I!=NULL){
							if(bandera == 0){
								cantidad = cantidad + P[0]*P[1]+2;
							}else{
								for ( k = 0; k < cantidad; k++) {
									temp[k]=P[k];
								}
							}
							bandera2=1;
						}
						else{
							printf("La matriz P no exite\n");
							break;
						}
					}else if(ptr[cont] == 'Q'){
						if(Q!=NULL){
							if(bandera == 0){
								cantidad = cantidad + Q[0]*Q[1]+2;
							}else{
								for ( k = 0; k < cantidad; k++) {
									temp[k]=Q[k];
								}
							}
							bandera2=1;
						}
						else{
							printf("La matriz Q no exite\n");
							break;
						}
					}else if(ptr[cont] == 'R'){
						if(R!=NULL){
							if(bandera == 0){
								cantidad = cantidad + R[0]*R[1]+2;
							}else{
								for ( k = 0; k < cantidad; k++) {
									temp[k]=R[k];
								}
							}
							bandera2=1;
						}
						else{
							printf("La matriz R no exite\n");
							break;
						}
					}else if(ptr[cont] == 'S'){
						if(S!=NULL){
							if(bandera == 0){
								cantidad = cantidad + S[0]*S[1]+2;
							}else{
								for ( k = 0; k < cantidad; k++) {
									temp[k]=S[k];
								}
							}
							bandera2=1;
						}
						else{
							printf("La matriz S no exite\n");
							break;
						}
					}else if(ptr[cont] == 'T'){
						if(T!=NULL){
							if(bandera == 0){
								cantidad = cantidad + T[0]*T[1]+2;
							}else{
								for ( k = 0; k < cantidad; k++) {
									temp[k]=T[k];
								}
							}
							bandera2=1;
						}
						else{
							printf("La matriz T no exite\n");
							break;
						}
					}else if(ptr[cont] == 'U'){
						if(U!=NULL){
							if(bandera == 0){
								cantidad = cantidad + U[0]*U[1]+2;
							}else{
								for ( k = 0; k < cantidad; k++) {
									temp[k]=U[k];
								}
							}
							bandera2=1;
						}
						else{
							printf("La matriz U no exite\n");
							break;
						}
					}else if(ptr[cont] == 'V'){
						if(V!=NULL){
							if(bandera == 0){
								cantidad = cantidad + V[0]*V[1]+2;
							}else{
								for ( k = 0; k < cantidad; k++) {
									temp[k]=V[k];
								}
							}
							bandera2=1;
						}
						else{
							printf("La matriz V no exite\n");
							break;
						}
					}else if(ptr[cont] == 'W'){
						if(W!=NULL){
							if(bandera == 0){
								cantidad = cantidad + W[0]*W[1]+2;
							}else{
								for ( k = 0; k < cantidad; k++) {
									temp[k]=W[k];
								}
							}
							bandera2=1;
						}
						else{
							printf("La matriz W no exite\n");
							break;
						}
					}else if(ptr[cont] == 'X'){
						if(X!=NULL){
							if(bandera == 0){
								cantidad = cantidad + X[0]*X[1]+2;
							}else{
								for ( k = 0; k < cantidad; k++) {
									temp[k]=X[k];
								}
							}
							bandera2=1;
						}
						else{
							printf("La matriz W no exite\n");
							break;
						}
					}else if(ptr[cont] == 'Y'){
						if(Y!=NULL){
							if(bandera == 0){
								cantidad = cantidad + Y[0]*Y[1]+2;
							}else{
								for ( k = 0; k < cantidad; k++) {
									temp[k]=Y[k];
								}
							}
							bandera2=1;
						}
						else{
							printf("La matriz Y no exite\n");
							break;
						}
					}else if(ptr[cont] == 'Z'){
						if(Z!=NULL){
							if(bandera == 0){
								cantidad = cantidad + Z[0]*Z[1]+2;
							}else{
								for ( k = 0; k < cantidad; k++) {
									temp[k]=Z[k];
								}
							}
							bandera2=1;
						}
						else{
							printf("La matriz Z no exite\n");
							break;
						}
					}
					cont = cont + 1;
					if(cont == 9 && bandera == 0){
						bandera = 1;
						cont = 8;
						temp = malloc(sizeof(int)*cantidad);
					}
				}
				//agregar validaciones de tamaño
				//Escribir la matriz 1 y matriz 2
					write(pipefd2[ESCRIBIR],&cantidad,sizeof(int));

					for(k=0;k<cantidad;k++){
						write(pipefd2[ESCRIBIR],&temp[k],sizeof(int));
					}
					//Leer la matriz resultado
					read(pipefd1[LEER],&cantidad,sizeof(int));

					cont = 0;
					if(ptr[cont] == 'A'){
						A = (int*) malloc(sizeof(int)*cantidad);
						free(A);
						int* A = (int*) malloc(sizeof(int)*cantidad);
						for(k =0;k<cantidad;k++) read(pipefd1[LEER],A+k,sizeof(int));
					}else if(ptr[cont] == 'B'){
						B = (int*) malloc(sizeof(int)*cantidad);
						free(B);
						int* B = (int*) malloc(sizeof(int)*cantidad);
						for(k=0;k<cantidad;k++) read(pipefd1[LEER],B+k,sizeof(int));
					}else if(ptr[cont] == 'C'){
						C = (int*) malloc(sizeof(int)*cantidad);
						free(C);
						int* C = (int*) malloc(sizeof(int)*cantidad);
						for(k =0;k<cantidad;k++) read(pipefd1[LEER],C+k,sizeof(int));
					}else if(ptr[cont] == 'D'){
						D = (int*) malloc(sizeof(int)*cantidad);
						free(D);
						int* D = (int*) malloc(sizeof(int)*cantidad);
						for(k =0;k<cantidad;k++) read(pipefd1[LEER],D+k,sizeof(int));
					}else if(ptr[cont] == 'E'){
						E = (int*) malloc(sizeof(int)*cantidad);
						free(E);
						int* E = (int*) malloc(sizeof(int)*cantidad);
						for(k =0;k<cantidad;k++) read(pipefd1[LEER],E+k,sizeof(int));
					}else if(ptr[cont] == 'F'){
						F = (int*) malloc(sizeof(int)*cantidad);
						free(F);
						int* F = (int*) malloc(sizeof(int)*cantidad);
						for(k =0;k<cantidad;k++) read(pipefd1[LEER],F+k,sizeof(int));
					}else if(ptr[cont] == 'G'){
						G = (int*) malloc(sizeof(int)*cantidad);
						free(G);
						int* G = (int*) malloc(sizeof(int)*cantidad);
						for(k =0;k<cantidad;k++) read(pipefd1[LEER],G+k,sizeof(int));
					}else if(ptr[cont] == 'H'){
						H = (int*) malloc(sizeof(int)*cantidad);
						free(H);
						int* H = (int*) malloc(sizeof(int)*cantidad);
						for(k =0;k<cantidad;k++) read(pipefd1[LEER],H+k,sizeof(int));
					}else if(ptr[cont] == 'I'){
						I = (int*) malloc(sizeof(int)*cantidad);
						free(I);
						int* I = (int*) malloc(sizeof(int)*cantidad);
						for(k =0;k<cantidad;k++) read(pipefd1[LEER],I+k,sizeof(int));
					}else if(ptr[cont] == 'J'){
						J = (int*) malloc(sizeof(int)*cantidad);
						free(J);
						int* J = (int*) malloc(sizeof(int)*cantidad);
						for(k =0;k<cantidad;k++) read(pipefd1[LEER],J+k,sizeof(int));
					}else if(ptr[cont] == 'K'){
						K = (int*) malloc(sizeof(int)*cantidad);
						free(K);
						int* K = (int*) malloc(sizeof(int)*cantidad);
						for(k =0;k<cantidad;k++) read(pipefd1[LEER],K+k,sizeof(int));
					}else if(ptr[cont] == 'L'){
						L = (int*) malloc(sizeof(int)*cantidad);
						free(L);
						int* L = (int*) malloc(sizeof(int)*cantidad);
						for(k =0;k<cantidad;k++) read(pipefd1[LEER],L+k,sizeof(int));
					}else if(ptr[cont] == 'M'){
						M = (int*) malloc(sizeof(int)*cantidad);
						free(M);
						int* M = (int*) malloc(sizeof(int)*cantidad);
						for(k =0;k<cantidad;k++) read(pipefd1[LEER],M+k,sizeof(int));
					}else if(ptr[cont] == 'N'){
						N = (int*) malloc(sizeof(int)*cantidad);
						free(N);
						int* N = (int*) malloc(sizeof(int)*cantidad);
						for(k =0;k<cantidad;k++) read(pipefd1[LEER],N+k,sizeof(int));
					}else if(ptr[cont] == 'O'){
						O = (int*) malloc(sizeof(int)*cantidad);
						free(O);
						int* O = (int*) malloc(sizeof(int)*cantidad);
						for(k =0;k<cantidad;k++) read(pipefd1[LEER],O+k,sizeof(int));
					}else if(ptr[cont] == 'P'){
						P = (int*) malloc(sizeof(int)*cantidad);
						free(P);
						int* P = (int*) malloc(sizeof(int)*cantidad);
						for(k =0;k<cantidad;k++) read(pipefd1[LEER],P+k,sizeof(int));
					}else if(ptr[cont] == 'Q'){
						Q = (int*) malloc(sizeof(int)*cantidad);
						free(Q);
						int* Q = (int*) malloc(sizeof(int)*cantidad);
						for(k =0;k<cantidad;k++) read(pipefd1[LEER],Q+k,sizeof(int));
					}else if(ptr[cont] == 'R'){
						R = (int*) malloc(sizeof(int)*cantidad);
						free(R);
						int* R = (int*) malloc(sizeof(int)*cantidad);
						for(k =0;k<cantidad;k++) read(pipefd1[LEER],R+k,sizeof(int));
					}else if(ptr[cont] == 'S'){
						S = (int*) malloc(sizeof(int)*cantidad);
						free(S);
						int* S = (int*) malloc(sizeof(int)*cantidad);
						for(k =0;k<cantidad;k++) read(pipefd1[LEER],S+k,sizeof(int));
					}else if(ptr[cont] == 'T'){
						T = (int*) malloc(sizeof(int)*cantidad);
						free(T);
						int* T = (int*) malloc(sizeof(int)*cantidad);
						for(k =0;k<cantidad;k++) read(pipefd1[LEER],T+k,sizeof(int));
					}else if(ptr[cont] == 'U'){
						U = (int*) malloc(sizeof(int)*cantidad);
						free(U);
						int* U = (int*) malloc(sizeof(int)*cantidad);
						for(k =0;k<cantidad;k++) read(pipefd1[LEER],U+k,sizeof(int));
					}else if(ptr[cont] == 'V'){
						V = (int*) malloc(sizeof(int)*cantidad);
						free(V);
						int* V = (int*) malloc(sizeof(int)*cantidad);
						for(k =0;k<cantidad;k++) read(pipefd1[LEER],V+k,sizeof(int));
					}else if(ptr[cont] == 'W'){
						W = (int*) malloc(sizeof(int)*cantidad);
						free(W);
						int* W = (int*) malloc(sizeof(int)*cantidad);
						for(k =0;k<cantidad;k++) read(pipefd1[LEER],W+k,sizeof(int));
					}else if(ptr[cont] == 'X'){
						X = (int*) malloc(sizeof(int)*cantidad);
						free(X);
						int* X = (int*) malloc(sizeof(int)*cantidad);
						for(k =0;k<cantidad;k++) read(pipefd1[LEER],X+k,sizeof(int));
					}else if(ptr[cont] == 'Y'){
						Y = (int*) malloc(sizeof(int)*cantidad);
						free(Y);
						int* Y = (int*) malloc(sizeof(int)*cantidad);
						for(k =0;k<cantidad;k++) read(pipefd1[LEER],Y+k,sizeof(int));
					}else if(ptr[cont] == 'Z'){
						Z = (int*) malloc(sizeof(int)*cantidad);
						free(Z);
						int* Z = (int*) malloc(sizeof(int)*cantidad);
						for(k =0;k<cantidad;k++) read(pipefd1[LEER],Z+k,sizeof(int));
					}

					free(temp);
			}

		}else if (strcmp(ptr,"exit")==0){
			printf("Bye!\n");

			borrarMatriz(A);
			borrarMatriz(B);
			borrarMatriz(C);
			borrarMatriz(D);
			borrarMatriz(E);
			borrarMatriz(F);
			borrarMatriz(G);
			borrarMatriz(H);
			borrarMatriz(I);
			borrarMatriz(J);
			borrarMatriz(K);
			borrarMatriz(L);
			borrarMatriz(M);
			borrarMatriz(N);
			borrarMatriz(O);
			borrarMatriz(P);
			borrarMatriz(Q);
			borrarMatriz(R);
			borrarMatriz(S);
			borrarMatriz(T);
			borrarMatriz(U);
			borrarMatriz(V);
			borrarMatriz(W);
			borrarMatriz(X);
			borrarMatriz(Y);
			borrarMatriz(Z);
			A=NULL;
			B=NULL;
			C=NULL;
			D=NULL;
			E=NULL;
			F=NULL;
			G=NULL;
			H=NULL;
			I=NULL;
			J=NULL;
			K=NULL;
			L=NULL;
			M=NULL;
			N=NULL;
			O=NULL;
			P=NULL;
			Q=NULL;
			R=NULL;
			S=NULL;
			T=NULL;
			U=NULL;
			V=NULL;
			W=NULL;
			X=NULL;
			Y=NULL;
			Z=NULL;
			return 0;
		}
	}
	return 0;
}
