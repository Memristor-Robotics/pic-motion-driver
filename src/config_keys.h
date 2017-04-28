// THIS FILE IS GENERATED WITH PYTHON SCRIPT "config_keys_gen.py" and must only be included within "config.h"
#ifdef CONFIG_H

#define CONFIG_MAX_BYTES 9
#define CONFIG_MAX_INTS 8
#define CONFIG_MAX_FLOATS 13


enum ConfEnum { 
	CONF_DISTANCE_REGULATOR = 0,
	CONF_ROTATION_REGULATOR = 1,
	CONF_ENABLE_STUCK = 2,
	CONF_STUCK = 3,
	CONF_DEBUG = 4,
	CONF_STATUS_CHANGE_REPORT = 5,
	CONF_KEEP_COUNT = 6,
	CONF_TMR = 7,
	CONF_MOTOR_CONNECTED = 8,

	CONF_STUCK_DISTANCE_JUMP = 9,
	CONF_STUCK_ROTATION_JUMP = 10,
	CONF_STUCK_DISTANCE_MAX_FAIL_COUNT = 11,
	CONF_STUCK_ROTATION_MAX_FAIL_COUNT = 12,
	CONF_MOTOR_SPEED_LIMIT = 13,
	CONF_MOTOR_RATE_OF_CHANGE = 14,
	CONF_SEND_STATUS_INTERVAL = 15,
	CONF_MOTOR_CONST_ROC = 16,

	CONF_WHEEL_DISTANCE = 17,
	CONF_WHEEL_R1 = 18,
	CONF_WHEEL_R2 = 19,
	CONF_PID_D_P = 20,
	CONF_PID_D_D = 21,
	CONF_PID_R_P = 22,
	CONF_PID_R_D = 23,
	CONF_VMAX = 24,
	CONF_OMEGA = 25,
	CONF_ACCEL = 26,
	CONF_ALPHA = 27,
	CONF_SLOWDOWN = 28,
	CONF_ANGLE_SPEEDUP = 29,
};


#define c_distance_regulator config_bytes[CONF_DISTANCE_REGULATOR-CONFIG_BYTE_OFFSET]
#define c_rotation_regulator config_bytes[CONF_ROTATION_REGULATOR-CONFIG_BYTE_OFFSET]
#define c_enable_stuck config_bytes[CONF_ENABLE_STUCK-CONFIG_BYTE_OFFSET]
#define c_stuck config_bytes[CONF_STUCK-CONFIG_BYTE_OFFSET]
#define c_debug config_bytes[CONF_DEBUG-CONFIG_BYTE_OFFSET]
#define c_status_change_report config_bytes[CONF_STATUS_CHANGE_REPORT-CONFIG_BYTE_OFFSET]
#define c_keep_count config_bytes[CONF_KEEP_COUNT-CONFIG_BYTE_OFFSET]
#define c_tmr config_bytes[CONF_TMR-CONFIG_BYTE_OFFSET]
#define c_motor_connected config_bytes[CONF_MOTOR_CONNECTED-CONFIG_BYTE_OFFSET]

#define c_stuck_distance_jump config_ints[CONF_STUCK_DISTANCE_JUMP-CONFIG_INT_OFFSET]
#define c_stuck_rotation_jump config_ints[CONF_STUCK_ROTATION_JUMP-CONFIG_INT_OFFSET]
#define c_stuck_distance_max_fail_count config_ints[CONF_STUCK_DISTANCE_MAX_FAIL_COUNT-CONFIG_INT_OFFSET]
#define c_stuck_rotation_max_fail_count config_ints[CONF_STUCK_ROTATION_MAX_FAIL_COUNT-CONFIG_INT_OFFSET]
#define c_motor_speed_limit config_ints[CONF_MOTOR_SPEED_LIMIT-CONFIG_INT_OFFSET]
#define c_motor_rate_of_change config_ints[CONF_MOTOR_RATE_OF_CHANGE-CONFIG_INT_OFFSET]
#define c_send_status_interval config_ints[CONF_SEND_STATUS_INTERVAL-CONFIG_INT_OFFSET]
#define c_motor_const_roc config_ints[CONF_MOTOR_CONST_ROC-CONFIG_INT_OFFSET]

