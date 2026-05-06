/*! \file CSupervisor.h
    \brief CSupervisor class definition
    \author Flavio Pasqualetti
*/

#ifndef CSUPERVISOR_H
#define CSUPERVISOR_H

#include "CRoom.h"

using namespace std;

/// @class Supervisor
/// @brief Class to manage a generic supervisor
class Supervisor
{

public:
    /// @name CONSTRUCTORS / DESTRUCTOR
    /// @{
    Supervisor();
    Supervisor(const Supervisor &s);

    ~Supervisor();
    /// @}

    /// @name OPERATORS
    /// @{
    Supervisor &operator=(const Supervisor &s);
    bool operator==(const Supervisor &s);
    /// @}

    /// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const Supervisor &s);
    void Reset();
    /// @}

    /// @name USAGE
    /// @{
    void GeneralCheck(Room *roomPtr);
    void CheckSmoke(Room *roomPtr);
    void CheckTemperature(Room *roomPtr);
    void CheckHumidity(Room *roomPtr);
    /// @}

    /// @name DEBUG
    /// @{
    void Dump();
    /// @}
};

#endif