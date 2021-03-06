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
 * 							#Biblioteca
 *
 * About: Versionar
 * El primero (X) se le conoce como version mayor y nos indica la version
 * 		principal del software. Ejemplo: 1.0.0, 3.0.0
 * El segundo (Y) se le conoce como version menor y nos indica nuevas funcionalidades.
 * 		Ejemplo: 1.2.0, 3.3.0
 * El tercero (Z) se le conoce como revision y nos indica que se hizo una revision del
 * 		codigo por algun fallo. Ejemplo: 1.2.2, 3.3.4
 *
 * Version     : 1.1.1 [Release Candidate v1.1]
 *
 * @author	CaiDev - FacuFalcone
 * ============================================================================
 */

#ifndef CAIDEVLIB_CLIENTE_CLIENTE_H_
#define CAIDEVLIB_CLIENTE_CLIENTE_H_

typedef struct{
	int idCliente;
	char nombre[20];
	char sexo;
}Cliente;

/**
 * @fn int initCliente(Cliente*, int)
 * @brief 	Inicializa el vector cliente.
 * @param list
 * @param lenCliente
 * @return  Retorna -1 si no pudo, sino 1
 */
int initCliente(Cliente* list, int lenCliente);

/**
 * @fn int cargarDescripcionCliente(char[], int, Cliente[], int)
 * @brief	Carga la descripcion del cliente, segun su ID.
 * @param descripcion
 * @param idCliente
 * @param list
 * @param tamCliente
 * @return  Retorna 0 si no pudo, sino retorna 1.
 */
int cargarDescripcionCliente(char descripcion[], int idCliente,	Cliente list[], int tamCliente);

/**
 * @fn int encontrarClientePorID(Cliente*, int, int)
 * @brief 	Busca el indice del cliente.
 * @param list
 * @param lenCliente
 * @param idCliente
 * @return	Retorna el indice si lo encuentra, sino -1.
 */
int encontrarClientePorID(Cliente* list, int lenCliente,int idCliente);

/**
 * @fn void mostrarCliente(Cliente)
 * @brief  Muestra los datos de un cliente.
 * @param cliente
 */
void mostrarCliente(Cliente cliente);

/**
 * @fn int listarClientes(Cliente*, int)
 * @brief  Muestra los datos de todos los clientes.
 * @param clientes
 * @param tamClientes
 * @return
 */
int listarClientes(Cliente* clientes, int tamClientes);

#endif /* CAIDEVLIB_CLIENTE_CLIENTE_H_ */
