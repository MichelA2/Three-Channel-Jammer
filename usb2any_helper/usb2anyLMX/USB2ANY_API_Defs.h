
#pragma once

//+ 2013-08-01 15:46:50 RT - USB2ANY_SDK.h
//+ 2013-08-01 15:46:50 RT - Added SMBUS_PEC_CRC8 as a synonym for SMBUS_PEC_ON
//+ 2013-08-20 16:31:13 RT - Added macros INVALID_U2A_HANDLE and IsValidU2A_HANDLE() to help validate handles
//+ 2013-10-28 19:05:49 RT - Added Cmd_Digital_Capture = 117, Digital_GetData, and Cmd_Digital_GetStatus
//+ 2013-10-28 19:14:10 RT - Added ADC_EnableMode enum: ADC_Disable, ADC_Enable, and ADC_EnableMask 
//+ 2013-10-28 19:15:46 RT - Added LEDS enum constants for LED states.
//+ 2013-10-28 19:16:34 RT - Added LED_BLINK enum constants for LED blink states.
//+ 2013-10-28 19:17:32 RT - Added ADCTriggerType enum constants.
//+ 2013-11-20 13:05:51 RT - Added #defines for INVALID_U2A_HANDLE and IsValidU2A_HANDLE
//+ 2013-11-20 13:06:45 RT - Added #define for SMBUS_PEC_FLAGS
//+ 2013-11-20 13:07:22 RT - Added Command enums for Cmd_Digital_Capture, Cmd_Digital_GetData, and Cmd_Digital_GetStatus
//+ 2013-11-20 13:08:40 RT - Added ADC_EnableMode enums
//+ 2013-11-20 13:10:07 RT - Added LEDS and LED_BLINK enums
//+ 2013-11-20 13:10:48 RT - Added ADCTriggerType enums
//+ 2013-11-20 13:11:23 RT - Removed USI3 Definitions
//+ 2014-01-16 [RT] - Added ERR_NOT_ENABLED error code
//+ 2014-01-16 [RT] - Added Cmd_OneWire_SetMode
//+ 2014-01-16 [RT] - Added Cmd_OneWire_PulseSetup
//+ 2014-01-16 [RT] - Added Cmd_OneWire_PulseWrite
//+ 2014-01-16 [RT] - Added Cmd_OneWire_SetState
//+ 2014-01-16 [RT] - Added Cmd_GPIO_SetCustomPort
//+ 2014-01-16 [RT] - Added Cmd_GPIO_WriteCustomPort 
//+ 2014-01-16 [RT] - Added Cmd_GPIO_ReadCustomPort
//+ 2014-01-16 [RT] - Added Cmd_I2C_BlkWriteBlkRead
//+ 2014-01-16 [RT] - Changed Cmd_I2C_Read_Internal to Cmd_I2C_ReadInternal
//+ 2014-01-16 [RT] - Changed Cmd_I2C_Write_Internal to Cmd_I2C_WriteInternal
//+ 2014-01-16 [RT] - Added OneWire_Mode and OneWire_Channel typedef enums
//+ 2014-02-06 [RT] - Marked OneWire_Channel enums as deprecated
//+ 2014-02-06 [RT] - Added code to prepare for static firmware loader
//+ 2014-02-06 [RT] - Added Cmd_EasyScale_WriteAndRead
//+ 2014-02-06 [RT] - Deprecated OneWire_Mode enum OW_EnablePulseMode.
//+ 2014-02-06 [RT] - Added OneWire_Mode enums OW_Mode1, OW_Mode2, and OW_Mode3.
//+ 2014-02-06 [RT] - Added OneWire_Flags enums OW_FLAG_NONE, OW_FLAG_INVERT, and OW_FLAG_NO_INIT.
//+ 2014-03-28 [RT] - Added Cmd_UART_SetMode
//+ 2014-03-28 [RT] - Added UART_Mode enums UART_Normal, UART_ReceiverOff, and UART_RecvAfterXmit
//+ 2014-09-16 [RT] - Removed USI3 Definitions 
//+ 2014-09-16 [RT] - Added FCB_QUIET enum constant
//+ 2014-09-16 [RT] - Added error codes ERR_INVALID_PARAMETER and ERR_NOT_INITIALIZED
//+ 2014-09-16 [RT] - Added MOST_RECENT_HANDLE constant
//+ 2014-09-16 [RT] - Changed name of command 0x00 from Cmd_Invalid to Cmd_LoopPacket
//+ 2014-09-16 [RT] - Added command Cmd_GPIO_WritePulse
//+ 2014-09-16 [RT] - Added commands for DisplayScale (Cmd_DisplayScale_xxx)
//+ 2014-09-16 [RT] - Added commands Cmd_Invalid and Cmd_END
//+ 2014-09-16 [RT] - Added commands for streaming functions (Cmd_Stream_xxx)
//+ 2014-09-16 [RT] - Added command Cmd_Pegasus_Test
//+ 2014-09-16 [RT] - Added STREAM_STATUS enums (SS_xxx)


////////////////////////////////////////////////////////////////////////////////
//                             Common Definitions                             //
////////////////////////////////////////////////////////////////////////////////

//
// defined types
//
typedef unsigned char       Byte;
typedef unsigned char       U08;
typedef	unsigned short      UInt16;
typedef	unsigned short      U16;
typedef	unsigned long       UInt32;
typedef	unsigned long       U32;
typedef long                U2A_HANDLE;


#define SERNUM_LEN          40 
#define MAXIMUM_DATA_SIZE   64

// USB IDs for USB2ANY
#define USB2ANY_VID         0x2047        // Vendor ID (VID) for TI
#define USB2ANY_PID         0x0301        // Product ID (PID) for USB2ANY

#define USB2ANY_TYPE        USB2ANY_PID

