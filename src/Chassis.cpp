/*
 * Chassis.cpp
 *
 *  Created on: Sep 15, 2018
 *      Author: Admin
 */

#include "Chassis.h"
#include <iostream>
using namespace std;

Chassis::Chassis(int port1, int port2): leftWheels(new Motor(port1)), rightWheels(new Motor(port2)) {}

void Chassis::moveStraight(double speed)
{
	leftWheels -> setSpeed(speed);
	rightWheels -> setSpeed(speed);
}
void Chassis::pointTurn(double speed) {
	leftWheels -> setSpeed(speed);
	rightWheels -> setSpeed(-speed);
}
void Chassis::brake() {
	leftWheels -> setSpeed(0);
	rightWheels ->setSpeed(0);
}
void Chassis::wait(float milliseconds) {
	float seconds = milliseconds/1000;
	cout << "waiting " << seconds << " seconds" << endl;
}
Chassis::~Chassis() {
	// TODO Auto-generated destructor stub
    delete leftWheels;
    delete rightWheels;
    leftWheels = nullptr;
    rightWheels = nullptr;
}

