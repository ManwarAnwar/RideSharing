#include "PremiumRide.h"
#include <iostream>

PremiumRide::PremiumRide(std::string id, std::string pickup, std::string dropoff, double dist)
    : Ride(id, pickup, dropoff, dist) {}

double PremiumRide::fare() const {
    return distance * 3.5;  // $3.5 per mile
}

void PremiumRide::rideDetails() const {
    std::cout << "Premium Ride - ID: " << rideID << ", Pickup: " << pickupLocation
              << ", Dropoff: " << dropoffLocation << ", Distance: " << distance
              << " miles, Fare: $" << fare() << std::endl;
}
