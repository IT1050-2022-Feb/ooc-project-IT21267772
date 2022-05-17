#include "BusOperator.h"
#include <iostream>
#include <cstring>
using namespace std;

BusOperator::BusOperator()
{
}

BusOperator::BusOperator(const char pBusID[], const char pRegistrationNo[], const char pbusType[])
{
	strcpy(busID, pBusID);
	strcpy(registrationNo, pRegistrationNo);
	strcpy(busType, pbusType);
}

void BusOperator::addSchedule(const char pBusSchedule[])
{
	strcpy(busSchedule, pBusSchedule);
}

void BusOperator::viewSchedule()
{
}

void BusOperator::addBusRoute(BusRoute *pbr[])
{
	for (int i = 0; i < SIZE; i++)
	{
		br[i] = pbr[i];
	}
}

BusOperator::~BusOperator()
{
	cout << "Deleting bus operator " << busID << endl;
}
