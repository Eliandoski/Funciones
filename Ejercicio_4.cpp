//Estudiante: Cifuentes González Elian
//Fecha de entrega: 16/06/2024
//Curso: 1ro de TI

/*4) Una función recibe como parámetro un entero que indica las filas de una figura. Adicionalmente, 
recibe como parámetro un string que indica el relleno de la figura a dibujar. Por ejemplo, si filas es 4 y el relleno es '+', 
la figura sería:
+
++
+++
++++*/

#include <iostream>

using namespace std;

void FilasFigura(int filas, string relleno) {
    for (int k = 1; k <= filas; ++k) {
        for (int j = 0; j < k; ++j) {
            cout << relleno;
        }
        cout << endl;
    }
}

int main() {
    FilasFigura(4, "+");
    cout << endl;
    FilasFigura(2, "-");
    cout << endl;
    FilasFigura(3, "*");
    return 0;
}