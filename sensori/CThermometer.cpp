/*! \file CThermometer.cpp
    \brief Implementation of the class Thermometer
    \author Flavio Pasqualetti
*/

#include "CThermometer.h"

using namespace std;

/// @brief Default Constructor
Thermometer::Thermometer()
{
}

/// @brief Init Constructor
/// @param temperature Pointer to the array of temperature values
Thermometer::Thermometer(float *temperature)
{
}

/// @brief Copy Constructor
/// @param s Reference to the Thermometer to be copied
Thermometer::Thermometer(const Thermometer &s)
{
}

/// @brief Destructor
Thermometer::~Thermometer()
{
}

/// @brief Overload of the operation =
/// @param s Reference to the object on the right side
/// @return Refernce to the object on the left side
Thermometer &Thermometer::operator=(const Thermometer &s)
{
}

/// @brief Overload of the operation ==
/// @param s Reference to the object on the right side
/// @return Boolean: 1 if true - 0 if false
bool Thermometer::operator==(const Thermometer &s)
{
}

/// @brief Default Init
void Thermometer::Init()
{
}

/// @brief Copy Init
/// @param s Reference to the object to be copied
void Thermometer::Init(const Thermometer &s)
{
}

/// @brief Reset of the object
void Thermometer::Reset()
{
}

/// @brief Measures and sets the temperature
/// @param temperature temperature measurement
void Thermometer::SetTemp(float temperature)
{
}

/// @brief Gets the temperature
/// @return Float: temperature
float Thermometer::GetTemp()
{
}

/// @brief Prints every info - useful for debugging
void Thermometer::Dump()
{
}