// constants for Response Mode
#define RESP_QUERY          0
#define RESP_SYNC           1
#define RESP_POLLED         2
#define RESP_ASYNC          3
#define RESP_SYNC_ERRORS    4

// Controller Type constants
#define CTRLR_UNKNOWN       0x0000
#define CTRLR_USB2ANY       0x0001
#define CTRLR_ONEDEMO       0x0002
#define CTRLR_UNSUPPORTED   0x0004

// Interface protocol
#define IFACE_UNKNOWN       0x0000
#define IFACE_HIDBSL        0x0100
#define IFACE_HID           0x0200
#define IFACE_CDC           0x0400

// Firmware debug constants
#define FW_DEBUG_NO_CHECK   0x00010000      // suppress firmware version check (one-shot)

//#if BUILD_FIRMWARE_LOADER_MODE
// modes for u2aFindControllersBSL()
typedef enum
{
    FCB_LOADER_DIALOG,
    FCB_UPDATE_DIALOG,
    FCB_ENUM_ONLY,
    FCB_QUIET
} FCB_MODE;
//#endif

//
// error code constants
//
typedef enum
{
    ERR_OK                      =  0,
    ERR_COM_RX_OVERFLOW         = -1,
    ERR_COM_RX_BUF_EMPTY        = -2,
    ERR_COM_TX_BUF_FULL         = -3,
    ERR_COM_TX_STALLED          = -4,
    ERR_COM_TX_FAILED           = -5,
    ERR_COM_OPEN_FAILED         = -6,
    ERR_COM_PORT_NOT_OPEN       = -7,
    ERR_COM_PORT_IS_OPEN        = -8,
    ERR_COM_READ_TIMEOUT        = -9,
    ERR_COM_READ_ERROR          = -10,
    ERR_COM_WRITE_ERROR         = -11,
    ERR_DEVICE_NOT_FOUND        = -12,
    ERR_COM_CRC_FAILED          = -13,

    ERR_INVALID_PORT            = -20,
    ERR_ADDRESS_OUT_OF_RANGE    = -21,
    ERR_INVALID_FUNCTION_CODE   = -22,
    ERR_BAD_PACKET_SIZE         = -23,
    ERR_INVALID_HANDLE          = -24,
    ERR_OPERATION_FAILED        = -25,
    ERR_PARAM_OUT_OF_RANGE      = -26,
    ERR_PACKET_OUT_OF_SEQUENCE  = -27,
    ERR_INVALID_PACKET_HEADER   = -28,
    ERR_UNIMPLEMENTED_FUNCTION  = -29,
    ERR_TOO_MUCH_DATA           = -30,
    ERR_INVALID_DEVICE          = -31,
    ERR_UNSUPPORTED_FIRMWARE    = -32,
    ERR_BUFFER_TOO_SMALL        = -33,
    ERR_NO_DATA                 = -34,
    ERR_RESOURCE_CONFLICT       = -35,
    ERR_NO_EVM                  = -36,
    ERR_COMMAND_BUSY            = -37,
    ERR_ADJ_POWER_FAIL          = -38,
    ERR_NOT_ENABLED             = -39,

    ERR_I2C_INIT_ERROR          = -40,
    ERR_I2C_READ_ERROR          = -41,
    ERR_I2C_WRITE_ERROR         = -42,
    ERR_I2C_BUSY                = -43,
    ERR_I2C_ADDR_NAK            = -44,
    ERR_I2C_DATA_NAK            = -45,
    ERR_I2C_READ_TIMEOUT        = -46,
    ERR_I2C_READ_DATA_TIMEOUT   = -47,
    ERR_I2C_READ_COMP_TIMEOUT   = -48,
    ERR_I2C_WRITE_TIMEOUT       = -49,
    ERR_I2C_WRITE_DATA_TIMEOUT  = -50,
    ERR_I2C_WRITE_COMP_TIMEOUT  = -51,
    ERR_I2C_NOT_MASTER          = -52,
    ERR_I2C_ARBITRATION_LOST    = -53,
    ERR_I2C_NO_PULLUP_POWER     = -54,

    ERR_SPI_INIT_ERROR          = -60,
    ERR_SPI_WRITE_READ_ERROR    = -61,

    ERR_DATA_WRITE_ERROR        = -70,
    ERR_DATA_READ_ERROR         = -71,
    ERR_TIMEOUT                 = -72,
    ERR_DATA_CRC_FAILED         = -73,
    ERR_INVALID_PARAMETER       = -74,
    ERR_NOT_INITIALIZED         = -75

} ERROR_CODE;

#define INVALID_U2A_HANDLE      ((U2A_HANDLE) ERR_INVALID_HANDLE)
#define IsValidU2A_HANDLE(h)    ((h) > 0)
#define MOST_RECENT_HANDLE      0x1000

////////////////////////////////////////////////////////////////////////////////
//                        USB2ANY Constant Definitions                        //
////////////////////////////////////////////////////////////////////////////////


const UInt16 MAX_PACKET_SIZE        = 64;      // Hid Packet size (Bytes)
const UInt16 MAX_BOARDS_ATTACHED    = 6;
const Byte DAC0_I2C_ADDRESS         = 0x4C;
const Byte DAC1_I2C_ADDRESS         = 0x4D;
const Byte DAC2_I2C_ADDRESS         = 0x4E;
const Byte DAC3_I2C_ADDRESS         = 0x4F;

const float VREF_1V5 = 1.5f;
const float VREF_2V5 = 2.5f;
const float VREF_3V3 = 3.3f;
const float ADC0_Gain = 1.0f / (1.0f + 1.0f);    // Amplifier gain
const float ADC1_Gain = 1.0f / (1.0f + 1.0f);    // Amplifier gain
const float ADC2_Gain = 1.0f;
const float ADC3_Gain = 1.0f;

