/*! \file CSensor.cpp
    \brief Implementation of the class Sensor
    \author Flavio Pasqualetti
*/

#include "CSensor.h"

using namespace std;

/// @brief Default Constructor
Sensor::Sensor()
{
}

/// @brief Init Constructor
/// @param id Sensor identifier
/// @param min_time Minimum time between two measurements
Sensor::Sensor(int id, float min_time)
{
}

/// @brief Copy Constructor
/// @param s Reference to the Sensor to be copied
Sensor::Sensor(const Sensor &s)
{
}

/// @brief Destructor
Sensor::~Sensor()
{
}

/// @brief Overload of the operation =
/// @param s Reference to the object on the right side
/// @return Refernce to the object on the left side
Sensor &Sensor::operator=(const Sensor &s)
{
}

/// @brief Overload of the operation ==
/// @param s Reference to the object on the right side
/// @return Boolean: 1 if true - 0 if false
bool Sensor::operator==(const Sensor &s)
{
}

/// @brief Default Init
void Sensor::Init()
{
}

/// @brief Copy Init
/// @param s Reference to the object to be copied
void Sensor::Init(const Sensor &s)
{
}

/// @brief Reset of the object
void Sensor::Reset()
{
}

/// @brief Minimum Time Setter
/// @param min_time Minimum time between two measurements
void Sensor::SetMinTime(float min_time)
{
}

/// @brief Minimum Time Getter
/// @return Minimum time between two measurements
float Sensor::GetMinTime()
{
}

/// @brief To set the identifier
/// @param id Sensor id
void Sensor::SetId(int id)
{
}

/// @brief To get the identifier
/// @return Sensor id
int Sensor::GetId()
{
}

/// @brief Prints every info - useful for debugging
void Sensor::Dump()
{
}
