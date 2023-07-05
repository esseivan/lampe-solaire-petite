


#include "mcc_generated_files/mcc.h"
#include "SX1278/SX1278.h"

SX1278_t SX1278;

void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    SPI1_Open(SPI1_DEFAULT);
    
    // Allumer Led Rouge
    LED_RED_SetLow();
    
    //initialize LoRa module
    SX1278_init(&SX1278, 434000000, SX1278_POWER_17DBM, SX1278_LORA_SF_9,
    SX1278_LORA_BW_125KHZ, SX1278_LORA_CR_4_7, SX1278_LORA_CRC_EN, 10);
    {
        uint8_t ver = SX1278_SPIRead(&SX1278, REG_LR_VERSION);

        if (0x12 == ver) // Initialisation OK
        {
            LED_RED_SetHigh(); // Eteindre led rouge
        }
    }
    
    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

#define RX
    
    while (1)
    {
        // Add your application code
        
        
#ifdef TX
        /****** TX *******/
        LED_GREEN_Toggle();
        HAL_DELAY(2500);
        // Send data
        uint8_t data[] = "Message 1";
        if (!SX1278_LoRaEntryTx(&SX1278, sizeof(data), 2000))
        {
            continue;
        }
        
        SX1278_LoRaTxPacket(&SX1278, (uint8_t*) data, sizeof(data), 2000);  
#endif
        
#ifdef RX
        /****** RX *******/
        uint8_t rxBuff[24] = {0};
        LED_GREEN_Toggle();
        SX1278_sleep(&SX1278);
        HAL_DELAY(1000);
        
        // Checking for activity, enter CAD mode
        SX1278_CAD(&SX1278);
        
        while (SX1278_hw_GetDIO0() == 0); // Wait for Cad Done
        (&SX1278)->status = STANDBY;
        
        if (SX1278_hw_GetDIO1()) { // Is cad detected

            SX1278_LoRaEntryRx(&SX1278, 16, 3000); // Begin reception for 1s timeout
            if (SX1278_WaitRXPacket(&SX1278, 1000)) {
                uint8_t nbBytes = SX1278_LoRaRxPacket(&SX1278);
                if (nbBytes > 0) {
                    SX1278_read(&SX1278, (uint8_t*) rxBuff, nbBytes);
                    if (rxBuff[0] == 'M')
                    {
                        BATTERY_IND_Toggle();
                    }
                }
            }
        }
#endif
    }
}
/**
 End of File
*/