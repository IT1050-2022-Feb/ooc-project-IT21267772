#include "Offer.h"
#include <iostream>
#include <cstring>

using namespace std;

    Offer::Offer(){
        strcpy(offerID , "");
        strcpy(offerName , "");
        offerAmount = 0;
    }

    Offer::Offer(const char pOfferID[], const char pOfferName[], double pOfferAmount, RegisteredUser *pregister){
        strcpy(offerID , pOfferID);
        strcpy(offerName , pOfferName);
        offerAmount = pOfferAmount;
        reguser = pregister;
    }

    void Offer::displayOfferDetails(){
        cout << "Offer ID : " << offerID << endl;
        cout << "Offer Name : " << offerName <<endl;
    }
     
    Offer::~Offer(){
         cout << "Deleting offer " << offerID << endl;
     }
