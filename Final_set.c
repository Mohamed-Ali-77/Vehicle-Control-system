/*
 * Final_set.c
 *
 *  Created on: Aug 25, 2022
 *      Author: pc
 */
#include "Defientions.h"


void Final_setting(struct vehicle_state *states){
	if(states->vehicle_speed == 30)
	{
			states->AC = ON;
			states->room_temperature = states->room_temperature * (5.0/4.0) + 1;
			states->Engine_Temperature_Controller_State = ON;
			states->engine_temperature = states->engine_temperature * (5.0/4.0) + 1;
	}
}
