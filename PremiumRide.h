#ifndef PREMIUM_RIDE_H
#define PREMIUM_RIDE_H

#include "Ride.h"

class PremiumRide : public Ride {
public:
    PremiumRide(std::string id, std::string pickup, std::string dropoff, double dist);
    double fare() const override;
    void rideDetails() const override;
};

#endif
