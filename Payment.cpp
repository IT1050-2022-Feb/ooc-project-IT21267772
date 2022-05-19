#include "Payment.h"
#include <iostream>
#include <cstring>
using namespace std;

Payment::Payment()
{
	strcpy(paymentID, "");
	strcpy(paymentMethod, "");
	paymentAmount = 0;
};

Payment::Payment(const char pID[], const char pMethod[], double pAmount, Reservation *pres)
{
	strcpy(paymentID, pID);
	strcpy(paymentMethod, pMethod);
	paymentAmount = pAmount;
  res = pres;
};

void Payment::validatePayment()
{

};

void Payment::displayPaymentDetails()
{
	cout << "Payment ID is :" << paymentID << endl;
	cout << "Payment Method is :" << paymentMethod << endl;
	cout << "Payment Amount :" << paymentAmount << endl;
}

Payment::~Payment()
{
	cout << "!PR" << endl;
}