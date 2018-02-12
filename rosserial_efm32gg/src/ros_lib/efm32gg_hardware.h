#ifndef ROS_EFM32GG_HARDWARE_H
#define ROS_EFM32GG_HARDWARE_H

class EFM32GG {

    // any initialization code necessary to use the serial port
    void init();

    // read a byte from the serial port. -1 = failure
    int read()

    // write data to the connection to ROS
    void write(uint8_t* data, int length);

    // returns milliseconds since start of program
    unsigned long time();
}

#endif
