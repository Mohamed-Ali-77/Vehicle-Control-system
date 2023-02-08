/*
 * display_set_menu.c
 *
 *  Created on: Aug 25, 2022
 *      Author: Bakr
 */
#include "Defientions.h"
#include <stdio.h>
#include <stdlib.h>

void display_set_menu(){

	char sensor,color;
	float room_temp,engine_temp;
    struct vehicle_state vehicle_state1;

    vehicle_state1.vehicle_speed = 30;
    vehicle_state1.Engine_state = OFF;
    vehicle_state1.AC = OFF;
	vehicle_state1.room_temperature = 35.0;
	vehicle_state1.Engine_Temperature_Controller_State = OFF;
	vehicle_state1.engine_temperature = 80.0;

while(1){
	puts("a. Turn off the engine\nb. Set the traffic light color.\nc. Set the room temperature (Temperature Sensor)\nd. Set the engine temperature (Engine Temperature Sensor)");\
	scanf(" %c",&sensor);

	if(sensor == 'a')
	{
		 Start_system();
	}

	else if(sensor == 'b')
	{
		puts("Enter The Traffic color (g/o/r)");
		scanf(" %c",&color);
		set_vehicle_speed(color,&vehicle_state1);
	}

	else if(sensor == 'c')
	{
		puts("Enter the room temperature");
		scanf(" %f",&room_temp);
		set_tempreature_ac(room_temp,&vehicle_state1);
	}

	else if(sensor == 'd')
	{
		puts("Enter the engine temperature");
		scanf(" %f",&engine_temp);
		set_engine_controller(engine_temp,&vehicle_state1);
	}

	else
	{
		puts("Please Enter the right choice");
		display_set_menu();
	}

	Final_setting(&vehicle_state1);
	display_current_state(&vehicle_state1);
}
}
