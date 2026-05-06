/*! \file CNebulizer.h
*	\brief Declaration of the class Nebulizer, a subclass of Actuator
*	\author Lorenzo Bricarello
*/

#ifndef Nebulizer_H
#define Nebulizer_H

#include "CActuator.h"

/// @class Nebulizer
/// @brief to manage a nebulizer
class Nebulizer : public Actuator
{

public:

    /// @name CONSTRUCTORS / DESTRUCTOR
    /// @{
    Nebulizer();
    Nebulizer(int id, bool state);
    Nebulizer(const Nebulizer& r);

    ~Nebulizer();
    ///@}

    /// @name OPERATORS
    /// @{
    Nebulizer& operator=(const Nebulizer& r);
    bool operator==(const Nebulizer& r);
    /// @}


    /// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const Nebulizer& r);
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
