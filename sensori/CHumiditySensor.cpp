/*! \file CHumiditySensor.cpp
    \brief Implementation of the class HumiditySensor
    \author Flavio Pasqualetti
*/

#include "CHumiditySensor.h"

using namespace std;

/// @brief Default Constructor
HumiditySensor::HumiditySensor()
{
}

/// @brief Init Constructor
/// @param humidity_rate Pointer to array of float: humidity measurements
HumiditySensor::HumiditySensor(float *humidity_rate)
{
}

// @brief Copy Constructor
/// @param s Reference to the HumiditySensor to be copied
HumiditySensor::HumiditySensor(const HumiditySensor &s)
{
}

/// @brief Destructor
HumiditySensor::~HumiditySensor()
{
}

/// @brief Overload of the operation =
/// @param s Reference to the object on the right side
/// @return Refernce to the object on the left side
HumiditySensor &HumiditySensor::operator=(const HumiditySensor &s)
{
}

/// @brief Overload of the operation ==
/// @param s Reference to the object on the right side
/// @return Boolean: 1 if true - 0 if false
bool HumiditySensor::operator==(const HumiditySensor &s)
{
}

/// @brief Default Init
void HumiditySensor::Init()
{
}

/// @brief Copy Init
/// @param s Reference to the object to be copied
void HumiditySensor::Init(const HumiditySensor &s)
{
}

/// @brief Reset of the object
void HumiditySensor::Reset()
{
}

/// @brief Measures and sets the humidity rate
/// @param humidity_rate Float: the humidity rate (percentage)
void HumiditySensor::SetHumidityRate(float humidity_rate)
{
}

/// @brief Gets the humidity rate
/// @return Float: the humidity rate (percentage)
float HumiditySensor::GetHumidityRate()
{
}

/// @brief Prints every info - useful for debugging
void HumiditySensor::Dump()
{
}