#include "StandardRide.h"
#include <iostream>

StandardRide::StandardRide(std::string id, std::string pickup, std::string dropoff, double dist)
    : Ride(id, pickup, dropoff, dist) {}

double StandardRide::fare() const {
    return distance * 2.0;  // $2 per mile
}

void StandardRide::rideDetails() const {
    std::cout << "Standard Ride - ID: " << rideID << ", Pickup: " << pickupLocation
              << ", Dropoff: " << dropoffLocation << ", Distance: " << distance
              << " miles, Fare: $" << fare() << std::endl;
}
