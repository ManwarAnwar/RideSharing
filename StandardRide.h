#ifndef STANDARD_RIDE_H
#define STANDARD_RIDE_H

#include "Ride.h"

// StandardRide class inherits from Ride
class StandardRide : public Ride {
public:
    // Constructor: Initializes a StandardRide with ride details
    StandardRide(std::string id, std::string pickup, std::string dropoff, double dist);

    // Overrides the pure virtual function to calculate fare for a standard ride
    double fare() const override;

    // Overrides the pure virtual function to display ride details
    void rideDetails() const override;
};

#endif
