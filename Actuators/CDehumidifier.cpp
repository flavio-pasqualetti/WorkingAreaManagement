/*! \file CDehumidifier.cpp
    \brief implementation of class Dehumidifier, subclass of Actuator
    \author Lorenzo Bricarello
*/

#include "CDehumidifier.h"
#include<iostream>
using namespace std;

/* ----------------------------
    CONSTRUCTORS / DESTRUCTOR
   ---------------------------- */

   /// @brief default constructor 
Dehumidifier::Dehumidifier()
{

    cout << "Dehumidifier - default constructor" << endl;

    Init();
}

/// @brief constructor 
/// @param id identification code of the Dehumidifier
/// @param state state of the Dehumidifier (ON/OFF) (TRUE/FALSE)
Dehumidifier::Dehumidifier(int id, bool state)
{

}

/// @brief copy constructor
/// @param r reference to the object to be copied
Dehumidifier::Dehumidifier(const Dehumidifier& r)
{
    cout << "Dehumidifier - copy constructor" << endl;


    Init(r);
}

/// @brief destructor
Dehumidifier::~Dehumidifier()
{
    cout << "Dehumidifier - destructor" << endl;
    Reset();
}

/* ----------------------------
            OPERATORS
   ---------------------------- */

   /// @brief overload of operator = 
   /// @param r reference to the object on the right side of the operator 
   /// @return reference to the object on the left side of the operator
Dehumidifier& Dehumidifier::operator=(const Dehumidifier& r)
{

}

/// @brief overload of operator == 
/// @param r reference to the object on the right side of the operator 
/// @return true if the two objects have the same width and the same length  
bool Dehumidifier::operator==(const Dehumidifier& r)
{

}

/* ----------------------------
          BASIC HANDLING
   ---------------------------- */

   /// @brief default initialization of the object
void Dehumidifier::Init()
{

}

/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void Dehumidifier::Init(const Dehumidifier& r)
{

}


/// @brief total reset of the object  
void Dehumidifier::Reset()
{

}

/*----------------------------
        GETTERS / SETTERS
  ---------------------------- */

  /// @brief sets the state of the Dehumidifier
  /// @param boolean state to be set
void Dehumidifier::SetState(bool boolean)
{

}

/// @brief sets the identification code of the Dehumidifier
/// @param integer identification code to be set
void Dehumidifier::SetId(int integer)
{

}

/// @brief gets the state of the Dehumidifier
/// @return state
bool Dehumidifier::GetState()
{

}

/// @brief gets the id of the Dehumidifier
/// @return identification code 
int Dehumidifier::GetId()
{

}

/* ----------------------------
   DEBUG and SERIALIZATION
   ---------------------------- */

   /// @brief write an error message 
   /// @param string message to be printed
void Dehumidifier::ErrorMessage(const char* string)
{
    cerr << "[Dehumidifier - ERROR] " << (string ? string : "(null)") << endl;
}

/// @brief write an warning message 
/// @param string message to be printed
void Dehumidifier::WarningMessage(const char* string)
{
    cerr << "[Dehumidifier - WARNING] " << (string ? string : "(null)") << endl;
}

/// @brief for debugging: all infos about the object
void Dehumidifier::Dump()
{
    cout << "Dehumidifier Dump:" << endl;

}