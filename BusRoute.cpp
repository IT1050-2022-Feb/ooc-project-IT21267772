#include "BusRoute.h"
#include <iostream>
#include <cstring>
using namespace std;

BusRoute::BusRoute()
{
}

BusRoute::BusRoute(const char pRouteID[], const char pRouteNo[], const char pRouteName[])
{
	strcpy(routeID, pRouteID);
	strcpy(routeNo, pRouteNo);
	strcpy(routeName, pRouteName);
}

void BusRoute::displayBusRoute()
{
	cout << "Route ID : " << routeID << endl;
	cout << "Route No : " << routeNo << endl;
	cout << "Route Name : " << routeName << endl;
}

BusRoute::~BusRoute()
{
	cout << "Deleting bus route " << routeID << endl;
}

