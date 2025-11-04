#include <iostream>
#include <time.h>
using namespace std;

#include "funcion.h"
int main  ()
{
    srand(time(NULL));

    int num_accion,acum_alimentos=0, acum_porcentaje_refugio=0, guardar_numero_aleatorio, iniciar_juego, guardar_menu_etapa_2;
    char num_segunda_accion, decision_e2;
    while(true)
    {
        iniciar_juego=mostrar_menu();

        switch(iniciar_juego)
        {

        case 1:
            cout<<"sabia desicion, empezaste el juego. tienes siete dias para juntar materiales y alimentos: "<<endl;


            for(int i=1; i<=7; i++)
            {

                num_accion = menu_juego();
                guardar_numero_aleatorio=calcular_numero_aleatorio();

                switch(num_accion)
                {
                case 1:
//cada case deberia ser una funcion

                    cout<<"A- pesca en el rio. B- cosechar arboles. C- cosechar arbustos." <<endl;
                    cin>>num_segunda_accion;

                    acum_alimentos += guardar_numero_aleatorio; //aca viene el numero aleatorio de comida
                    switch(num_segunda_accion)
                    {
                    case 'A':
                    case 'a':
                        mostrar_kilos_alimentos(num_segunda_accion, guardar_numero_aleatorio, acum_alimentos);
                        break;

                    case 'B':
                    case 'b':
                        mostrar_kilos_alimentos(num_segunda_accion, guardar_numero_aleatorio, acum_alimentos);
                        break;

                    case 'C':
                    case 'c':
                        mostrar_kilos_alimentos(num_segunda_accion, guardar_numero_aleatorio, acum_alimentos);
                        break;
                    }


                    break;

                case 2:
                    cout<<"A-ramas de arboles. B-ramas de arbustos. C-barros. D-rocas" <<endl;
                    cin>>num_segunda_accion;

                    acum_porcentaje_refugio +=guardar_numero_aleatorio;
                    switch(num_segunda_accion)
                    {

                    case 'A':
                    case 'a':
                        mostrar_porc_refugio(num_segunda_accion, guardar_numero_aleatorio, acum_porcentaje_refugio);
                        break;
                    case 'B':
                    case 'b':

                        break;
                    case'C':
                    case'c':
                                mostrar_porc_refugio(num_segunda_accion, guardar_numero_aleatorio, acum_porcentaje_refugio);
                        break;
                    case 'D':
                    case 'd':

                        mostrar_porc_refugio(num_segunda_accion, guardar_numero_aleatorio, acum_porcentaje_refugio);
                        break;

                    }

                    break;
                }
                system("pause");
                system("cls");





                if(acum_porcentaje_refugio>99)
                {
                    //utilizar bandera
                    acum_porcentaje_refugio=100;
                    cout<< "�felicitaciones, logro armar el 100 por ciento del refugio! ahora le recomendamos recolectar comida. " <<endl;
                }

            }
            guardar_numero_aleatorio=0;
            break;

        //establecer el acumulador de numeros aleatorios en cero.

        case 2:
            cout<<"acaba de salir del juego";

            return 0;
            break;

            for(int i=1; i<6; i++)
            {

                guardar_menu_etapa_2=menu_etapa_2();

                switch(decision_e2)
                {

                case 'A': //consturccion de balsa.
                case 'a':
                    guardar_numero_aleatorio=calcular_numero_aleatorio();
                    break;

                case 'B': //recoleccion de comida.
                case 'b':
                    guardar_numero_aleatorio=calcular_numero_aleatorio();
                    break;

                }
               // if( guardar_numero_aleatorio<99)
               // {




               // }

            }

        }

    }


    return 0;
}
