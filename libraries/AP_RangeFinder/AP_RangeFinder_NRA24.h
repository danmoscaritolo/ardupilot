#pragma once

#include "AP_RangeFinder.h"
#include "AP_RangeFinder_Backend.h"

class AP_RangeFinder_NRA24Serial : public AP_RangeFinder_Backend
{

public:
    // constructor
    AP_RangeFinder_NRA24Serial(RangeFinder::RangeFinder_State &_state,
                                   AP_SerialManager &serial_manager,
                                   uint8_t serial_instance);

    // static detection function
    static bool detect(AP_SerialManager &serial_manager,uint8_t serial_instance);

    // update state
    void update(void) override;

protected:

    virtual MAV_DISTANCE_SENSOR _get_mav_distance_sensor_type() const override {
        return MAV_DISTANCE_SENSOR_LASER;
    }

private:
    // get a reading
    bool get_reading(uint16_t &reading_cm);
    void send_radiovale(void);

    AP_HAL::UARTDriver *uart = nullptr;
    uint32_t last_reading_ms = 0;
    uint8_t string[14],CheckSum;//校验数值存放 
    uint8_t rcin[12];
};
