#include "../encoder.h"
#include "../../config.h"
void encoder_init(void)
{

}

int left_motor_pwm;
int right_motor_pwm;

void encoder_init_pins(void) {
}

int encoder_odometry_left_get_velocity() {
	return left_motor_pwm * 1;
	//return left_motor_pwm * c_wheel_r2 / c_wheel_r1;
}



int encoder_odometry_right_get_velocity() {
	//return right_motor_pwm * 1;
	return right_motor_pwm * c_wheel_r1 / c_wheel_r2;
	//return right_motor_pwm * c_wheel_r2 / c_wheel_r1;
	//return right_motor_pwm * 1;
}

int encoder_odometry_left_get_count() {
	return left_motor_pwm * 1;
}

int encoder_odometry_right_get_count(void) {
	return right_motor_pwm * 1;
}

int encoder_motor_left_get_count(void){
	return 0;
}

int encoder_motor_right_get_count(void){
	return 0;
}
