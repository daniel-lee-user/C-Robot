/*
 * SmartMotor.h
 *
 *  Created on: Sep 16, 2018
 *      Author: Admin
 */

#ifndef SMARTMOTOR_H_
#define SMARTMOTOR_H_
#include "Motor.h"

class SmartMotor: public Motor
{
public:
	SmartMotor(int tempPort);
	void setSpeed(double speed);
	virtual ~SmartMotor();
	void getLastSpeed();
private:
	double lastSpeed;
	bool repeat;
};

#endif /* SMARTMOTOR_H_ */
