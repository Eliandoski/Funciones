//Estudiante: Cifuentes González Elian
//Fecha de entrega: 16/06/2024
//Curso: 1ro de TI

//5) Una función recibe 3 números enteros. La función devuelve verdadero si uno de esos números es la suma de los otros 2

#include <iostream>
using namespace std;

bool SumaOtros(int num1, int num2, int num3) {
    if (num1 == num2 + num3) {
        return true;
    }
    
    if (num2 == num1 + num3) {
        return true;
    }
    
    if (num3 == num1 + num2) {
        return true;
    }
    return false;
}

int main() {
    
    if (SumaOtros(5, 15, 20)) {
        cout << "Uno de los números es la suma de los otros dos" << endl;
    } else {
        cout << "Ninguno de los números es la suma de los otros dos" << endl;
    }
    if (SumaOtros(2, 4, 4)) {
        cout << "Uno de los números es la suma de los otros dos" << endl;
    } else {
        cout << "Ninguno de los números es la suma de los otros dos" << endl;
    }
    
    return 0;
}
