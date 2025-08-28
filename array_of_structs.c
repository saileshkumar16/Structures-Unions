#include <stdint.h>
#include <stdio.h>

struct sensor
{
    int id;
    float val;
    char name[10];
};

int main()
{
    struct sensor p1[3]={
        {1,22.5,"temp"},
        {2,13.5,"humidity"},
        {3,42.5,"pressure"}
    };
    
    for(int i=0; i<3; i++)
    {
        printf("Sensor id is %d, sensor value is %f and sensor name is %s\n",p1[i].id, p1[i].val,p1[i].name);
    }

    return 0;
}
