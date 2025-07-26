
#pragma once

//#include "USB2ANY_SDK.h"


// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the USB2ANY_SDK_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// USB2ANY_SDK_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.


#ifdef USB2ANY_SDK_EXPORTS
#define USB2ANY_SDK_API __declspec(dllexport)
#else
#define USB2ANY_SDK_API __declspec(dllimport)
#endif


#define BUILD_FIRMWARE_LOADER_MODE	1

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef void (__stdcall * U2A_CONNECT_CALLBACK)(BOOL bConnected, const char *szSerialNumber);
typedef void (__stdcall * U2A_INTERRUPT_CALLBACK)(DWORD channel, DWORD count);

// Exported function prototypes
#ifdef __cplusplus
extern "C"
{
#endif

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// The following API functions DO NOT require a U2A_HANDLE parameter. They may be called at any time.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

USB2ANY_SDK_API int __stdcall u2aFindControllers();
#if BUILD_FIRMWARE_LOADER_MODE
USB2ANY_SDK_API int __stdcall u2aFindControllersBSL(FCB_MODE mode=FCB_LOADER_DIALOG);
#else
USB2ANY_SDK_API int __stdcall u2aFindControllersBSL(BOOL bEnumOnly);
#endif
USB2ANY_SDK_API int __stdcall u2aGetSerialNumber(int index, char *SerialNumber);
USB2ANY_SDK_API U2A_HANDLE __stdcall u2aOpen(char *SerialNumber);
USB2ANY_SDK_API char * __stdcall u2aGetStatusText(int code, char *buffer, int bufsize); // DEPRECATED! Use u2aStatus_GetText
USB2ANY_SDK_API char * __stdcall u2aStatus_GetText(int code, char *buffer, int bufsize);
USB2ANY_SDK_API int __stdcall u2aSetReceiveTimeout(int milliseconds);
USB2ANY_SDK_API BOOL __stdcall u2aEnableDeviceDetect(BOOL enable, U2A_CONNECT_CALLBACK pfnCallback);
USB2ANY_SDK_API BOOL __stdcall u2aEnableAPIProfiling(BOOL enable);
USB2ANY_SDK_API void __stdcall u2aProfileTimestamp(LPSTR szMessage);
USB2ANY_SDK_API BOOL __stdcall u2aEnableDeviceDetectMsg(BOOL enable, HWND hwnd, int msgno);
USB2ANY_SDK_API int __stdcall u2aIsUSB2ANYConnected();
USB2ANY_SDK_API int __stdcall u2aStatus_IsUSB2ANYConnected();
USB2ANY_SDK_API int __stdcall u2aSetResponseMode(int mode);
USB2ANY_SDK_API int __stdcall u2aEnableDebugLogging(BOOL enable);
USB2ANY_SDK_API int __stdcall u2aEnablePacketLogging(BOOL enable);
USB2ANY_SDK_API BOOL __stdcall u2aSuppressDebugLogging(BOOL state);
USB2ANY_SDK_API BOOL __stdcall u2aSuppressSplash(BOOL suppress);
USB2ANY_SDK_API BOOL __stdcall u2aSuppressFirmwareCheck(BOOL suppress);
USB2ANY_SDK_API BOOL __stdcall u2aSuppressPopups(BOOL suppress);
USB2ANY_SDK_API void __stdcall u2aLogComment(LPSTR szMessage);
USB2ANY_SDK_API LPSTR __stdcall u2aGetSDKPath(LPSTR szPath);
USB2ANY_SDK_API LPSTR __stdcall u2aGetDebugLogPath(LPSTR szBuffer, int len);

//USB2ANY_SDK_API int __stdcall u2aStream_Start(U2A_HANDLE handle, UInt16 function_count, UInt32 frequency, UInt16 repetitions, UInt16 options);
//USB2ANY_SDK_API int __stdcall u2aStream_Stop(U2A_HANDLE handle);
//USB2ANY_SDK_API int __stdcall u2aStream_GetData(U2A_HANDLE handle, int nBytes, BYTE *pBuffer, UInt32 options);
//USB2ANY_SDK_API int __stdcall u2aStream_Status(U2A_HANDLE handle, int item);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Unicode versions of appropriate functions
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

USB2ANY_SDK_API int __stdcall u2aGetSerialNumberW(int index, WCHAR *wszSerialNumber);
USB2ANY_SDK_API U2A_HANDLE __stdcall u2aOpenW(WCHAR *wszSerialNumber);
USB2ANY_SDK_API WCHAR * __stdcall u2aStatus_GetTextW(int code, WCHAR *buffer, int bufsize);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// The following API functions DO require a U2A_HANDLE parameter. They MUST be called with a valid
// handle, obtained from a successful call to the u2aOpen() function.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

//
// Controller functions
//
USB2ANY_SDK_API int __stdcall u2aClose(U2A_HANDLE handle);
USB2ANY_SDK_API int __stdcall u2aReadResponse(U2A_HANDLE handle, BYTE *pBuffer, DWORD dwBufferSize);
USB2ANY_SDK_API int __stdcall u2aGetSerialNumberFromHandle(U2A_HANDLE handle, LPSTR szSerialNumber, int length);
USB2ANY_SDK_API int __stdcall GetSerialNumberFromHandle(U2A_HANDLE handle, LPSTR szSerialNumber, int length);   // deprecated!!!
USB2ANY_SDK_API int __stdcall u2aStatus_GetControllerType(U2A_HANDLE handle);
USB2ANY_SDK_API int __stdcall u2aSetAsyncIOCallback(U2A_HANDLE handle, void *Callback, int nFunctionID);

//
// SMBUS/PMBUS functions
//
USB2ANY_SDK_API int __stdcall u2aSMBUS_SendByte(U2A_HANDLE handle, Byte I2C_Address, Byte CommandCode, SMBUS_FLAGS Flags);
USB2ANY_SDK_API int __stdcall u2aSMBUS_WriteByte(U2A_HANDLE handle, Byte I2C_Address, Byte CommandCode, Byte Data, SMBUS_FLAGS Flags);
USB2ANY_SDK_API int __stdcall u2aSMBUS_WriteWord(U2A_HANDLE handle, Byte I2C_Address, Byte CommandCode, UInt16 Data, SMBUS_FLAGS Flags);
USB2ANY_SDK_API int __stdcall u2aSMBUS_WriteBlock(U2A_HANDLE handle, Byte I2C_Address, Byte CommandCode, Byte Length, Byte DataToWrite[], SMBUS_FLAGS Flags);
USB2ANY_SDK_API int __stdcall u2aSMBUS_ReceiveByte(U2A_HANDLE handle, Byte I2C_Address, SMBUS_FLAGS Flags);
USB2ANY_SDK_API int __stdcall u2aSMBUS_ReadByte(U2A_HANDLE handle, Byte I2C_Address, Byte CommandCode, SMBUS_FLAGS Flags);
USB2ANY_SDK_API int __stdcall u2aSMBUS_ReadWord(U2A_HANDLE handle, Byte I2C_Address, Byte CommandCode, SMBUS_FLAGS Flags);
USB2ANY_SDK_API int __stdcall u2aSMBUS_ReadBlock(U2A_HANDLE handle, Byte I2C_Address, Byte CommandCode, Byte Length, Byte DataRead[], SMBUS_FLAGS Flags);
//USB2ANY_SDK_API int __stdcall u2aSMBUS_ProcessCall(U2A_HANDLE handle, Byte I2C_Address, Byte CommandCode, Byte DataToWrite[], Byte DataRead[], SMBUS_FLAGS Flags);
//USB2ANY_SDK_API int __stdcall u2aSMBUS_BWBRProcessCall(U2A_HANDLE handle, Byte I2C_Address, Byte CommandCode, Byte Length, Byte DataToWrite[], Byte DataRead[], SMBUS_FLAGS Flags);
USB2ANY_SDK_API int __stdcall u2aSMBUS_Control(U2A_HANDLE handle, SMBUS_FLAGS Flags);
USB2ANY_SDK_API int __stdcall u2aSMBUS_GetEchoBuffer(U2A_HANDLE handle, int nBufferSize, Byte EchoBuffer[]);
USB2ANY_SDK_API int __stdcall u2aSMBUS_BlockWriteBlockRead(U2A_HANDLE handle, UInt16 I2C_Address, Byte CmdCode,
    Byte nWriteBytes, Byte *WriteData, Byte nReadBytes, Byte *ReadData, SMBUS_FLAGS Flags);

//
// I2C functions
//
USB2ANY_SDK_API int __stdcall u2aI2C_Control(U2A_HANDLE handle, I2C_Speed Speed, I2C_AddressLength AddressLength, I2C_PullUps PullUps);
USB2ANY_SDK_API int __stdcall u2aI2C_RegisterRead(U2A_HANDLE handle, UInt16 I2C_Address, Byte RegisterAddress);
USB2ANY_SDK_API int __stdcall u2aI2C_RegisterWrite(U2A_HANDLE handle, UInt16 I2C_Address, Byte RegisterAddress, Byte Value);
USB2ANY_SDK_API int __stdcall u2aI2C_MultiRegisterRead(U2A_HANDLE handle, UInt16 I2C_Address, Byte StartingRegisterAddress, Byte nBytes, Byte Data[]);
USB2ANY_SDK_API int __stdcall u2aI2C_MultiRegisterWrite(U2A_HANDLE handle, UInt16 I2C_Address, Byte StartingRegisterAddress, Byte nBytes, Byte Data[]);
USB2ANY_SDK_API int __stdcall u2aI2C_InternalRead(U2A_HANDLE handle, UInt16 I2C_Slave_Address, UInt16 InternalAddress, Byte nIntBytes, UInt16 nBytes, Byte Data[]);
USB2ANY_SDK_API int __stdcall u2aI2C_InternalWrite(U2A_HANDLE handle, UInt16 I2C_Slave_Address, UInt16 InternalAddress, Byte nIntBytes, UInt16 nBytes, Byte Data[]);
USB2ANY_SDK_API int __stdcall u2aI2C_RawRead(U2A_HANDLE handle, UInt16 I2C_Address, Byte nBytes, Byte Data[]);
USB2ANY_SDK_API int __stdcall u2aI2C_RawWrite(U2A_HANDLE handle, UInt16 I2C_Address, Byte nBytes, Byte Data[]);
USB2ANY_SDK_API int __stdcall u2aI2C_BlockWriteBlockRead(U2A_HANDLE handle, UInt16 I2C_Address, 
        Byte nWriteBytes, Byte *WriteData, Byte nReadBytes, Byte *ReadData);

//
// SPI functions
//
USB2ANY_SDK_API int __stdcall u2aSPI_Control(U2A_HANDLE handle, 
        SPI_ClockPhase _SPI_ClockPhase,
        SPI_ClockPolarity _SPI_ClockPolarity,
        SPI_BitDirection _SPI_BitDirection,
        SPI_CharacterLength _SPI_CharacterLength,
        SPI_ChipSelectType _SPI_LatchType,
        SPI_LatchPolarity _SPI_LatchPolarity,
        Byte _DividerHigh,
        Byte _DividerLow);

USB2ANY_SDK_API int __stdcall u2aSPI_WriteAndRead(U2A_HANDLE handle, Byte nBytes, Byte Data[]);
USB2ANY_SDK_API int __stdcall u2aSPI_WriteAndReadEx(U2A_HANDLE handle, Byte nCS, Byte nBytes, Byte Data[]);

//
// ADC, DAC, and PWM functions
//
USB2ANY_SDK_API int __stdcall u2aADC_Control(U2A_HANDLE handle, 
        ADC_PinFunction ADC0,
        ADC_PinFunction ADC1,
        ADC_PinFunction ADC2,
        ADC_PinFunction ADC3,
        ADC_VREF VREF);

USB2ANY_SDK_API int __stdcall u2aADC_ConvertAndRead(U2A_HANDLE handle, Byte nBytes, Byte Data[]);
USB2ANY_SDK_API int __stdcall u2aADC_Enable(U2A_HANDLE handle, int nChannel, int nMode);
USB2ANY_SDK_API int __stdcall u2aADC_Acquire(U2A_HANDLE handle, int nInterval, int nSamples);
USB2ANY_SDK_API int __stdcall u2aADC_AcquireTriggered(U2A_HANDLE handle, int nInterval, int nSamples, int nTrigger);
USB2ANY_SDK_API int __stdcall u2aADC_GetData(U2A_HANDLE handle, UInt16 nOffset, UInt16 nSamples, UInt16 *buffer);
USB2ANY_SDK_API int __stdcall u2aADC_GetStatus(U2A_HANDLE handle, BYTE *buffer);
USB2ANY_SDK_API int __stdcall u2aADC_SetReference(U2A_HANDLE handle, UInt16 refIndex);

//
// DAC functions
//

USB2ANY_SDK_API int __stdcall u2aDACs_Write(U2A_HANDLE handle, DACs_WhichDAC _DACs_WhichDAC, 
        DACs_OperatingMode _DACs_OperatingMode, Byte _Value);

USB2ANY_SDK_API int __stdcall u2aDAC_SetValue(U2A_HANDLE handle, int WhichDAC, Byte Value);
USB2ANY_SDK_API int __stdcall u2aDAC_SetVoltage(U2A_HANDLE handle, int WhichDAC, Byte Value); // deprecated version of u2aDAC_SetValue()

//
// PWM functions
//
USB2ANY_SDK_API int __stdcall u2aPWM_Control(U2A_HANDLE handle, 
        PWM_ModeControl _ModeControl,
        PWM_WhichPWM _PWM_WhichPWM,
        PWM_InputDivider _InputDivider,
        UInt16 _CompareRegister0,
        PWM_OutputMode _OutputMode1,
        UInt16 _CompareRegister1,
        PWM_InputDividerEX _InputDividerEX);

//
// EasyScale functions
//
USB2ANY_SDK_API int __stdcall u2aEasyScale_Control(U2A_HANDLE handle, UInt16 UpperThreshold, UInt16 LowerThreshold);
USB2ANY_SDK_API int __stdcall u2aEasyScale_Read(U2A_HANDLE handle, UInt16 ReadSpeed, UInt16 nBytes, UInt16 nBits, BYTE DataBuffer[]);
USB2ANY_SDK_API int __stdcall u2aEasyScale_Write(U2A_HANDLE handle, BYTE DataBytes[], UInt16 nBytes, BYTE DataBits[], UInt16 nBits, 
        UInt16 WriteSpeed, UInt16 WriteACK);
USB2ANY_SDK_API int __stdcall u2aEasyScale_WriteAndRead(U2A_HANDLE handle, UInt16 nBits, BYTE WriteData[ ], BYTE ReadData[], 
        BYTE WriteSpeed, BYTE WriteACK);

//
// DisplayScale functions
//
USB2ANY_SDK_API int __stdcall u2aDisplayScale_Setup(U2A_HANDLE handle, UInt16 options, UInt16 speed);
USB2ANY_SDK_API int __stdcall u2aDisplayScale_WriteReg(U2A_HANDLE handle, BYTE address, BYTE Data);
USB2ANY_SDK_API int __stdcall u2aDisplayScale_ReadReg(U2A_HANDLE handle, BYTE address);
USB2ANY_SDK_API int __stdcall u2aDisplayScale_WriteAndRead(U2A_HANDLE handle, UInt16 nBits, BYTE WriteData[], BYTE ReadData[]);

//
// OneWire functions
//
USB2ANY_SDK_API int __stdcall u2aOneWire_SetMode(U2A_HANDLE handle, UInt16 nMode);
USB2ANY_SDK_API int __stdcall u2aOneWire_PulseSetup(U2A_HANDLE handle, UInt16 timeSetup, UInt16 timeLow, UInt16 timeHigh, UInt16 timeStore, BOOL invert);
USB2ANY_SDK_API int __stdcall u2aOneWire_PulseWrite(U2A_HANDLE handle, Byte address, Byte pulses);
USB2ANY_SDK_API int __stdcall u2aOneWire_PulseWriteEx(U2A_HANDLE handle, Byte address, UInt16 pulses);
USB2ANY_SDK_API int __stdcall u2aOneWire_SetOutput(U2A_HANDLE handle, Byte state);

//
// UART functions
//
USB2ANY_SDK_API int __stdcall u2aUART_Control(U2A_HANDLE handle, 
        UINT _UART_BaudRate,
        UINT _UART_Parity,
        UINT _UART_BitDirection,
        UINT _UART_CharacterLength,
        UINT _UART_StopBits);

USB2ANY_SDK_API int __stdcall u2aUART_Write(U2A_HANDLE handle, Byte nBytes, Byte Data[]);
USB2ANY_SDK_API int __stdcall u2aUART_Read(U2A_HANDLE handle, Byte nBytes, Byte Data[]);
USB2ANY_SDK_API int __stdcall u2aUART_DisableReceiver(U2A_HANDLE handle);
USB2ANY_SDK_API int __stdcall u2aUART_GetRxCount(U2A_HANDLE handle);
USB2ANY_SDK_API int __stdcall u2aUART_SetMode(U2A_HANDLE handle, UINT mode);

//
// GPIO functions
//
USB2ANY_SDK_API int __stdcall u2aGPIO_WriteControl(U2A_HANDLE handle, 
        GPIO_PinFunction GPIO0,
        GPIO_PinFunction GPIO1,
        GPIO_PinFunction GPIO2,
        GPIO_PinFunction GPIO3,
        GPIO_PinFunction GPIO4,
        GPIO_PinFunction GPIO5,
        GPIO_PinFunction GPIO6,
        GPIO_PinFunction GPIO7,
        GPIO_PinFunction GPIO8,
        GPIO_PinFunction GPIO9,
        GPIO_PinFunction GPIO10,
        GPIO_PinFunction GPIO11,
        GPIO_PinFunction GPIO12);

USB2ANY_SDK_API int __stdcall u2aGPIO_WriteState(U2A_HANDLE handle,
        GPIO_OutPinState GPIO0,
        GPIO_OutPinState GPIO1,
        GPIO_OutPinState GPIO2,
        GPIO_OutPinState GPIO3,
        GPIO_OutPinState GPIO4,
        GPIO_OutPinState GPIO5,
        GPIO_OutPinState GPIO6,
        GPIO_OutPinState GPIO7,
        GPIO_OutPinState GPIO8,
        GPIO_OutPinState GPIO9,
        GPIO_OutPinState GPIO10,
        GPIO_OutPinState GPIO11,
        GPIO_OutPinState GPIO12);

USB2ANY_SDK_API int __stdcall u2aGPIO_ReadState(U2A_HANDLE handle, Byte nBytes, Byte Data[]);
USB2ANY_SDK_API int __stdcall u2aGPIO_SetPort (U2A_HANDLE handle, Byte GPIO_Port, Byte function);
USB2ANY_SDK_API int __stdcall u2aGPIO_WritePort (U2A_HANDLE handle, Byte GPIO_Port, Byte state);
USB2ANY_SDK_API int __stdcall u2aGPIO_ReadPort (U2A_HANDLE handle, Byte GPIO_Port);
USB2ANY_SDK_API int __stdcall u2aGPIO_SetCustomPort(U2A_HANDLE handle, Byte GPIO_Port, Byte mask, Byte function);
USB2ANY_SDK_API int __stdcall u2aGPIO_WriteCustomPort(U2A_HANDLE handle, Byte GPIO_Port, Byte mask, Byte state);
USB2ANY_SDK_API int __stdcall u2aGPIO_ReadCustomPort(U2A_HANDLE handle, Byte GPIO_Port, Byte mask);
USB2ANY_SDK_API int __stdcall u2aGPIO_WritePulse(U2A_HANDLE handle, Byte GPIO_Port, Byte polarity, UInt16 duration);

//
// Memory functions
//
USB2ANY_SDK_API int __stdcall u2aMSP430_ByteRead(U2A_HANDLE handle, UInt16 Address);
USB2ANY_SDK_API int __stdcall u2aMSP430_ByteWrite(U2A_HANDLE handle, UInt16 Address, Byte Value);
USB2ANY_SDK_API int __stdcall u2aMSP430_WordRead(U2A_HANDLE handle, UInt16 Address);
USB2ANY_SDK_API int __stdcall u2aMSP430_WordWrite(U2A_HANDLE handle, UInt16 Address, UInt16 Value);
USB2ANY_SDK_API int __stdcall u2aMSP430_MemoryRead(U2A_HANDLE handle, UInt16 Address, UInt16 nBytes, Byte *Data);
USB2ANY_SDK_API int __stdcall u2aMSP430_MemoryWrite(U2A_HANDLE handle, UInt16 Address, UInt16 nBytes, Byte *Data);

//
// FEC functions
//
USB2ANY_SDK_API int __stdcall u2aFEC_Control(U2A_HANDLE handle, int nInterval, int nEnable, 
            UInt16 nDivider0, UInt16 nDivider1);

USB2ANY_SDK_API int __stdcall u2aFEC_Configure(U2A_HANDLE handle, BOOL nEnable, UInt16 nInterval, 
            UInt16 nDivider);

USB2ANY_SDK_API int __stdcall u2aFEC_CountAndRead(U2A_HANDLE handle);
USB2ANY_SDK_API int __stdcall u2aFEC_GetResult(U2A_HANDLE handle);
USB2ANY_SDK_API int __stdcall u2aFEC_PurgeBuffer(U2A_HANDLE handle);


//
// Miscellaneous functions
//
USB2ANY_SDK_API int __stdcall u2aFirmwareVersion_Read(U2A_HANDLE handle, BYTE *szVersion, int bufsize);
USB2ANY_SDK_API int __stdcall u2aLED_WriteControl(U2A_HANDLE handle, LED _LED);
USB2ANY_SDK_API int __stdcall u2aLED_SetState(U2A_HANDLE handle, int LEDState, int BlinkCode);
USB2ANY_SDK_API int __stdcall u2aClock_Control (U2A_HANDLE handle, ClockDivider1 _ClockDivider1, ClockDivider2 _ClockDivider2);
USB2ANY_SDK_API int __stdcall u2aGetErrorList(U2A_HANDLE handle, int error_list[], int list_size);
USB2ANY_SDK_API int __stdcall u2aDigital_Capture(U2A_HANDLE handle, UInt32 frequency, UInt16 timeframe);
USB2ANY_SDK_API int __stdcall u2aDigital_GetData(U2A_HANDLE handle, UInt16 nBytes, BYTE *buffer);
USB2ANY_SDK_API int __stdcall u2aDigital_GetStatus(U2A_HANDLE handle, BYTE *buffer);
USB2ANY_SDK_API int __stdcall u2aPegasus_Test(U2A_HANDLE handle, BYTE address, BYTE value);


//
// Interrupt functions
//
USB2ANY_SDK_API int __stdcall u2aInterrupt_Control(U2A_HANDLE handle, 
                            Interrupt_PinFunction _Interrupt_PinFunction0,
                            Interrupt_PinFunction _Interrupt_PinFunction1,
                            Interrupt_PinFunction _Interrupt_PinFunction2,
                            Interrupt_PinFunction _Interrupt_PinFunction3);

USB2ANY_SDK_API int __stdcall u2aInterrupt_SetHandler(U2A_HANDLE handle, int channel, void *callback, HWND hwnd, int msgnum);
USB2ANY_SDK_API int __stdcall u2aInterrupt_CheckReceived(U2A_HANDLE handle, int Channel, BOOL Reset);

//
// Status functions
//
USB2ANY_SDK_API int __stdcall u2aStatus_GetErrorCode(U2A_HANDLE handle);
USB2ANY_SDK_API int __stdcall u2aStatus_GetBoardRevision(U2A_HANDLE handle);
USB2ANY_SDK_API int __stdcall u2aStatus_EVMDetect(U2A_HANDLE handle, int func, void *callback);


//
// Power functions
//
USB2ANY_SDK_API int __stdcall u2aPower_Notify(U2A_HANDLE handle, BOOL enable, void *callback);
USB2ANY_SDK_API int __stdcall u2aPower_SetVoltageRef(U2A_HANDLE handle, UInt16 Millivolts);
USB2ANY_SDK_API int __stdcall u2aPower_Enable(U2A_HANDLE handle, int Enable3V3, int Enable5v0, int EnableAdj);
USB2ANY_SDK_API int __stdcall u2aPower_WriteControl(U2A_HANDLE handle, Power_3V3 _Power_3V3, Power_5V0 _Power_5V0);
USB2ANY_SDK_API int __stdcall u2aPower_ReadStatus(U2A_HANDLE handle);

//
// RFFE functions
//
USB2ANY_SDK_API int __stdcall u2aRFFE_RegisterZeroWrite(U2A_HANDLE nHandle, Byte SlaveAddress, Byte Data);
USB2ANY_SDK_API int __stdcall u2aRFFE_RegisterWrite(int nHandle, Byte SlaveAddress, Byte RegisterAddress, Byte Data);
USB2ANY_SDK_API int __stdcall u2aRFFE_ExtRegisterWrite(int nHandle, Byte SlaveAddress, Byte RegisterAddress, Byte nLength, Byte Data[]);
USB2ANY_SDK_API int __stdcall u2aRFFE_ExtRegisterWriteLong(int nHandle, Byte SlaveAddress, UInt16 RegisterAddress, Byte nLength, Byte Data[]);
USB2ANY_SDK_API int __stdcall u2aRFFE_RegisterRead (int nHandle, Byte SlaveAddress, Byte RegisterAddress);
USB2ANY_SDK_API int __stdcall u2aRFFE_ExtRegisterRead (int nHandle, Byte SlaveAddress, Byte RegisterAddress, Byte nLength, Byte *Data);
USB2ANY_SDK_API int __stdcall u2aRFFE_ExtRegisterReadLong (int nHandle, Byte SlaveAddress, UInt16 RegisterAddress, Byte nLength, Byte Data[]);

//
// Streaming functions
//
USB2ANY_SDK_API int __stdcall u2aStream_Start(U2A_HANDLE handle, UInt16 function_count, UInt32 frequency, UInt16 repetitions, UInt16 options);
USB2ANY_SDK_API int __stdcall u2aStream_Stop(U2A_HANDLE handle);
USB2ANY_SDK_API int __stdcall u2aStream_Status(U2A_HANDLE handle, int item);
USB2ANY_SDK_API int __stdcall u2aStream_GetData(U2A_HANDLE handle, int nBytes, BYTE *pBuffer, UInt32 options);
USB2ANY_SDK_API int __stdcall u2aStream_Execute(U2A_HANDLE handle);

//
// Port access functions
//
USB2ANY_SDK_API int __stdcall u2aPort_Setup(U2A_HANDLE handle, BYTE port_number, BYTE *settings);
USB2ANY_SDK_API int __stdcall u2aPort_Write(U2A_HANDLE handle, BYTE port_number, BYTE value);
USB2ANY_SDK_API int __stdcall u2aPort_Read(int nHandle, Byte port_number);
USB2ANY_SDK_API int __stdcall u2aPort_WritePulse(U2A_HANDLE handle, BYTE port_number, BYTE mask, WORD duration);

#ifdef __cplusplus
}
#endif
