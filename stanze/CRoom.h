/*! \file CRoom.h
    \brief Declaration of the abstract class Room and derived classes
    \author Leonardo Delfini
*/

#ifndef ROOM_H
#define ROOM_H

#include <string>

#include "../badge/CBadge.h"
#include "../sensori/CSmokeDetector.h"
#include "../sensori/CThermometer.h"
#include "../sensori/CHumiditySensor.h"
#include "../Actuators/CAlarm.h"
#include "../Actuators/CAirConditioner.h"
#include "../Actuators/CDehumidifier.h"
#include "../Actuators/CNebulizer.h"
#include "../Actuators/CActuator.h"

using namespace std;

/// @class Room
/// @brief Abstract class to manage a generic room
class Room
{
protected:
    /// room identifier
    int id;

    /// room type (0 for office, 1 for storage, 2 for laboratory, 3 for neutral zone)
    int type;

    /// target temperature of the room
    float target_temp;

    /// target humifity of the room
    float target_humid;

public:
    /// @name CONSTRUCTORS / DESTRUCTOR
    /// @{
    Room();
    Room(int id, int type, float target_temp, float target_humid);
    Room(const Room &r);

    virtual ~Room();
    /// @}

    /// @name OPERATORS
    /// @{
    Room &operator=(const Room &r);
    bool operator==(const Room &r);
    /// @}

    /// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const Room &r);
    void Reset();
    /// @}

    /// @name SETTERS / GETTERS
    /// @{
    void SetId(int id);
    int GetId();

    void SetTargetTemp(float target);
    float GetTargetTemp();

    void SetTargetHumid(float target);
    float GetTargetHumid();

    void SetType(int type);
    int GetType();
    /// @}

    /// @name ACCESS MANAGEMENT
    /// @{
    virtual bool CheckAccess(Badge &b) = 0;
    /// @}

    /// @name MEASUREMENT
    /// @{
    virtual bool MeasureSmoke();
    virtual float MeasureTemperature();
    virtual float MeasureHumidity();
    /// @}

    /// @name DEBUG
    /// @{
    virtual void Dump();
    /// @}
};

/// @class Office
/// @brief Class to manage an office room
class Office : public Room
{
private:
    /// thermometer pointer
    Thermometer *temp_sensor;

    /// smoke detector pointer
    SmokeDetector *smoke_sensor;

    /// smoke alarm pointer
    Alarm *alarm;

    /// water erogator pointer
    Nebulizer *nebulizer;

    /// air conditioner pointer
    AirConditioner *conditioner;

public:
    /// @name CONSTRUCTORS / DESTRUCTOR
    /// @{
    Office();
    Office(int id,
           Thermometer *temp_sensor,
           SmokeDetector *smoke_sensor,
           Alarm *alarm,
           Nebulizer *nebulizer,
           AirConditioner *conditioner);
    Office(const Office &o);

    ~Office();
    /// @}

    /// @name OPERATORS
    /// @{
    Office &operator=(const Office &o);
    bool operator==(const Office &o);
    /// @}

    /// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const Office &o);
    void Reset();
    /// @}

    /// @name SETTERS / GETTERS
    /// @{
    void SetTempSensor(Thermometer *temp_sensor);
    Thermometer *GetTempSensor();

    void SetSmokeSensor(SmokeDetector *smoke_sensor);
    SmokeDetector *GetSmokeSensor();

    void SetAlarm(Alarm *alarm);
    Alarm *GetAlarm();

    void SetNebulizer(Nebulizer *nebulizer);
    Nebulizer *GetNebulizer();

    void SetAirConditioner(AirConditioner *conditioner);
    AirConditioner *GetAirConditioner();
    /// @}

    /// @name ACCESS MANAGEMENT
    /// @{
    bool CheckAccess(Badge &b);
    /// @}

    /// @name MEASUREMENT
    /// @{
    bool MeasureSmoke();
    float MeasureTemperature();
    /// @}

    /// @name DEBUG
    /// @{
    void Dump();
    /// @}
};

/// @class Storage
/// @brief Class to manage a storage room
class Storage : public Room
{
private:
    /// smoke detector pointer
    SmokeDetector *smoke_sensor;

    /// thermometer pointer
    Thermometer *temp_sensor;

    /// humidity sensor pointer
    HumiditySensor *humidity_sensor;

    /// smoke alarm pointer
    Alarm *alarm;

    /// air conditioner pointer
    AirConditioner *conditioner;

    /// dehumidifier pointer
    Dehumidifier *dehumidifier;

public:
    /// @name CONSTRUCTORS / DESTRUCTOR
    /// @{
    Storage();
    Storage(int id,
            SmokeDetector *smoke_sensor,
            Thermometer *temp_sensor,
            HumiditySensor *humidity_sensor,
            Alarm *alarm,
            AirConditioner *conditioner,
            Dehumidifier *dehumidifier);
    Storage(const Storage &s);

    ~Storage();
    /// @}

    /// @name OPERATORS
    /// @{
    Storage &operator=(const Storage &s);
    bool operator==(const Storage &s);
    /// @}

    /// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const Storage &s);
    void Reset();
    /// @}

