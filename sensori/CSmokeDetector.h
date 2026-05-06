/*! \file CSmokeDetector.h
    \brief Declaration of class SmokeDetector
    \author Flavio Pasqualetti
*/

#ifndef SMOKE_DETECTOR_H
#define SMOKE_DETECTOR_H

#include "CSensor.h"

/// @class SmokeDetector
/// @brief to manage a smoke detector sensor
class SmokeDetector : public Sensor
{
    /// true if smoke is detected, false otherwise
    bool smoke_detected[N];

public:
    /// @name CONSTRUCTOR / DESTRUCTOR
    /// @{
    SmokeDetector();
    SmokeDetector(bool *smoke);
    SmokeDetector(const SmokeDetector &s);
    ~SmokeDetector();
    /// @}

    /// @name OPERATORS
    /// @{
    SmokeDetector &operator=(const SmokeDetector &s);
    bool operator==(const SmokeDetector &s);
    /// @}

    /// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const SmokeDetector &s);
    void Reset();
    /// @}

    /// @name SETTER / GETTER
    /// @{
    void SetSmokeDetected(bool smoke);
    bool GetSmokeDetected();
    /// @}

    /// @name DEBUG
    /// @{
    void Dump();
    /// @}
};

#endif