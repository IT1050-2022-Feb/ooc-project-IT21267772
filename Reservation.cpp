#include "Reservation.h"
#include <iostream>
#include <cstring>
using namespace std;

Reservation::Reservation(){
        strcpy(reservationID,"");
        strcpy(startingCity,"");
        strcpy(destinationCity,"");
        strcpy(date,"");
        strcpy(busType,"");
        noOfSeats = 0 ;
    }
Reservation ::Reservation(const char preservationID[],const char pstartingCity[],const char pdestinationCity[],const char pdate[],const char pbusType[],int pnoOfSeats){
        strcpy(reservationID,preservationID);
        strcpy(startingCity,pstartingCity);
        strcpy(destinationCity,pdestinationCity);
        strcpy(date,pdate);
        strcpy(busType,pbusType);
        noOfSeats = pnoOfSeats ;
    }
void Reservation ::addReservation(Payment *ppay , RegisteredUser *preg){
  
}
void Reservation :: editReservation(){
  
}
void Reservation ::confirmReservation(){
  
}
Reservation ::~Reservation(){
        cout<<"";
    }
