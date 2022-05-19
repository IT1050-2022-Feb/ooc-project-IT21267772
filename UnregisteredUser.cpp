#include "UnregisteredUser.h"
#include <cstring>

UnregisteredUser::UnregisteredUser()
{
}

void UnregisteredUser::registerUser(const char pName[], const char pDob[], const char pNic[], const char pEmail[], const char paddress[], const char pContactNo[])
{
	strcpy(name, pName);
	strcpy(dob, pDob);
	strcpy(nic, pNic);
	strcpy(email, pEmail);
	strcpy(address, paddress);
	strcpy(contactNo, pContactNo);
}

void UnregisteredUser::searchBusRoute(BusRoute *br)
{
	br->displayBusRoute();
}

void UnregisteredUser::viewBusSchedule(BusOperator *bo)
{
	bo->viewSchedule();
}

UnregisteredUser::~UnregisteredUser()
{
}

