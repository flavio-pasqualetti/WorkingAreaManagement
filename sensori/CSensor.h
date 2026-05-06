/*! \file CSensor.h
    \brief Declaration of class Sensor
    \author Flavio Pasqualetti
*/

#ifndef SENSOR_H
#define SENSOR_H

#define N 10

using namespace std;

/// @class Sensor
/// @brief to manage a generic sensor
class Sensor
{
protected:
    /// identifier
    int id;
    /// minimum time between two measurements (in seconds)
    float min_time;

public:
    /// @name COSTRUCTOR / DESTRUCTOR
    /// @{
    Sensor();
    Sensor(int id, float min_time);
    Sensor(const Sensor &s);

    virtual ~Sensor();
    /// @}

    /// @name OPERATORS
    /// @{
    Sensor &operator=(const Sensor &s);
    bool operator==(const Sensor &s);
    /// @}

    /// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const Sensor &s);
    void Reset();
    /// @}

    /// @name SETTER / GETTER
    /// @{
    void SetMinTime(float min_time);
    float GetMinTime();

    void SetId(int id);
    int GetId();
    /// @}

    /// @name DEBUG
    /// @{
    virtual void Dump();
    /// @}
};

#endif