#ifndef RIDE_H
#define RIDE_H

#include <iostream>
#include <string>

class Ride {
public:
    Ride(std::string id, std::string pickup, std::string dropoff, double dist);

    virtual double fare() const = 0; // Pure virtual function
    virtual void rideDetails() const = 0; // Pure virtual function

protected:
    std::string rideID;
    std::string pickupLocation;
    std::string dropoffLocation;
    double distance;
};

#endif
