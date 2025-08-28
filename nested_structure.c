#include <stdio.h>
#include <stdint.h>

struct Date 
{
    uint8_t day;
    uint8_t month;
    uint16_t year;
};

struct SensorPacket 
{
    int id;
    float value;
    struct Date timestamp;
};

int main() {
    struct SensorPacket pkt = {1, 24.7, {28, 8, 2025}};

    printf("Sensor id is %d\n sensor value is %f\n at given date is %d/%d/%d\n",
           pkt.id, 
           pkt.value,
           pkt.timestamp.day,
           pkt.timestamp.month,
           pkt.timestamp.year);

    return 0;
}
