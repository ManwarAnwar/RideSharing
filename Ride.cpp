#include "Ride.h"

Ride::Ride(std::string id, std::string pickup, std::string dropoff, double dist)
    : rideID(id), pickupLocation(pickup), dropoffLocation(dropoff), distance(dist) {}
