/*! \file CRoom.cpp
    \brief Implementation of the abstract class Room and derived classes
    \author Leonardo Delfini
*/

#include "CRoom.h"

using namespace std;

/// @brief Default Constructor
Room::Room()
{
}

/// @brief Init Constructor
/// @param id Room identifier
Room::Room(int id)
{
}

/// @brief Copy Constructor
/// @param r Reference to the Room to be copied
Room::Room(const Room &r)
{
}

/// @brief Destructor
Room::~Room()
{
}

/// @brief Overload of the operation =
/// @param r Reference to the object on the right side
/// @return Reference to the object on the left side
Room &Room::operator=(const Room &r)
{
}

/// @brief Overload of the operation ==
/// @param r Reference to the object on the right side
/// @return Boolean: 1 if true - 0 if false
bool Room::operator==(const Room &r)
{
}

/// @brief Default Init
void Room::Init()
{
}

/// @brief Copy Init
/// @param r Reference to the object to be copied
void Room::Init(const Room &r)
{
}

/// @brief Reset of the object
void Room::Reset()
{
}

/// @brief Identifier Setter
/// @param id Room identifier
void Room::SetId(int id)
{
}

/// @brief Identifier Getter
/// @return Room identifier
int Room::GetId()
{
}

/// @brief Sets the target temperature of the room
/// @param target target temperature
void Room::SetTargetTemp(float target)
{
}

/// @brief Gets the target temperature of the room
/// @return target temperature
float Room::GetTargetTemp() 
{
}

/// @brief Sets the target humidity of the room
/// @param target target humidity
void Room::SetTargetHumid(float target) 
{
}

/// @brief Gets the target humidity of the room
/// @return target humidity
float Room::GetTargetHumid() 
{
}

/// @brief Type Setter
/// @param id Room type
void Room::SetType(int type)
{
}

/// @brief Type Getter
/// @return Room type
int Room::GetType()
{
}

/// @brief To measure smoke presence
/// @return True if there is smoke, 0 otherwise
bool Room::MeasureSmoke() { cout << "ERROR" << endl }

/// @brief To measure temperature
/// @return temperature
float Room::MeasureTemperature() { cout << "ERROR" << endl }

/// @brief To measure humidity
/// @return humidity
float Room::MeasureHumidity() { cout << "ERROR" << endl }

/// @brief Prints every info - useful for debugging
void Room::Dump()
{
}

/// @brief Default Constructor
Office::Office()
{
}

/// @brief Init Constructor
/// @param id Room identifier
/// @param temp_sensor Pointer to the thermometer
/// @param smoke_sensor Pointer to the smoke detector
/// @param alarm Pointer to the smoke alarm
/// @param nebulizer Pointer to the water erogator
/// @param conditioner Pointer to the air conditioner
Office::Office(int id,
               Thermometer *temp_sensor,
               SmokeDetector *smoke_sensor,
               Alarm *alarm,
               Nebulizer *nebulizer,
               Conditioner *conditioner)
{
}

/// @brief Copy Constructor
/// @param o Reference to the Office to be copied
Office::Office(const Office &o)
{
}

/// @brief Destructor
Office::~Office()
{
}

/// @brief Overload of the operation =
/// @param o Reference to the object on the right side
/// @return Reference to the object on the left side
Office &Office::operator=(const Office &o)
{
}

/// @brief Overload of the operation ==
/// @param o Reference to the object on the right side
/// @return Boolean: 1 if true - 0 if false
bool Office::operator==(const Office &o)
{
}

/// @brief Default Init
void Office::Init()
{
}

/// @brief Copy Init
/// @param o Reference to the object to be copied
void Office::Init(const Office &o)
{
}

/// @brief Reset of the object
void Office::Reset()
{
}

/// @brief Thermometer Setter
/// @param temp_sensor Pointer to the thermometer
void Office::SetTempSensor(Thermometer *temp_sensor)
{
}

/// @brief Thermometer Getter
/// @return Pointer to the thermometer
Thermometer *Office::GetTempSensor()
{
}

/// @brief Smoke Detector Setter
/// @param smoke_sensor Pointer to the smoke detector
void Office::SetSmokeSensor(SmokeDetector *smoke_sensor)
{
}

