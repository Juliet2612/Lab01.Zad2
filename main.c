#include <windows.h>
#include <stdio.h>
int main() {

    SetConsoleOutputCP(CP_UTF8); // strona kodowa UTF-8
    char name[100];
    char surname[100];

    printf("podaj imię");
    scanf("%s", name);

    printf("podaj nazwisko");
    scanf("%s", surname);

    printf("Witaj %s %s\n", name, surname);
    printf("To jest Twój drugi program w środowisku CLion/C17:)");
}