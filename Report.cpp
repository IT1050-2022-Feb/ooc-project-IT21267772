#include "Report.h"

Report::Report(Payment *p[], Reservation *r[])
{
	for (int i = 0; i < SIZE1; i++)
	{
		pmt[i] = p[i];
	}

	for (int i = 0; i < SIZE2; i++)
	{
		res[i] = r[i];
	}
}

void Report::reservationList()
{
}

void Report::paymentList()
{
}

Report::~Report()
{
}
