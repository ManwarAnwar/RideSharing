Object subclass: Ride [  
    "Defines a Ride class that represents a trip with specific details."

    | rideID pickupLocation dropoffLocation distance |  
    "Instance variables: 
        rideID - Unique identifier for the ride.
        pickupLocation - Starting location.
        dropoffLocation - Destination.
        distance - Distance of the ride in miles."

    Ride class >> newWithID: anID pickup: aPickup dropoff: aDropoff distance: aDistance [  
        "Class method to create a new Ride instance with specified details."
        ^ self new initializeWithID: anID pickup: aPickup dropoff: aDropoff distance: aDistance.
    ]

    Ride >> initializeWithID: anID pickup: aPickup dropoff: aDropoff distance: aDistance [  
        "Initializes a Ride instance with given parameters."
        rideID := anID.
        pickupLocation := aPickup.
        dropoffLocation := aDropoff.
        distance := aDistance.
    ]

    Ride >> showDetails [  
        "Returns a formatted string showing ride details."
        ^ 'Ride ID: ', rideID, ' | From: ', pickupLocation, ' | To: ', dropoffLocation, ' | Distance: ', distance asString.
    ]
]