/// @brief Smoke Detector Getter
/// @return Pointer to the smoke detector
SmokeDetector *Office::GetSmokeSensor()
{
}

/// @brief Alarm Setter
/// @param alarm Pointer to the alarm actuator
void Office::SetAlarm(Alarm *alarm)
{
}

/// @brief Alarm Getter
/// @return Pointer to the alarm actuator
Alarm *Office::GetAlarm()
{
}

/// @brief Water Erogator Setter
/// @param nebulizer Pointer to water erogator
void Office::SetNebulizer(Nebulizer *nebulizer)
{
}

/// @brief Water Erogator Getter
/// @return Pointer to the water erogator
Nebulizer *Office::GetNebulizer()
{
}

/// @brief Air Conditioner Setter
/// @param conditioner Pointer to the air conditioner
void Office::SetAirConditioner(Conditioner *conditioner)
{
}

/// @brief Air Conditioner Getter
/// @return Pointer to the air conditioner
Conditioner *Office::GetAirConditioner()
{
}

/// @brief Checks if the badge can access the room
/// @param b Reference to the badge
/// @return Boolean: 1 if access granted - 0 otherwise
bool Office::CheckAccess(Badge &b)
{
}

/// @brief To measure smoke presence
/// @return True if there is smoke, 0 otherwise
bool Office::MeasureSmoke() {}

/// @brief To measure temperature
/// @return temperature
float Office::MeasureTemperature() {}

/// @brief Prints every info - useful for debugging
void Office::Dump()
{
}

/// @brief Default Constructor
Storage::Storage()
{
}

/// @brief Init Constructor
/// @param id Room identifier
/// @param smoke_sensor Pointer to the smoke detector
/// @param temp_sensor Pointer to the thermometer
/// @param humidity_sensor Pointer to the humidity sensor
/// @param alarm Pointer to the alarm actuator
/// @param conditioner Pointer to the air conditioner actuator
/// @param dehumidifier Pointer to the dehumidifier actuator
Storage::Storage(int id,
                 SmokeDetector *smoke_sensor,
                 Thermometer *temp_sensor,
                 HumiditySensor *humidity_sensor,
                 Alarm *alarm,
                 Conditioner *conditioner,
                 Dehumidifier *dehumidifier)
{
}

/// @brief Copy Constructor
/// @param s Reference to the Storage to be copied
Storage::Storage(const Storage &s)
{
}

/// @brief Destructor
Storage::~Storage()
{
}

/// @brief Overload of the operation =
/// @param s Reference to the object on the right side
/// @return Reference to the object on the left side
Storage &Storage::operator=(const Storage &s)
{
}

/// @brief Overload of the operation ==
/// @param s Reference to the object on the right side
/// @return Boolean: 1 if true - 0 if false
bool Storage::operator==(const Storage &s)
{
}

/// @brief Default Init
void Storage::Init()
{
}

/// @brief Copy Init
/// @param s Reference to the object to be copied
void Storage::Init(const Storage &s)
{
}

/// @brief Reset of the object
void Storage::Reset()
{
}

/// @brief Smoke Detector Setter
/// @param smoke_sensor Pointer to the smoke detector
void Storage::SetSmokeSensor(SmokeDetector *smoke_sensor)
{
}

/// @brief Smoke Detector Getter
/// @return Pointer to the smoke detector
SmokeDetector *Storage::GetSmokeSensor()
{
}

/// @brief Thermometer Setter
/// @param temp_sensor Pointer to the thermometer
void Storage::SetTempSensor(Thermometer *temp_sensor)
{
}

/// @brief Thermometer Getter
/// @return Pointer to the thermometer
Thermometer *Storage::GetTempSensor()
{
}

/// @brief Humidity Sensor Setter
/// @param humidity_sensor Pointer to the humidity sensor
void Storage::SetHumiditySensor(HumiditySensor *humidity_sensor)
{
}

/// @brief Humidity Sensor Getter
/// @return Pointer to the humidity sensor
HumiditySensor *Storage::GetHumiditySensor()
{
}

/// @brief Alarm Setter
/// @param alarm Pointer to the alarm actuator
void Storage::SetAlarm(Alarm *alarm)
{
}

/// @brief Alarm Getter
/// @return Pointer to the alarm actuator
Alarm *Storage::GetAlarm()
{
}

