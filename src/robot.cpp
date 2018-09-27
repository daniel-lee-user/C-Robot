/*
 * robot.cpp
 *
 *  Created on: Sep 16, 2018
 *      Author: Admin
 */
#include "Chassis.h"
#include "Motor.h"
#include "SmartMotor.h"
#include "Shooter.h"
#include <iostream>
using namespace std;

int main() {
	/*
	Chassis* testChassis = new Chassis(3, 4);
	testChassis -> moveStraight(1.0);
	testChassis -> wait(3000);
	testChassis -> pointTurn(-0.6);
	testChassis -> wait(500);
	testChassis -> brake();
	Shooter* testShooter = new Shooter(5);
	testShooter -> shoot();
	*/
	Chassis* coolChassis = new Chassis(3, 4);
	Shooter* coolShooter = new Shooter(6);
	coolChassis -> moveStraight(1.0);
	coolChassis -> wait(3000);
	coolChassis -> pointTurn(-0.6);
	coolChassis -> wait(500);
	coolChassis -> brake();
	coolShooter -> shoot();

}




