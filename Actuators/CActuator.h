/*! \file CActuator.h
*	\brief Declaration of the class Actuator
*	\author Lorenzo Bricarello
*/

#ifndef ACTUATOR_H
#define ACTUATOR_H

/// @class Actuator
/// @brief to manage a generic actuator
class Actuator
{
protected:

	int id; // actuator id
	bool state; // state of the actuator (ON/OFF)

public:

	/// @name CONSTRUCTORS / DESTRUCTOR
	/// @{
	Actuator();
	Actuator(int id, bool state);
	Actuator(const Actuator& r);
	
	~Actuator();
	///@}

    /// @name OPERATORS
    /// @{
    Actuator& operator=(const Actuator& r);
    bool operator==(const Actuator& r);
    /// @}


    /// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const Actuator& r);
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