//
//  Enumerated Constants
//
typedef enum
{
  SMBUS_PEC_DEFAULT = 0,  /**< Use default PEC settings, or those set by a previous call to u2aSMBUS_Control() */
  SMBUS_PEC_OFF     = 1,  /**< PEC is not used (forced off) */
  SMBUS_PEC_ON      = 2,  /**< PEC is appended as a CRC8 Byte (forced on) */
//  SMBUS_ECHO        = 4   /**< Echo the complete data sent and/or received. See individual command for specific details */
  SMBUS_VAR_LEN     = 8   /**< Suppress error if bytes received is less than requested and PEC is on */
} SMBUS_FLAGS;

#define SMBUS_PEC_CRC8      SMBUS_PEC_ON
#define SMBUS_PEC_FLAGS     (SMBUS_PEC_OFF | SMBUS_PEC_ON)

typedef enum
{
    I2C_100kHz = 0,
    I2C_400kHz = 1,
    I2C_10kHz  = 2,
    I2C_800kHz = 3
} I2C_Speed;

typedef enum
{
    I2C_7Bits = 0,
    I2C_10Bits = 1
} I2C_AddressLength;

typedef enum
{
    I2C_PullUps_OFF = 0,
    I2C_PullUps_ON = 1
} I2C_PullUps;

