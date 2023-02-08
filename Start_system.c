/*
 * Beginning.c
 *
 *  Created on: Aug 25, 2022
 *  Author: Bakr
 */

#include "Defientions.h"
#include <stdio.h>
#include <stdlib.h>

void Start_system(){
	char option;

	puts("a. Turn on the vehicle engine\nb. Turn off the vehicle engine\nc. Quit the system\n");

	scanf(" %c",&option);

	if(option == 'a')
	{
		display_set_menu();
	}
	else if(option == 'b')
	{
			puts("Vehicle engine Successfully Turned off");
			Start_system();
	}
	else if(option == 'c')
	{
		puts("System Terminated");
		exit(1);
	}
	else
	{
		puts("Please Enter the right choice");
		Start_system();
	}
}
