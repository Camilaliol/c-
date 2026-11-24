#include <stdio.h> //aqui chama a entrada e saida o print e o scanf para ler
#include <string.h>

int main () { // aqui é o local onde vai ficar o codigo 
    char nome [50]; //o char é caracteres e o 50 a quantidade de memoria que sera usada para o nome
    printf("Digite o seu nome: ");
    scanf("%s", nome); //O %s é um cod. secreto  que avisa o scanf que vai receber string 
    printf("Bem-Vindos, %s!\n", nome);
    return 0;
}

