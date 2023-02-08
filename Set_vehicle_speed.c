/*
 * Set_speed.c
 *
 *  Created on: Aug 25, 2022
 *  Author: Bakr
 */
#include "Defientions.h"

void set_vehicle_speed(char color, struct vehicle_state *states){
	if(color == 'g'){
		states->vehicle_speed = 100;
	}
	else if(color == 'o'){
		states->vehicle_speed = 30;
	}
	else if(color == 'r'){
		states->vehicle_speed = 0;
	}
	else{
		puts("Invalid traffic light");
	}
}
