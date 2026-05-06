/*! \file CThermometer.h
    \brief Declaration of class Thermometer
    \author Flavio Pasqualetti
*/

#ifndef THERMOMETER_H
#define THERMOMETER_H

#include "CSensor.h"

/// @class Thermometer
/// @brief to manage a temperature sensor
class Thermometer : public Sensor
{
    /// temperature measurements
    float temp[N];

public:
    /// @name CONSTRUCTOR / DESTRUCTOR
    /// @{
    Thermometer();
    Thermometer(float *temperature);
    Thermometer(const Thermometer &s);
    ~Thermometer();
    /// @}

    /// @name OPERATORS
    /// @{
    Thermometer &operator=(const Thermometer &s);
    bool operator==(const Thermometer &s);
    /// @}

    /// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const Thermometer &s);
    void Reset();
    /// @}

    /// @name SETTER / GETTER
    /// @{
    void SetTemp(float temperature);
    float GetTemp();
    ;
    /// @}

    /// @name DEBUG
    /// @{
    void Dump();
    /// @}
};

#endif