/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.6
        Device            :  PIC16LF1827
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.30 and above
        MPLAB 	          :  MPLAB X 5.40	
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set D3 aliases
#define D3_TRIS                 TRISAbits.TRISA0
#define D3_LAT                  LATAbits.LATA0
#define D3_PORT                 PORTAbits.RA0
#define D3_ANS                  ANSELAbits.ANSA0
#define D3_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define D3_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define D3_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define D3_GetValue()           PORTAbits.RA0
#define D3_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define D3_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define D3_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define D3_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set D0 aliases
#define D0_TRIS                 TRISAbits.TRISA1
#define D0_LAT                  LATAbits.LATA1
#define D0_PORT                 PORTAbits.RA1
#define D0_ANS                  ANSELAbits.ANSA1
#define D0_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define D0_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define D0_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define D0_GetValue()           PORTAbits.RA1
#define D0_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define D0_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define D0_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define D0_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set BAT_IND_G aliases
#define BAT_IND_G_TRIS                 TRISAbits.TRISA2
#define BAT_IND_G_LAT                  LATAbits.LATA2
#define BAT_IND_G_PORT                 PORTAbits.RA2
#define BAT_IND_G_ANS                  ANSELAbits.ANSA2
#define BAT_IND_G_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define BAT_IND_G_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define BAT_IND_G_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define BAT_IND_G_GetValue()           PORTAbits.RA2
#define BAT_IND_G_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define BAT_IND_G_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define BAT_IND_G_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define BAT_IND_G_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set BAT_IND_R aliases
#define BAT_IND_R_TRIS                 TRISAbits.TRISA3
#define BAT_IND_R_LAT                  LATAbits.LATA3
#define BAT_IND_R_PORT                 PORTAbits.RA3
#define BAT_IND_R_ANS                  ANSELAbits.ANSA3
#define BAT_IND_R_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define BAT_IND_R_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define BAT_IND_R_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define BAT_IND_R_GetValue()           PORTAbits.RA3
#define BAT_IND_R_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define BAT_IND_R_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define BAT_IND_R_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define BAT_IND_R_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set NC_1 aliases
#define NC_1_TRIS                 TRISAbits.TRISA4
#define NC_1_LAT                  LATAbits.LATA4
#define NC_1_PORT                 PORTAbits.RA4
#define NC_1_ANS                  ANSELAbits.ANSA4
#define NC_1_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define NC_1_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define NC_1_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define NC_1_GetValue()           PORTAbits.RA4
#define NC_1_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define NC_1_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define NC_1_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define NC_1_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set D1 aliases
#define D1_TRIS                 TRISAbits.TRISA6
#define D1_LAT                  LATAbits.LATA6
#define D1_PORT                 PORTAbits.RA6
#define D1_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define D1_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define D1_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define D1_GetValue()           PORTAbits.RA6
#define D1_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define D1_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)

// get/set D2 aliases
#define D2_TRIS                 TRISAbits.TRISA7
#define D2_LAT                  LATAbits.LATA7
#define D2_PORT                 PORTAbits.RA7
#define D2_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define D2_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define D2_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define D2_GetValue()           PORTAbits.RA7
#define D2_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define D2_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)

// get/set LED_G aliases
#define LED_G_TRIS                 TRISBbits.TRISB0
#define LED_G_LAT                  LATBbits.LATB0
#define LED_G_PORT                 PORTBbits.RB0
#define LED_G_WPU                  WPUBbits.WPUB0
#define LED_G_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define LED_G_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define LED_G_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define LED_G_GetValue()           PORTBbits.RB0
#define LED_G_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define LED_G_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define LED_G_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define LED_G_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)

