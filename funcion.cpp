#include <iostream>
#include <time.h>
using namespace std;
#include "funcion.h"


int calcular_numero_aleatorio()
{
    int numero_aleatorio;

    numero_aleatorio = rand() %100 +1;

    return numero_aleatorio;
}

int mostrar_menu()
{
   int iniciar_juego;

cout<<"bienvenido al juego de supervivencia mas extremo, quieres jugar?" <<endl;



        cout<< "1: jugar el juego ---- 2: salir" <<endl;
        cin>>iniciar_juego;

        system("cls");

        return iniciar_juego;

}

int menu_juego()
{
int desicion_1_e1;


     system("cls");

                cout<<"1- recolectar comida" <<endl;
               //if(bandera_refugio==false){ //hacer un if en todo el case 2.
                cout<<"2- recolectar materiales para el refugio" <<endl;
               //}

                cin>> desicion_1_e1;

                return  desicion_1_e1;

}

void mostrar_kilos_alimentos(char num_segunda_accion, int guardar_numero_aleatorio, int acum_alimentos)
{

switch(num_segunda_accion)
                    {
                    case 'A':
                    case 'a':
                        cout<<"recolecto " << guardar_numero_aleatorio<< " kilogramos de pescado, tiene un total de " <<acum_alimentos <<" kilogramos de comida" <<endl;
                        break;

                    case 'B':
                    case 'b':

                        cout<<"recolecto " << guardar_numero_aleatorio<< " kilogramos de los arboles, tiene un total de " <<acum_alimentos<< " kilogramos de comida" <<endl;
                        break;

                    case 'C':
                    case 'c':

                        cout<<"recolecto " << guardar_numero_aleatorio<< " kilogramos de los arbustos, tiene un total de " <<acum_alimentos<< " kilogramos de comida"<<endl;
                        break;
                    }

}

void mostrar_porc_refugio(char segunda_accion, int guardar_numero_aleatorio, int acum_porcentaje_refugio)
{
//string primera_oracion= "armo un " + guardar_numero_aleatorio + " % del refugio con"
//string ultima_oracion="," el total es del  " + acum_porcentaje_refugio + " %"
switch(segunda_accion)
                {

                case 'A':
                case 'a':
                    //cout<< primera_oracion << "ramas de arboles" << ultima_oracion <<endl;
                    cout<< "armo un " <<guardar_numero_aleatorio<< " % del refugio con ramas de arboles, el total es del  " <<acum_porcentaje_refugio << " %" << endl;
                    break;
                case 'B':
                case 'b':
                     cout<< "armo un " <<guardar_numero_aleatorio<< " % del refugio con ramas de arbustos, el total es del  " <<acum_porcentaje_refugio << " %" << endl;
                    break;
                case'C':
                case'c':

                    cout<< "armo un " <<guardar_numero_aleatorio<< " % del refugio con barro, el total es del  " <<acum_porcentaje_refugio << " %" << endl;
                    break;
                case 'D':
                case 'd':

                     cout<< "armo un " <<guardar_numero_aleatorio<< " % del refugio con rocas, el total es del  " <<acum_porcentaje_refugio << " %" << endl;
                    break;

                }

}

int menu_etapa_2()
{

char decision_e2;

     system("cls");
                cout<< "felicidades con la primera etapa, ahora te presento con dos opciones: " << endl;

               //if(bandera_refugio==false){ //hacer un if en todo el case 2.
                cout<<"A- recolectar materiales para la balsa. " <<endl;
               //}
                cout<<"B recolectar comida para el viaje." <<endl;

                cin>> decision_e2;

                return decision_e2;

}

void mostrar_num_aleatorio_e2(char decision_e2, int guardar_numero_aleatorio, int acum_porcentaje_balsa)


//string primera_oracion= "armo un " + guardar_numero_aleatorio + " % de la balsa,"
//string ultima_oracion="," el total es del  " + acum_porcentaje_refugio + " %"

switch(decision_e2)
                {

                case 'A':
                case 'a':
                    //cout<< primera_oracion << "ra" << ultima_oracion <<endl;
                    cout<< "armo un " <<guardar_numero_aleatorio<< " % de la balsa, el total es del  " << acum_porcentaje_balsa << " %" << endl;
                    break;
                case 'B':
                case 'b':
                     cout<<"recolecto " << guardar_numero_aleatorio<< " kilogramos de comida, tiene un total de " <<acum_alimentos <<" kilogramos de comida" <<endl;
                        break;
                }




