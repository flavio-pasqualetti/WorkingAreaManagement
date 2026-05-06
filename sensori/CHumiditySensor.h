/*! \file CHumiditySensor.h
    \brief Declaration of class HumiditySensor
    \author Flavio Pasqualetti
*/

#ifndef HUMIDITY_SENSOR_H
#define HUMIDITY_SENSOR_H

#include "CSensor.h"

/// @class HumiditySensor
/// @brief to manage a humidity sensor
class HumiditySensor : public Sensor
{
    /// humidity rate (percentage) measurements
    float humidity_rate[N];

public:
    /// @name CONSTRUCTOR / DESTRUCTOR
    /// @{
    HumiditySensor();
    HumiditySensor(float *humidity_rate);
    HumiditySensor(const HumiditySensor &s);
    ~HumiditySensor();
    /// @}

    /// @name OPERATORS
    /// @{
    HumiditySensor &operator=(const HumiditySensor &s);
    bool operator==(const HumiditySensor &s);
    /// @}

    /// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const HumiditySensor &s);
    void Reset();
    /// @}

    /// @name SETTER / GETTER
    /// @{
    void SetHumidityRate(float humidity_rate);
    float GetHumidityRate();
    /// @}

    /// @name DEBUG
    /// @{
    void Dump();
    /// @}
};

#endif