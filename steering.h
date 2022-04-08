#ifndef STEERING_H
#define STEERING_H

#include <inttypes.h>


void PWM_init();

void safety_timer_init();

inline void reset_safety_timer() {
	TCNT3 = 0;
}

void set_speed(int16_t speed);

void set_steering(int16_t steering);

void set_regulated_steering(int16_t cur_vel, int16_t cur_lat, int16_t ref_lat, int16_t cur_ang);


#endif // STEERING_H