typedef enum Command
{
    Cmd_LoopPacket = 0,                 // 0x00
    Cmd_I2C_Control = 1,                // 0x01
    Cmd_I2C_Write = 2,                  // 0x02
    Cmd_I2C_Read = 3,                   // 0x03
    Cmd_I2CRead_WithAddress = 4,        // 0x04
    Cmd_GPIO_Write_Control = 5,         // 0x05
    Cmd_GPIO_Write_States = 6,          // 0x06
    Cmd_GPIO_Read_States = 7,           // 0x07
    Cmd_SPI_Control = 8,                // 0x08
    Cmd_SPI_WriteAndRead = 9,           // 0x09
    Cmd_FirmwareVersion_Read = 10,      // 0x0A
    Cmd_MSP430_WordWrite = 11,          // 0x0B
    Cmd_MSP430_WordRead = 12,           // 0x0C
    Cmd_MSP430_ByteWrite = 13,          // 0x0D
    Cmd_MSP430_ByteRead = 14,           // 0x0E
    Cmd_UART_Control = 15,              // 0x0F
    Cmd_MSP430_MemoryWrite = 16,        // 0x10
    Cmd_MSP430_MemoryRead = 17,         // 0x11
    Cmd_UART_Write = 18,                // 0x12
    Cmd_UART_SetMode = 19,              // 0x13
    Cmd_UART_Read = 20,                 // 0x14
    Cmd_Local_I2C_Write = 21,           // 0x15
    Cmd_PWM_Write_Control = 22,         // 0x16
    Cmd_Power_WriteControl = 23,        // 0x17
    Cmd_Power_ReadStatus = 24,          // 0x18
    Cmd_ADC_Control = 25,               // 0x19
    Cmd_ADC_ConvertAndRead = 26,        // 0x1A
    Cmd_LED_Control = 27,               // 0x1B
    Cmd_Clock_Control = 28,             // 0x1C
    Cmd_FEC_Control = 29,               // 0x1D
    Cmd_FEC_CountAndRead = 30,          // 0x1E
    Cmd_Interrupt_Control = 31,         // 0x1F
    Cmd_Interrupt_Received = 32,        // 0x20
    Cmd_EasyScale_Control = 33,         // 0x21
    Cmd_EasyScale_Write = 34,           // 0x22
    Cmd_EasyScale_Read = 35,            // 0x23
    Cmd_EasyScale_ACK_Received = 36,    // 0x24
    Cmd_GPIO_SetPort = 37,              // 0x25
    Cmd_GPIO_WritePort = 38,            // 0x26
    Cmd_GPIO_ReadPort = 39,             // 0x27
    Cmd_Reserved_40 = 40,               // 0x28 Reserved for end-user command **
    Cmd_Reserved_41 = 41,               // 0x29 Reserved for end-user command **
    Cmd_Reserved_42 = 42,               // 0x2A Reserved for end-user command **
    Cmd_Reserved_43 = 43,               // 0x2B Reserved for end-user command **
    Cmd_Reserved_44 = 44,               // 0x2C Reserved for end-user command **
    Cmd_Reserved_45 = 45,               // 0x2D Reserved for end-user command **
    Cmd_Reserved_46 = 46,               // 0x2E Reserved for end-user command **
    Cmd_Reserved_47 = 47,               // 0x2F Reserved for end-user command **
    Cmd_Reserved_48 = 48,               // 0x30 Reserved for end-user command **
    Cmd_Reserved_49 = 49,               // 0x31 Reserved for end-user command **
    Cmd_SMBUS_SendByte = 50,            // 0x32
    Cmd_SMBUS_WriteByte = 51,           // 0x33
    Cmd_SMBUS_WriteWord = 52,           // 0x34
    Cmd_SMBUS_WriteBlock = 53,          // 0x35
    Cmd_SMBUS_ReceiveByte = 54,         // 0x36
    Cmd_SMBUS_ReadByte = 55,            // 0x37
    Cmd_SMBUS_ReadWord = 56,            // 0x38
    Cmd_SMBUS_ReadBlock = 57,           // 0x39
    Cmd_SMBUS_ProcessCall = 58,         // 0x3A
    Cmd_SMBUS_BWBRProcessCall = 59,     // 0x3B
    Cmd_SMBUS_Control = 60,             // 0x3C
    Cmd_SMBUS_GetEchoBuffer = 61,       // 0x3D
    Cmd_RFFE_RegZeroWrite = 62,         // 0x3E 
    Cmd_RFFE_RegWrite = 63,             // 0x3F 
    Cmd_RFFE_ExtRegWrite  = 64,         // 0x40 
    Cmd_RFFE_ExtRegWriteLong = 65,      // 0x41 
    Cmd_RFFE_RegRead  = 66,             // 0x42 
    Cmd_RFFE_ExtRegRead = 67,           // 0x43 
    Cmd_RFFE_ExtRegReadLong = 68,       // 0x44 
    Cmd_OneWire_SetMode = 69,           // 0x45
    Cmd_OneWire_PulseSetup = 70,        // 0x46
    Cmd_OneWire_PulseWrite = 71,        // 0x47
    Cmd_OneWire_SetState = 72,          // 0x48
    Cmd_Reserved_73 = 73,               // 0x49 **
    Cmd_Reserved_74 = 74,               // 0x4A **
    Cmd_Reserved_75 = 75,               // 0x4B **
    Cmd_Reserved_76 = 76,               // 0x4C **
    Cmd_Reserved_77 = 77,               // 0x4D **
    Cmd_Reserved_78 = 78,               // 0x4E **
    Cmd_Reserved_79 = 79,               // 0x4F **
    Cmd_Reserved_80 = 80,               // 0x50 **
    Cmd_Reserved_81 = 81,               // 0x51 **
    Cmd_Reserved_82 = 82,               // 0x52 **
    Cmd_Reserved_83 = 83,               // 0x53 **
    Cmd_Packet = 84,                    // 0x54
    Cmd_GPIO_SetCustomPort = 85,        // 0x55
    Cmd_GPIO_WriteCustomPort = 86,      // 0x56
    Cmd_GPIO_ReadCustomPort = 87,       // 0x57
    Cmd_GPIO_WritePulse = 88,           // 0x58
    Cmd_Reserved_89 = 89,               // 0x59 **
    Cmd_Reserved_90 = 90,               // 0x5A **
    Cmd_Reserved_91 = 91,               // 0x5B **
    Cmd_Reserved_92 = 92,               // 0x5C **
    Cmd_Reserved_93 = 93,               // 0x5D **
    Cmd_Reserved_94 = 94,               // 0x5E **
    Cmd_Reserved_95 = 95,               // 0x5F **
    Cmd_I2C_BlkWriteBlkRead = 96,       // 0x60
    Cmd_InvokeBSL = 97,                 // 0x61
    Cmd_FirmwareDebugMode = 98,         // 0x62
    Cmd_Restart = 99,                   // 0x63
    Cmd_I2C_ReadWithAddress = 100,      // 0x64
    Cmd_I2C_ReadInternal = 101,         // 0x65
    Cmd_I2C_WriteInternal = 102,        // 0x66
    Cmd_GetErrorList = 103,             // 0x67
    Cmd_LED_SetState = 104,             // 0x68
    Cmd_Power_SetVoltageRef = 105,	    // 0x69
    Cmd_Status_GetControllerType = 106, // 0x6A
    Cmd_Power_Enable = 107,             // 0x6B
    Cmd_ADC_Enable = 108,               // 0x6C
    Cmd_ADC_Acquire = 109,              // 0x6D
    Cmd_ADC_GetData = 110,              // 0x6E
    Cmd_ADC_GetStatus = 111,            // 0x6F
    Cmd_ADC_SetReference = 112,         // 0x70
    Cmd_Status_GetBoardRevision = 113,  // 0x71
    Cmd_Status_EVMDetect = 114,         // 0x72
    Cmd_ADC_AcquireTriggered = 115,     // 0x73
    Cmd_Power_Notify = 116,             // 0x74
    Cmd_Digital_Capture = 117,          // 0x75
    Cmd_Digital_GetData = 118,          // 0x76
    Cmd_Digital_GetStatus = 119,        // 0x77
    Cmd_EasyScale_WriteAndRead = 120,   // 0x78
    Cmd_DisplayScale_Set = 121,         // 0x79
    Cmd_DisplayScale_WriteReg = 122,    // 0x7A
    Cmd_DisplayScale_ReadReg = 123,     // 0x7B
    Cmd_DisplayScale_WriteAndRead = 124,// 0x7C
    Cmd_Reserved_125 = 125,             // 0x7D **
    Cmd_Reserved_126 = 126,             // 0x7E **
    Cmd_Invalid = 127,                  // 0x7F
    Cmd_Stream_Start = 128,             // 0x80
    Cmd_Stream_Stop = 129,              // 0x81
    Cmd_Stream_Status = 130,            // 0x82
    Cmd_Stream_GetData = 131,           // 0x83
    Cmd_Stream_Execute = 132,           // 0x84 
    Cmd_SPI_StreamOut = 133,            // 0x85
    Cmd_SPI_StreamStop = 134,           // 0x86
    Cmd_SPI_WriteAndReadEx = 135,       // 0x87
    Cmd_Reserved_136 = 136,             // 0x88 **
    Cmd_Reserved_137 = 137,             // 0x89 **
    Cmd_Pegasus_Test = 138,             // 0x8A
    Cmd_Reserved_139 = 139,             // 0x8B **
    Cmd_Port_Setup = 140,               // 0x8C
    Cmd_Port_Read = 141,                // 0x8D
    Cmd_Port_Write = 142,               // 0x8E
    Cmd_Port_WritePulse = 143,          // 0x8F
    Cmd_END                             // 0x90
    
//  ** = UNUSED COMMAND
};

typedef enum
{
    Intr_No_Change = 0,
    Intr_Falling_Edge = 1,
    Intr_Rising_Edge = 2,
    Intr_Disabled = 3,
} Interrupt_PinFunction;

typedef enum GPIO_PinFunction
{
    GPIO_No_Change = 0,
    GPIO_Output = 1,
    GPIO_Input_No_Resistor = 2,
    GPIO_Input_Pull_Up = 3,
    GPIO_Input_Pull_Down = 4
} GPIO_PinFunction;

