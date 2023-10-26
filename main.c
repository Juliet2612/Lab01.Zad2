#include <stdio.h>
#include <windows.h>
int main() {
    fflush(stdout);
    fflush(stdin);
    SetConsoleOutputCP(CP_UTF8); // strona kodowa UTF-8

    char name[100];
    char surname[100];

    printf("Podaj imię: ");
    scanf("%s" , name);

    printf("Podaj nazwisko: ");
    scanf("%s" , surname);

    printf("Witaj %s %s !\n", name , surname);
    printf("To jest twój drugi program w środowisku CLion/C17:)");
    return 0;
}
