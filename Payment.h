#pragma once
#include "Reservation.h"
class Payment
{
private:
	char paymentID[6];
	char paymentMethod[10];
	double paymentAmount;

  //class relationship
  Reservation *res;

public:
	Payment();
	Payment(const char pID[], const char pMethod[], double pAmount, Reservation *pres);
	void validatePayment();
	void displayPaymentDetails();
	~Payment();
};

