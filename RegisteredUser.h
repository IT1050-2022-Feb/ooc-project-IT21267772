#pragma once
#include "UnregisteredUser.h"
#include "Reservation.h"
#include "Offer.h"
#include "Feedback.h"
#define SIZE1 5
#define SIZE2 5
#define SIZE3 5

class RegisteredUser : public UnregisteredUser
{
protected:
	char username[20];
	char password[20];

	//class relationship
	Reservation *rsv[SIZE1];
	Offer *ofr[SIZE2];
	Feedback *fbk[SIZE3];

public:
	RegisteredUser();
	RegisteredUser(const char pUsername[], const char pPassword[]);
	void login();
	void editProfile();
	void addReservation(Reservation *prsv[]);
	void viewOffer(Offer *pofr[]);
	void addFeedback(Feedback *pfbk[]);
	~RegisteredUser();
};
