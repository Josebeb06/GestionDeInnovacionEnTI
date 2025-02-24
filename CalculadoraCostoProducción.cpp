#include <iostream>

using namespace std;

int main() {
    // Definir las variables que almacenarán los datos
    double costo_materiales, horas_trabajo, costo_hora, gastos_generales, unidades_producidas, margen_beneficio;
    double costo_manodeobra, gastos_generales_unitario, costo_total, precio_venta;

    // Pedir al usuario los valores para cada variable
    cout << "Ingrese el costo de materiales por unidad: $";
    cin >> costo_materiales;

    cout << "Ingrese el tiempo estimado de trabajo (en horas): ";
    cin >> horas_trabajo;

    cout << "Ingrese el costo por hora de trabajo: $";
    cin >> costo_hora;

    cout << "Ingrese los gastos generales mensuales: $";
    cin >> gastos_generales;

    cout << "Ingrese el número de unidades que se van a producir: ";
    cin >> unidades_producidas;

    cout << "Ingrese el margen de beneficio deseado (en porcentaje): ";
    cin >> margen_beneficio;

    // Calcular el costo de la mano de obra
    costo_manodeobra = horas_trabajo * costo_hora;

    // Calcular los gastos generales por unidad
    gastos_generales_unitario = gastos_generales / unidades_producidas;

    // Calcular el costo total de producción por unidad
    costo_total = costo_materiales + costo_manodeobra + gastos_generales_unitario;

    // Calcular el precio de venta con el margen de beneficio
    precio_venta = costo_total * (1 + (margen_beneficio / 100));

    // Mostrar los resultados al usuario
    cout << "\nCosto de mano de obra por unidad: $" << costo_manodeobra << endl;
    cout << "Gastos generales por unidad: $" << gastos_generales_unitario << endl;
    cout << "Costo total de producción por unidad: $" << costo_total << endl;
    cout << "Precio de venta sugerido (con margen de beneficio): $" << precio_venta << endl;

    return 0;
}