/// @brief Air Conditioner Setter
/// @param conditioner Pointer to the air conditioner
void Storage::SetAirConditioner(Conditioner *conditioner)
{
}

/// @brief Air Conditioner Getter
/// @return Pointer to the air conditioner
Conditioner *Storage::GetAirConditioner()
{
}

/// @brief Dehumidifier Setter
/// @param dehumidifier Pointer to the dehumidifier
void Storage::SetDehumidifier(Dehumidifier *dehumidifier)
{
}

/// @brief Dehumidifier Getter
/// @return Pointer to the dehumidifier
Dehumidifier *Storage::GetDehumidifier()
{
}

/// @brief Checks if the badge can access the room
/// @param b Reference to the badge
/// @return Boolean: 1 if access granted - 0 otherwise
bool Storage::CheckAccess(Badge &b)
{
}

/// @brief To measure smoke presence
/// @return True if there is smoke, 0 otherwise
bool Storage::MeasureSmoke() {}

/// @brief To measure temperature
/// @return temperature
float Storage::MeasureTemperature() {}

/// @brief To measure humidity
/// @return humidity
float Storage::MeasureHumidity() {}

/// @brief Prints every info - useful for debugging
void Storage::Dump()
{
}

/// @brief Default Constructor
NeutralZone::NeutralZone()
{
}

/// @brief Init Constructor
/// @param id Room identifier
/// @param smoke_sensor Pointer to the smoke detector
/// @param alarm Pointer to smoke alarm
/// @param nebulizer Pointer to water erogator
NeutralZone::NeutralZone(int id,
                         SmokeDetector *smoke_sensor,
                         Alarm *alarm,
                         Nebulizer *nebulizer)
{
}

/// @brief Copy Constructor
/// @param n Reference to the NeutralZone to be copied
NeutralZone::NeutralZone(const NeutralZone &n)
{
}

/// @brief Destructor
NeutralZone::~NeutralZone()
{
}

/// @brief Overload of the operation =
/// @param n Reference to the object on the right side
/// @return Reference to the object on the left side
NeutralZone &NeutralZone::operator=(const NeutralZone &n)
{
}

/// @brief Overload of the operation ==
/// @param n Reference to the object on the right side
/// @return Boolean: 1 if true - 0 if false
bool NeutralZone::operator==(const NeutralZone &n)
{
}

/// @brief Default Init
void NeutralZone::Init()
{
}

/// @brief Copy Init
/// @param n Reference to the object to be copied
void NeutralZone::Init(const NeutralZone &n)
{
}

/// @brief Reset of the object
void NeutralZone::Reset()
{
}

/// @brief Smoke Detector Setter
/// @param smoke_sensor Pointer to the smoke detector
void NeutralZone::SetSmokeSensor(SmokeDetector *smoke_sensor)
{
}

/// @brief Smoke Detector Getter
/// @return Pointer to the smoke detector
SmokeDetector *NeutralZone::GetSmokeSensor()
{
}

/// @brief Alarm Setter
/// @param alarm Pointer to the alarm actuator
void NeutralZone::SetAlarm(Alarm *alarm)
{
}

/// @brief Alarm Getter
/// @return Pointer to the alarm actuator
Alarm *NeutralZone::GetAlarm()
{
}

/// @brief Water Erogator Setter
/// @param nebulizer Pointer to water erogator
void NeutralZone::SetNebulizer(Nebulizer *nebulizer)
{
}

/// @brief Water Erogator Getter
/// @return Pointer to the water erogator
Nebulizer *NeutralZone::GetNebulizer()
{
}

/// @brief Checks if the badge can access the room
/// @param b Reference to the badge
/// @return Boolean: 1 if access granted - 0 otherwise
bool NeutralZone::CheckAccess(Badge &b)
{
}

/// @brief To measure smoke presence
/// @return True if there is smoke, 0 otherwise
bool NeutralZone::MeasureSmoke() {}

/// @brief Prints every info - useful for debugging
void NeutralZone::Dump()
{
}

/// @brief Default Constructor
Laboratory::Laboratory()
{
}

