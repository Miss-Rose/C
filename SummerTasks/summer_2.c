#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main(){
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int i;
    printf("Фермеру доступні такі комбінації:\n");
    for (i = 0; i <= 16; i++){
        printf("Кролі-%i, гуси-%i\n", i, 32-i*2);
    }
    getch();
    return 0;
}