// get/set LED_R aliases
#define LED_R_TRIS                 TRISBbits.TRISB1
#define LED_R_LAT                  LATBbits.LATB1
#define LED_R_PORT                 PORTBbits.RB1
#define LED_R_WPU                  WPUBbits.WPUB1
#define LED_R_ANS                  ANSELBbits.ANSB1
#define LED_R_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define LED_R_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define LED_R_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define LED_R_GetValue()           PORTBbits.RB1
#define LED_R_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define LED_R_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define LED_R_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define LED_R_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define LED_R_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define LED_R_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set BATTERY_LVL aliases
#define BATTERY_LVL_TRIS                 TRISBbits.TRISB2
#define BATTERY_LVL_LAT                  LATBbits.LATB2
#define BATTERY_LVL_PORT                 PORTBbits.RB2
#define BATTERY_LVL_WPU                  WPUBbits.WPUB2
#define BATTERY_LVL_ANS                  ANSELBbits.ANSB2
#define BATTERY_LVL_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define BATTERY_LVL_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define BATTERY_LVL_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define BATTERY_LVL_GetValue()           PORTBbits.RB2
#define BATTERY_LVL_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define BATTERY_LVL_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define BATTERY_LVL_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define BATTERY_LVL_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define BATTERY_LVL_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define BATTERY_LVL_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set ENABLE aliases
#define ENABLE_TRIS                 TRISBbits.TRISB3
#define ENABLE_LAT                  LATBbits.LATB3
#define ENABLE_PORT                 PORTBbits.RB3
#define ENABLE_WPU                  WPUBbits.WPUB3
#define ENABLE_ANS                  ANSELBbits.ANSB3
#define ENABLE_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define ENABLE_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define ENABLE_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define ENABLE_GetValue()           PORTBbits.RB3
#define ENABLE_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define ENABLE_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define ENABLE_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define ENABLE_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define ENABLE_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define ENABLE_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set NC_2 aliases
#define NC_2_TRIS                 TRISBbits.TRISB4
#define NC_2_LAT                  LATBbits.LATB4
#define NC_2_PORT                 PORTBbits.RB4
#define NC_2_WPU                  WPUBbits.WPUB4
#define NC_2_ANS                  ANSELBbits.ANSB4
#define NC_2_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define NC_2_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define NC_2_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define NC_2_GetValue()           PORTBbits.RB4
#define NC_2_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define NC_2_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define NC_2_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define NC_2_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define NC_2_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define NC_2_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set VT aliases
#define VT_TRIS                 TRISBbits.TRISB5
#define VT_LAT                  LATBbits.LATB5
#define VT_PORT                 PORTBbits.RB5
#define VT_WPU                  WPUBbits.WPUB5
#define VT_ANS                  ANSELBbits.ANSB5
#define VT_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define VT_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define VT_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define VT_GetValue()           PORTBbits.RB5
#define VT_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define VT_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define VT_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define VT_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define VT_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define VT_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set ICSPCLK aliases
#define ICSPCLK_TRIS                 TRISBbits.TRISB6
#define ICSPCLK_LAT                  LATBbits.LATB6
#define ICSPCLK_PORT                 PORTBbits.RB6
#define ICSPCLK_WPU                  WPUBbits.WPUB6
#define ICSPCLK_ANS                  ANSELBbits.ANSB6
#define ICSPCLK_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define ICSPCLK_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define ICSPCLK_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define ICSPCLK_GetValue()           PORTBbits.RB6
#define ICSPCLK_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define ICSPCLK_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define ICSPCLK_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define ICSPCLK_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define ICSPCLK_SetAnalogMode()      do { ANSELBbits.ANSB6 = 1; } while(0)
#define ICSPCLK_SetDigitalMode()     do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set ICSPDAT aliases
#define ICSPDAT_TRIS                 TRISBbits.TRISB7
#define ICSPDAT_LAT                  LATBbits.LATB7
#define ICSPDAT_PORT                 PORTBbits.RB7
#define ICSPDAT_WPU                  WPUBbits.WPUB7
#define ICSPDAT_ANS                  ANSELBbits.ANSB7
#define ICSPDAT_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define ICSPDAT_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define ICSPDAT_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define ICSPDAT_GetValue()           PORTBbits.RB7
#define ICSPDAT_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define ICSPDAT_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define ICSPDAT_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define ICSPDAT_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define ICSPDAT_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define ICSPDAT_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBF5 pin functionality
 * @Example
    IOCBF5_ISR();
 */
void IOCBF5_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBF5 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBF5 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF5_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBF5_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCBF5 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBF5_SetInterruptHandler() method.
    This handler is called every time the IOCBF5 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF5_SetInterruptHandler(IOCBF5_InterruptHandler);

*/
extern void (*IOCBF5_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBF5 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBF5_SetInterruptHandler() method.
    This handler is called every time the IOCBF5 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF5_SetInterruptHandler(IOCBF5_DefaultInterruptHandler);

*/
void IOCBF5_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/