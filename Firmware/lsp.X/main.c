


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

    while (1)
    {
        // Add your application code
        HAL_DELAY(500);
        LED_GREEN_Toggle();
        
        // Send data
        uint8_t data[] = "Message 1";
        if (!SX1278_LoRaEntryTx(&SX1278, sizeof(data), 2000))
        {
            continue;
        }
        
        SX1278_LoRaTxPacket(&SX1278, (uint8_t*) data, sizeof(data), 2000);
    }
}
/**
 End of File
*/