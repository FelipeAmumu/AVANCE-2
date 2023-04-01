#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <string>
#include <wchar.h>
using namespace std;

struct juegos
{
	int item;
	float preciouni, IVA, total;
	string descri, Artiname;
	char gene[15], ESRB[10], consola[10];
}; //usar el arreglo aqui

int main()
{

	float  impuesto, total;
	int  desicion, opc, i;

	juegos tienda[3];
	// o si vas el arreglo aqui no olvides usar el do while

	do {
	printf("{BIENVENIDO USUARIO, FAVOR DE SELECCIONAR LA ACCION A REALIZAR}\n");
	printf("***MENU TIENDA*** \n 1.-Dar de alta un articulo \n 2.-Modificar articulo \n 3.-Baja de articulo \n 4.-Lista de articulos \n 5.-Limpiar Pantalla \n 6.-Salir \n");

	scanf_s("%d", &opc);

		switch (opc)
		{
		case 1:

			for(i=0;i<1;i++)
			{
				printf("Ingrese el numero de articulo \n");
				scanf_s("%d", &tienda[i].item);
				printf("Ingrese el nombre de articulo \n");
				cin.ignore();
				getline(cin, tienda[i].Artiname);
				printf("Ingrese la descripcion del articulo \n");
				//cin.ignore(); // de recomendacion solo se utilzia en el primer }cambio de variable 
				getline(cin, tienda[i].descri);
				printf("Ingrese el genero de articulo \n");
				gets_s(tienda[i].gene);
				printf("Ingrese la clasificacion de articulo \n");
				gets_s(tienda[i].ESRB);
				printf("Ingrese la plataforma de articulo \n");
				gets_s(tienda[i].consola);
				printf("ingrese el precio del articulo \n");
				scanf_s("%f", &tienda[i].preciouni);
				tienda[i].IVA = tienda[i].preciouni * 0.16;
				tienda[i].total = tienda[i].preciouni * 1.16;
			}
			break;

		case 2:

			break;

		case 3:

			break;

		case 4:
			for (i = 0; i < 1; i++)
			{
				printf("NUM. ARTICULO: %d \n", tienda[i].item);
				printf("NOMBRE ARTICULO: %s \n", tienda[i].Artiname.c_str());
				printf("DESCRIPCION DEL ARTICULO: %s \n", tienda[i].descri.c_str());
				printf("GENERO DEL ARTICULO: %s \n", tienda[i].gene);
				printf("CLASIFICACION DEL ARTICULO: %s \n", tienda[i].ESRB);
				printf("PLATAFORMA DEL ARTICULO: %s \n", tienda[i].consola);
				printf("PRECIO UNITARIO DEL ARTICULO: %f \n", tienda[i].preciouni);
				printf("IVA DEL ARTICULO: %f \n", tienda[i].IVA);
				printf("PRECIO TOTAL DEL ARTICULO: %f \n", tienda[i].total);
			}
			break;

		case 5:

			system("cls");
			break;

		case 6:

			cout << "Gracias :3" << endl;
			exit(1);
			break;

		default:
			cout << "Opcion invalida" << endl;
			return main();
			break;
		}
	} while (opc!=6);
}