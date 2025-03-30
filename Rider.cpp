#include "Rider.h"
#include <iostream>

// Constructor: Initializes a Rider with an ID and a name
Rider::Rider(std::string id, std::string n) : riderID(id), name(n) {}

// Method to request a ride and add it to the rider's list of requested rides
void Rider::requestRide(Ride* ride) {
    requestedRides.push_back(ride);
}

// Method to display all requested rides for the rider
void Rider::viewRides() const {
    std::cout << "Rider: " << name << " - Requested Rides:\n";
    
    // Iterate through requested rides and display their details
    for (const auto& ride : requestedRides) {
        ride->rideDetails();
    }
}