typedef enum GPIO_OutPinState
{
    GPIO_Out_No_Change = 0,
    GPIO_Out_Low = 1,
    GPIO_Out_High = 2,
};

typedef enum GPIO_InPinState
{
    GPIO_In_Low = 0,
    GPIO_In_High = 1,
};

typedef enum 
{
    SPI_Capture_On_Trailing_Edge = 0,
    SPI_Change_On_First_Edge = 0,       // deprecated
    SPI_Capture_On_Leading_Edge = 1,
    SPI_Change_On_Following_Edge = 1,   // deprecated
} SPI_ClockPhase;

typedef enum 
{
    SPI_Inactive_State_Low = 0,
    SPI_Inactive_State_High = 1,
} SPI_ClockPolarity;

typedef enum 
{
    SPI_LSB_First = 0,
    SPI_MSB_First = 1,
} SPI_BitDirection;

typedef enum 
{
    SPI__8_Bit = 0,
    SPI__7_Bit = 1,
} SPI_CharacterLength;

typedef enum 
{
    SPI_With_Every_Byte = 0,
    SPI_With_Every_Packet = 1,
    SPI_With_Every_Word = 2,
    SPI_No_CS = 3,
    SPI_MOSI_High_When_Idle = 4,
    SPI_Pulse_After_Packet = 255,
} SPI_ChipSelectType;

typedef enum 
{
    SPI_CS_Active_Low = 0,
    SPI_Low_To_High = 0,        // deprecated
    SPI_CS_Active_High = 1,
    SPI_High_To_Low = 1,        // deprecated
} SPI_ChipSelectPolarity;
#define SPI_LatchPolarity   SPI_ChipSelectPolarity

typedef enum 
{
    UART_9600_bps   = 0,
    UART_19200_bps  = 1,
    UART_38400_bps  = 2,
    UART_57600_bps  = 3,
    UART_115200_bps = 4,
    UART_230400_bps = 5,
    UART_300_bps    = 6,
    UART_320_bps    = 7,
    UART_600_bps    = 8,
    UART_1200_bps   = 9,
    UART_2400_bps   = 10,
    UART_4800_bps   = 11,
    UART_Disable    = 99,
} UART_BaudRate;

typedef enum 
{
    UART_None = 0,
    UART_Even = 1,
    UART_Odd = 2,
} UART_Parity;

typedef enum 
{
    UART_LSB_First = 0,
    UART_MSB_First = 1,
} UART_BitDirection;

typedef enum 
{
    UART_8_Bit = 0,
    UART_7_Bit = 1,
} UART_CharacterLength;

typedef enum 
{
    UART_One_Stop = 0,
    UART_Two_Stop = 1,
} UART_StopBits;

typedef enum 
{
    UART_Normal = 0,
    UART_ReceiverOff = 1,
    UART_RecvAfterXmit = 2,
} UART_Mode;

typedef enum
{
    OW_Disable = 0,
    OW_EnablePulseMode = 1,     // deprecated
    OW_Mode1 = 1,
    OW_Mode2 = 2,
    OW_Mode3 = 3,
} OneWire_Mode;

typedef enum
{
    OW_Channel_0 = 1,     // deprecated
    OW_Channel_1 = 2,     // deprecated
} OneWire_Channel;

typedef enum
{
    OW_FLAG_NONE = 0,
    OW_FLAG_INVERT = 1,
    OW_FLAG_NO_INIT = 2
} OneWire_Flags;

typedef enum 
{
    DACs_Normal = 0,
    DACs_PWD_1k = 1,
    DACs_PWD_100k = 2,
    DACs_PWD_HiZ = 3,
} DACs_OperatingMode;

typedef enum 
{
    DAC0 = 0,
    DAC1 = 1,
    DAC2 = 2,
} DACs_WhichDAC;

typedef enum 
{
    PWM_Stop = 0,
    PWM_Up = 1,
    PWM_Continuous = 2,
    PWM_UP_Down = 3
} PWM_ModeControl;

typedef enum 
{
    PWM_Div_1 = 0,
    PWM_Div_2 = 1,
    PWM_Div_4 = 2,
    PWM_Div_8 = 3
} PWM_InputDivider;

typedef enum 
{
    PWM_Input_1 = 0,
    PWM_Input_2 = 1,
    PWM_Input_3 = 2,
    PWM_Input_4 = 3,
    PWM_Input_5 = 4,
    PWM_Input_6 = 5,
    PWM_Input_7 = 6,
    PWM_Input_8 = 7,
} PWM_InputDividerEX;

typedef enum 
{
    PWM_Out_bit_value = 0,
    PWM_Out_Set = 1,
    PWM_Out_Toggle_Reset = 2,
    PWM_Out_Set_Reset = 3,
    PWM_Out_Toggle = 4,
    PWM_Out_Reset = 5,
    PWM_Out_Toggle_Set = 6,
    PWM_Out_Reset_Set = 7
} PWM_OutputMode;

typedef enum 
{
    PWM0 = 0,
    PWM1 = 1,
    PWM2 = 2,
    PWM3 = 3,
} PWM_WhichPWM;

typedef enum 
{
    Power_3V3_OFF = 0,
    Power_3V3_ON = 1
} Power_3V3;

typedef enum 
{
    Power_5V0_OFF = 0,
    Power_5V0_ON = 1
} Power_5V0;

typedef enum 
{
    Power_ADJ_OFF = 0,
    Power_ADJ_ON = 1
} Power_ADJ;

typedef enum 
{
    Status_3V3_Good = 0,
    Status_3V3_Fault = 1
} Status_3V3;

typedef enum 
{
    Status_5V0_Good = 0,
    Status_5V0_Fault = 1
} Status_5V0;

