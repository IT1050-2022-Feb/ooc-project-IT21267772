#pragma once
#include "Payment.h"
#include "Reservation.h"
#define SIZE1 5
#define SIZE2 5

class Report
{
private:
	Payment *pmt[SIZE1];
	Reservation *res[SIZE2];

public:
	Report(Payment *p[], Reservation *r[]);
	void reservationList();
	void paymentList();
	~Report();
};


