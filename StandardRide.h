#ifndef STANDARD_RIDE_H
#define STANDARD_RIDE_H

#include "Ride.h"

class StandardRide : public Ride {
public:
    StandardRide(std::string id, std::string pickup, std::string dropoff, double dist);
    double fare() const override;
    void rideDetails() const override;
};

#endif
