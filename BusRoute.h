#pragma once

class BusRoute
{
private:
	char routeID[6];
	char routeNo[10];
	char routeName[30];

public:
	BusRoute();
	BusRoute(const char pRouteID[], const char pRouteNo[], const char pRouteName[]);
	void displayBusRoute();
	~BusRoute();
};

