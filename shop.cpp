/*system("cls");*/
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int menu(void){
  
  cout<<"\n****************************Tienda Virtual****************************";
  cout<<"\n1. Crear Cliente Nuevo";
  cout<<"\n2. Ver Clientes Registrados";
  cout<<"\n3. Crear Inventario";
  cout<<"\n4. Ver Inventario";
  cout<<"\n5. Vender un Producto";
  cout<<"\n6. Salir";
  cout<<"Ingrese su opción: ";
}

int main(){
  int opcion, opc2, opc3, i = 0, a = 0, max= 5, cantidad_producto_vender, pregunta_descuento, descuento;
  string nombre_producto_vender;
  float precio_producto_vender, total_final, total, descuento_final, sub-total;
  string nombre_cliente[50], nombre_producto[50];
  float id[50], tel[50], precio_producto[50], codigo[50];
  
  do {
    menu();
    cin>>opcion;
    
    switch (opcion) {
      case 1:
       i++;
       cout<<"\nIngrese el Nombre del nuevo Cliente: ";
       cin>>nombre_cliente[i];
       cout<<"\nIngrese el ID del nuevo Cliente\n*Sin espacios ni guiones: ";
       cin>>id[i];
       cout<<"\nIngrese el numero telefónico del nuevo Cliente\n*Sin espacios ni guiones: "
       cin>>tel[i];
       cout<<"\nIngrese 0 para volver al menú o 1 para salir: ";
       cin>>opc2;
       break;
    }
  }
}
