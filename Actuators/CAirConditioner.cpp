/*! \file CAirConditioner.cpp
    \brief implementation of class AirConditioner, subclass of Actuator
    \author Lorenzo Bricarello
*/

#include "CAirConditioner.h"
#include<iostream>
using namespace std;

/* ----------------------------
    CONSTRUCTORS / DESTRUCTOR
   ---------------------------- */

   /// @brief default constructor 
AirConditioner::AirConditioner()
{

    cout << "AirConditioner - default constructor" << endl;

    Init();
}

/// @brief constructor 
/// @param id identification code of the AirConditioner
/// @param state state of the AirConditioner (ON/OFF) (TRUE/FALSE)
AirConditioner::AirConditioner(int id, bool state)
{

}

/// @brief copy constructor
/// @param r reference to the object to be copied
AirConditioner::AirConditioner(const AirConditioner& r)
{
    cout << "AirConditioner - copy constructor" << endl;


    Init(r);
}

/// @brief destructor
AirConditioner::~AirConditioner()
{
    cout << "AirConditioner - destructor" << endl;
    Reset();
}

/* ----------------------------
            OPERATORS
   ---------------------------- */

   /// @brief overload of operator = 
   /// @param r reference to the object on the right side of the operator 
   /// @return reference to the object on the left side of the operator
AirConditioner& AirConditioner::operator=(const AirConditioner& r)
{

}

/// @brief overload of operator == 
/// @param r reference to the object on the right side of the operator 
/// @return true if the two objects have the same width and the same length  
bool AirConditioner::operator==(const AirConditioner& r)
{

}

/* ----------------------------
          BASIC HANDLING
   ---------------------------- */

   /// @brief default initialization of the object
void AirConditioner::Init()
{

}

/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void AirConditioner::Init(const AirConditioner& r)
{

}


/// @brief total reset of the object  
void AirConditioner::Reset()
{

}

/*----------------------------
        GETTERS / SETTERS
  ---------------------------- */

  /// @brief sets the state of the AirConditioner
  /// @param boolean state to be set
void AirConditioner::SetState(bool boolean)
{

}

/// @brief sets the identification code of the AirConditioner
/// @param integer identification code to be set
void AirConditioner::SetId(int integer)
{

}

/// @brief gets the state of the AirConditioner
/// @return state
bool AirConditioner::GetState()
{

}

/// @brief gets the id of the AirConditioner
/// @return identification code 
int AirConditioner::GetId()
{

}

/* ----------------------------
   DEBUG and SERIALIZATION
   ---------------------------- */

   /// @brief write an error message 
   /// @param string message to be printed
void AirConditioner::ErrorMessage(const char* string)
{
    cerr << "[AirConditioner - ERROR] " << (string ? string : "(null)") << endl;
}

/// @brief write an warning message 
/// @param string message to be printed
void AirConditioner::WarningMessage(const char* string)
{
    cerr << "[AirConditioner - WARNING] " << (string ? string : "(null)") << endl;
}

/// @brief for debugging: all infos about the object
void AirConditioner::Dump()
{
    cout << "AirConditioner Dump:" << endl;

}