typedef enum 
{
    Status_ADJ_Good = 0,
    Status_ADJ_Fault = 1
} Status_ADJ;


typedef enum
{
    ADC_Disable	= 0,    // Disables the specified single channel.
    ADC_Enable	= 1, 	// Enables the specified single channel.
    ADC_EnableMask      // Enables/disables channels via a bit mask
}ADC_EnableMode;

typedef enum 
{
    ADC_No_Change = 0,
    ADC_Analog_In = 1
} ADC_PinFunction;

typedef enum 
{
    ADC_VREF_1V5 = 0,
    ADC_VREF_2V5 = 1,
    ADC_VREF_3V3 = 2,
    ADC_VREF_External = 3,
} ADC_VREF;

typedef enum 
{
    LED_OFF = 0,
    LED_ON = 1,
    LED_TOGGLE = 2
} LED;

typedef enum 
{
    LEDS_OFF = 0,
    LEDS_RED_ON = 1,
    LEDS_GREEN_ON = 2,
    LEDS_YELLOW_ON = 3,
    LEDS_TOGGLE = 4
} LEDS;

typedef enum
{
    LEDS_NON_BLINK  = 0,
    LEDS_BLINK_1    = 1,
    LEDS_BLINK_2    = 2,
    LEDS_BLINK_3    = 3,
    LEDS_BLINK_4    = 4,
    LEDS_BLINK_FAST = 5,
    LEDS_BLINK_ALT  = 6
} LED_BLINK;

typedef enum 
{
    Connected = 0,
    Disconnected = 1
} Connection;

typedef enum 
{
    Success = 0x00,
    Device_Not_Found = 0x01,
    Device_Not_Opened = 0x02,
    Device_Already_Opened = 0x03,
    Trasfer_Timeout = 0x04,
    Transfer_Failed = 0x05,
    Error = 0x06,
    Error_Too_Much_Data = 0x07,
    Unknown_Error = 0xFF
} OperationStatus;

typedef enum 
{
    ClockDiv1_1  = 0,
    ClockDiv1_2  = 1,
    ClockDiv1_4  = 2,
    ClockDiv1_8  = 3,
    ClockDiv1_16 = 4,
    ClockDiv1_32 = 5
} ClockDivider1;

typedef enum 
{
    ClockDiv2_1 = 0,
    ClockDiv2_2 = 1,
    ClockDiv2_4 = 2,
    ClockDiv2_8 = 3,
    ClockDiv2_16 = 4,
    ClockDiv2_32 = 5
} ClockDivider2;

typedef enum 
{
    FEC_Div0_1 = 0,
    FEC_Div0_2 = 1,
    FEC_Div0_4 = 2,
    FEC_Div0_8 = 3
} FEC_Divider0;

typedef enum 
{
    FEC_Div1_1 = 0,
    FEC_Div1_2 = 1,
    FEC_Div1_3 = 2,
    FEC_Div1_4 = 3,
    FEC_Div1_5 = 4,
    FEC_Div1_6 = 5,
    FEC_Div1_7 = 6,
    FEC_Div1_8 = 7
} FEC_Divider1;

typedef enum 
{
    FEC_Int_1ms   =  0,
    FEC_Int_2ms   =  1,
    FEC_Int_5ms   =  2,
    FEC_Int_10ms  =  3,        
    FEC_Int_20ms  =  4,
    FEC_Int_50ms  =  5,
    FEC_Int_100ms =  6,
    FEC_Int_200ms =  7,
    FEC_Int_500ms =  8,
    FEC_Int_1sec  =  9,
    FEC_Int_2sec  = 10,
    FEC_Int_5sec  = 11,
    FEC_Int_10sec = 12
} FEC_Interval;

typedef enum 
{
    FEC_No_Change = 0,
    FEC_EFC = 1
} FEC_Function;

typedef enum 
{
    FEC_Success = 0,
    FEC_Overflow = 1
} FEC_Flag;

typedef enum 
{
    INT0 = 0,
    INT1 = 1,
    INT2 = 2,
    INT3 = 3,
} Interrupt_Which_One;

typedef enum 
{
    ADC_EVENT_NONE = 0,       // ADC event trigger is disabled
    ADC_EVENT_I2C = 1,         // ADC triggers before any I2C command is executed
    ADC_EVENT_INVALID
} ADCTriggerType;

typedef enum 
{
    _W_10kbps  = 0,
    _W_50kbps  = 1,
    _W_100kbps = 2,
    _W_200kbps = 3,
    _W_400kbps = 4
} EasyScale_WriteSpeed;

typedef enum 
{
    _R_10kbps = 0,
    _R_50kbps = 1,
    _R_100kbps = 2,
    _R_136kbps = 3
} EasyScale_ReadSpeed;

typedef enum 
{
    ACK_Off = 0,
    ACK_On =  1
} EasyScale_WriteACK;

typedef enum 
{
    NACK = 0,
    ACK = 1 ,
    ACK_YET_NOT_VALID = 3
} EasyScale_Status_Received;

typedef enum 
{
    _Valid = 0,
    _NonValid = 1
} EasyScale_ReceivedDataStatus;

