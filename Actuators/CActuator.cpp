/*! \file CActuator.cpp
    \brief implementation of class Actuator
    \author Lorenzo Bricarello
*/

#include "CActuator.h"
#include<iostream>
using namespace std;

/* ----------------------------
    CONSTRUCTORS / DESTRUCTOR
   ---------------------------- */

/// @brief default constructor 
Actuator::Actuator()
{

    cout << "Actuator - default constructor" << endl;

    Init();
}

/// @brief constructor 
/// @param id identification code of the actuator
/// @param state state of the actuator (ON/OFF) (TRUE/FALSE)
Actuator::Actuator(int id, bool state)
{

}

/// @brief copy constructor
/// @param r reference to the object to be copied
Actuator::Actuator(const Actuator& r)
{
    cout << "Actuator - copy constructor" << endl;


    Init(r);
}

/// @brief destructor
Actuator::~Actuator()
{
    cout << "Actuator - destructor" << endl;
    Reset();
}

/* ----------------------------
            OPERATORS
   ---------------------------- */

/// @brief overload of operator = 
/// @param r reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator
Actuator& Actuator::operator=(const Actuator& r)
{

}

/// @brief overload of operator == 
/// @param r reference to the object on the right side of the operator 
/// @return true if the two objects have the same width and the same length  
bool Actuator::operator==(const Actuator& r)
{
 
}

/* ----------------------------
          BASIC HANDLING
   ---------------------------- */

/// @brief default initialization of the object
void Actuator::Init()
{

}

/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void Actuator::Init(const Actuator& r)
{

}


/// @brief total reset of the object  
void Actuator::Reset()
{

}

/*----------------------------
        GETTERS / SETTERS
  ---------------------------- */

/// @brief sets the state of the actuator
/// @param boolean state to be set
void Actuator::SetState(bool boolean)
{

}

/// @brief sets the identification code of the actuator
/// @param integer identification code to be set
void Actuator::SetId(int integer)
{

}

/// @brief gets the state of the actuator
/// @return state
bool Actuator::GetState()
{

}

/// @brief gets the id of the actuator
/// @return identification code 
int Actuator::GetId()
{

}

/* ----------------------------
   DEBUG and SERIALIZATION
   ---------------------------- */

/// @brief write an error message 
/// @param string message to be printed
void Actuator::ErrorMessage(const char* string)
{
    cerr << "[Actuator - ERROR] " << (string ? string : "(null)") << endl;
}

/// @brief write an warning message 
/// @param string message to be printed
void Actuator::WarningMessage(const char* string)
{
    cerr << "[Actuator - WARNING] " << (string ? string : "(null)") << endl;
}

/// @brief for debugging: all infos about the object
void Actuator::Dump()
{
    cout << "Actuator Dump:" << endl;

}