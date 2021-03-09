/*----------------------------------------------------------------------------*/
/*
    Ryan Sullivan

    Module Name     :   io.h
    Description     :   header file
*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*-constant-definitions-------------------------------------------------------*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*-exported-variables---------------------------------------------------------*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*-exported-functions---------------------------------------------------------*/
/*----------------------------------------------------------------------------*/

void    io_initialise( void );
void    io_toggle_w_led( void );
void    io_fault_led_enable( void );

void    io_accelerometer_initialise( void );
bool    io_accelerometer_data_ready( void );
void    io_accelerometer_read( int16_t *accel_x, int16_t *accel_y, int16_t *accel_z );

void    io_magnetometer_initialise( void );
bool    io_magnetometer_data_ready( void );
void    io_magnetometer_read( int16_t *mag_x, int16_t *mag_y, int16_t *mag_z );

void    io_gyroscope_initialise( void );
bool    io_gyroscope_data_ready( void );
void    io_gyroscope_read( int16_t *gyro_x, int16_t *gyro_y, int16_t *gyro_z );

void    io_1ms_poll( void );
void    external_interupt_1_isr( void );
void    external_interupt_2_isr( void );
void    external_interupt_4_isr( void );

/*----------------------------------------------------------------------------*/
/*-end-of-module--------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
