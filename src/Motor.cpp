/*
 * Motor.cpp
 *
 *  Created on: Sep 15, 2018
 *      Author: Admin
 */

#include "Motor.h"
#include <iostream>
using namespace std;

Motor::Motor(int tempPort)
{
	port = tempPort;
	isReversed = false;
}
void Motor::setSpeed(double speed) {
	if(isReversed) {
		speed = -speed;
		cout << "motor at port "<< port << " at speed " <<speed << endl;
	}
	else {
		cout << "motor at port " << port << " at speed " << speed << endl;
	}
}
void Motor::reverse() {
	isReversed = !isReversed;
}
Motor::~Motor() {
	// TODO Auto-generated destructor stub
}