#define c_wheel_distance config_floats[CONF_WHEEL_DISTANCE-CONFIG_FLOAT_OFFSET]
#define c_wheel_r1 config_floats[CONF_WHEEL_R1-CONFIG_FLOAT_OFFSET]
#define c_wheel_r2 config_floats[CONF_WHEEL_R2-CONFIG_FLOAT_OFFSET]
#define c_pid_d_p config_floats[CONF_PID_D_P-CONFIG_FLOAT_OFFSET]
#define c_pid_d_d config_floats[CONF_PID_D_D-CONFIG_FLOAT_OFFSET]
#define c_pid_r_p config_floats[CONF_PID_R_P-CONFIG_FLOAT_OFFSET]
#define c_pid_r_d config_floats[CONF_PID_R_D-CONFIG_FLOAT_OFFSET]
#define c_vmax config_floats[CONF_VMAX-CONFIG_FLOAT_OFFSET]
#define c_omega config_floats[CONF_OMEGA-CONFIG_FLOAT_OFFSET]
#define c_accel config_floats[CONF_ACCEL-CONFIG_FLOAT_OFFSET]
#define c_alpha config_floats[CONF_ALPHA-CONFIG_FLOAT_OFFSET]
#define c_slowdown config_floats[CONF_SLOWDOWN-CONFIG_FLOAT_OFFSET]
#define c_angle_speedup config_floats[CONF_ANGLE_SPEEDUP-CONFIG_FLOAT_OFFSET]


void config_set_b(int key, int8_t value);
void config_set_i(int key, int value);
void config_set_f(int key, float value);

static inline void config_load_defaults(void) {
	config_set_b(CONF_DISTANCE_REGULATOR, 1);
	config_set_b(CONF_ROTATION_REGULATOR, 1);
	config_set_b(CONF_ENABLE_STUCK, 1);
	config_set_b(CONF_STUCK, 0);
	config_set_b(CONF_DEBUG, 0);
	config_set_b(CONF_STATUS_CHANGE_REPORT, 1);
	config_set_b(CONF_KEEP_COUNT, 100);
	config_set_b(CONF_TMR, 20);
	config_set_b(CONF_MOTOR_CONNECTED, 1);
	config_set_i(CONF_STUCK_DISTANCE_JUMP, 400);
	config_set_i(CONF_STUCK_ROTATION_JUMP, 180);
	config_set_i(CONF_STUCK_DISTANCE_MAX_FAIL_COUNT, 200);
	config_set_i(CONF_STUCK_ROTATION_MAX_FAIL_COUNT, 200);
	config_set_i(CONF_MOTOR_SPEED_LIMIT, 3200);
	config_set_i(CONF_MOTOR_RATE_OF_CHANGE, 3200);
	config_set_i(CONF_SEND_STATUS_INTERVAL, 0);
	config_set_i(CONF_MOTOR_CONST_ROC, 100);
	config_set_f(CONF_WHEEL_DISTANCE, 207.0f);
	config_set_f(CONF_WHEEL_R1, 69.0f);
	config_set_f(CONF_WHEEL_R2, 69.0f);
	config_set_f(CONF_PID_D_P, 5.5f);
	config_set_f(CONF_PID_D_D, 200.0f);
	config_set_f(CONF_PID_R_P, 3.0f);
	config_set_f(CONF_PID_R_D, 90.0f);
	config_set_f(CONF_VMAX, 50.0f);
	config_set_f(CONF_OMEGA, 50.0f);
	config_set_f(CONF_ACCEL, 50.0f);
	config_set_f(CONF_ALPHA, 50.0f);
	config_set_f(CONF_SLOWDOWN, 1.0f);
	config_set_f(CONF_ANGLE_SPEEDUP, 20.0f);
}
#define CMD_SET_CONFIG 'c'
#define CMD_GET_CONFIG 'C'
#define CMD_MOVE_TO 'N'
#define CMD_SEND_STATUS 'P'
#define CMD_SET_SPEED 'V'
#define CMD_SET_ROTATION_SPEED 'r'
#define CMD_MOVE_FORWARD 'r'
#define CMD_RELATIVE_ROTATE 'T'
#define CMD_ABSOLUTE_ROTATE 'A'
#define CMD_TURN_AND_GO 'G'
#define CMD_CURVE 'Q'
#define CMD_HARD_STOP 'S'
#define CMD_SOFT_STOP 's'
#define CMD_SMOOTH_STOP 't'
#define CMD_RESET_DRIVER 'R'
#define CMD_KILL_REGULATOR 'H'
#define CMD_FORWARD 'D'
#define CMD_SET_POSITION_AND_ORIENTATION 'I'
#define CMD_BREAK 'i'
#define CMD_UNSTUCK 'u'
#define CMD_MOTOR 'm'


#endif

