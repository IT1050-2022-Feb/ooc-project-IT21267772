#pragma once
#include "RegisteredUser.h"
#include "Payment.h"

class Reservation{
    private:
    char reservationID[7];
    char startingCity[20];
    char destinationCity[20];
    char date[10];
    char busType[20];
    int noOfSeats;
    RegisteredUser *reguser;
    Payment *payment;

    public:
    Reservation();
    Reservation(const char preservationID[],const char pstartingCity[],const 
char pdestinationCity[],const char pdate[],const char pbusType[],int pnoOfSeats);
    void addReservation(Payment *ppay , RegisteredUser *preg);
    void editReservation();
    void confirmReservation();
    ~Reservation();
};
