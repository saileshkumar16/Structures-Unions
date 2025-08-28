#include <stdio.h>

struct SensorData
{
    int id; //sensor id
    float val; // sensor val
    unsigned long ts; //sensor time-stamp
};


int main()
{
    struct SensorData temp ={21,28.2,123456}; //temperature sensor
    
    printf("Sensor ID is %d\n",temp.id);
    printf("Sensor value is %f\n",temp.val);
    printf("Sensor current time stamp is %lu\n",temp.ts);
}