/*! \file CSupervisor.h
    \brief Declaration of the class Supervisor
    \author Flavio Pasqualetti
*/

#include "CSupervisor.h"

using namespace std;

/// @brief Default Constructor
Supervisor::Supervisor() {}

/// @brief Copy Constructor
/// @param s Reference to the Supervisor to be copied
Supervisor::Supervisor(const Supervisor &s)
{
}

/// @brief Destructor
Supervisor::~Supervisor()
{
}

/// @brief Overload of the operation =
/// @param s Reference to the object on the right side
/// @return Refernce to the object on the left side
Supervisor &Supervisor::operator=(const Supervisor &s)
{
}

/// @brief Overload of the operation ==
/// @param s Reference to the object on the right side
/// @return Boolean: 1 if true - 0 if false
bool Supervisor::operator==(const Supervisor &s)
{
}

/// @brief Default Init
void Supervisor::Init()
{
}

/// @brief Copy Init
/// @param s Reference to the object to be copied
void Supervisor::Init(const Supervisor &s)
{
}

/// @brief Reset of the object
void Supervisor::Reset()
{
}

/// @brief To perform a general check of the room
void Supervisor::GeneralCheck(Room *roomPtr)
{
}

/// @brief To check smoke presence
void Supervisor::CheckSmoke(Room *roomPtr)
{
}

/// @brief To check temperature
void Supervisor::CheckTemperature(Room *roomPtr)
{
}

/// @brief To check humidity
void Supervisor::CheckHumidity(Room *roomPtr) {}

/// @brief Prints every info - useful for debugging
void Supervisor::Dump()
{
}