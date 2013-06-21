/*
 * Orquestador.h
 *
 *  Created on: 20/06/2013
 *      Author: reyiyo
 */

#ifndef ORQUESTADOR_H_
#define ORQUESTADOR_H_

#include "../../common/sockets.h"
#include "../../common/mensaje.h"
#include <commons/collections/list.h>

int handshake(t_socket_client* client, t_mensaje *rq);
void mostrar_mensaje(t_mensaje* mensaje, t_socket_client* client);

#endif /* ORQUESTADOR_H_ */
