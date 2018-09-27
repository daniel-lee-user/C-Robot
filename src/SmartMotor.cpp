/*
 * SmartMotor.cpp
 *
 *  Created on: Sep 16, 2018
 *      Author: Admin
 */

#include "SmartMotor.h"
#include "Motor.h"
#include <iostream>
using namespace std;

SmartMotor::SmartMotor(int tempPort): Motor(tempPort)
{
	// TODO Auto-generated constructor stub
	isReversed = false;
	lastSpeed = 0;
	repeat = false;
}

void SmartMotor::getLastSpeed() {
	cout << lastSpeed << " was the last speed" << endl;
}
void SmartMotor::setSpeed(double speed) {
	int temp;
	if(repeat) {
		lastSpeed = temp;
	}
	Motor::setSpeed(speed);
	temp = speed;
	repeat = true;

}

SmartMotor::~SmartMotor() {
	// TODO Auto-generated destructor stub
}

