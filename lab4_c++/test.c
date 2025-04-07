#include <stdio.h>

int main() {
    int x = 10; 
    int ILE = 2; 

   
    for (int i = 0; i < x; i = i + ILE) {
        printf("i = %d\n", i);
    }

    return 0;
}

// Wnioski:

//     Kompilacja bez żadnych opcji: Program kompiluje się poprawnie w większości współczesnych wersji kompilatorów GCC.

//     Kompilacja z opcją -std=c89: Może wystąpić błąd kompilacji, ponieważ w standardzie C89 zmienne muszą być deklarowane na początku funkcji. Poniżej znajduje się przykładowy błąd, który może wystąpić:

// test.c: In function ‘main’:
// test.c:6:5: error: ‘for’ loop initial declarations are only allowed in C99 or C11 mode
//     for (int i = 0; i < x; i = i + ILE) {
//       ^