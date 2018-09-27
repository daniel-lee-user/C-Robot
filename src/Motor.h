/*
 * Motor.h
 *
 *  Created on: Sep 15, 2018
 *      Author: Admin
 */

#ifndef MOTOR_H_
#define MOTOR_H_

class Motor {
public:
	Motor(int tempPort);
	virtual ~Motor();
	void setSpeed(double speed);
	void reverse();
protected:
	bool isReversed;
	int port;
};

#endif /* MOTOR_H_ */
