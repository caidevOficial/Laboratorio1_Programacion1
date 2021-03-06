/*
 * ============================================================================
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 * ============================================================================
 *
 * Version     : Beta 3.0.0 [Beta v3.0.0] - FacuFalcone_LinkedList_SaintSeiya_[Linux]
 * ============================================================================
 */

//#include <stdio.h> // windows
#include <stdio_ext.h> // linux
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "../registerController/registerController.h"
#include "../../Controller/Controller.h"
#include "../../Validate/caidevValidate.h"
#include "../../Parser/parser.h"
#include "../../../inc/LinkedList.h"
#include "../../../MainApp/MainApp.h"
#include "../../Object/Getters/Getters.h"
#include "../../Object/Object.h"
#include "../../Object/Setters/Setters.h"

int selectedOptionMenu() {
	int optionChoosen;
	printf("\n\n    [Bot_Sanctuary] OPCIONES:"
			"\n    [1] Modificar nombre."
			"\n    [2] Modificar Constelacion."
			"\n    [3] Modificar Poder de Cosmos."
			"\n    [4] Modificar Nivel de Caballero."
			"\n    [5] Cancelar."
			"\n    Opcion:");
	utn_getNumero(&optionChoosen, " Opcion elegida [1-5]: ",
			"Error, opcion incorrecta.", 1, 5, 5);
	return optionChoosen;
}

int controller_editObject(LinkedList *this) {
	Object *thisObject;
	int sucess = 0;
	int idKnightZodiac;
	int maxID;
	int level;
	float cosmosLevel;
	int index;

	char selectedOption = 'y';
	char nameKnightZodiac[128];
	char constellationName[128];
	//system("cls"); // windows
	system("clear"); // linux
	if (this != NULL) {
		obtainID(&maxID);
		/* Muestro pKnightZodiacs y pido el ID */
		controller_ListObject(this);
		utn_getNumero(&idKnightZodiac,
				"    [Bot_Sanctuary]: Ingresa el ID a modificar: ",
				"    [Bot_Sanctuary]: ID incorrecto, por favor reingresalo.\n",
				1, (maxID - 1), 5);

		/* Busco que exista el ID */
		index = Object_SearchForId(this,idKnightZodiac);

		if (index == -1) {
			printf(
					"\n    [Bot_Sanctuary]: El Caballero del Zodiaco ID: %d  aun no existe.\n",
					idKnightZodiac);
		} else {
			thisObject = ll_get(this, index);
			//system("cls"); // windows
			system("clear"); // linux
			//showKnightZodiac(pKnightZodiac);

			do {
				showObject(thisObject);
				switch (selectedOptionMenu()) {
				case 1: /* NOMBRE */
					//system("cls"); // windows
					system("clear"); // linux
					showObject(thisObject);
					if (utn_getNombre(nameKnightZodiac, 128,
							"    [Bot_Sanctuary]: Ingrese nuevo nombre: ",
							"    [Bot_Sanctuary]: Nombre incorrecto, reingresalo.\n",
							5)) {
						uppercaselInitial(nameKnightZodiac);
						Object_setName(thisObject, nameKnightZodiac);
						showObject(thisObject);
						printf(
								"    [Bot_Sanctuary]: Nombre actualizado con exito!\n");
						sucess = 1;
					}
					break;
				case 2: /* CONSTELLATION */
					//system("cls"); // windows
					system("clear"); // linux
					showObject(thisObject);
					if (utn_getNombre(constellationName, 128,
							"    [Bot_Sanctuary]: Ingresa una nueva Constelacion: ",
							"    [Bot_Sanctuary]: Constelacion incorrecta, reingresala.\n",
							5)) {
						uppercaselInitial(constellationName);
						Object_setConstellation(thisObject,
								constellationName);
						printf(
								"    [Bot_Sanctuary]: Constelacion actualizada con exito!\n");
						showObject(thisObject);
						sucess = 1;
					}
					break;
				case 3: /* COSMOS LEVEL */
					//system("cls"); // windows
					system("clear"); // linux
					showObject(thisObject);
					if (utn_getNumeroFlotante(&cosmosLevel,
							"    [Bot_Sanctuary]: Ingreses nuevo Poder de Cosmos [1K-9999]: ",
							"    [Bot_Sanctuary]: Poder de Cosmos incorrecto, reingresalo.\n",
							1000, 9999, 5)) {
						Object_setCosmosLevel(thisObject,
								cosmosLevel);
						showObject(thisObject); // muestro los datos actualizados
						printf(
								"    [Bot_Sanctuary]: Poder de Cosmos actualizado con exito! \n");
						sucess = 1;
					}
					break;
				case 4: /* LEVEL */
					//system("cls"); // windows
					system("clear"); // linux
					showObject(thisObject);
					if (utn_getNumero(&level,
							"    [Bot_Sanctuary]: Ingrese un nuevo nivel [1-100]: ",
							"    [Bot_Sanctuary]: Nivel incorrecto, reingresalo.\n",
							1, 100, 5)) {
						Object_setLevel(thisObject, level);
						showObject(thisObject); // muestro los datos actualizados
						printf(
								"    [Bot_Sanctuary]: Nivel actualizado con exito! \n");
						sucess = 1;
					}
					break;
				case 5: /* SALIR */
					printf(
							"\n    [Bot_Sanctuary]: [Warning!] Cancelando operacion.\n");
					selectedOption = 'n';
					sucess = 0;
					break;
				default:
					printf(
							"    [Bot_Sanctuary]: [ERROR]. Opcion invalida, escoja [1-5]\n");
				}
				//printf("    [Bot_Sanctuary]: Desea realizar otras operacion?\n");
				//system("pause");
				//system("cls"); // windows
				enterToContinue(); // linux
				system("clear"); // linux
			} while (selectedOption == 'y');
		}
	}
	return sucess;
}