typedef enum
{
    _000_0mV = 0,
    _001_13mV = 1,
    _002_26mV = 2,
    _003_39mV = 3,
    _004_52mV = 4,
    _005_64mV = 5,
    _006_77mV = 6,
    _007_90mV = 7,
    _008_103mV = 8,
    _009_116mV = 9,
    _010_129mV = 10,
    _011_142mV = 11,
    _012_155mV = 12,
    _013_168mV = 13,
    _014_180mV = 14,
    _015_193mV = 15,
    _016_206mV = 16,
    _017_219mV = 17,
    _018_232mV = 18,
    _019_245mV = 19,
    _020_258mV = 20,
    _021_271mV = 21,
    _022_284mV = 22,
    _023_296mV = 23,
    _024_309mV = 24,
    _025_322mV = 25,
    _026_335mV = 26,
    _027_348mV = 27,
    _028_361mV = 28,
    _029_374mV = 29,
    _030_387mV = 30,
    _031_400mV = 31,
    _032_413mV = 32,
    _033_425mV = 33,
    _034_438mV = 34,
    _035_451mV = 35,
    _036_464mV = 36,
    _037_477mV = 37,
    _038_490mV = 38,
    _039_503mV = 39,
    _040_516mV = 40,
    _041_529mV = 41,
    _042_541mV = 42,
    _043_554mV = 43,
    _044_567mV = 44,
    _045_580mV = 45,
    _046_593mV = 46,
    _047_606mV = 47,
    _048_619mV = 48,
    _049_632mV = 49,
    _050_645mV = 50,
    _051_657mV = 51,
    _052_670mV = 52,
    _053_683mV = 53,
    _054_696mV = 54,
    _055_709mV = 55,
    _056_722mV = 56,
    _057_735mV = 57,
    _058_748mV = 58,
    _059_761mV = 59,
    _060_773mV = 60,
    _061_786mV = 61,
    _062_799mV = 62,
    _063_812mV = 63,
    _064_825mV = 64,
    _065_838mV = 65,
    _066_851mV = 66,
    _067_864mV = 67,
    _068_877mV = 68,
    _069_889mV = 69,
    _070_902mV = 70,
    _071_915mV = 71,
    _072_928mV = 72,
    _073_941mV = 73,
    _074_954mV = 74,
    _075_967mV = 75,
    _076_980mV = 76,
    _077_993mV = 77,
    _078_1005mV = 78,
    _079_1018mV = 79,
    _080_1031mV = 80,
    _081_1044mV = 81,
    _082_1057mV = 82,
    _083_1070mV = 83,
    _084_1083mV = 84,
    _085_1096mV = 85,
    _086_1109mV = 86,
    _087_1121mV = 87,
    _088_1134mV = 88,
    _089_1147mV = 89,
    _090_1160mV = 90,
    _091_1173mV = 91,
    _092_1186mV = 92,
    _093_1199mV = 93,
    _094_1212mV = 94,
    _095_1225mV = 95,
    _096_1238mV = 96,
    _097_1250mV = 97,
    _098_1263mV = 98,
    _099_1276mV = 99,
    _100_1289mV = 100,
    _101_1302mV = 101,
    _102_1315mV = 102,
    _103_1328mV = 103,
    _104_1341mV = 104,
    _105_1354mV = 105,
    _106_1366mV = 106,
    _107_1379mV = 107,
    _108_1392mV = 108,
    _109_1405mV = 109,
    _110_1418mV = 110,
    _111_1431mV = 111,
    _112_1444mV = 112,
    _113_1457mV = 113,
    _114_1470mV = 114,
    _115_1482mV = 115,
    _116_1495mV = 116,
    _117_1508mV = 117,
    _118_1521mV = 118,
    _119_1534mV = 119,
    _120_1547mV = 120,
    _121_1560mV = 121,
    _122_1573mV = 122,
    _123_1586mV = 123,
    _124_1598mV = 124,
    _125_1611mV = 125,
    _126_1624mV = 126,
    _127_1637mV = 127,
    _128_1650mV = 128,
    _129_1663mV = 129,
    _130_1676mV = 130,
    _131_1689mV = 131,
    _132_1702mV = 132,
    _133_1714mV = 133,
    _134_1727mV = 134,
    _135_1740mV = 135,
    _136_1753mV = 136,
    _137_1766mV = 137,
    _138_1779mV = 138,
    _139_1792mV = 139,
    _140_1805mV = 140,
    _141_1818mV = 141,
    _142_1830mV = 142,
    _143_1843mV = 143,
    _144_1856mV = 144,
    _145_1869mV = 145,
    _146_1882mV = 146,
    _147_1895mV = 147,
    _148_1908mV = 148,
    _149_1921mV = 149,
    _150_1934mV = 150,
    _151_1946mV = 151,
    _152_1959mV = 152,
    _153_1972mV = 153,
    _154_1985mV = 154,
    _155_1998mV = 155,
    _156_2011mV = 156,
    _157_2024mV = 157,
    _158_2037mV = 158,
    _159_2050mV = 159,
    _160_2063mV = 160,
    _161_2075mV = 161,
    _162_2088mV = 162,
    _163_2101mV = 163,
    _164_2114mV = 164,
    _165_2127mV = 165,
    _166_2140mV = 166,
    _167_2153mV = 167,
    _168_2166mV = 168,
    _169_2179mV = 169,
    _170_2191mV = 170,
    _171_2204mV = 171,
    _172_2217mV = 172,
    _173_2230mV = 173,
    _174_2243mV = 174,
    _175_2256mV = 175,
    _176_2269mV = 176,
    _177_2282mV = 177,
    _178_2295mV = 178,
    _179_2307mV = 179,
    _180_2320mV = 180,
    _181_2333mV = 181,
    _182_2346mV = 182,
    _183_2359mV = 183,
    _184_2372mV = 184,
    _185_2385mV = 185,
    _186_2398mV = 186,
    _187_2411mV = 187,
    _188_2423mV = 188,
    _189_2436mV = 189,
    _190_2449mV = 190,
    _191_2462mV = 191,
    _192_2475mV = 192,
    _193_2488mV = 193,
    _194_2501mV = 194,
    _195_2514mV = 195,
    _196_2527mV = 196,
    _197_2539mV = 197,
    _198_2552mV = 198,
    _199_2565mV = 199,
    _200_2578mV = 200,
    _201_2591mV = 201,
    _202_2604mV = 202,
    _203_2617mV = 203,
    _204_2630mV = 204,
    _205_2643mV = 205,
    _206_2655mV = 206,
    _207_2668mV = 207,
    _208_2681mV = 208,
    _209_2694mV = 209,
    _210_2707mV = 210,
    _211_2720mV = 211,
    _212_2733mV = 212,
    _213_2746mV = 213,
    _214_2759mV = 214,
    _215_2771mV = 215,
    _216_2784mV = 216,
    _217_2797mV = 217,
    _218_2810mV = 218,
    _219_2823mV = 219,
    _220_2836mV = 220,
    _221_2849mV = 221,
    _222_2862mV = 222,
    _223_2875mV = 223,
    _224_2888mV = 224,
    _225_2900mV = 225,
    _226_2913mV = 226,
    _227_2926mV = 227,
    _228_2939mV = 228,
    _229_2952mV = 229,
    _230_2965mV = 230,
    _231_2978mV = 231,
    _232_2991mV = 232,
    _233_3004mV = 233,
    _234_3016mV = 234,
    _235_3029mV = 235,
    _236_3042mV = 236,
    _237_3055mV = 237,
    _238_3068mV = 238,
    _239_3081mV = 239,
    _240_3094mV = 240,
    _241_3107mV = 241,
    _242_3120mV = 242,
    _243_3132mV = 243,
    _244_3145mV = 244,
    _245_3158mV = 245,
    _246_3171mV = 246,
    _247_3184mV = 247,
    _248_3197mV = 248,
    _249_3210mV = 249,
    _250_3223mV = 250,
    _251_3236mV = 251,
    _252_3248mV = 252,
    _253_3261mV = 253,
    _254_3274mV = 254,
    _255_3287mV = 255
} EasyScale_Threshold;

