/*
 * Chassis.h
 *
 *  Created on: Sep 15, 2018
 *      Author: Admin
 */

#ifndef CHASSIS_H_
#define CHASSIS_H_
#include "Motor.h"

class Chassis {
public:
	Chassis(int port1, int port2);
	virtual ~Chassis();
	void moveStraight(double speed);
	void pointTurn(double speed);
	void brake();
	void wait(float milliseconds);
private:
	Motor* leftWheels;
	Motor* rightWheels;
};

#endif /* CHASSIS_H_ */
