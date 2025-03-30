Object subclass: Rider [  
    "Defines a Rider class that represents a user who can request rides."

    | riderID name rides |  "Instance variables: riderID (unique identifier), name (rider's name), rides (list of requested rides)."

    Rider class >> newWithID: anID name: aName [  
        "Class method to create a new Rider instance with a given ID and name."
        ^ self new initializeWithID: anID name: aName.
    ]

    Rider >> initializeWithID: anID name: aName [  
        "Initializes a Rider instance with ID and name, and sets up an empty list of rides."
        riderID := anID.
        name := aName.
        rides := OrderedCollection new.  "Ensures the rider starts with an empty collection of rides."
    ]

    Rider >> requestRide: aRide [  
        "Adds a requested ride to the rider's list and logs the request to the Transcript."
        rides add: aRide.
        Transcript show: 'Ride requested: ', aRide showDetails; cr.
    ]

    Rider >> viewRides [  
        "Displays details of all requested rides in the Transcript."
        rides do: [:ride | Transcript show: ride showDetails; cr.].
    ]
]
