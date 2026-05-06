/*! \file CAlarm.cpp
    \brief implementation of class Alarm, subclass of Actuator
    \author Lorenzo Bricarello
*/

#include "CAlarm.h"
#include<iostream>
using namespace std;

/* ----------------------------
    CONSTRUCTORS / DESTRUCTOR
   ---------------------------- */

   /// @brief default constructor 
Alarm::Alarm()
{

    cout << "Alarm - default constructor" << endl;

    Init();
}

/// @brief constructor 
/// @param id identification code of the Alarm
/// @param state state of the Alarm (ON/OFF) (TRUE/FALSE)
Alarm::Alarm(int id, bool state)
{

}

/// @brief copy constructor
/// @param r reference to the object to be copied
Alarm::Alarm(const Alarm& r)
{
    cout << "Alarm - copy constructor" << endl;


    Init(r);
}

/// @brief destructor
Alarm::~Alarm()
{
    cout << "Alarm - destructor" << endl;
    Reset();
}

/* ----------------------------
            OPERATORS
   ---------------------------- */

   /// @brief overload of operator = 
   /// @param r reference to the object on the right side of the operator 
   /// @return reference to the object on the left side of the operator
Alarm& Alarm::operator=(const Alarm& r)
{

}

/// @brief overload of operator == 
/// @param r reference to the object on the right side of the operator 
/// @return true if the two objects have the same width and the same length  
bool Alarm::operator==(const Alarm& r)
{

}

/* ----------------------------
          BASIC HANDLING
   ---------------------------- */

   /// @brief default initialization of the object
void Alarm::Init()
{

}

/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void Alarm::Init(const Alarm& r)
{

}


/// @brief total reset of the object  
void Alarm::Reset()
{

}

/*----------------------------
        GETTERS / SETTERS
  ---------------------------- */

  /// @brief sets the state of the Alarm
  /// @param boolean state to be set
void Alarm::SetState(bool boolean)
{

}

/// @brief sets the identification code of the Alarm
/// @param integer identification code to be set
void Alarm::SetId(int integer)
{

}

/// @brief gets the state of the Alarm
/// @return state
bool Alarm::GetState()
{

}

/// @brief gets the id of the Alarm
/// @return identification code 
int Alarm::GetId()
{

}

/* ----------------------------
   DEBUG and SERIALIZATION
   ---------------------------- */

   /// @brief write an error message 
   /// @param string message to be printed
void Alarm::ErrorMessage(const char* string)
{
    cerr << "[Alarm - ERROR] " << (string ? string : "(null)") << endl;
}

/// @brief write an warning message 
/// @param string message to be printed
void Alarm::WarningMessage(const char* string)
{
    cerr << "[Alarm - WARNING] " << (string ? string : "(null)") << endl;
}

/// @brief for debugging: all infos about the object
void Alarm::Dump()
{
    cout << "Alarm Dump:" << endl;

}