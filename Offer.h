#pragma once
#include "RegisteredUser.h"

class Offer{
  private:
  char offerID[5];
  char offerName[20];
  double offerAmount;
  RegisteredUser *reguser;

  public:
  Offer();
  Offer(const char pOfferID[], const char pOfferName[], double pOfferAmount, RegisteredUser *pregister);
  void displayOfferDetails();
  ~Offer();
};
