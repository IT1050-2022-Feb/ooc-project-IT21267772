
#include <iostream>
#include "UnregisteredUser.h"
#include "RegisteredUser.h"
#include "BusRoute.h"
#include "BusOperator.h"
#include "Offer.h"
#include "Reservation.h"
#include "Payment.h"
#include "Feedback.h"
#include "Report.h"

int main() {
    UnregisteredUser *unregUser;

    unregUser->registerUser("Kavindu", "02-04-2000", "200008456789","kavindugithmin@gmail.com","No.22/1,Parakrama Mawatha,Maradana","0769645678");

    RegisteredUser *regUser = new RegisteredUser("kavinduEdirisinghe", "jimmy21");

    BusRoute *busroute[2];

    busroute[0] = new BusRoute("BR001", "01", "Colombo - Kandy");
    busroute[1] = new BusRoute("BR002", "17", "Panadura - Kandy");

    BusOperator *busop = new BusOperator("B001", "ND-9021", "Semi Luxury");

    busop->addBusRoute(busroute);

    regUser->viewBusSchedule(busop);
  
    Offer *offer = new Offer("O001", "New Year", 2000, regUser);
    
    offer->displayOfferDetails();

    Reservation *reservation[2];

    reservation[0] = new Reservation("R00001","Colombo","Kandy","2022-05-25","Luxuary",2);
    reservation[1] = new Reservation("R00002","Matara","Kandy","2022-05-27","Luxuary",1);

    reservation[0]->confirmReservation();
    reservation[1]->confirmReservation();
  
    Payment *payment[2];
    
    payment[0]= new Payment("PR0001","VISA",3000,reservation[0]);
    payment[1]= new Payment("PR0002","AMEX",4000,reservation[1]);

    payment[0]->displayPaymentDetails();
    payment[1]->displayPaymentDetails();
  
    Feedback *feed = new Feedback("FB0023","Great service",regUser);
    feed->displayFeedback();

    Report *report = new Report(payment, reservation);

    delete unregUser;
    delete regUser;
    
    delete busop;
  
    delete busroute[0];
    delete busroute[1];

    delete offer;
  
    delete reservation[0];
    delete reservation[1];
  
    delete feed;
  
    delete payment[0];
    delete payment[1];

    delete report;
  
    return 0;
}

