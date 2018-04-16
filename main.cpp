/*
Programa número_11 Agenda personal
estructura: selectiva doble (if...else)
Autor: Luis Alberto García Rodríguez
N°lista: 11
Fecha: 12 de febrero del 2015
*/

#include <windows.h>
#include <iostream>
#include <string>

using namespace std;

float opcion;
string cod, est, color, num, forro, suela, corte, prep, mate, marca, tam;

int main()
{
    system ("cls");
cout<<"\t\t --------------------------------"<<endl;
cout<<"\t\t!                                !"<<endl;
cout<<"\t\t!           ZAPATERIA            !"<<endl;
cout<<"\t\t!                                !"<<endl;
cout<<"\t\t --------------------------------"<<endl<<endl<<endl;

cout<<"\t\t**********************************"<<endl;
cout<<"\t\t*            Menu                *"<<endl;
cout<<"\t\t*                                *"<<endl;
cout<<"\t\t* 1.-Zapatos para dama           *"<<endl;
cout<<"\t\t* 2.-Accesorios para dama        *"<<endl;
cout<<"\t\t* 3.-Salir                       *"<<endl;
cout<<"\t\t*                                *"<<endl;
cout<<"\t\t**********************************"<<endl<<endl;
cout<<"\t\t*                                *"<<endl;
cout<<"\t\t  Elija una opcion: ";
cin>>opcion;

    if (opcion==1)
    {
        int opc1;

        system ("cls");
        cout<<"\t\t**********************************"<<endl;
        cout<<"\t\t*     Menu Zapatos para Dama     *"<<endl;
        cout<<"\t\t*                                *"<<endl;
        cout<<"\t\t* 1.-Capturar                    *"<<endl;
        cout<<"\t\t* 2.-Mostrar                     *"<<endl;
        cout<<"\t\t* 3.-atras                       *"<<endl;
        cout<<"\t\t*                                *"<<endl;
        cout<<"\t\t**********************************"<<endl<<endl;
        cout<<"\t\t*                                *"<<endl;
        cout<<"\t\t  Elija una opcion: ";
        cin>>opc1;

            if (opc1==1)
            {
                system ("cls");
                cout<<"\t*   Capturar   *"<<endl<<endl;
                cout<<"\t* Codigo:           ";
                cin>>cod;
                cin.ignore();
                cout<<"\t* Estilo:           ";
                cin>>est;
                cin.ignore();
                cout<<"\t* Color:            ";
                cin>>color;
                cin.ignore();
                cout<<"\t* Numero:           ";
                cin>>num;
                cin.ignore();
                cout<<"\t* Forro:            ";
                cin>>forro;
                cin.ignore();
                cout<<"\t* Suela:            ";
                cin>>suela;
                cin.ignore();
                cout<<"\t* Corte:            ";
                cin>>corte;
                cin.ignore();
                cout<<"\t* Marca:            ";
                cin>>marca;
                cin.ignore();
                cout<<"\t* Precio publico:   ";
                cin>>prep;
                cin.ignore();
                cout<<endl<<endl;
                system ("pause");

                return main ();
            }

            if (opc1==2)
            {
                system ("cls");
                cout<<"\t*   Mostrar   *"<<endl<<endl;
                cout<<"\t* Codigo:           "<<cod<<endl;
                cout<<"\t* Estilo:           "<<est<<endl;
                cout<<"\t* Color:            "<<color<<endl;
                cout<<"\t* Numero:           "<<num<<endl;
                cout<<"\t* Forro:            "<<forro<<endl;
                cout<<"\t* Suela:            "<<suela<<endl;
                cout<<"\t* Corte:            "<<corte<<endl;
                cout<<"\t* Marca:            "<<marca<<endl;
                cout<<"\t* Precio publico:   "<<prep<<endl;
                cout<<endl<<endl;
                system ("pause");
                return main ();
            }

            if (opc1==3)
            {
                system ("pause");
                return main();
            }

    }

    if (opcion==2)

    {
        int opc2;

        system ("cls");
        cout<<"\t\t**********************************"<<endl;
        cout<<"\t\t*   Menu Accesorios para Dama    *"<<endl;
        cout<<"\t\t*                                *"<<endl;
        cout<<"\t\t* 1.-Capturar                    *"<<endl;
        cout<<"\t\t* 2.-Mostrar                     *"<<endl;
        cout<<"\t\t* 3.-atras                       *"<<endl;
        cout<<"\t\t*                                *"<<endl;
        cout<<"\t\t**********************************"<<endl<<endl;
        cout<<"\t\t*                                *"<<endl;
        cout<<"\t\t  Elija una opcion: ";
        cin>>opc2;

        if (opc2==1)
            {
                system ("cls");
                cout<<"\t*   Capturar   *"<<endl<<endl;
                cout<<"\t* Codigo:           ";
                cin>>cod;
                cin.ignore();
                cout<<"\t* Estilo:           ";
                cin>>est;
                cin.ignore();
                cout<<"\t* Color:            ";
                cin>>color;
                cin.ignore();
                cout<<"\t* Tamaño:           ";
                cin>>tam;
                cin.ignore();
                cout<<"\t* Forro:            ";
                cin>>forro;
                cin.ignore();
                cout<<"\t* Material:         ";
                cin>>mate;
                cin.ignore();
                cout<<"\t* Marca:            ";
                cin>>marca;
                cin.ignore();
                cout<<"\t* Precio publico:   ";
                cin>>prep;
                cin.ignore();
                cout<<endl<<endl;
                system ("pause");
                return main ();
            }

            if (opc2==2)
            {
                system ("cls");
                cout<<"\t*   Mostrar   *"<<endl<<endl;
                cout<<"\t* Codigo:           "<<cod<<endl;
                cout<<"\t* Estilo:           "<<est<<endl;
                cout<<"\t* Color:            "<<color<<endl;
                cout<<"\t* Tamanio:          "<<tam<<endl;
                cout<<"\t* Forro:            "<<forro<<endl;
                cout<<"\t* Material:         "<<mate<<endl;
                cout<<"\t* Marca:            "<<marca<<endl;
                cout<<"\t* Precio publico:   "<<prep<<endl;
                cout<<endl<<endl;
                system ("pause");
                return main ();
            }

            if (opc2==3)
            {
                system ("pause");
                return main();
            }
    }
else;

return 0;

}
