/*! \file CBadge.cpp
    \brief Implementation of the class Badge
    \author Angelo De Benedetti
*/

#include "CBadge.h"

using namespace std;

/// @brief Default Constructor
Badge::Badge()
{
}

/// @brief Init Constructor
/// @param Badgeid integer value of the Badgeid, which will also be the person's own Id
/// @param User string containing the User's name
/// @param Access Boolean array that represents the ability to enter a specific room. each address of the array represents a different room.
Badge::Badge(int BadgeId, string User, const bool Access[])
{
} // @brief Copy Constructor
/// @param s Reference to the Badge to be copied
Badge::Badge(const Badge &s)
{
}

/// @brief Destructor
Badge::~Badge()
{
}

/// @brief Overload of the operation =
/// @param s Reference to the object on the right side
/// @return Refernce to the object on the left side
Badge &Badge::operator=(const Badge &s)
{
}

/// @brief Overload of the operation ==
/// @param s Reference to the object on the right side
/// @return Boolean: 1 if true - 0 if false
bool Badge::operator==(const Badge &s)
{
}

/// @brief Default Init
void Badge::Init()
{
}

/// @brief Copy Init
/// @param s Reference to the object to be copied
void Badge::Init(const Badge &s)
{
}

/// @brief Reset of the object
void Badge::Reset()
{
}

/// @brief Setter of the user's name
/// @param User String containing the name to be placed
void Badge::SetUser(string user) {}

/// @brief Getter of the user's name
/// @return String containing the user's name
string Badge::GetUser() {}

/// @brief Setter of the badge's id
/// @param Id integer representing the badge's id
void Badge::SetBadgeId(int Id) {}

/// @brief getter of the badge's id
/// @return the integer of the Badge's Id
int Badge::GetBadgeId() {}

/// @brief Setter of the Access array
/// @param Access a constant boolean array to be copied that contains the access granted to specific rooms
void Badge::SetAccess(const bool Access[]) {}

/// @brief getter of the Access array
/// @return pointer to the Access bool array
bool *Badge::GetAccess() {}

/// @brief Function to be used when updating a user's access grants. it is functionally the same as SetAccess, but separated for clarity of use
/// @param Update const bool array representing the update to the access's grants
void Badge::UpdateAccess(const bool Update[]) {}

/// @brief Prints every info - useful for debugging
void Badge::Dump()
{
}