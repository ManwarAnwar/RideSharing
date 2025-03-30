Object subclass: Ride [
    | rideID pickupLocation dropoffLocation distance |

    Ride class >> newWithID: anID pickup: aPickup dropoff: aDropoff distance: aDistance [
        ^ self new initializeWithID: anID pickup: aPickup dropoff: aDropoff distance: aDistance.
    ]

    Ride >> initializeWithID: anID pickup: aPickup dropoff: aDropoff distance: aDistance [
        rideID := anID.
        pickupLocation := aPickup.
        dropoffLocation := aDropoff.
        distance := aDistance.
    ]

    Ride >> showDetails [
        ^ 'Ride ID: ', rideID, ' | From: ', pickupLocation, ' | To: ', dropoffLocation, ' | Distance: ', distance asString.
    ]
]