Object subclass: Rider [
    | riderID name rides |

    Rider class >> newWithID: anID name: aName [
        ^ self new initializeWithID: anID name: aName.
    ]

    Rider >> initializeWithID: anID name: aName [
        riderID := anID.
        name := aName.
        rides := OrderedCollection new.
    ]

    Rider >> requestRide: aRide [
        rides add: aRide.
        Transcript show: 'Ride requested: ', aRide showDetails; cr.
    ]

    Rider >> viewRides [
        rides do: [:ride | Transcript show: ride showDetails; cr.].
    ]
]