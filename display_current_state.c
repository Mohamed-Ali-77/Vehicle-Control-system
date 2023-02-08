/*
 * display_current_state.c
 *
 *  Created on: Aug 25, 2022
 *      Author: pc
 */

#include "Defientions.h"

void display_current_state(struct vehicle_state *states){

	(states->Engine_state == ON)? printf("Engine State: ON\n"): printf("Engine State: OFF\n");
	(states->AC == ON)? printf("AC: ON\n"): printf("AC: OFF\n");
	printf("Vehicle Speed: %d\n",states->vehicle_speed);
	printf("Room Temperature: %.2f\n",states->room_temperature);
	(states->Engine_Temperature_Controller_State == ON)? printf("Engine Temperature Controller: ON\n"): printf("Engine Temperature Controller: OFF\n");
	printf("Engine Temperature: %.2f\n",states->engine_temperature);
}
