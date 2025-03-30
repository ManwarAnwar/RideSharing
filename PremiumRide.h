#ifndef PREMIUM_RIDE_H
#define PREMIUM_RIDE_H

#include "Ride.h"  // Including the base class Ride

// PremiumRide class inherits from the Ride class
class PremiumRide : public Ride {
public:
    // Constructor: Initializes a PremiumRide with ride ID, pickup location, dropoff location, and distance
    PremiumRide(std::string id, std::string pickup, std::string dropoff, double dist);

    // Method to calculate the fare for a premium ride (overrides the base class method)
    double fare() const override;

    // Method to display details of the premium ride (overrides the base class method)
    void rideDetails() const override;
};

#endif  // End of the header guard to prevent multiple inclusions
