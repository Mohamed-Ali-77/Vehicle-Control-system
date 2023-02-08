/*
 * Defientions.h
 *
 *  Created on: Aug 25, 2022
 *      Author: pc
 */

#ifndef DEFIENTIONS_H_
#define DEFIENTIONS_H_




enum state{
	OFF,ON
};


struct vehicle_state{
	enum state Engine_state;
	enum state AC;
	int vehicle_speed;
	float room_temperature;
	enum state Engine_Temperature_Controller_State;
	float engine_temperature;
};




#endif /* DEFIENTIONS_H_ */
