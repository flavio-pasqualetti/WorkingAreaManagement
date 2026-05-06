/*! \file CBadge.h
    \brief Declaration of the class Badge
    \author Angelo De Benedetti
*/

#ifndef BADGE_H
#define BADGE_H

#include <string>

#define TEXTSIZE 1000

#define N 10

using namespace std;

/// @class Badge
/// @brief the badge that contains informations to grant access to different rooms. It also represents the worker's persona in the sistem.
class Badge
{
private:
    /// an integer number to better differentiate between the badges
    int BadgeId;
    /// a string containing the user's name. Since the badge itself represents the person, it's also the only way of knowing the user.
    string User;
    /// a boolean array representing the singular rooms and the access to the room.
    bool Access[];

public:
    ///@name COSNTRUCTORS/DESTRUCTOR
    ///@{
    Badge();                                              /*costruttore di default*/
    Badge(int BadgeId, string User, const bool Access[]); // init constructor//
    Badge(const Badge &r);                                // copry constructor//

    ~Badge();
    ///@}

    /// @name OPERATORS
    /// @{
    Badge &operator=(const Badge &s);
    bool operator==(const Badge &s);
    /// @}

    /// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const Badge &s);
    void Reset();
    /// @}

    /// @name SETTERS / GETTERS
    /// @{
    void SetUser(string user);
    string GetUser();
    void SetBadgeId(int Id);
    int GetBadgeId();
    void SetAccess(const bool Access[]);
    bool *GetAccess();
    /// @}

    ///@name ACCESS MANAGEMENT
    ///@{
    void UpdateAccess(const bool Update[]);
    ///@}

    /// @name DEBUG
    /// @{
    void Dump();
    /// @}
};

#endif