/// @brief Init Constructor
/// @param id Room identifier
/// @param smoke_sensor Pointer to the smoke detector
/// @param temp_sensor Pointer to the thermometer
/// @param humidity_sensor Pointer to the humidity sensor
/// @param conditioner Pointer to the conditioner actuator
/// @param dehumidifier Pointer to the dehumidifier actuator
/// @param alarm Pointer to the alarm actuator
/// @param nebulizer Pointer to the water erogator actuator
Laboratory::Laboratory(int id,
                       SmokeDetector *smoke_sensor,
                       Thermometer *temp_sensor,
                       HumiditySensor *humidity_sensor,
                       Conditioner *conditioner,
                       Dehumidifier *dehumidifier,
                       Alarm *alarm,
                       Nebilizer *nebulizer)
{
}

/// @brief Copy Constructor
/// @param l Reference to the Laboratory to be copied
Laboratory::Laboratory(const Laboratory &l)
{
}

/// @brief Destructor
Laboratory::~Laboratory()
{
}

/// @brief Overload of the operation =
/// @param l Reference to the object on the right side
/// @return Reference to the object on the left side
Laboratory &Laboratory::operator=(const Laboratory &l)
{
}

/// @brief Overload of the operation ==
/// @param l Reference to the object on the right side
/// @return Boolean: 1 if true - 0 if false
bool Laboratory::operator==(const Laboratory &l)
{
}

/// @brief Default Init
void Laboratory::Init()
{
}

/// @brief Copy Init
/// @param l Reference to the object to be copied
void Laboratory::Init(const Laboratory &l)
{
}

/// @brief Reset of the object
void Laboratory::Reset()
{
}

/// @brief Smoke Detector Setter
/// @param smoke_sensor Pointer to the smoke detector
void Laboratory::SetSmokeSensor(SmokeDetector *smoke_sensor)
{
}

/// @brief Smoke Detector Getter
/// @return Pointer to the smoke detector
SmokeDetector *Laboratory::GetSmokeSensor()
{
}

/// @brief Thermometer Setter
/// @param temp_sensor Pointer to the thermometer
void Laboratory::SetTempSensor(Thermometer *temp_sensor)
{
}

/// @brief Thermometer Getter
/// @return Pointer to the thermometer
Thermometer *Laboratory::GetTempSensor()
{
}

/// @brief Humidity Sensor Setter
/// @param humidity_sensor Pointer to the humidity sensor
void Laboratory::SetHumiditySensor(HumiditySensor *humidity_sensor)
{
}

/// @brief Humidity Sensor Getter
/// @return Pointer to the humidity sensor
HumiditySensor *Laboratory::GetHumiditySensor()
{
}

/// @brief Conditioner Setter
/// @param conditioner Pointer to the conditioner actuator
void Laboratory::SetConditioner(Conditioner *conditioner)
{
}

/// @brief Conditioner Getter
/// @return Pointer to the conditioner actuator
Conditioner *Laboratory::GetConditioner()
{
}

/// @brief Dehumidifier Setter
/// @param dehumidifier Pointer to the dehumidifier actuator
void Laboratory::SetDehumidifier(Dehumidifier *dehumidifier)
{
}

/// @brief Dehumidifier Getter
/// @return Pointer to the dehumidifier actuator
Dehumidifier *Laboratory::GetDehumidifier()
{
}

/// @brief Alarm Setter
/// @param alarm Pointer to the alarm actuator
void Laboratory::SetAlarm(Alarm *alarm)
{
}

/// @brief Alarm Getter
/// @return Pointer to the alarm actuator
Alarm *Laboratory::GetAlarm()
{
}

/// @brief Water Erogator Setter
/// @param nebulizer Pointer to water erogator
void Laboratory::SetNebulizer(Nebulizer *nebulizer)
{
}

/// @brief Water Erogator Getter
/// @return Pointer to the water erogator
Nebulizer *Laboratory::GetNebulizer()
{
}

/// @brief Checks if the badge can access the room
/// @param b Reference to the badge
/// @return Boolean: 1 if access granted - 0 otherwise
bool Laboratory::CheckAccess(Badge &b)
{
}

/// @brief To measure smoke presence
/// @return True if there is smoke, 0 otherwise
bool Laboratory::MeasureSmoke() {}

/// @brief To measure temperature
/// @return temperature
float Laboratory::MeasureTemperature() {}

/// @brief To measure humidity
/// @return humidity
float Laboratory::MeasureHumidity() {}

/// @brief Prints every info - useful for debugging
void Laboratory::Dump()
{
}