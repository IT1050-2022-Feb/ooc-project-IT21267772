#include "RegisteredUser.h"
#include <iostream>
#include <cstring>
using namespace std;

RegisteredUser::RegisteredUser()
{
}

RegisteredUser::RegisteredUser(const char pUsername[], const char pPassword[])
{
	strcpy(username, pUsername);
	strcpy(password, pPassword);
}

void RegisteredUser::login()
{
}

void RegisteredUser::editProfile()
{
}

void RegisteredUser::addReservation(Reservation *prsv[])
{
	for (int i = 0; i < SIZE1; i++)
	{
		rsv[i] = prsv[i];
	}
}

void RegisteredUser::viewOffer(Offer *pofr[])
{
	for (int i = 0; i < SIZE2; i++)
	{
		ofr[i] = pofr[i];
	}
}

void RegisteredUser::addFeedback(Feedback *pfbk[])
{
	for (int i = 0; i < SIZE3; i++)
	{
		fbk[i] = pfbk[i];
	}
}

RegisteredUser::~RegisteredUser()
{
	cout << "Deleting registered user " << username << endl;
}



