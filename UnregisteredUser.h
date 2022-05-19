#pragma once
#include "BusRoute.h"
#include "BusOperator.h"

class UnregisteredUser
{
protected:
	char name[10];
	char dob[10];
	char nic[12];
	char email[20];
	char address[40];
	char contactNo[10];

public:
	UnregisteredUser();
	void registerUser(const char pName[], const char pDob[], const char pNic[], const char pEmail[], const char paddress[], const char pContactNo[]);
	void searchBusRoute(BusRoute *br);
	void viewBusSchedule(BusOperator *bo);
	~UnregisteredUser();
};

