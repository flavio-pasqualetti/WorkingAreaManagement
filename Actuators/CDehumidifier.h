/*! \file CDehumidifier.h
*	\brief Declaration of the class Dehumidifier, a subclass of Actuator
*	\author Lorenzo Bricarello
*/

#ifndef Dehumidifier_H
#define Dehumidifier_H

#include "CActuator.h"

/// @class Dehumidifier
/// @brief to manage a dehumidifier
class Dehumidifier : public Actuator
{

public:

    /// @name CONSTRUCTORS / DESTRUCTOR
    /// @{
    Dehumidifier();
    Dehumidifier(int id, bool state);
    Dehumidifier(const Dehumidifier& r);

    ~Dehumidifier();
    ///@}

    /// @name OPERATORS
    /// @{
    Dehumidifier& operator=(const Dehumidifier& r);
    bool operator==(const Dehumidifier& r);
    /// @}


    /// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const Dehumidifier& r);
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
