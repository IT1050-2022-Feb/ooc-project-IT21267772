#pragma once
#include "BusRoute.h";
#define SIZE 5

class BusOperator
{
private:
	char busID[5];
	char registrationNo[8];
	char busType[20];
	char busSchedule[50];

	//class relationship
	BusRoute *br[SIZE];

public:
	BusOperator();
	BusOperator(const char pBusID[], const char pRegistrationNo[], const char pbusType[]);
	void addSchedule(const char pBusSchedule[]);
	void viewSchedule();
	void addBusRoute(BusRoute *br[]);
	~BusOperator();
};
