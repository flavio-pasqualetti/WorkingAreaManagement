/*! \file CNebulizer.cpp
    \brief implementation of class Nebulizer, subclass of Actuator
    \author Lorenzo Bricarello
*/

#include "CNebulizer.h"
#include<iostream>
using namespace std;

/* ----------------------------
    CONSTRUCTORS / DESTRUCTOR
   ---------------------------- */

   /// @brief default constructor 
Nebulizer::Nebulizer()
{

    cout << "Nebulizer - default constructor" << endl;

    Init();
}

/// @brief constructor 
/// @param id identification code of the Nebulizer
/// @param state state of the Nebulizer (ON/OFF) (TRUE/FALSE)
Nebulizer::Nebulizer(int id, bool state)
{

}

/// @brief copy constructor
/// @param r reference to the object to be copied
Nebulizer::Nebulizer(const Nebulizer& r)
{
    cout << "Nebulizer - copy constructor" << endl;


    Init(r);
}

/// @brief destructor
Nebulizer::~Nebulizer()
{
    cout << "Nebulizer - destructor" << endl;
    Reset();
}

/* ----------------------------
            OPERATORS
   ---------------------------- */

   /// @brief overload of operator = 
   /// @param r reference to the object on the right side of the operator 
   /// @return reference to the object on the left side of the operator
Nebulizer& Nebulizer::operator=(const Nebulizer& r)
{

}

/// @brief overload of operator == 
/// @param r reference to the object on the right side of the operator 
/// @return true if the two objects have the same width and the same length  
bool Nebulizer::operator==(const Nebulizer& r)
{

}

/* ----------------------------
          BASIC HANDLING
   ---------------------------- */

   /// @brief default initialization of the object
void Nebulizer::Init()
{

}

/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void Nebulizer::Init(const Nebulizer& r)
{

}


/// @brief total reset of the object  
void Nebulizer::Reset()
{

}

/*----------------------------
        GETTERS / SETTERS
  ---------------------------- */

  /// @brief sets the state of the Nebulizer
  /// @param boolean state to be set
void Nebulizer::SetState(bool boolean)
{

}

/// @brief sets the identification code of the Nebulizer
/// @param integer identification code to be set
void Nebulizer::SetId(int integer)
{

}

/// @brief gets the state of the Nebulizer
/// @return state
bool Nebulizer::GetState()
{

}

/// @brief gets the id of the Nebulizer
/// @return identification code 
int Nebulizer::GetId()
{

}

/* ----------------------------
   DEBUG and SERIALIZATION
   ---------------------------- */

   /// @brief write an error message 
   /// @param string message to be printed
void Nebulizer::ErrorMessage(const char* string)
{
    cerr << "[Nebulizer - ERROR] " << (string ? string : "(null)") << endl;
}

/// @brief write an warning message 
/// @param string message to be printed
void Nebulizer::WarningMessage(const char* string)
{
    cerr << "[Nebulizer - WARNING] " << (string ? string : "(null)") << endl;
}

/// @brief for debugging: all infos about the object
void Nebulizer::Dump()
{
    cout << "Nebulizer Dump:" << endl;

}