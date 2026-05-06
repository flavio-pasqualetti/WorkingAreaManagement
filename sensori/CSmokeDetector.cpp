/*! \file CSmokeDetector.cpp
    \brief Implementation of the class SmokeDetector
    \author Flavio Pasqualetti
*/

#include "CSmokeDetector.h"

using namespace std;

/// @brief Default Constructor
SmokeDetector::SmokeDetector()
{
}

/// @brief Init Constructor
/// @param smoke Pointer to array of boolean: true if smoke is detected, false otherwise
SmokeDetector::SmokeDetector(bool *smoke)
{
}

/// @brief Copy Constructor
/// @param s Reference to the SmokeDetector to be copied
SmokeDetector::SmokeDetector(const SmokeDetector &s)
{
}

/// @brief Destructor
SmokeDetector::~SmokeDetector()
{
}

/// @brief Overload of the operation =
/// @param s Reference to the object on the right side
/// @return Refernce to the object on the left side
SmokeDetector &SmokeDetector::operator=(const SmokeDetector &s)
{
}

/// @brief Overload of the operation ==
/// @param s Reference to the object on the right side
/// @return Boolean: 1 if true - 0 if false
bool SmokeDetector::operator==(const SmokeDetector &s)
{
}

/// @brief Default Init
void SmokeDetector::Init()
{
}

/// @brief Copy Init
/// @param s Reference to the object to be copied
void SmokeDetector::Init(const SmokeDetector &s)
{
}

/// @brief Reset of the object
void SmokeDetector::Reset()
{
}

/// @brief Sets the smoke detected flag
/// @param smoke Boolean: true if smoke is detected, false otherwise
void SmokeDetector::SetSmokeDetected(bool smoke)
{
}

/// @brief Gets the smoke detected flag
/// @return Boolean: true if smoke is detected, false otherwise
bool SmokeDetector::GetSmokeDetected()
{
}

/// @brief Prints every info - useful for debugging
void SmokeDetector::Dump()
{
}