#ifndef DRIVER_H
#define DRIVER_H

#include "Ride.h"
#include <vector>

class Driver {
public:
    Driver(std::string id, std::string name, double rating);
    void addRide(Ride* ride);
    void getDriverInfo() const;

private:
    std::string driverID;
    std::string name;
    double rating;
    std::vector<Ride*> assignedRides;
};

#endif
