#include <stdio.h>
#include <windows.h> // 1. Adicione esta linha no topo

int main() {
    SetConsoleOutputCP(65001); // 2. Adicione esta linha antes do printf

    printf("Olá, mundo!\n");
    return 0;
}