    /// @name SETTERS / GETTERS
    /// @{
    void SetSmokeSensor(SmokeDetector *smoke_sensor);
    SmokeDetector *GetSmokeSensor();

    void SetTempSensor(Thermometer *temp_sensor);
    Thermometer *GetTempSensor();

    void SetHumiditySensor(HumiditySensor *humidity_sensor);
    HumiditySensor *GetHumiditySensor();

    void SetAlarm(Alarm *alarm);
    Alarm *GetAlarm();

    void SetAirConditioner(AirConditioner *conditioner);
    AirConditioner *GetAirConditioner();

    void SetDehumidifier(Dehumidifier *dehumidifier);
    Dehumidifier *GetDehumidifier();
    /// @}

    /// @name ACCESS MANAGEMENT
    /// @{
    bool CheckAccess(Badge &b);
    /// @}

    /// @name MEASUREMENT
    /// @{
    bool MeasureSmoke();
    float MeasureTemperature();
    float MeasureHumidity();
    /// @}

    /// @name DEBUG
    /// @{
    void Dump();
    /// @}
};

/// @class NeutralZone
/// @brief Class to manage a neutral zone
class NeutralZone : public Room
{
private:
    /// smoke detector pointer
    SmokeDetector *smoke_sensor;

    /// smoke alarm pointer
    Alarm *alarm;

    /// water erogator pointer
    Nebulizer *nebulizer;

public:
    /// @name CONSTRUCTORS / DESTRUCTOR
    /// @{
    NeutralZone();
    NeutralZone(int id,
                SmokeDetector *smoke_sensor,
                Alarm *alarm,
                Nebulizer *nebulizer);
    NeutralZone(const NeutralZone &n);

    ~NeutralZone();
    /// @}

    /// @name OPERATORS
    /// @{
    NeutralZone &operator=(const NeutralZone &n);
    bool operator==(const NeutralZone &n);
    /// @}

    /// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const NeutralZone &n);
    void Reset();
    /// @}

    /// @name SETTERS / GETTERS
    /// @{
    void SetSmokeSensor(SmokeDetector *smoke_sensor);
    SmokeDetector *GetSmokeSensor();

    void SetAlarm(Alarm *alarm);
    Alarm *GetAlarm();

    void SetNebulizer(Nebulizer *nebulizer);
    Nebulizer *GetNebulizer();
    /// @}

    /// @name ACCESS MANAGEMENT
    /// @{
    bool CheckAccess(Badge &b);
    /// @}

    /// @name MEASUREMENT
    /// @{
    bool MeasureSmoke();
    /// @}

    /// @name DEBUG
    /// @{
    void Dump();
    /// @}
};

/// @class Laboratory
/// @brief Class to manage a laboratory room
class Laboratory : public Room
{
private:
    /// smoke detector pointer
    SmokeDetector *smoke_sensor;

    /// thermometer pointer
    Thermometer *temp_sensor;

    /// humidity sensor pointer
    HumiditySensor *humidity_sensor;

    /// conditioner actuator pointer
    AirConditioner *conditioner;

    /// dehumidifier actuator pointer
    Dehumidifier *dehumidifier;

    /// alarm actuator pointer
    Alarm *alarm;

    /// water erogator actuator pointer
    Nebulizer *nebulizer;

public:
    /// @name CONSTRUCTORS / DESTRUCTOR
    /// @{
    Laboratory();
    Laboratory(int id,
               SmokeDetector *smoke_sensor,
               Thermometer *temp_sensor,
               HumiditySensor *humidity_sensor,
               AirConditioner *conditioner,
               Dehumidifier *dehumidifier,
               Alarm *alarm,
               Nebulizer *nebulizer);

    Laboratory(const Laboratory &l);

    ~Laboratory();
    /// @}

    /// @name OPERATORS
    /// @{
    Laboratory &operator=(const Laboratory &l);
    bool operator==(const Laboratory &l);
    /// @}

    /// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const Laboratory &l);
    void Reset();
    /// @}

    /// @name SETTERS / GETTERS
    /// @{
    void SetSmokeSensor(SmokeDetector *smoke_sensor);
    SmokeDetector *GetSmokeSensor();

    void SetTempSensor(Thermometer *temp_sensor);
    Thermometer *GetTempSensor();

    void SetHumiditySensor(HumiditySensor *humidity_sensor);
    HumiditySensor *GetHumiditySensor();

    void SetConditioner(AirConditioner *conditioner);
    AirConditioner *GetAirConditioner();

    void SetDehumidifier(Dehumidifier *dehumidifier);
    Dehumidifier *GetDehumidifier();

    void SetAlarm(Alarm *alarm);
    Alarm *GetAlarm();

    void SetNebulizer(Nebulizer *nebulizer);
    Nebulizer *GetNebulizer();

    void SetAirConditioner(AirConditioner *conditioner);
    AirConditioner *GetAirConditioner();
    /// @}

    /// @name ACCESS MANAGEMENT
    /// @{
    bool CheckAccess(Badge &b);
    /// @}

    /// @name MEASUREMENT
    /// @{
    bool MeasureSmoke();
    float MeasureTemperature();
    float MeasureHumidity();
    /// @}

    /// @name DEBUG
    /// @{
    void Dump();
    /// @}
};

#endif