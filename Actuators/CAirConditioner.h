/*! \file CAirConditioner.h
*	\brief Declaration of the class AirConditioner, a subclass of Actuator
*	\author Lorenzo Bricarello
*/

#ifndef AIRCONDITIONER_H
#define AIRCONDITIONER_H

#include "CActuator.h"

/// @class AirConditioner
/// @brief to manage an air conditioner
class AirConditioner : public Actuator
{

public:

    /// @name CONSTRUCTORS / DESTRUCTOR
    /// @{
    AirConditioner();
    AirConditioner(int id, bool state);
    AirConditioner(const AirConditioner& r);

    ~AirConditioner();
    ///@}

    /// @name OPERATORS
    /// @{
    AirConditioner& operator=(const AirConditioner& r);
    bool operator==(const AirConditioner& r);
    /// @}


    /// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const AirConditioner& r);
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
    void ErrorMessage(const char* string);
    void WarningMessage(const char* string);
    void Dump();
    /// @}

};


#endif