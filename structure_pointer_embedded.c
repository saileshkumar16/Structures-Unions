#include <stdint.h>
#include <stdio.h>

#define GPIOA_BASE 0X40020000 //constant

typedef struct gpio_reg_map
{
    volatile uint32_t MODER; //0x00
    volatile uint32_t OTYPER; //0x04
    volatile uint32_t OSPEEDR; //0x08
    volatile uint32_t PUPDR; //0x0C
}GPIO_RegMap;

int main()
{
    GPIO_RegMap *gpioa1 = (GPIO_RegMap *) GPIOA_BASE; //point to base address after tpye casting from constant to pointer, becase lvalue and rvalue should match
    
    gpioa1->MODER = gpioa1->MODER | (1<<10); //dummy example of configuring as output pin
    
    printf("GPIO MODER value is %u",gpioa1->MODER);


    return 0;
}
