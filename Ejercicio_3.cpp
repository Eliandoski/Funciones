//Estudiante: Cifuentes González Elian
//Fecha de entrega: 16/06/2024
//Curso: 1ro de TI

/*3) Diseñe la función que calcule el resultado de la ecuación cuadrática. Utilice la actividad #10 como guía.
Solo que está función debe retornar un string en lugar de un booleano, como se muestra a continuación:
- Cuando a vale 0, debe devolver "Error, división por cero"
- Cuando el discriminante es negativo, debe devolver "No se puede calcular la raíz cuadrada de un número negativo"
- Si la ecuación no tiene errores, debe devolver "Correcto". 
- Recuerde que el tipo string(cadena de caracteres) se escribe entre comillas.
Además, los resultados x1 y  x2 se devuelven como referencias (tal como el ejercicio de la actividad #10).*/

#include <iostream>
#include <cmath> 

using namespace std;

// Función para calcular las raíces de la ecuación cuadrática
string EcuacionCuadratica(double a, double b, double c, double &x1, double &x2) {
    if (a == 0) {
        return "Error, división por cero";
    }

    double discriminante = (b * b) - (4 * a * c);

    if (discriminante < 0) {
        return "No se puede calcular la raíz cuadrada de un número negativo";
    }

    x1 = (-b + sqrt(discriminante)) / (2 * a);
    x2 = (-b - sqrt(discriminante)) / (2 * a);

    return "Correcto";
}

int main() {
    double a = 1, b = 4, c = 4; 

    double x1, x2; 

    string resultado = EcuacionCuadratica(a, b, c, x1, x2);

    cout << "Resultado de la función: " << resultado << endl;
    if (resultado == "Correcto") {
        cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
    }

    return 0;
}
