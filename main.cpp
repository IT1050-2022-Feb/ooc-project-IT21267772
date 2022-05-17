#include <iostream>
#include "BusRoute.h"
#include "BusOperator.h"

int main()
{
    BusRoute *busroute[2];

    busroute[0] = new BusRoute("BR001", "01", "Colombo - Kandy");
    busroute[1] = new BusRoute("BR002", "17", "Panadura - Kandy");

    BusOperator *busop = new BusOperator("B001", "ND-9021", "Semi Luxury");

    busop->addBusRoute(busroute);

    delete busop;
    delete busroute[0];
    delete busroute[1];
}
