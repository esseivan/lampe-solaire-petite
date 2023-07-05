/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.6
        Device            :  PIC16LF1827
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"

char state = 0;

void ToggleLamp(void)
{
    ENABLE_LAT = !ENABLE_LAT;
    LED_G_LAT = !ENABLE_LAT;
}

void LampOff(void)
{
    ENABLE_LAT = 0;
    LED_G_LAT = 1;
}

void VTStateChanged(void)
{
    if(D3_GetValue()) // A
    {
        ToggleLamp();
    }
    else if (D2_GetValue()) // B
    {
        NOP();
    }
    else if (D1_GetValue()) // C
    {
        NOP();
    }
    else if (D0_GetValue()) // D
    {
        LampOff();
    }
    
}

void GetBatteryLevel(void)
{
    char ledval = LED_G_LAT;
    LED_G_LAT = !ledval;
    
    // Indicate start
    uint16_t val = ADC_GetConversion(BATTERY_LVL);
    val = val * 8;
    // Resolution 10 bits (2^10 = 1024)
    // Plage : 0V à 2.048V
    // un lsb vaut 2.048v/1024 = 2mv par lsb
    // On a un diviseur de tension par 4
    // Pour trouver la tension de la batterie, on fait x_lsb*2mv/lsb*4 = x*8
    
    BAT_IND_G_SetHigh();
    BAT_IND_R_SetHigh();
    if(val >= 3600)
    {
        BAT_IND_G_SetLow();
    }
    else if (val >= 3300)
    {
        BAT_IND_G_SetLow();
        BAT_IND_R_SetLow();
    }
    else if (val >= 3000)
    {
        BAT_IND_R_SetLow();
    }
    else
    {
        LED_R_SetLow();
    }
    
    __delay_ms(50);
    LED_G_LAT = ledval;
}

/*
                         Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // LED ON
    LED_R_SetLow();
    LED_G_SetLow();
    
    // Wait 2s
    __delay_ms(2000);
    
    // LED OFF
    LED_R_SetHigh();
    LED_G_SetHigh();
    
    IOCBF5_SetInterruptHandler(VTStateChanged);
    
    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();
    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    GetBatteryLevel();
    
    uint16_t counter = 0;
    const uint16_t maxCounter = 120;
    while (1)
    {
        // Update battery level every 2 minutes
        __delay_ms(1000);
        if(++counter >= maxCounter) {
            GetBatteryLevel();
            counter = 0;
        }
    }
    
    while(1)
    {
        RESET();
    }
}
/**
 End of File
*/