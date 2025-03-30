#include "PremiumRide.h"  // Including the header file for the PremiumRide class
#include <iostream>       // Including iostream for console output

// Constructor: Initializes a PremiumRide with ride ID, pickup location, dropoff location, and distance
PremiumRide::PremiumRide(std::string id, std::string pickup, std::string dropoff, double dist)
    : Ride(id, pickup, dropoff, dist) {}  // Calling the base class (Ride) constructor

// Method to calculate the fare for a premium ride
double PremiumRide::fare() const {
    return distance * 3.5;  // Premium rate: $3.5 per mile
}

// Method to display details of the premium ride
void PremiumRide::rideDetails() const {
    std::cout << "Premium Ride - ID: " << rideID 
              << ", Pickup: " << pickupLocation
              << ", Dropoff: " << dropoffLocation 
              << ", Distance: " << distance
              << " miles, Fare: $" << fare() << std::endl;
}