typedef enum
{
    SS_COMMAND,             // command being executed
    SS_IS_STREAMING,        // non-zero while streaming is active
    SS_COUNT,               // executions left
    SS_EXECUTED             // executions done
} STREAM_STATUS;

typedef enum
{
    SO_NORMAL = 0,          // command being executed
    SO_EXACT_COUNT = 1,     // return only exact number of bytes requested
} STREAM_OPTIONS;

typedef enum
{
    STREAM_IGNORE_TIMING_ERRORS  =  1,
    STREAM_IGNORE_BUFFER_OVERRUN =  2,
    STREAM_NO_PRE_EXECUTE        =  4,
    STREAM_USE_PRESET_DATA       =  8
} STREAMING_FLAGS;

////////////////////////////////////////////////////////////////////////////////
//                     USB2ANY Structure Type Definitions                     //
////////////////////////////////////////////////////////////////////////////////

typedef	struct
{
    U08   major_version;
    U08   minor_version;
    U08   major_revision;
    U08   minor_revision;
} U2A_VERSION;

typedef struct 
{
    Byte Command;
    Byte Signature;
    GPIO_InPinState GPIO0;
    GPIO_InPinState GPIO1;
    GPIO_InPinState GPIO2;
    GPIO_InPinState GPIO3;
    GPIO_InPinState GPIO4;
    GPIO_InPinState GPIO5;
    GPIO_InPinState GPIO6;
    GPIO_InPinState GPIO7;
    GPIO_InPinState GPIO8;
    GPIO_InPinState GPIO9;
    GPIO_InPinState GPIO10;
    GPIO_InPinState GPIO11;
    GPIO_InPinState GPIO12;
} GPIO_Packet_States;

typedef struct 
{
    Byte Command;
    Byte Signature;
    UInt16 Address;
    UInt16 Value;
} MSP430_Word;

typedef struct
{
    Byte Command;
    Byte Signature;
    UInt16 Address;
    Byte Value;
} MSP430_Byte;

typedef struct
{
    Byte Command;
    Byte Signature;
    Byte Firmware_VersionA;
    Byte Firmware_VersionB;
    Byte Firmware_VersionC;
    Byte Firmware_VersionD;
} FirmwareVersion;

typedef struct
{
    Byte Command;
    Byte Signature;
    Status_3V3 Status_3V3;
    Status_5V0 Status_5V0;
} Power_Status;

typedef struct
{
    Byte Command;
    Byte ReadBytes[MAX_PACKET_SIZE];
    Byte Signature;
} SPI_Packet_Characters;

typedef struct
{
    Byte Command;
    Byte ReadBytes[MAX_PACKET_SIZE];
    Byte Signature;
} UART_Packet_Characters;

typedef struct
{
    Byte Command;
    Byte Signature;
    UInt16 ADC0_DEC;
    UInt16 ADC1_DEC;
    UInt16 ADC2_DEC;
    UInt16 ADC3_DEC;
    float ADC0_FLT;
    float ADC1_FLT;
    float ADC2_FLT;
    float ADC3_FLT;
    ADC_VREF VREF;
} ADC_ConvertResult;

typedef struct
{
    Byte Command;
    UInt16 I2C_Address;
    Byte ReadBytes[MAX_PACKET_SIZE];
    Byte Signature;
} I2C_Packet_Bytes;

typedef struct
{
    Byte Command;
    Byte Signature;
    UInt16 FEC0_Count;
    FEC_Flag FEC0_Flag;
    float FEC0_Frequency;
    UInt16 FEC1_Count;
    FEC_Flag FEC1_Flag;
    float FEC1_Frequency;
    UInt16 FEC2_Count;
    FEC_Flag FEC2_Flag;
    float FEC2_Frequency;
    UInt16 FEC3_Count;
    FEC_Flag FEC3_Flag;
    float FEC3_Frequency;
} FEC_Packet_CountAndRead;

typedef struct
{
    Byte Command;
    Interrupt_Which_One Interrupt_Which_One;
    Byte Signature;
} Interrupt_Received_Packet;


////////////////////////////////////////////////////////////////////////////////
//                           Relaxed Definitions                              //
////////////////////////////////////////////////////////////////////////////////

