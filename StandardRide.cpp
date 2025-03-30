#include "StandardRide.h"
#include <iostream>

// Constructor: Initializes a StandardRide with the given details
StandardRide::StandardRide(std::string id, std::string pickup, std::string dropoff, double dist)
    : Ride(id, pickup, dropoff, dist) {}

// Method to calculate the fare for a standard ride
double StandardRide::fare() const {
    return distance * 2.0;  // Fare rate: $2 per mile
}

// Method to display ride details including fare calculation
void StandardRide::rideDetails() const {
    std::cout << "Standard Ride - ID: " << rideID << ", Pickup: " << pickupLocation
              << ", Dropoff: " << dropoffLocation << ", Distance: " << distance
              << " miles, Fare: $" << fare() << std::endl;
}
