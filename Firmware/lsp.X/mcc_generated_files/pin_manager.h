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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16LF1827
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
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

// get/set VBAT_MEAS aliases
#define VBAT_MEAS_TRIS                 TRISAbits.TRISA0
#define VBAT_MEAS_LAT                  LATAbits.LATA0
#define VBAT_MEAS_PORT                 PORTAbits.RA0
#define VBAT_MEAS_ANS                  ANSELAbits.ANSA0
#define VBAT_MEAS_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define VBAT_MEAS_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define VBAT_MEAS_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define VBAT_MEAS_GetValue()           PORTAbits.RA0
#define VBAT_MEAS_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define VBAT_MEAS_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define VBAT_MEAS_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define VBAT_MEAS_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set REST aliases
#define REST_TRIS                 TRISAbits.TRISA1
#define REST_LAT                  LATAbits.LATA1
#define REST_PORT                 PORTAbits.RA1
#define REST_ANS                  ANSELAbits.ANSA1
#define REST_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define REST_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define REST_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define REST_GetValue()           PORTAbits.RA1
#define REST_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define REST_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define REST_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define REST_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set BATTERY_IND aliases
#define BATTERY_IND_TRIS                 TRISAbits.TRISA2
#define BATTERY_IND_LAT                  LATAbits.LATA2
#define BATTERY_IND_PORT                 PORTAbits.RA2
#define BATTERY_IND_ANS                  ANSELAbits.ANSA2
#define BATTERY_IND_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define BATTERY_IND_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define BATTERY_IND_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define BATTERY_IND_GetValue()           PORTAbits.RA2
#define BATTERY_IND_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define BATTERY_IND_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define BATTERY_IND_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define BATTERY_IND_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set ENABLE aliases
#define ENABLE_TRIS                 TRISAbits.TRISA3
#define ENABLE_LAT                  LATAbits.LATA3
#define ENABLE_PORT                 PORTAbits.RA3
#define ENABLE_ANS                  ANSELAbits.ANSA3
#define ENABLE_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define ENABLE_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define ENABLE_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define ENABLE_GetValue()           PORTAbits.RA3
#define ENABLE_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define ENABLE_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define ENABLE_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define ENABLE_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set NSS aliases
#define NSS_TRIS                 TRISAbits.TRISA4
#define NSS_LAT                  LATAbits.LATA4
#define NSS_PORT                 PORTAbits.RA4
#define NSS_ANS                  ANSELAbits.ANSA4
#define NSS_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define NSS_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define NSS_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define NSS_GetValue()           PORTAbits.RA4
#define NSS_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define NSS_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define NSS_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define NSS_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set LED_RED aliases
#define LED_RED_TRIS                 TRISAbits.TRISA6
#define LED_RED_LAT                  LATAbits.LATA6
#define LED_RED_PORT                 PORTAbits.RA6
#define LED_RED_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define LED_RED_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define LED_RED_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define LED_RED_GetValue()           PORTAbits.RA6
#define LED_RED_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define LED_RED_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)

// get/set LED_GREEN aliases
#define LED_GREEN_TRIS                 TRISAbits.TRISA7
#define LED_GREEN_LAT                  LATAbits.LATA7
#define LED_GREEN_PORT                 PORTAbits.RA7
#define LED_GREEN_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define LED_GREEN_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define LED_GREEN_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define LED_GREEN_GetValue()           PORTAbits.RA7
#define LED_GREEN_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define LED_GREEN_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)

// get/set DIO0 aliases
#define DIO0_TRIS                 TRISBbits.TRISB0
#define DIO0_LAT                  LATBbits.LATB0
#define DIO0_PORT                 PORTBbits.RB0
#define DIO0_WPU                  WPUBbits.WPUB0
#define DIO0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define DIO0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define DIO0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define DIO0_GetValue()           PORTBbits.RB0
#define DIO0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define DIO0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define DIO0_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define DIO0_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)

// get/set RB1 procedures
#define RB1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define RB1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define RB1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define RB1_GetValue()              PORTBbits.RB1
#define RB1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define RB1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define RB1_SetPullup()             do { WPUBbits.WPUB1 = 1; } while(0)
#define RB1_ResetPullup()           do { WPUBbits.WPUB1 = 0; } while(0)
#define RB1_SetAnalogMode()         do { ANSELBbits.ANSB1 = 1; } while(0)
#define RB1_SetDigitalMode()        do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set RB2 procedures
#define RB2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define RB2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define RB2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define RB2_GetValue()              PORTBbits.RB2
#define RB2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define RB2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define RB2_SetPullup()             do { WPUBbits.WPUB2 = 1; } while(0)
#define RB2_ResetPullup()           do { WPUBbits.WPUB2 = 0; } while(0)
#define RB2_SetAnalogMode()         do { ANSELBbits.ANSB2 = 1; } while(0)
#define RB2_SetDigitalMode()        do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set ENABLE_PWM aliases
#define ENABLE_PWM_TRIS                 TRISBbits.TRISB3
#define ENABLE_PWM_LAT                  LATBbits.LATB3
#define ENABLE_PWM_PORT                 PORTBbits.RB3
#define ENABLE_PWM_WPU                  WPUBbits.WPUB3
#define ENABLE_PWM_ANS                  ANSELBbits.ANSB3
#define ENABLE_PWM_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define ENABLE_PWM_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define ENABLE_PWM_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define ENABLE_PWM_GetValue()           PORTBbits.RB3
#define ENABLE_PWM_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define ENABLE_PWM_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define ENABLE_PWM_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define ENABLE_PWM_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define ENABLE_PWM_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define ENABLE_PWM_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set DIO1 aliases
#define DIO1_TRIS                 TRISBbits.TRISB5
#define DIO1_LAT                  LATBbits.LATB5
#define DIO1_PORT                 PORTBbits.RB5
#define DIO1_WPU                  WPUBbits.WPUB5
#define DIO1_ANS                  ANSELBbits.ANSB5
#define DIO1_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define DIO1_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define DIO1_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define DIO1_GetValue()           PORTBbits.RB5
#define DIO1_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define DIO1_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define DIO1_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define DIO1_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define DIO1_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define DIO1_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

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
    Interrupt on Change Handler for the IOCBF0 pin functionality
 * @Example
    IOCBF0_ISR();
 */
void IOCBF0_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBF0 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBF0 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF0_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBF0_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCBF0 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBF0_SetInterruptHandler() method.
    This handler is called every time the IOCBF0 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF0_SetInterruptHandler(IOCBF0_InterruptHandler);

*/
extern void (*IOCBF0_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBF0 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBF0_SetInterruptHandler() method.
    This handler is called every time the IOCBF0 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF0_SetInterruptHandler(IOCBF0_DefaultInterruptHandler);

*/
void IOCBF0_DefaultInterruptHandler(void);


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