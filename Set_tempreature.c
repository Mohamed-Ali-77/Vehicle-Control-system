/*
 * Set_tempreature.c
 *
 *  Created on: Aug 25, 2022
 *      Author: pc
 */
#include "Defientions.h"


void set_tempreature_ac(float temp,struct vehicle_state *states){
	if(states->room_temperature < 10.0){
		states->room_temperature = 20.0;
		states->AC = ON;
	}
	else if(states->room_temperature > 30.0){
		states->room_temperature = 20.0;
		states->AC = ON;
	}
	else{
		states->AC = OFF;
	}
}
