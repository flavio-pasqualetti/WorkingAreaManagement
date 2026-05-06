/*! \file CAlarm.h
 *	\brief Declaration of the class Alarm, a subclass of Actuator
 *	\author Lorenzo Bricarello
 */

#ifndef ALARM_H
#define ALARM_H

#include "CActuator.h"

/// @class Alarm
/// @brief to manage an alarm
class Alarm : public Actuator
{

public:
    /// @name CONSTRUCTORS / DESTRUCTOR
    /// @{
    Alarm();
    Alarm(int id, bool state);
    Alarm(const Alarm &r);

    ~Alarm();
    ///@}

    /// @name OPERATORS
    /// @{
    Alarm &operator=(const Alarm &r);
    bool operator==(const Alarm &r);
    /// @}

    /// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const Alarm &r);
    void Reset();
    /// @}

    /// @name GETTERS / SETTERS
    /// @{
    void SetState(bool boolean);
    void SetId(int integer);

    bool GetState();
    int GetId();
    /// @}

    /// @name DEBUG and SERIALIZATION
    /// @{
    void ErrorMessage(const char *string);
    void WarningMessage(const char *string);
    void Dump();
    /// @}
};

#endif