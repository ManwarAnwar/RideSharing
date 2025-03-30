#include "Driver.h"
#include <iostream>

Driver::Driver(std::string id, std::string n, double r)
    : driverID(id), name(n), rating(r) {}

void Driver::addRide(Ride* ride) {
    assignedRides.push_back(ride);
}

void Driver::getDriverInfo() const {
    std::cout << "Driver ID: " << driverID << "\nName: " << name
              << "\nRating: " << rating << "\nAssigned Rides:\n";

    for (const auto& ride : assignedRides) {
        ride->rideDetails();
    }
}
