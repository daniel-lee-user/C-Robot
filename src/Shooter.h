/*
 * Shooter.h
 *
 *  Created on: Sep 16, 2018
 *      Author: Admin
 */

#ifndef SHOOTER_H_
#define SHOOTER_H_
#include "SmartMotor.h"

class Shooter {
public:
	Shooter(int port);
	virtual ~Shooter();
	void shoot();
private:
	SmartMotor* shooterMotor;
};

#endif /* SHOOTER_H_ */
