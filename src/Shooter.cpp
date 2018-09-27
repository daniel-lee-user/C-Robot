/*
 * Shooter.cpp
 *
 *  Created on: Sep 16, 2018
 *      Author: Admin
 */

#include "Shooter.h"
#include <iostream>
using namespace std;

Shooter::Shooter(int port): shooterMotor(new SmartMotor(port)) {}

void Shooter::shoot() {
	cout << "FIRE!" << endl;
	shooterMotor -> setSpeed(1.0);
	shooterMotor-> setSpeed(0.0);
	shooterMotor -> getLastSpeed();
}

Shooter::~Shooter() {
	// TODO Auto-generated destructor stub
}

