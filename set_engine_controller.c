/*
 * set_engine_controller.c
 *
 *  Created on: Aug 25, 2022
 *      Author: pc
 */
#include "Defientions.h"


void set_engine_controller(float temp,struct vehicle_state *states){
	if(states->engine_temperature < 100.0 || states->engine_temperature > 150.0 )
	{
		states->Engine_Temperature_Controller_State = ON;
		states->engine_temperature = 125.0;
	}
	else
	{
		states->Engine_Temperature_Controller_State = OFF;
	}
}
