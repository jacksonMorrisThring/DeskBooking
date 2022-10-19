#ifndef DESK_H
#define DESK_H

class Desk{
public:
    bool occupied;
    int deskNum;

    // Behaviour (abstract)
    virtual bool isOccupied() = 0;
};

#endif