//-----------------------------------------------------------------------------
//  Basler pylon SDK
//  Copyright (c) 2023-2025 Basler AG
//  http://www.baslerweb.com
//-----------------------------------------------------------------------------

/*!
\file
\brief A parameter class containing all parameters as members that are available for ruL2048-19gm

Sources:
ruL2048-19gm 106152-01;U;ruL2048_19gm;V2.0-4
*/

//-----------------------------------------------------------------------------
//  This file is generated automatically
//  Do not modify!
//-----------------------------------------------------------------------------

#ifndef BASLER_PYLON_BASLERCAMERACAMERAPARAMS_H
#define BASLER_PYLON_BASLERCAMERACAMERAPARAMS_H

#pragma once

// common parameter types
#include <pylon/ParameterIncludes.h>
#include <pylon/EnumParameterT.h>

#ifdef _MSC_VER
#pragma warning( push )
#pragma warning( disable : 4250 ) // warning C4250: 'Pylon::CXYZParameter': inherits 'Pylon::CParameter::Pylon::CParameter::ZYX' via dominance
#endif

//! The namespace containing the a control interface and related enumeration types for ruL2048-19gm
namespace Pylon
{
namespace BaslerCameraCameraParams_Params
{
    //**************************************************************************************************
    // Enumerations
    //**************************************************************************************************
    //! Valid values for AcquisitionMode
    enum AcquisitionModeEnums
    {
        AcquisitionMode_Continuous,  //!< Sets the acquisition mode to continuous - Applies to: ruL2048-19gm
        AcquisitionMode_SingleFrame  //!< Sets the acquisition mode to single frame - Applies to: ruL2048-19gm
    };

    //! Valid values for AcquisitionStatusSelector
    enum AcquisitionStatusSelectorEnums
    {
        AcquisitionStatusSelector_AcquisitionActive,  //!< Device is currently doing an acquisition of one or many frames - Applies to: ruL2048-19gm
        AcquisitionStatusSelector_AcquisitionTransfer,  //!< Device is currently transferring an acquisition of one or many frames - Applies to: ruL2048-19gm
        AcquisitionStatusSelector_AcquisitionTriggerWait,  //!< Device is currently waiting for a trigger for the capture of one or many frames - Applies to: ruL2048-19gm
        AcquisitionStatusSelector_ExposureActive,  //!< Device is doing the exposure of a frame - Applies to: ruL2048-19gm
        AcquisitionStatusSelector_FrameActive,  //!< Device is currently doing the capture of a frame - Applies to: ruL2048-19gm
        AcquisitionStatusSelector_FrameTransfer,  //!< Device is currently transferring a frame - Applies to: ruL2048-19gm
        AcquisitionStatusSelector_FrameTriggerWait  //!< Device is currently waiting for a Frame trigger - Applies to: ruL2048-19gm
    };

    //! Valid values for AutoFunctionAOISelector
    enum AutoFunctionAOISelectorEnums
    {
        AutoFunctionAOISelector_Todo  //!< TODO - Applies to: ruL2048-19gm
    };

    //! Valid values for AutoFunctionProfile
    enum AutoFunctionProfileEnums
    {
        AutoFunctionProfile_Todo  //!< TODO - Applies to: ruL2048-19gm
    };

    //! Valid values for BalanceRatioSelector
    enum BalanceRatioSelectorEnums
    {
        BalanceRatioSelector_Todo  //!< TODO - Applies to: ruL2048-19gm
    };

    //! Valid values for BalanceWhiteAuto
    enum BalanceWhiteAutoEnums
    {
        BalanceWhiteAuto_Todo  //!< TODO - Applies to: ruL2048-19gm
    };

    //! Valid values for BlackLevelSelector
    enum BlackLevelSelectorEnums
    {
        BlackLevelSelector_All,  //!< Selects all black level controls for adjustment - Applies to: ruL2048-19gm
        BlackLevelSelector_Tap1,  //!< Selects the tap 1 black level control for adjustment - Applies to: ruL2048-19gm
        BlackLevelSelector_Tap2  //!< Selects the tap 2 black level control for adjustment - Applies to: ruL2048-19gm
    };

    //! Valid values for ChunkSelector
    enum ChunkSelectorEnums
    {
        ChunkSelector_Todo  //!< TODO - Applies to: ruL2048-19gm
    };

    //! Valid values for CounterEventSource
    enum CounterEventSourceEnums
    {
        CounterEventSource_FrameStart  //!< Counts the number of Frame Start - Applies to: ruL2048-19gm
    };

    //! Valid values for CounterResetSource
    enum CounterResetSourceEnums
    {
        CounterResetSource_Line1,  //!< Selects line 1 as the source for counter reset - Applies to: ruL2048-19gm
        CounterResetSource_Line2,  //!< Selects line 2 as the source for counter reset - Applies to: ruL2048-19gm
        CounterResetSource_Line3,  //!< Selects line 3 as the source for counter reset - Applies to: ruL2048-19gm
        CounterResetSource_Off,  //!< Disables counter reset - Applies to: ruL2048-19gm
        CounterResetSource_Software  //!< Selects software command as the source for counter reset - Applies to: ruL2048-19gm
    };

    //! Valid values for CounterSelector
    enum CounterSelectorEnums
    {
        CounterSelector_Counter2  //!< Selects counter 2 for configuration - Applies to: ruL2048-19gm
    };

    //! Valid values for DefaultSetSelector
    enum DefaultSetSelectorEnums
    {
        DefaultSetSelector_AutoFunctions,  //!< Factory set using auto functions - Applies to: ruL2048-19gm
        DefaultSetSelector_HighGain,  //!< High gain factory set - Applies to: ruL2048-19gm
        DefaultSetSelector_Standard  //!< Standard factory set - Applies to: ruL2048-19gm
    };

    //! Valid values for DeviceScanType
    enum DeviceScanTypeEnums
    {
        DeviceScanType_Areascan,  //!< Indicates that the device has an area scan type of sensor - Applies to: ruL2048-19gm
        DeviceScanType_Linescan  //!< Indicates that the device has an Line scan type of sensor - Applies to: ruL2048-19gm
    };

    //! Valid values for EventNotification
    enum EventNotificationEnums
    {
        EventNotification_GenICamEvent,  //!< Sets the event notification type to GenICam event - Applies to: ruL2048-19gm
        EventNotification_Off  //!< Sets event notification to off - Applies to: ruL2048-19gm
    };

    //! Valid values for EventSelector
    enum EventSelectorEnums
    {
        EventSelector_AcquisitionStartOvertrigger,  //!< Selects the acquisition start overtrigger event for enabling - Applies to: ruL2048-19gm
        EventSelector_EventOverrun,  //!< Selects the event overrun event for enabling - Applies to: ruL2048-19gm
        EventSelector_FrameStartOvertrigger,  //!< Selects the frame start overtrigger event for enabling - Applies to: ruL2048-19gm
        EventSelector_FrameTimeout,  //!< Selects the frame timeout event for enabling - Applies to: ruL2048-19gm
        EventSelector_LineStartOvertrigger  //!< Selects the line start overtrigger event for enabling - Applies to: ruL2048-19gm
    };

    //! Valid values for ExpertFeatureAccessSelector
    enum ExpertFeatureAccessSelectorEnums
    {
        ExpertFeatureAccessSelector_ExpertFeature1  //!< Selects the Expert Feature 1 for configuration - Applies to: ruL2048-19gm
    };

    //! Valid values for ExposureAuto
    enum ExposureAutoEnums
    {
        ExposureAuto_Todo  //!< TODO - Applies to: ruL2048-19gm
    };

    //! Valid values for ExposureMode
    enum ExposureModeEnums
    {
        ExposureMode_Timed,  //!< Sets the exposure mode to timed - Applies to: ruL2048-19gm
        ExposureMode_TriggerWidth  //!< Sets the exposure mode to trigger width - Applies to: ruL2048-19gm
    };

    //! Valid values for FileOpenMode
    enum FileOpenModeEnums
    {
        FileOpenMode_Read,  //!< Selects read-only open mode - Applies to: ruL2048-19gm
        FileOpenMode_Write  //!< Selects write-only open mode - Applies to: ruL2048-19gm
    };

    //! Valid values for FileOperationSelector
    enum FileOperationSelectorEnums
    {
        FileOperationSelector_Close,  //!< Closes the file selected by FileSelector - Applies to: ruL2048-19gm
        FileOperationSelector_Open,  //!< Opens the file selected by FileSelector - Applies to: ruL2048-19gm
        FileOperationSelector_Read,  //!< Reads data from the selected file - Applies to: ruL2048-19gm
        FileOperationSelector_Write  //!< Writes data to the selected file - Applies to: ruL2048-19gm
    };

    //! Valid values for FileOperationStatus
    enum FileOperationStatusEnums
    {
        FileOperationStatus_Failure,  //!< Failing file operation - Applies to: ruL2048-19gm
        FileOperationStatus_Success  //!< Successful file operation - Applies to: ruL2048-19gm
    };

    //! Valid values for FileSelector
    enum FileSelectorEnums
    {
        FileSelector_UserGainShading1,  //!< Selects the file 'User Gain Shading 1' - Applies to: ruL2048-19gm
        FileSelector_UserGainShading2,  //!< Selects the file 'User Gain Shading 2' - Applies to: ruL2048-19gm
        FileSelector_UserSet1,  //!< Selects the file 'User Set 1' - Applies to: ruL2048-19gm
        FileSelector_UserSet2,  //!< Selects the file 'User Set 2' - Applies to: ruL2048-19gm
        FileSelector_UserSet3  //!< Selects the file 'User Set 3' - Applies to: ruL2048-19gm
    };

    //! Valid values for FrequencyConverterInputSource
    enum FrequencyConverterInputSourceEnums
    {
        FrequencyConverterInputSource_Line1,  //!< Selects line 1 as the input source - Applies to: ruL2048-19gm
        FrequencyConverterInputSource_Line2,  //!< Selects line 2 as the input source - Applies to: ruL2048-19gm
        FrequencyConverterInputSource_Line3,  //!< Selects line 3 as the input source - Applies to: ruL2048-19gm
        FrequencyConverterInputSource_ShaftEncoderModuleOut  //!< Selects the output of the shaft encoder module as the input source - Applies to: ruL2048-19gm
    };

    //! Valid values for FrequencyConverterSignalAlignment
    enum FrequencyConverterSignalAlignmentEnums
    {
        FrequencyConverterSignalAlignment_FallingEdge,  //!< For the falling edge of each received signal a falling edge of a generated signal is provided - Applies to: ruL2048-19gm
        FrequencyConverterSignalAlignment_RisingEdge  //!< For the rising edge of each received signal a rising edge of a generated signal is provided - Applies to: ruL2048-19gm
    };

    //! Valid values for GainAuto
    enum GainAutoEnums
    {
        GainAuto_Todo  //!< TODO - Applies to: ruL2048-19gm
    };

    //! Valid values for GainSelector
    enum GainSelectorEnums
    {
        GainSelector_All,  //!< Selects all gain controls for adjustment - Applies to: ruL2048-19gm
        GainSelector_Tap1,  //!< Selects the tap 1 gain control for adjustment - Applies to: ruL2048-19gm
        GainSelector_Tap2  //!< Selects the tap 2 gain control for adjustment - Applies to: ruL2048-19gm
    };

    //! Valid values for GevCCP
    enum GevCCPEnums
    {
        GevCCP_Control,  //!< Sets the control channel privilege feature to control - Applies to: ruL2048-19gm
        GevCCP_Exclusive,  //!< Sets the control channel privilege feature to exclusive - Applies to: ruL2048-19gm
        GevCCP_ExclusiveControl  //!< Sets the control channel privilege feature to exclusive control - Applies to: ruL2048-19gm
    };

    //! Valid values for GevInterfaceSelector
    enum GevInterfaceSelectorEnums
    {
        GevInterfaceSelector_NetworkInterface0  //!< Selects network interface 0 for configuration - Applies to: ruL2048-19gm
    };

    //! Valid values for GevStreamChannelSelector
    enum GevStreamChannelSelectorEnums
    {
        GevStreamChannelSelector_StreamChannel0  //!< Selects stream channel 0 for configuration - Applies to: ruL2048-19gm
    };

    //! Valid values for LUTSelector
    enum LUTSelectorEnums
    {
        LUTSelector_Luminance  //!< Selects the luminance LUT for configuration - Applies to: ruL2048-19gm
    };

    //! Valid values for LineFormat
    enum LineFormatEnums
    {
        LineFormat_RS422  //!< Sets the electrical configuration of the selected line to RS-422 - Applies to: ruL2048-19gm
    };

    //! Valid values for LineMode
    enum LineModeEnums
    {
        LineMode_Output  //!< Sets the mode for the selected line to output - Applies to: ruL2048-19gm
    };

    //! Valid values for LineSelector
    enum LineSelectorEnums
    {
        LineSelector_Line1,  //!< Selects line 1 for configuration - Applies to: ruL2048-19gm
        LineSelector_Line2,  //!< Selects line 2 for configuration - Applies to: ruL2048-19gm
        LineSelector_Line3,  //!< Selects line 3 for configuration - Applies to: ruL2048-19gm
        LineSelector_Out1,  //!< Selects output line 1 for configuration - Applies to: ruL2048-19gm
        LineSelector_Out2  //!< Selects output line 2 for configuration - Applies to: ruL2048-19gm
    };

    //! Valid values for LineSource
    enum LineSourceEnums
    {
        LineSource_AcquisitionTriggerWait,  //!< Associates the Acquisition Trigger Wait status with the selected output line - Applies to: ruL2048-19gm
        LineSource_ExposureActive,  //!< Sets the source signal for the selected output line to exposure active - Applies to: ruL2048-19gm
        LineSource_FrameTriggerWait,  //!< Associates the Frame Trigger Wait status with the selected output line - Applies to: ruL2048-19gm
        LineSource_FrequencyConverter,  //!< Associates the output of the frequency converter module with the selected output line - Applies to: ruL2048-19gm
        LineSource_LineTriggerWait,  //!< Associates the Line Trigger Wait status with the selected output line - Applies to: ruL2048-19gm
        LineSource_Off,  //!< Sets the source signal for the selected output line to off - Applies to: ruL2048-19gm
        LineSource_ShaftEncoderModuleOut,  //!< Associates the output of the shaft encoder module with the selected output line - Applies to: ruL2048-19gm
        LineSource_UserOutput  //!< Applies to: ruL2048-19gm
    };

    //! Valid values for ParameterSelector
    enum ParameterSelectorEnums
    {
        ParameterSelector_Gain  //!< Selects the gain limits for configuration - Applies to: ruL2048-19gm
    };

    //! Valid values for PixelColorFilter
    enum PixelColorFilterEnums
    {
        PixelColorFilter_None  //!< Indicates that no Bayer filter is present on the camera - Applies to: ruL2048-19gm
    };

    //! Valid values for PixelFormat
    enum PixelFormatEnums
    {
        PixelFormat_BGR10Packed,  //!< Sets the pixel format to BGR 10 Packed - Applies to: ruL2048-19gm
        PixelFormat_BGR12Packed,  //!< Sets the pixel format to BGR 12 Packed - Applies to: ruL2048-19gm
        PixelFormat_BGR8Packed,  //!< Sets the pixel format to BGR 8 Packed - Applies to: ruL2048-19gm
        PixelFormat_BGRA8Packed,  //!< Sets the pixel format to BGRA 8 Packed - Applies to: ruL2048-19gm
        PixelFormat_BayerBG10,  //!< Sets the pixel format to Bayer BG 10 - Applies to: ruL2048-19gm
        PixelFormat_BayerBG12,  //!< Sets the pixel format to Bayer BG 12 - Applies to: ruL2048-19gm
        PixelFormat_BayerBG12Packed,  //!< Sets the pixel format to Bayer BG 12 Packed - Applies to: ruL2048-19gm
        PixelFormat_BayerBG16,  //!< Sets the pixel format to Bayer BG 16 - Applies to: ruL2048-19gm
        PixelFormat_BayerBG8,  //!< Sets the pixel format to Bayer BG 8 - Applies to: ruL2048-19gm
        PixelFormat_BayerGB10,  //!< Sets the pixel format to Bayer GB 10 - Applies to: ruL2048-19gm
        PixelFormat_BayerGB12,  //!< Sets the pixel format to Bayer GB 12 - Applies to: ruL2048-19gm
        PixelFormat_BayerGB12Packed,  //!< Sets the pixel format to Bayer GB 12 Packed - Applies to: ruL2048-19gm
        PixelFormat_BayerGB16,  //!< Sets the pixel format to Bayer GB 16 - Applies to: ruL2048-19gm
        PixelFormat_BayerGB8,  //!< Sets the pixel format to Bayer GB 8 - Applies to: ruL2048-19gm
        PixelFormat_BayerGR10,  //!< Sets the pixel format to Bayer GR 10 - Applies to: ruL2048-19gm
        PixelFormat_BayerGR12,  //!< Sets the pixel format to Bayer GR 12 - Applies to: ruL2048-19gm
        PixelFormat_BayerGR12Packed,  //!< Sets the pixel format to Bayer GR 12 Packed - Applies to: ruL2048-19gm
        PixelFormat_BayerGR16,  //!< Sets the pixel format to Bayer GR 16 - Applies to: ruL2048-19gm
        PixelFormat_BayerGR8,  //!< Sets the pixel format to Bayer GR 8 - Applies to: ruL2048-19gm
        PixelFormat_BayerRG10,  //!< Sets the pixel format to Bayer RG 10 - Applies to: ruL2048-19gm
        PixelFormat_BayerRG12,  //!< Sets the pixel format to Bayer RG 12 - Applies to: ruL2048-19gm
        PixelFormat_BayerRG12Packed,  //!< Sets the pixel format to Bayer RG 12 Packed - Applies to: ruL2048-19gm
        PixelFormat_BayerRG16,  //!< Sets the pixel format to Bayer RG 16 - Applies to: ruL2048-19gm
        PixelFormat_BayerRG8,  //!< Sets the pixel format to Bayer RG 8 - Applies to: ruL2048-19gm
        PixelFormat_Mono10,  //!< Sets the pixel format to Mono 10 - Applies to: ruL2048-19gm
        PixelFormat_Mono10Packed,  //!< Sets the pixel format to Mono 10 Packed - Applies to: ruL2048-19gm
        PixelFormat_Mono12,  //!< Sets the pixel format to Mono 12 - Applies to: ruL2048-19gm
        PixelFormat_Mono12Packed,  //!< Sets the pixel format to Mono 12 Packed - Applies to: ruL2048-19gm
        PixelFormat_Mono16,  //!< Sets the pixel format to Mono 16 - Applies to: ruL2048-19gm
        PixelFormat_Mono8,  //!< Sets the pixel format to Mono 8 - Applies to: ruL2048-19gm
        PixelFormat_Mono8Signed,  //!< Sets the pixel format to Mono 8 Signed - Applies to: ruL2048-19gm
        PixelFormat_RGB10Packed,  //!< Sets the pixel format to RGB 10 Packed - Applies to: ruL2048-19gm
        PixelFormat_RGB10Planar,  //!< Sets the pixel format to RGB 10 Planar - Applies to: ruL2048-19gm
        PixelFormat_RGB10V1Packed,  //!< Sets the pixel format to RGB 10V1 Packed - Applies to: ruL2048-19gm
        PixelFormat_RGB10V2Packed,  //!< Sets the pixel format to RGB 10V2 Packed - Applies to: ruL2048-19gm
        PixelFormat_RGB12Packed,  //!< Sets the pixel format to RGB 12 Packed - Applies to: ruL2048-19gm
        PixelFormat_RGB12Planar,  //!< Sets the pixel format to RGB 12 Planar - Applies to: ruL2048-19gm
        PixelFormat_RGB12V1Packed,  //!< Sets the pixel format to RGB 12 Packed  - Applies to: ruL2048-19gm
        PixelFormat_RGB16Planar,  //!< Sets the pixel format to RGB 16 Planar - Applies to: ruL2048-19gm
        PixelFormat_RGB8Packed,  //!< Sets the pixel format to RGB 8 Packed - Applies to: ruL2048-19gm
        PixelFormat_RGB8Planar,  //!< Sets the pixel format to RGB 8 Planar - Applies to: ruL2048-19gm
        PixelFormat_RGBA8Packed,  //!< Sets the pixel format to RGBA 8 Packed - Applies to: ruL2048-19gm
        PixelFormat_YUV411Packed,  //!< Sets the pixel format to YUV 411 Packed - Applies to: ruL2048-19gm
        PixelFormat_YUV422Packed,  //!< Sets the pixel format to YUV 422 Packed - Applies to: ruL2048-19gm
        PixelFormat_YUV422_YUYV_Packed,  //!< Sets the pixel format to YUV 422 (YUYV) Packed - Applies to: ruL2048-19gm
        PixelFormat_YUV444Packed  //!< Sets the pixel format to YUV 444 Packed - Applies to: ruL2048-19gm
    };

    //! Valid values for PixelSize
    enum PixelSizeEnums
    {
        PixelSize_Bpp12,  //!< Indicates that the depth of the pixel values in the acquired images is 12 bits per pixel - Applies to: ruL2048-19gm
        PixelSize_Bpp16,  //!< Indicates that the depth of the pixel values in the acquired images is 16 bits per pixel - Applies to: ruL2048-19gm
        PixelSize_Bpp8  //!< Indicates that the depth of the pixel values in the acquired images is 8 bits per pixel - Applies to: ruL2048-19gm
    };

    //! Valid values for ShadingSelector
    enum ShadingSelectorEnums
    {
        ShadingSelector_GainShading  //!< Selects gain shading correction - Applies to: ruL2048-19gm
    };

    //! Valid values for ShadingSetDefaultSelector
    enum ShadingSetDefaultSelectorEnums
    {
        ShadingSetDefaultSelector_DefaultShadingSet,  //!< Selects the default shading set as the bootup shading set - Applies to: ruL2048-19gm
        ShadingSetDefaultSelector_UserShadingSet1,  //!< Selects the User Shading Set 1 as the bootup shading set - Applies to: ruL2048-19gm
        ShadingSetDefaultSelector_UserShadingSet2  //!< Selects the User Shading Set 2 as the bootup shading set - Applies to: ruL2048-19gm
    };

    //! Valid values for ShadingSetSelector
    enum ShadingSetSelectorEnums
    {
        ShadingSetSelector_DefaultShadingSet,  //!< Selects the default shading set for activation by the activate command - Applies to: ruL2048-19gm
        ShadingSetSelector_UserShadingSet1,  //!< Selects the User shading Set 1 for activation by the activate command - Applies to: ruL2048-19gm
        ShadingSetSelector_UserShadingSet2  //!< Selects the User shading Set 2 for activation by the activate command - Applies to: ruL2048-19gm
    };

    //! Valid values for ShadingStatus
    enum ShadingStatusEnums
    {
        ShadingStatus_ActivateError,  //!< Indicates that the selected shading set could not be loaded - Applies to: ruL2048-19gm
        ShadingStatus_CreateError,  //!< Indicates that a problem related to creating a shading set occurred - Applies to: ruL2048-19gm
        ShadingStatus_NoError,  //!< Indicates that the latest operation related to shading correction was successful - Applies to: ruL2048-19gm
        ShadingStatus_StartupSetError  //!< Indicates that a problem related to the startup shading set occurred - Applies to: ruL2048-19gm
    };

    //! Valid values for ShaftEncoderModuleCounterMode
    enum ShaftEncoderModuleCounterModeEnums
    {
        ShaftEncoderModuleCounterMode_FollowDirection,  //!< Tick counter increments for forward ticks and decrements for reverse ticks - Applies to: ruL2048-19gm
        ShaftEncoderModuleCounterMode_IgnoreDirection  //!< Tick counter increments for forward ticks and for reverse ticks - Applies to: ruL2048-19gm
    };

    //! Valid values for ShaftEncoderModuleLineSelector
    enum ShaftEncoderModuleLineSelectorEnums
    {
        ShaftEncoderModuleLineSelector_PhaseA,  //!< Selects phase A of the shaft encoder - Applies to: ruL2048-19gm
        ShaftEncoderModuleLineSelector_PhaseB  //!< Selects phase B of the shaft encoder - Applies to: ruL2048-19gm
    };

    //! Valid values for ShaftEncoderModuleLineSource
    enum ShaftEncoderModuleLineSourceEnums
    {
        ShaftEncoderModuleLineSource_Line1,  //!< Selects input line 1 as signal source for the shaft encoder module - Applies to: ruL2048-19gm
        ShaftEncoderModuleLineSource_Line2,  //!< Selects input line 2 as signal source for the shaft encoder module - Applies to: ruL2048-19gm
        ShaftEncoderModuleLineSource_Line3  //!< Selects input line 3 as signal source for the shaft encoder module - Applies to: ruL2048-19gm
    };

    //! Valid values for ShaftEncoderModuleMode
    enum ShaftEncoderModuleModeEnums
    {
        ShaftEncoderModuleMode_AnyDirection,  //!< Output of trigger signals for forward and reverse ticks provided the reverse counter is not counting - Applies to: ruL2048-19gm
        ShaftEncoderModuleMode_ForwardOnly  //!< Output of trigger signals for forward ticks only provided the reverse counter is not decrementing - Applies to: ruL2048-19gm
    };

    //! Valid values for TemperatureSelector
    enum TemperatureSelectorEnums
    {
        TemperatureSelector_Sensorboard  //!< Temperature on sensor board - Applies to: ruL2048-19gm
    };

    //! Valid values for TestImageSelector
    enum TestImageSelectorEnums
    {
        TestImageSelector_Off,  //!< Sets the camera's test image generation capability to disabled - Applies to: ruL2048-19gm
        TestImageSelector_Testimage1,  //!< Sets the camera to generate and transmit test images with a test image 1 pattern - Applies to: ruL2048-19gm
        TestImageSelector_Testimage2,  //!< Sets the camera to generate and transmit test images with a test image 2 pattern - Applies to: ruL2048-19gm
        TestImageSelector_Testimage3,  //!< Sets the camera to generate and transmit test images with a test image 3 pattern - Applies to: ruL2048-19gm
        TestImageSelector_Testimage4,  //!< Sets the camera to generate and transmit test images with a test image 4 pattern - Applies to: ruL2048-19gm
        TestImageSelector_Testimage5  //!< Sets the camera to generate and transmit test images with a test image 5 pattern - Applies to: ruL2048-19gm
    };

    //! Valid values for TriggerActivation
    enum TriggerActivationEnums
    {
        TriggerActivation_FallingEdge,  //!< Sets the selected trigger to become active on the falling edge of the source signal - Applies to: ruL2048-19gm
        TriggerActivation_LevelHigh,  //!< Sets the selected trigger to become active when  the source signal is high - Applies to: ruL2048-19gm
        TriggerActivation_LevelLow,  //!< Sets the selected trigger to become active when  the source signal is low - Applies to: ruL2048-19gm
        TriggerActivation_RisingEdge  //!< Sets the selected trigger to become active on the rising edge of the source signal - Applies to: ruL2048-19gm
    };

    //! Valid values for TriggerDelaySource
    enum TriggerDelaySourceEnums
    {
        TriggerDelaySource_LineTrigger,  //!< Selects the trigger delay to be expressed as a number of line triggers - Applies to: ruL2048-19gm
        TriggerDelaySource_Time_us  //!< Selects the trigger delay to be expressed as a time interval (in microseconds) - Applies to: ruL2048-19gm
    };

    //! Valid values for TriggerMode
    enum TriggerModeEnums
    {
        TriggerMode_Off,  //!< Sets the mode for the selected trigger to off - Applies to: ruL2048-19gm
        TriggerMode_On  //!< Sets the mode for the selected trigger to on - Applies to: ruL2048-19gm
    };

    //! Valid values for TriggerSelector
    enum TriggerSelectorEnums
    {
        TriggerSelector_AcquisitionStart,  //!< Selects the acquisition start trigger for configuration - Applies to: ruL2048-19gm
        TriggerSelector_FrameStart,  //!< Selects the frame start trigger for configuration - Applies to: ruL2048-19gm
        TriggerSelector_LineStart  //!< Selects the line start trigger for configuration - Applies to: ruL2048-19gm
    };

    //! Valid values for TriggerSource
    enum TriggerSourceEnums
    {
        TriggerSource_FrequencyConverter,  //!< Sets the signal source for the selected trigger to the frequency converter module - Applies to: ruL2048-19gm
        TriggerSource_Line1,  //!< Sets the signal source for the selected trigger to line 1 - Applies to: ruL2048-19gm
        TriggerSource_Line2,  //!< Sets the signal source for the selected trigger to line 2 - Applies to: ruL2048-19gm
        TriggerSource_Line3,  //!< Sets the signal source for the selected trigger to line 3 - Applies to: ruL2048-19gm
        TriggerSource_ShaftEncoderModuleOut,  //!< Sets the signal source for the selected trigger to the shaft encoder module - Applies to: ruL2048-19gm
        TriggerSource_Software  //!< Sets the software trigger as the signal source for the selected trigger - Applies to: ruL2048-19gm
    };

    //! Valid values for UserDefinedValueSelector
    enum UserDefinedValueSelectorEnums
    {
        UserDefinedValueSelector_Todo  //!< TODO - Applies to: ruL2048-19gm
    };

    //! Valid values for UserOutputSelector
    enum UserOutputSelectorEnums
    {
        UserOutputSelector_UserOutput1,  //!< Selects user settable output signal 1 for configuration - Applies to: ruL2048-19gm
        UserOutputSelector_UserOutput2  //!< Selects user settable output signal 2 for configuration - Applies to: ruL2048-19gm
    };

    //! Valid values for UserSetDefaultSelector
    enum UserSetDefaultSelectorEnums
    {
        UserSetDefaultSelector_Default,  //!< Selects the default user set as the default startup set - Applies to: ruL2048-19gm
        UserSetDefaultSelector_UserSet1,  //!< Selects user set 1 as the default startup set - Applies to: ruL2048-19gm
        UserSetDefaultSelector_UserSet2,  //!< Selects user set 2 as the default startup set - Applies to: ruL2048-19gm
        UserSetDefaultSelector_UserSet3  //!< Selects user set 3 as the default startup set - Applies to: ruL2048-19gm
    };

    //! Valid values for UserSetSelector
    enum UserSetSelectorEnums
    {
        UserSetSelector_Default,  //!< Selects the default configuration set - Applies to: ruL2048-19gm
        UserSetSelector_UserSet1,  //!< Selects user set 1 - Applies to: ruL2048-19gm
        UserSetSelector_UserSet2,  //!< Selects user set 2 - Applies to: ruL2048-19gm
        UserSetSelector_UserSet3  //!< Selects user set 3 - Applies to: ruL2048-19gm
    };


    
    
    //**************************************************************************************************
    // Parameter class BaslerCameraCameraParams
    //**************************************************************************************************
    

    /*!
    \brief A parameter class containing all parameters as members that are available for ruL2048-19gm

    Sources:
    ruL2048-19gm 106152-01;U;ruL2048_19gm;V2.0-4
    */
    class BaslerCameraCameraParams
    {
    //----------------------------------------------------------------------------------------------------------------
    // Implementation
    //----------------------------------------------------------------------------------------------------------------
    protected:
        // If you want to show the following methods in the help file
        // add the string HIDE_CLASS_METHODS to the ENABLED_SECTIONS tag in the doxygen file
        //! \cond HIDE_CLASS_METHODS
        
            //! Constructor
            BaslerCameraCameraParams(void);

            //! Destructor
            ~BaslerCameraCameraParams(void);

            //! Initializes the references
            void _Initialize(GENAPI_NAMESPACE::INodeMap*);

    //! \endcond

    private:
        class BaslerCameraCameraParams_Data;
        BaslerCameraCameraParams_Data* m_pData;


    //----------------------------------------------------------------------------------------------------------------
    // References to features
    //----------------------------------------------------------------------------------------------------------------
    public:
    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Sets the number of frames acquired in the multiframe acquisition mode - Applies to: ruL2048-19gm

        This value sets the number of frames acquired in the multiframe acquisition mode
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AcquisitionFrameCount" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& AcquisitionFrameCount;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief If the acquisition frame rate feature is enabled, this value sets the camera's acquisition frame rate in frames per second - Applies to: ruL2048-19gm

        Sets the 'absolute' value of the acquisition frame rate. The 'absolute' value is a float value that sets the acquisition frame rate in frames per second.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AcquisitionFrameRateAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& AcquisitionFrameRateAbs;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Enables setting the camera's acquisition frame rate to a specified value - Applies to: ruL2048-19gm

        This boolean value enables setting  the camera's acquisition frame rate to a specified value.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AcquisitionFrameRateEnable" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& AcquisitionFrameRateEnable;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Sets the camera's acquisition line rate in lines per second - Applies to: ruL2048-19gm

        Sets the 'absolute' value of the acquisition line rate. The 'absolute' value is a float value that sets the acquisition line rate in lines per second.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AcquisitionLineRateAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& AcquisitionLineRateAbs;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Sets the image acquisition mode - Applies to: ruL2048-19gm

        This enumeration sets the image acquisition mode. 
    
        Visibility: Beginner

        Selecting Parameters: AcquisitionStart and AcquisitionStop

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AcquisitionMode" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<AcquisitionModeEnums>& AcquisitionMode;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Starts the acquisition of images - Applies to: ruL2048-19gm

        This command starts the acquisition of images. If the camera is set for single frame acquisition, it will start acquisition of one frame. If the camera is set for continuous frame acquisition, it will start continuous acquisition of frames.
    
        Visibility: Beginner

        Selected by: AcquisitionMode

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AcquisitionStart" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& AcquisitionStart;

    //@}


    //! \name Categories: AcquisitionStartOvertriggerEventData
    //@{
    /*!
        \brief Indicates the stream channel index for an acquisition start overtrigger event - Applies to: ruL2048-19gm

        This enumeration Indicates the stream channel index for an acquisition start overtrigger event
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AcquisitionStartOvertriggerEventStreamChannelIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& AcquisitionStartOvertriggerEventStreamChannelIndex;

    //@}


    //! \name Categories: AcquisitionStartOvertriggerEventData
    //@{
    /*!
        \brief Indicates the time stamp for an Acquisition start overtrigger event - Applies to: ruL2048-19gm

        This enumeration value indicates the time stamp for an Acquisition start overtrigger event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AcquisitionStartOvertriggerEventTimestamp" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& AcquisitionStartOvertriggerEventTimestamp;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Reads the selected acquisition status - Applies to: ruL2048-19gm

        This feature is used to read the state (True or False) of the internal acquisition signal selected using AcquisitionStatusSelector.
    
        Visibility: Expert

        Selected by: AcquisitionStatusSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AcquisitionStatus" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& AcquisitionStatus;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief This enumeration is used to select which internal acquisition signal to read using AcquisitionStatus - Applies to: ruL2048-19gm

    
        Visibility: Expert

        Selecting Parameters: AcquisitionStatus

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AcquisitionStatusSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<AcquisitionStatusSelectorEnums>& AcquisitionStatusSelector;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Stops the acquisition of images - Applies to: ruL2048-19gm

        If the camera is set for continuous image acquisition and acquisition has been started, this command stops the acquisition of images.
    
        Visibility: Beginner

        Selected by: AcquisitionMode

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AcquisitionStop" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& AcquisitionStop;

    //@}


    //! \name Categories: AutoFunctions
    //@{
    /*!
        \brief Lower limit of the Auto Exposure Time (Abs) parameter - Applies to: ruL2048-19gm

    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AutoExposureTimeAbsLowerLimit" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& AutoExposureTimeAbsLowerLimit;

    //@}


    //! \name Categories: AutoFunctions
    //@{
    /*!
        \brief Upper limit of the Auto Exposure Time (Abs) parameter - Applies to: ruL2048-19gm

    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AutoExposureTimeAbsUpperLimit" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& AutoExposureTimeAbsUpperLimit;

    //@}


    //! \name Categories: AutoFunctionAOIs
    //@{
    /*!
        \brief Sets the height of the auto function area of interest in pixels - Applies to: ruL2048-19gm

        This value sets the height of the auto function area of interest in pixels.
    
        Visibility: Beginner

        Selected by: AutoFunctionAOISelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AutoFunctionAOIHeight" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& AutoFunctionAOIHeight;

    //@}


    //! \name Categories: AutoFunctionAOIs
    //@{
    /*!
        \brief Sets the starting column of the auto function area of interest in pixels - Applies to: ruL2048-19gm

        This value sets the starting column of the auto function area of interest in pixels.
    
        Visibility: Beginner

        Selected by: AutoFunctionAOISelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AutoFunctionAOIOffsetX" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& AutoFunctionAOIOffsetX;

    //@}


    //! \name Categories: AutoFunctionAOIs
    //@{
    /*!
        \brief Sets the starting line of the auto function area of interest in pixels - Applies to: ruL2048-19gm

        This value sets the starting line of the auto function area of interest in pixels.
    
        Visibility: Beginner

        Selected by: AutoFunctionAOISelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AutoFunctionAOIOffsetY" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& AutoFunctionAOIOffsetY;

    //@}


    //! \name Categories: AutoFunctionAOIs
    //@{
    /*!
        \brief Selects the Auto Function AOI - Applies to: ruL2048-19gm

    
        Visibility: Beginner

        Selecting Parameters: AutoFunctionAOIWidth, AutoFunctionAOIHeight, AutoFunctionAOIOffsetX and AutoFunctionAOIOffsetY

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AutoFunctionAOISelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<AutoFunctionAOISelectorEnums>& AutoFunctionAOISelector;

    //@}


    //! \name Categories: AutoFunctionAOIs
    //@{
    /*!
        \brief Sets the width of the auto function area of interest in pixels - Applies to: ruL2048-19gm

        This value sets the width of the auto function area of interest in pixels.
    
        Visibility: Beginner

        Selected by: AutoFunctionAOISelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AutoFunctionAOIWidth" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& AutoFunctionAOIWidth;

    //@}


    //! \name Categories: AutoFunctions
    //@{
    /*!
        \brief Selects the strategy for controlling gain and shutter simultaneously - Applies to: ruL2048-19gm

        Selects the profile for controlling gain and shutter simultaneously.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AutoFunctionProfile" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<AutoFunctionProfileEnums>& AutoFunctionProfile;

    //@}


    //! \name Categories: AutoFunctions
    //@{
    /*!
        \brief Lower limit of the Auto Gain (Raw) parameter - Applies to: ruL2048-19gm

    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AutoGainRawLowerLimit" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& AutoGainRawLowerLimit;

    //@}


    //! \name Categories: AutoFunctions
    //@{
    /*!
        \brief Upper limit of the Auto Gain (Raw) parameter - Applies to: ruL2048-19gm

    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AutoGainRawUpperLimit" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& AutoGainRawUpperLimit;

    //@}


    //! \name Categories: AutoFunctions
    //@{
    /*!
        \brief Target average gray value for Gain Auto and Exposure Auto - Applies to: ruL2048-19gm

        The target average gray value may range from nearly black to nearly white. Note that this range of gray values applies to 8 bit and to 16 bit (12 bit effective) output modes. Accordingly, also for 16 bit output modes, black is represented by 0 and white by 255.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AutoTargetValue" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& AutoTargetValue;

    //@}


    //! \name Categories: AnalogControls
    //@{
    /*!
        \brief Sets the value of the selected balance ratio control as a float - Applies to: ruL2048-19gm

        This value sets the selected balance ratio control as a float value.
    
        Visibility: Beginner

        Selected by: BalanceRatioSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=BalanceRatioAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& BalanceRatioAbs;

    //@}


    //! \name Categories: AnalogControls
    //@{
    /*!
        \brief Sets the value of the selected balance ratio control as an integer - Applies to: ruL2048-19gm

        This value sets the selected balance ratio control as an integer.
    
        Visibility: Beginner

        Selected by: BalanceRatioSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=BalanceRatioRaw" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& BalanceRatioRaw;

    //@}


    //! \name Categories: AnalogControls
    //@{
    /*!
        \brief Selects a balance ratio to configure  Once a balance ratio control has been selected, all changes to the balance ratio settings will be applied to the selected control - Applies to: ruL2048-19gm

        This enumeration selects a balance ratio control to configuration. Once a balance ratio control has been selected, all changes to the balance ratio settings will be applied to the selected control.
    
        Visibility: Beginner

        Selecting Parameters: BalanceRatioRaw and BalanceRatioAbs

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=BalanceRatioSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<BalanceRatioSelectorEnums>& BalanceRatioSelector;

    //@}


    //! \name Categories: AnalogControls
    //@{
    /*!
        \brief Balance White Auto is the 'automatic' counterpart of the manual white balance feature - Applies to: ruL2048-19gm

        The automatic white balance is a two-step process: First, the Balance Ratio Abs parameter values for red, green, and blue are each set to 1.5. Then, assuming a 'grey world' model, the Balance Ratio Abs parameter values are adjusted such that the average gray values for the 'red' and 'blue' pixels match the average gray value for the 'green' pixels.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=BalanceWhiteAuto" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<BalanceWhiteAutoEnums>& BalanceWhiteAuto;

    //@}


    //! \name Categories: AOI
    //@{
    /*!
        \brief Sets the number of adjacent horizontal pixes to be summed - Applies to: ruL2048-19gm

        Sets the number of binned adjacent horizontal pixels. Their charges will be summed and reported out of the camera as a single pixel.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=BinningHorizontal" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& BinningHorizontal;

    //@}


    //! \name Categories: AOI
    //@{
    /*!
        \brief Sets the number of adjacent vertical pixes to be summed - Applies to: ruL2048-19gm

        Sets the number of binned adjacent vertical pixels. Their charges will be summed and reported out of the camera as a single pixel.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=BinningVertical" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& BinningVertical;

    //@}


    //! \name Categories: AnalogControls
    //@{
    /*!
        \brief Sets the value of the selected black level control as an integer - Applies to: ruL2048-19gm

        This value sets the selected black level control as an integer.
    
        Visibility: Beginner

        Selected by: BlackLevelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=BlackLevelRaw" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& BlackLevelRaw;

    //@}


    //! \name Categories: AnalogControls
    //@{
    /*!
        \brief Selcts a black level control to configure  Once a black level control has been selected, all changes to the black level settings will be applied to the selected control - Applies to: ruL2048-19gm

        This enumeration selects the black level control to configure. Once a black level control has been selected, all changes to the black level settings will be applied to the selected control.
    
        Visibility: Beginner

        Selecting Parameters: BlackLevelRaw

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=BlackLevelSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<BlackLevelSelectorEnums>& BlackLevelSelector;

    //@}


    //! \name Categories: AOI
    //@{
    /*!
        \brief Enables the horizontal centering of the image - Applies to: ruL2048-19gm

        This feature is used to center the image horizontally.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=CenterX" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& CenterX;

    //@}


    //! \name Categories: AOI
    //@{
    /*!
        \brief Enables the vertical centering of the image - Applies to: ruL2048-19gm

        This feature is used to center the image vertically.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=CenterY" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& CenterY;

    //@}


    //! \name Categories: ChunkDataStreams
    //@{
    /*!
        \brief Enables the inclusion of the selected chunk in the payload data - Applies to: ruL2048-19gm

        This boolean value enables the inclusion of the selected chunk in the payload data.
    
        Visibility: Beginner

        Selected by: ChunkSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ChunkEnable" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& ChunkEnable;

    //@}


    //! \name Categories: ChunkDataStreams
    //@{
    /*!
        \brief Enables the chunk mode - Applies to: ruL2048-19gm

        This boolean value enables the camera's chunk mode.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ChunkModeActive" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& ChunkModeActive;

    //@}


    //! \name Categories: ChunkDataStreams
    //@{
    /*!
        \brief Selects chunks for enabling - Applies to: ruL2048-19gm

        This enumeration selects chunks for enabling.
    
        Visibility: Beginner

        Selecting Parameters: ChunkEnable

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ChunkSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<ChunkSelectorEnums>& ChunkSelector;

    //@}


    //! \name Categories: TimerControls
    //@{
    /*!
        \brief Selects the event that will be the source to increment the counter - Applies to: ruL2048-19gm

        This enumeration selects the event that will be the source to increment the counter.
    
        Visibility: Expert

        Selected by: CounterSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=CounterEventSource" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<CounterEventSourceEnums>& CounterEventSource;

    //@}


    //! \name Categories: TimerControls
    //@{
    /*!
        \brief Immediately resets the selected counter - Applies to: ruL2048-19gm

        This command will immediately reset the selected counter. Note that the counter starts counting immediately after the reset.
    
        Visibility: Expert

        Selected by: CounterSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=CounterReset" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& CounterReset;

    //@}


    //! \name Categories: TimerControls
    //@{
    /*!
        \brief Selects the source of the reset for the selected counter - Applies to: ruL2048-19gm

        This enumeration selects the source of the reset for the selected counter.
    
        Visibility: Expert

        Selected by: CounterSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=CounterResetSource" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<CounterResetSourceEnums>& CounterResetSource;

    //@}


    //! \name Categories: TimerControls
    //@{
    /*!
        \brief Selects the counter to configure   Once a counter has been selected, all changes to the counter settings will be applied to the selected counter - Applies to: ruL2048-19gm

        This enumeration selects the counter to configure. Once a counter has been selected, all changes to the counter settings will be applied to the selected counter.
    
        Visibility: Expert

        Selecting Parameters: CounterEventSource, CounterReset and CounterResetSource

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=CounterSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<CounterSelectorEnums>& CounterSelector;

    //@}


    //! \name Categories: UserSets
    //@{
    /*!
        \brief Selects the which factory setting will be used as default set - Applies to: ruL2048-19gm

    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=DefaultSetSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<DefaultSetSelectorEnums>& DefaultSetSelector;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Indicates the version of the device's firmware and software - Applies to: ruL2048-19gm

        This is a read only element. It is a string that indicates the version of the device's firmware and software.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=DeviceFirmwareVersion" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IStringEx& DeviceFirmwareVersion;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief A unique identifier for the device such as a serial number or a GUID - Applies to: ruL2048-19gm

        This is a read only element. It is a string that provides a unique identifier for the device such as a serial number or a GUID.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=DeviceID" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IStringEx& DeviceID;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Provides additional information from the vendor about the device - Applies to: ruL2048-19gm

        This is a read only element. It is a string that provides additional information from the vendor about the camera.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=DeviceManufacturerInfo" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IStringEx& DeviceManufacturerInfo;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Indicates the model name of the device - Applies to: ruL2048-19gm

        This is a read only element. It is a text description that indicates the model name of the device.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=DeviceModelName" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IStringEx& DeviceModelName;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Immediately resets and reboots the device - Applies to: ruL2048-19gm

        This is a command that immediately resets and reboots the device.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=DeviceReset" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& DeviceReset;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Indicates the scan type of the device's sensor - Applies to: ruL2048-19gm

        This enumeration lists the possible scan types for the sensor in the device.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=DeviceScanType" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<DeviceScanTypeEnums>& DeviceScanType;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief A device ID that is user programmable - Applies to: ruL2048-19gm

        This is a read/write element. It is a user programmable string.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=DeviceUserID" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IStringEx& DeviceUserID;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Indicates the name of the device's vendor - Applies to: ruL2048-19gm

        This is a read only element. It is a text description that indicates the name of the device's vendor.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=DeviceVendorName" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IStringEx& DeviceVendorName;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Indicates the version of the device - Applies to: ruL2048-19gm

        This is a read only element. It is a string that indicates the version of the device.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=DeviceVersion" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IStringEx& DeviceVersion;

    //@}


    //! \name Categories: AnalogControls
    //@{
    /*!
        \brief Sets the value of the selected digital shift control - Applies to: ruL2048-19gm

        This value sets the selected digital shift control
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=DigitalShift" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& DigitalShift;

    //@}


    //! \name Categories: EventsGeneration
    //@{
    /*!
        \brief Sets the notification type that will be sent to the host application for the selected event  - Applies to: ruL2048-19gm

        This enumeration sets the notification type that will be sent to the host application for the selected event.
    
        Visibility: Beginner

        Selected by: EventSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=EventNotification" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<EventNotificationEnums>& EventNotification;

    //@}


    //! \name Categories: EventOverrunEventData
    //@{
    /*!
        \brief Indicates the frame ID for an event overrun event - Applies to: ruL2048-19gm

        This enumeration value indicates the frame ID for an event overrun event
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=EventOverrunEventFrameID" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& EventOverrunEventFrameID;

    //@}


    //! \name Categories: EventOverrunEventData
    //@{
    /*!
        \brief Indicates the stream channel index for an event overrun event - Applies to: ruL2048-19gm

        This enumeration value indicates the stream channel index for an event overrun event
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=EventOverrunEventStreamChannelIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& EventOverrunEventStreamChannelIndex;

    //@}


    //! \name Categories: EventOverrunEventData
    //@{
    /*!
        \brief Indicates the time stamp for an event overrun event - Applies to: ruL2048-19gm

        This enumeration value indicates the time stamp for an event overrun event
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=EventOverrunEventTimestamp" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& EventOverrunEventTimestamp;

    //@}


    //! \name Categories: EventsGeneration
    //@{
    /*!
        \brief Selects the type of event for enabling - Applies to: ruL2048-19gm

        This enumeration selects the type of event for enabling.
    
        Visibility: Beginner

        Selecting Parameters: EventNotification

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=EventSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<EventSelectorEnums>& EventSelector;

    //@}


    //! \name Categories: ExpertFeatureAccess
    //@{
    /*!
        \brief Sets the key to access the selected feature - Applies to: ruL2048-19gm

    
        Visibility: Guru

        Selected by: ExpertFeatureAccessSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ExpertFeatureAccessKey" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ExpertFeatureAccessKey;

    //@}


    //! \name Categories: ExpertFeatureAccess
    //@{
    /*!
        \brief Selects the feature to configure  Once a feature has been selected, all changes made using the feature enable feature will be applied to the selected feature - Applies to: ruL2048-19gm

    
        Visibility: Guru

        Selecting Parameters: ExpertFeatureEnable and ExpertFeatureAccessKey

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ExpertFeatureAccessSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<ExpertFeatureAccessSelectorEnums>& ExpertFeatureAccessSelector;

    //@}


    //! \name Categories: ExpertFeatureAccess
    //@{
    /*!
        \brief Enable the selected Feature - Applies to: ruL2048-19gm

    
        Visibility: Guru

        Selected by: ExpertFeatureAccessSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ExpertFeatureEnable" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& ExpertFeatureEnable;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Exposure Auto is the 'automatic' counterpart to manually setting an 'absolute' exposure time - Applies to: ruL2048-19gm

        The exposure auto function automatically adjusts the Auto Exposure Time Abs parameter value within set limits, until a target average gray value for the pixel data of the related Auto Function AOI is reached.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ExposureAuto" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<ExposureAutoEnums>& ExposureAuto;

    //@}


    //! \name Categories: ExposureEndEventData
    //@{
    /*!
        \brief Indicates the frame ID for an exposure end event - Applies to: ruL2048-19gm

        This enumeration value indicates the frame ID for an exposure end event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ExposureEndEventFrameID" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ExposureEndEventFrameID;

    //@}


    //! \name Categories: ExposureEndEventData
    //@{
    /*!
        \brief Indicates the stream channel index for an exposure end event - Applies to: ruL2048-19gm

        This enumeration value indicates the stream channel index for an exposure end event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ExposureEndEventStreamChannelIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ExposureEndEventStreamChannelIndex;

    //@}


    //! \name Categories: ExposureEndEventData
    //@{
    /*!
        \brief Indicates the time stamp for an exposure end event - Applies to: ruL2048-19gm

        This enumeration value indicates the time stamp for an exposure end event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ExposureEndEventTimestamp" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ExposureEndEventTimestamp;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Sets the exposure mode - Applies to: ruL2048-19gm

        This enumeration sets the exposure mode.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ExposureMode" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<ExposureModeEnums>& ExposureMode;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Directly sets the camera's exposure time in microseconds - Applies to: ruL2048-19gm

        This float value sets the camera's exposure time in microseconds.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ExposureTimeAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& ExposureTimeAbs;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Sets the time base (in microseconds) that is used when the exposure time is set with the 'exposure time raw' setting - Applies to: ruL2048-19gm

        This float value sets the time base (in microseconds) that is used when the exposure time is set with the 'raw' setting.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ExposureTimeBaseAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& ExposureTimeBaseAbs;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Sets the 'raw' exposure time   Actual exposure time = raw exposure setting  x  exposure time base abs setting - Applies to: ruL2048-19gm

        This value sets an integer that will be used as a multiplier for the exposure timebase. The actual exposure time equals the current exposure time raw setting times the current exposure time base abs setting.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ExposureTimeRaw" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ExposureTimeRaw;

    //@}


    //! \name Categories: FileAccessControl
    //@{
    /*!
        \brief Defines the intermediate access buffer - Applies to: ruL2048-19gm

        The File Access Buffer feature defines the intermediate access buffer that allows the exchange of data between the device file storage and the application.
    
        Visibility: Guru

        Selected by: FileSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FileAccessBuffer" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IRegisterEx& FileAccessBuffer;

    //@}


    //! \name Categories: FileAccessControl
    //@{
    /*!
        \brief Controls the mapping between the device file storage and the FileAccessBuffer - Applies to: ruL2048-19gm

        This feature controls the mapping between the device file storage and the FileAccessBuffer.
    
        Visibility: Guru

        Selected by: FileSelector and FileOperationSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FileAccessLength" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& FileAccessLength;

    //@}


    //! \name Categories: FileAccessControl
    //@{
    /*!
        \brief Controls the mapping between the device file storage and the FileAccessBuffer - Applies to: ruL2048-19gm

        This feature controls the mapping between the device file storage and the FileAccessBuffer.
    
        Visibility: Guru

        Selected by: FileSelector and FileOperationSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FileAccessOffset" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& FileAccessOffset;

    //@}


    //! \name Categories: FileAccessControl
    //@{
    /*!
        \brief Selects the access mode in which a file is opened - Applies to: ruL2048-19gm

        The File Open Mode feature selects the access mode in which a file is opened in the device.
    
        Visibility: Guru

        Selected by: FileSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FileOpenMode" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<FileOpenModeEnums>& FileOpenMode;

    //@}


    //! \name Categories: FileAccessControl
    //@{
    /*!
        \brief Executes the selected operation - Applies to: ruL2048-19gm

        The File Operation Execute feature is the command that executes the operation selected by FileOperationSelector on the selected file.
    
        Visibility: Guru

        Selected by: FileSelector and FileOperationSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FileOperationExecute" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& FileOperationExecute;

    //@}


    //! \name Categories: FileAccessControl
    //@{
    /*!
        \brief Represents the file operation result - Applies to: ruL2048-19gm

        The File Operation Result feature represents the file operation result. For Read or Write operations, the number of successfully read/written bytes is returned.
    
        Visibility: Guru

        Selected by: FileSelector and FileOperationSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FileOperationResult" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& FileOperationResult;

    //@}


    //! \name Categories: FileAccessControl
    //@{
    /*!
        \brief Selects the target operation for the selected file - Applies to: ruL2048-19gm

        The File Operation Selector feature selects the target operation for the selected file in the device. This Operation is executed when the FileOperationExecute feature is called.
    
        Visibility: Guru

        Selected by: FileSelector

        Selecting Parameters: FileAccessOffset, FileAccessLength, FileOperationStatus, FileOperationResult and FileOperationExecute

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FileOperationSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<FileOperationSelectorEnums>& FileOperationSelector;

    //@}


    //! \name Categories: FileAccessControl
    //@{
    /*!
        \brief Represents the file operation execution status - Applies to: ruL2048-19gm

        The File Operation Status feature represents the file operation execution status.
    
        Visibility: Guru

        Selected by: FileSelector and FileOperationSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FileOperationStatus" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<FileOperationStatusEnums>& FileOperationStatus;

    //@}


    //! \name Categories: FileAccessControl
    //@{
    /*!
        \brief This feature selects the target file in the device - Applies to: ruL2048-19gm

        The File Selector feature selects the target file in the device.
    
        Visibility: Guru

        Selecting Parameters: FileOperationSelector, FileOpenMode, FileAccessBuffer, FileAccessOffset, FileAccessLength, FileOperationStatus, FileOperationResult, FileSize and FileOperationExecute

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FileSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<FileSelectorEnums>& FileSelector;

    //@}


    //! \name Categories: FileAccessControl
    //@{
    /*!
        \brief Represents the size of the selected file - Applies to: ruL2048-19gm

        The File Size feature represents the size of the selected file in bytes.
    
        Visibility: Guru

        Selected by: FileSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FileSize" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& FileSize;

    //@}


    //! \name Categories: FrameStartOvertriggerEventData
    //@{
    /*!
        \brief Indicates the stream channel index for an frame start overtrigger event - Applies to: ruL2048-19gm

        This enumeration Indicates the stream channel index for an frame start overtrigger event
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrameStartOvertriggerEventStreamChannelIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& FrameStartOvertriggerEventStreamChannelIndex;

    //@}


    //! \name Categories: FrameStartOvertriggerEventData
    //@{
    /*!
        \brief Indicates the time stamp for an frame start overtrigger event - Applies to: ruL2048-19gm

        This enumeration value indicates the time stamp for an frame start overtrigger event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrameStartOvertriggerEventTimestamp" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& FrameStartOvertriggerEventTimestamp;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Sets the frame timeout in microseconds - Applies to: ruL2048-19gm

        Sets the frame timeout in microseconds. When the timeout expires before a frame acquisition is complete, a partial frame will be delivered.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrameTimeoutAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& FrameTimeoutAbs;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Enables the frame timeout - Applies to: ruL2048-19gm

        This boolean value enables the frame timeout. 
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrameTimeoutEnable" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& FrameTimeoutEnable;

    //@}


    //! \name Categories: FrameTimeoutEventData
    //@{
    /*!
        \brief Indicates the stream channel index for an frame timeout event - Applies to: ruL2048-19gm

        This enumeration Indicates the stream channel index for an frame timeout event
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrameTimeoutEventStreamChannelIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& FrameTimeoutEventStreamChannelIndex;

    //@}


    //! \name Categories: FrameTimeoutEventData
    //@{
    /*!
        \brief Indicates the time stamp for an frame timeout event - Applies to: ruL2048-19gm

        This enumeration value indicates the time stamp for an frame timeout event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrameTimeoutEventTimestamp" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& FrameTimeoutEventTimestamp;

    //@}


    //! \name Categories: FrequencyConverter
    //@{
    /*!
        \brief Selects the input source - Applies to: ruL2048-19gm

        Selects the input source for the frequency converter module.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrequencyConverterInputSource" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<FrequencyConverterInputSourceEnums>& FrequencyConverterInputSource;

    //@}


    //! \name Categories: FrequencyConverter
    //@{
    /*!
        \brief Sets the multiplier value for the multiplier sub-module - Applies to: ruL2048-19gm

        Sets an integer value as the multiplier for the multiplier sub-module.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrequencyConverterMultiplier" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& FrequencyConverterMultiplier;

    //@}


    //! \name Categories: FrequencyConverter
    //@{
    /*!
        \brief Sets the post-divider value for the post-divider sub-module - Applies to: ruL2048-19gm

        Sets an integer value as the post-divider for the post-divider sub-module.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrequencyConverterPostDivider" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& FrequencyConverterPostDivider;

    //@}


    //! \name Categories: FrequencyConverter
    //@{
    /*!
        \brief Sets the pre-divider value for the pre-divider sub-module - Applies to: ruL2048-19gm

        Sets an integer value as the pre-divider for the pre-divider sub-module.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrequencyConverterPreDivider" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& FrequencyConverterPreDivider;

    //@}


    //! \name Categories: FrequencyConverter
    //@{
    /*!
        \brief Enables overtriggering protection - Applies to: ruL2048-19gm

        This feature ensures that the multiplier sub-module does not provide a generated signal at a too high frequency that would cause camera overtriggering.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrequencyConverterPreventOvertrigger" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& FrequencyConverterPreventOvertrigger;

    //@}


    //! \name Categories: FrequencyConverter
    //@{
    /*!
        \brief Selects the signal transition relationships between received and generated signals - Applies to: ruL2048-19gm

        Selects the signal transition relationships between the signals received from the pre-divider sub-module and the signals generated by the multiplier sub-module.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrequencyConverterSignalAlignment" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<FrequencyConverterSignalAlignmentEnums>& FrequencyConverterSignalAlignment;

    //@}


    //! \name Categories: AnalogControls
    //@{
    /*!
        \brief Gain Auto is the 'automatic' counterpart of the manual gain feature - Applies to: ruL2048-19gm

        The gain auto function automatically adjusts the Auto Gain Raw parameter value within set limits, until a target average gray value for the pixel data from Auto Function AOI1 is reached.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GainAuto" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<GainAutoEnums>& GainAuto;

    //@}


    //! \name Categories: AnalogControls
    //@{
    /*!
        \brief This is an integer value that sets the selected gain control in device specific units - Applies to: ruL2048-19gm

        Sets the 'raw' value of the selected gain control. The 'raw' value is an integer value that sets the selected gain control in units specific to the camera.
    
        Visibility: Beginner

        Selected by: GainSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GainRaw" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GainRaw;

    //@}


    //! \name Categories: AnalogControls
    //@{
    /*!
        \brief Selects the gain control to configure  Once a gain control has been selected, all changes to the gain settings will be applied to the selected control - Applies to: ruL2048-19gm

        This enumeration selects the gain control to configure. Once a gain control has been selected, all changes to the gain settings will be applied to the selected control.
    
        Visibility: Beginner

        Selecting Parameters: GainRaw

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GainSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<GainSelectorEnums>& GainSelector;

    //@}


    //! \name Categories: AnalogControls
    //@{
    /*!
        \brief This feature is used to perform gamma correction of pixel intensity - Applies to: ruL2048-19gm

        This feature is used to perform gamma correction of pixel intensity.  This is typically used to compensate for non-linearity of the display system (such as CRT).
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=Gamma" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& Gamma;

    //@}


    //! \name Categories: AnalogControls
    //@{
    /*!
        \brief Enables the gamma correction - Applies to: ruL2048-19gm

        This boolean value enables the gamma correction.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GammaEnable" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GammaEnable;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Sets the control channel privilege feature - Applies to: ruL2048-19gm

        This enumeration sets the control channel privilege feature.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevCCP" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<GevCCPEnums>& GevCCP;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the current default gateway for the selected network interface - Applies to: ruL2048-19gm

        This is a read only element. It indicates the current default gateway for the selected network interface.
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevCurrentDefaultGateway" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevCurrentDefaultGateway;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the current IP address for the selected network interface - Applies to: ruL2048-19gm

        This is a read only element. It indicates the current IP address for the selected network interface.
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevCurrentIPAddress" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevCurrentIPAddress;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Sets the current IP configuration of the selected network interface - Applies to: ruL2048-19gm

        This value sets the IP configuration of the selected network interface, i.e., fixed IP, DHCP, auto IP. 
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevCurrentIPConfiguration" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevCurrentIPConfiguration;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the current subnet mask for the selected network interface - Applies to: ruL2048-19gm

        This is a read only element. It indicates the current subnet mask for the selected network interface.
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevCurrentSubnetMask" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevCurrentSubnetMask;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indictes the character set - Applies to: ruL2048-19gm

        This is a read only element. Its value indicates the character set. 1 = UTF8
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevDeviceModeCharacterSet" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevDeviceModeCharacterSet;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the endianess of the bootstrap registers - Applies to: ruL2048-19gm

        This is a read only element. It indicates the endianess of the bootstrap registers. True = big endian.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevDeviceModeIsBigEndian" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevDeviceModeIsBigEndian;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the first URL to the XML device description file - Applies to: ruL2048-19gm

        This is a read only element. It indicates the first URL to the XML device description file.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevFirstURL" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IStringEx& GevFirstURL;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Sets the heartbeat timeout in milliseconds - Applies to: ruL2048-19gm

        This value sets the heartbeat timeout in milliseconds.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevHeartbeatTimeout" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevHeartbeatTimeout;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Selects the physical network interface to configure  Once a network interface has been selected, all changes to the network interface settings will be applied to the selected interface - Applies to: ruL2048-19gm

        This selects the physical network interface to configure. Once a network interface has been selected, all changes to the network interface settings will be applied to the selected interface.
    
        Visibility: Guru

        Selecting Parameters: GevMACAddress, GevSupportedIPConfigurationLLA, GevSupportedIPConfigurationDHCP, GevSupportedIPConfigurationPersistentIP, GevCurrentIPConfiguration, GevCurrentIPAddress, GevCurrentSubnetMask, GevCurrentDefaultGateway, GevPersistentIPAddress, GevPersistentSubnetMask, GevPersistentDefaultGateway, GevLinkSpeed, GevLinkMaster, GevLinkFullDuplex and GevLinkCrossover

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevInterfaceSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<GevInterfaceSelectorEnums>& GevInterfaceSelector;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the state of medium-dependent interface crossover (MDIX) for the selected network interface - Applies to: ruL2048-19gm

        This is a read only element. It indicates the state of medium-dependent interface crossover (MDIX) for the selected network interface.
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevLinkCrossover" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevLinkCrossover;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates whether the selected network interface operates in full-duplex mode - Applies to: ruL2048-19gm

        This is a read only element. It indicates whether the selected network interface operates in full-duplex mode.
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevLinkFullDuplex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevLinkFullDuplex;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates whether the selected network interface is the clock master - Applies to: ruL2048-19gm

        This is a read only element. It indicates whether the selected network interface is the clock master.
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevLinkMaster" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevLinkMaster;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the connection speed in Mbps for the selected network interface - Applies to: ruL2048-19gm

        This is a read only element. It indicates the connection speed in Mbps for the selected network interface.
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevLinkSpeed" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevLinkSpeed;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the MAC address for the selected network interface - Applies to: ruL2048-19gm

        This is a read only element. It indicates the MAC address for the selected network interface.
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevMACAddress" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevMACAddress;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the number of message channels supported by the device - Applies to: ruL2048-19gm

        This is a read only element. It indicates the number of message channels supported by the device.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevMessageChannelCount" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevMessageChannelCount;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the number of network interfaces on the device - Applies to: ruL2048-19gm

        This is a read only element. It indicates the number of network interfaces on the device.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevNumberOfInterfaces" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevNumberOfInterfaces;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief If fixed (persistent) IP addressing is supported by the device and enabled, sets the fixed default gateway for the selected network interface  - Applies to: ruL2048-19gm

        This value sets the fixed default gateway for the selected network interface (if fixed IP addressing is supported by the device and enabled).
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevPersistentDefaultGateway" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevPersistentDefaultGateway;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief If fixed (persistent) IP addressing is supported by the device and enabled, sets the fixed IP address for the selected network interface  - Applies to: ruL2048-19gm

        This value sets the fixed IP address for the selected network interface (if fixed IP addressing is supported by the device and enabled).
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevPersistentIPAddress" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevPersistentIPAddress;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief If fixed (persistent) IP addressing is supported by the device and enabled, sets the fixed subnet mask for the selected network interface  - Applies to: ruL2048-19gm

        This value sets the fixed subnet mask for the selected network interface (if fixed IP addressing is supported by the device and enabled).
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevPersistentSubnetMask" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevPersistentSubnetMask;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the bandwidth (in bytes per second) that will be used by the camera to transmit image and chunk feature data and to handle resends and control data transmissions - Applies to: ruL2048-19gm

        This value indicates the base bandwidth in bytes per second that will be used by the camera to transmit image and chunk feature data and to handle resends and control data transmissions. This parameter represents a combination of the packet size and the inter-packet delay.
    
        Visibility: Expert

        Selected by: GevStreamChannelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSCBWA" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevSCBWA;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Sets a percentage of the Ethernet bandwidth assigned to the camera to be held in reserve  The reserve is used for packet resends and control data transmissions   - Applies to: ruL2048-19gm

        This value reserves a portion of Ethernet bandwidth assigned to the camera for packet resends and for the transmission of control data between the camera and the host PC. The setting is expressed as a percentage of the bandwidth assigned parameter. For example, if the Bandwidth Assigned parameter indicates that 30 MBytes/s have been assigned to the camera and the Bandwidth Reserve parameter is set to 5%, then the bandwidth reserve will be 1.5 MBytes/s.
    
        Visibility: Expert

        Selected by: GevStreamChannelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSCBWR" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevSCBWR;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Sets a multiplier for the Bandwidth Reserve parameter  The multiplier is used to establish an extra pool of reserved bandwidth that can be used if an unusually large burst of packet resends is needed - Applies to: ruL2048-19gm

        This value sets a multiplier for the Bandwidth Reserve parameter. The multiplier is used to establish an extra pool of reserved bandwidth that can be used if an unusually large burst of packet resends is needed.
    
        Visibility: Expert

        Selected by: GevStreamChannelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSCBWRA" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevSCBWRA;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Sets the stream channel destination IPv4 address for the selected stream channel - Applies to: ruL2048-19gm

        This value sets the stream channel destination IPv4 address for the selected stream channel. The destination can be a unicast or a multicast.
    
        Visibility: Guru

        Selected by: GevStreamChannelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSCDA" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevSCDA;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the actual bandwidth (in bytes per second) that the camera will use to transmit image data and chunk data given the current AOI settings, chunk feature settings, and the pixel format setting - Applies to: ruL2048-19gm

        This value indicates the actual bandwidth (in bytes per second) that the camera will use to transmit image data and chunk data given the current AOI settings, chunk feature settings, and the pixel format setting.
    
        Visibility: Expert

        Selected by: GevStreamChannelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSCDCT" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevSCDCT;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the maximum amount of data (in bytes per second) that the camera could generate given its current settings and ideal conditions, i e , unlimited bandwidth and no packet resends - Applies to: ruL2048-19gm

        This value indicates the maximum amount of data (in bytes per second) that the camera could generate given its current settings and ideal conditions, i.e., unlimited bandwidth and no packet resends.
    
        Visibility: Expert

        Selected by: GevStreamChannelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSCDMT" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevSCDMT;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the maximum time (in ticks) that the next frame transmission could be delayed due to a burst of resends - Applies to: ruL2048-19gm

        If the Bandwidth Reserve Accumulation parameter is set to a high value, the camera can experience periods where there is a large burst of data resends. This burst of resends will delay the start of transmission of the next acquired image. The Frame Max Jitter parameter indicates the maximum time in ticks that the next frame transmission could be delayed due to a burst of resends.

    
        Visibility: Expert

        Selected by: GevStreamChannelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSCFJM" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevSCFJM;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Sets the frame transfer start delay (in ticks) for the selected stream channel - Applies to: ruL2048-19gm

        This value sets the frame transfer delay for the selected stream channel. This value sets a delay betweem when the camera would normally begin transmitted an acquired image (frame) and when it actually begins transmitting the acquired image.
    
        Visibility: Expert

        Selected by: GevStreamChannelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSCFTD" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevSCFTD;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Sets the inter-packet delay (in ticks) for the selected stream channel - Applies to: ruL2048-19gm

        This value sets a delay between the transmission of each packet for the selected stream channel. The delay is measured in ticks.
    
        Visibility: Expert

        Selected by: GevStreamChannelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSCPD" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevSCPD;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Sets the port to which the device must send data streams - Applies to: ruL2048-19gm

        This value sets the port to which the device must send data streams.
    
        Visibility: Guru

        Selected by: GevStreamChannelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSCPHostPort" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevSCPHostPort;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Sets the index of the network interface to use - Applies to: ruL2048-19gm

        This value sets the index of the network interface to use.
    
        Visibility: Guru

        Selected by: GevStreamChannelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSCPInterfaceIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevSCPInterfaceIndex;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief  Applies to: ruL2048-19gm

    
        Visibility: Guru

        Selected by: GevStreamChannelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSCPSBigEndian" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevSCPSBigEndian;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief  Applies to: ruL2048-19gm

    
        Visibility: Guru

        Selected by: GevStreamChannelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSCPSDoNotFragment" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevSCPSDoNotFragment;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Sets the packet size in bytes for the selected stream channel - Applies to: ruL2048-19gm

        This value sets the packet size in bytes for the selected stream channel. Excludes data leader and data trailer. (The last packet may be smaller because the packet size is not necessarily a multiple of the block size for the stream channel.)
    
        Visibility: Beginner

        Selected by: GevStreamChannelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSCPSPacketSize" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevSCPSPacketSize;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the second URL to the XML device description file - Applies to: ruL2048-19gm

        This is a read only element. It indicates the second URL to the XML device description file.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSecondURL" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IStringEx& GevSecondURL;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the number of stream channels supported by the device - Applies to: ruL2048-19gm

        This is a read only element. It indicates the number of stream channels supported by the device.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevStreamChannelCount" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevStreamChannelCount;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Selects the stream channel to configure  Once a stream channel has been selected, all changes to the stream channel settings will be applied to the selected stream channel - Applies to: ruL2048-19gm

        This enumeration selects the stream channels to configure. Once a stream channel has been selected, all changes to the stream channel settings will be applied to the selected stream channel.
    
        Visibility: Guru

        Selecting Parameters: GevSCPInterfaceIndex, GevSCPHostPort, GevSCPSFireTestPacket, GevSCPSDoNotFragment, GevSCPSBigEndian, GevSCPSPacketSize, GevSCPD, GevSCFTD, GevSCDA, GevSCBWR, GevSCBWRA, GevSCBWA, GevSCDMT, GevSCDCT and GevSCFJM

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevStreamChannelSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<GevStreamChannelSelectorEnums>& GevStreamChannelSelector;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates whether the selected network interface supports DHCP IP addressing - Applies to: ruL2048-19gm

        This is a read only element. It indicates whether the selected network interface supports DHCP IP addressing.
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSupportedIPConfigurationDHCP" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevSupportedIPConfigurationDHCP;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates whether the selected network interface supports auto IP addressing (also known as LLA) - Applies to: ruL2048-19gm

        This is a read only element. It indicates whether the selected network interface supports auto IP addressing (also known as LLA).
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSupportedIPConfigurationLLA" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevSupportedIPConfigurationLLA;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates whether the selected network interface supports fixed IP addressing (also known as persistent IP addressing) - Applies to: ruL2048-19gm

        This is a read only element. It indicates whether the selected network interface supports fixed IP addressing (also known as persistent IP addressing).
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSupportedIPConfigurationPersistentIP" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevSupportedIPConfigurationPersistentIP;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates whether multiple operations in a single message are supported - Applies to: ruL2048-19gm

        This is a read only element. It indicates whether multiple operations in a single message are supported.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSupportedOptionalCommandsConcatenation" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevSupportedOptionalCommandsConcatenation;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates whether EVENT_CMD and EVENT_ACK are supported - Applies to: ruL2048-19gm

        This is a read only element. It indicates whether EVENT_CMD and EVENT_ACK are supported.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSupportedOptionalCommandsEVENT" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevSupportedOptionalCommandsEVENT;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates whether EVENTDATA_CMD and EVENTDATA_ACK are supported - Applies to: ruL2048-19gm

        This is a read only element. It indicates whether EVENTDATA_CMD and EVENTDATA_ACK are supported.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSupportedOptionalCommandsEVENTDATA" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevSupportedOptionalCommandsEVENTDATA;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates whether PACKETRESEND_CMD is supported - Applies to: ruL2048-19gm

        This is a read only element. It indicates whether PACKETRESEND_CMD is supported.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSupportedOptionalCommandsPACKETRESEND" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevSupportedOptionalCommandsPACKETRESEND;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates whether WRITEMEM_CMD and WRITEMEM_ACK are supported - Applies to: ruL2048-19gm

        This is a read only element. It indicates whether WRITEMEM_CMD and WRITEMEM_ACK are supported
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSupportedOptionalCommandsWRITEMEM" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevSupportedOptionalCommandsWRITEMEM;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Latches the current timestamp value of the device - Applies to: ruL2048-19gm

        This command latches the current timestamp value of the device.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevTimestampControlLatch" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& GevTimestampControlLatch;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Resets the timestamp control latch - Applies to: ruL2048-19gm

        This command resets the timestamp control latch.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevTimestampControlLatchReset" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& GevTimestampControlLatchReset;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Resets the timestamp value for the device - Applies to: ruL2048-19gm

        This command resets the timestamp value for the device
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevTimestampControlReset" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& GevTimestampControlReset;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the number of timestamp clock ticks in 1 second - Applies to: ruL2048-19gm

        This is a read only element. It indicates the number of timestamp clock ticks in 1 second.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevTimestampTickFrequency" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevTimestampTickFrequency;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the latched value of the timestamp   (The timestamp must first be latched using the Timestamp Control Latch command ) - Applies to: ruL2048-19gm

        This is a read only element. It indicates the latched value of the timestamp.  (The timestamp must first be latched using the Timestamp Control Latch command.)
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevTimestampValue" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevTimestampValue;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the major version number of the GigE Vision specification supported by this device - Applies to: ruL2048-19gm

        This is a read only element. It indicates the major version number of the GigE Vision specification supported by this device.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevVersionMajor" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevVersionMajor;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the minor version number of the GigE Vision specification supported by this device - Applies to: ruL2048-19gm

        This is a read only element. It indicates the minor version number of the GigE Vision specification supported by this device.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevVersionMinor" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevVersionMinor;

    //@}


    //! \name Categories: AOI
    //@{
    /*!
        \brief Sets the height of the area of interest in pixels - Applies to: ruL2048-19gm

        This value sets the height of the area of interest in pixels.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=Height" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& Height;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Indicates the maximum allowed height of the image in pixels - Applies to: ruL2048-19gm

        This is a read only element. It is an integer that indicates maximum allowed height of the image in pixels taking into account any function that may limit the allowed height.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=HeightMax" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& HeightMax;

    //@}


    //! \name Categories: LUTControls
    //@{
    /*!
        \brief Enables the selected LUT - Applies to: ruL2048-19gm

        This boolean value enables the selected LUT.
    
        Visibility: Beginner

        Selected by: LUTSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LUTEnable" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& LUTEnable;

    //@}


    //! \name Categories: LUTControls
    //@{
    /*!
        \brief Sets the LUT element to access  - Applies to: ruL2048-19gm

        This value sets the LUT element to access. This value is used to index into a LUT array.
    
        Visibility: Beginner

        Selected by: LUTSelector

        Selecting Parameters: LUTValue

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LUTIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& LUTIndex;

    //@}


    //! \name Categories: LUTControls
    //@{
    /*!
        \brief Selects the lookup table (LUT) to configure  Once a LUT has been selected, all changes to the LUT settings will be applied to the selected LUT - Applies to: ruL2048-19gm

        This enumeration the lookup table (LUT) to configure. Once a LUT has been selected, all changes to the LUT settings will be applied to the selected LUT.
    
        Visibility: Beginner

        Selecting Parameters: LUTEnable, LUTIndex, LUTValue and LUTValueAll

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LUTSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<LUTSelectorEnums>& LUTSelector;

    //@}


    //! \name Categories: LUTControls
    //@{
    /*!
        \brief Sets the value of the LUT element at the LUT index - Applies to: ruL2048-19gm

        This value sets the value of the LUT element at the LUT index.
    
        Visibility: Beginner

        Selected by: LUTSelector and LUTIndex

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LUTValue" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& LUTValue;

    //@}


    //! \name Categories: LUTControls
    //@{
    /*!
        \brief Accesses the entire content of the selected LUT in one chunk access - Applies to: ruL2048-19gm

    
        Visibility: Expert

        Selected by: LUTSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LUTValueAll" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IRegisterEx& LUTValueAll;

    //@}


    //! \name Categories: DigitalIO
    //@{
    /*!
        \brief Sets the absolute value of the selected line debouncer time in microseconds - Applies to: ruL2048-19gm

    
        Visibility: Beginner

        Selected by: LineSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LineDebouncerTimeAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& LineDebouncerTimeAbs;

    //@}


    //! \name Categories: DigitalIO
    //@{
    /*!
        \brief Sets the electrical configuration of the selected line - Applies to: ruL2048-19gm

        This feature controls the current electrical format of the selected physical input or output Line. Line Format can take any of the following values: No Connect: The Line is not connected. Tri-state: The Line is currently in Tri-state mode (Not driven). TTL: The Line is currently accepting or sending TTL level signals. LVDS: The Line is currently accepting or sending LVDS level signals. RS-422: The Line is currently accepting or sending RS-422 level signals. Opto-coupled: The Line is Opto-coupled. 
    
        Visibility: Beginner

        Selected by: LineSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LineFormat" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<LineFormatEnums>& LineFormat;

    //@}


    //! \name Categories: DigitalIO
    //@{
    /*!
        \brief Enables the signal inverter function for the selected input or output line - Applies to: ruL2048-19gm

        This boolean value enables the signal inverter function for the selected input or output line.
    
        Visibility: Beginner

        Selected by: LineSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LineInverter" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& LineInverter;

    //@}


    //! \name Categories: DigitalIO
    //@{
    /*!
        \brief Sets the mode for the selected line - Applies to: ruL2048-19gm

        This feature controls whether the physical Line is used to Input or Output a signal. When a Line supports input and output mode, the default state is Input to avoid possible electrical contention. Line Mode can take any of the following values: Input: The selected physical line is used to input an electrical signal. Output: The selected physical line is used to output an electrical signal.
    
        Visibility: Beginner

        Selected by: LineSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LineMode" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<LineModeEnums>& LineMode;

    //@}


    //! \name Categories: DigitalIO
    //@{
    /*!
        \brief Selects the I/O line to configure  Once a line has been selected, all changes to the line settings will be applied to the selected line - Applies to: ruL2048-19gm

        This enumeration selects the I/O line to configure. Once a line has been selected, all changes to the line settings will be applied to the selected line.
    
        Visibility: Beginner

        Selecting Parameters: LineMode, LineDebouncerTimeAbs, LineDebouncerTimeRaw, LineInverter, LineTermination, LineStatus, LineSource, LineFormat, MinOutPulseWidthAbs and MinOutPulseWidthRaw

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LineSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<LineSelectorEnums>& LineSelector;

    //@}


    //! \name Categories: DigitalIO
    //@{
    /*!
        \brief Sets the source signal for the selected line (if the selected line is an output) - Applies to: ruL2048-19gm

        This enumeration selects the internally generated camera signal (source signal) for the selected line when the selected line is an output. 
    
        Visibility: Beginner

        Selected by: LineSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LineSource" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<LineSourceEnums>& LineSource;

    //@}


    //! \name Categories: LineStartOvertriggerEventData
    //@{
    /*!
        \brief Indicates the stream channel index for an line start overtrigger event - Applies to: ruL2048-19gm

        This enumeration Indicates the stream channel index for an line start overtrigger event
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LineStartOvertriggerEventStreamChannelIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& LineStartOvertriggerEventStreamChannelIndex;

    //@}


    //! \name Categories: LineStartOvertriggerEventData
    //@{
    /*!
        \brief Indicates the time stamp for an line start overtrigger event - Applies to: ruL2048-19gm

        This enumeration value indicates the time stamp for an line start overtrigger event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LineStartOvertriggerEventTimestamp" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& LineStartOvertriggerEventTimestamp;

    //@}


    //! \name Categories: DigitalIO
    //@{
    /*!
        \brief Indicates the current logical state for the selected line - Applies to: ruL2048-19gm

        This boolean value indicates the current logical state for the selected line at the time of polling.
    
        Visibility: Beginner

        Selected by: LineSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LineStatus" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& LineStatus;

    //@}


    //! \name Categories: DigitalIO
    //@{
    /*!
        \brief A single bitfield indicating the current logical state of all available line signals at time of polling - Applies to: ruL2048-19gm

        This integer value is a single bitfield that indicates the current logical state of all available lines at time of polling.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LineStatusAll" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& LineStatusAll;

    //@}


    //! \name Categories: DigitalIO
    //@{
    /*!
        \brief Enables the termination resistor for the selected input line - Applies to: ruL2048-19gm

        This boolean value enables the termination resistor for the selected input line.
    
        Visibility: Beginner

        Selected by: LineSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LineTermination" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& LineTermination;

    //@}


    //! \name Categories: DigitalIO
    //@{
    /*!
        \brief Sets the absolute value (in microseconds) for the minimum signal width of an output signal - Applies to: ruL2048-19gm

        This float value sets the absolute value (in microseconds) for the minimum signal width of a signal that is received from the frequency converter or from the shaft encoder module and that is associated with a digital output line.
    
        Visibility: Beginner

        Selected by: LineSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=MinOutPulseWidthAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& MinOutPulseWidthAbs;

    //@}


    //! \name Categories: AOI
    //@{
    /*!
        \brief Sets the X offset (left offset) of the area of interest in pixels - Applies to: ruL2048-19gm

        This value sets the X offset (left offset) for the area of interest in pixels, i.e., the distance in pixels between the left side of the sensor and the left side of the image area.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=OffsetX" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& OffsetX;

    //@}


    //! \name Categories: AOI
    //@{
    /*!
        \brief Sets the Y offset (top offset) for the area of interest in pixels - Applies to: ruL2048-19gm

        This value sets the Y offset (top offset) for the area of interest, i.e., the distance in pixels between the top of the sensor and the top of the image area.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=OffsetY" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& OffsetY;

    //@}


    //! \name Categories: RemoveParamLimits
    //@{
    /*!
        \brief Selects the parameter to configure  Once a parameter has been selected, all changes made using the Remove Limits feature will be applied to the selected parameter - Applies to: ruL2048-19gm

        This enumeration selects the parameter to configure. Selects the parameter to configure. Once a parameter has been selected, all changes made using the Remove Limits feature will be applied to the selected parameter
    
        Visibility: Guru

        Selecting Parameters: RemoveLimits

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ParameterSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<ParameterSelectorEnums>& ParameterSelector;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Size of the payload in bytes - Applies to: ruL2048-19gm

        Size of the payload in bytes. This is the total number of bytes sent in the payload. Image data + chunk data if present. No packet headers.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=PayloadSize" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& PayloadSize;

    //@}


    //! \name Categories: ImageFormat
    //@{
    /*!
        \brief Indicates the alignment of the camera's Bayer filter to the pixels in the acquired images - Applies to: ruL2048-19gm

         This is a read only feature. This enumeration provides a list of values that indicate the alignment of the camera's Bayer filter to the pixels in the acquired images.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=PixelColorFilter" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<PixelColorFilterEnums>& PixelColorFilter;

    //@}


    //! \name Categories: ImageFormat
    //@{
    /*!
        \brief Indicates the maximum possible pixel value that could be transferred from the camera - Applies to: ruL2048-19gm

        This a read only feature. It indicates the maximum possible pixel value that could be transferred from the camera.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=PixelDynamicRangeMax" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& PixelDynamicRangeMax;

    //@}


    //! \name Categories: ImageFormat
    //@{
    /*!
        \brief Indicates the minimum possible pixel value that could be transferred from the camera - Applies to: ruL2048-19gm

        This a read only feature. It indicates the minimum possible pixel value that could be transferred from the camera.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=PixelDynamicRangeMin" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& PixelDynamicRangeMin;

    //@}


    //! \name Categories: ImageFormat
    //@{
    /*!
        \brief Sets the format of the pixel data transmitted for acquired images - Applies to: ruL2048-19gm

        This enumeration sets the format of the pixel data transmitted for acquired images. 
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=PixelFormat" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<PixelFormatEnums>& PixelFormat;

    //@}


    //! \name Categories: ImageFormat
    //@{
    /*!
        \brief Indicates the depth of the pixel values in the image in bits per pixel - Applies to: ruL2048-19gm

        This is a read only feature. This enumeration provides a list of values that indicate the depth of the pixel values in the acquired images in bits per pixel. This value will always be coherent with the pixel format setting.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=PixelSize" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<PixelSizeEnums>& PixelSize;

    //@}


    //! \name Categories: RemoveParamLimits
    //@{
    /*!
        \brief Sets the number of prelines - Applies to: ruL2048-19gm

        This value sets the number of prelines.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=Prelines" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& Prelines;

    //@}


    //! \name Categories: RemoveParamLimits
    //@{
    /*!
        \brief Removes the factory-set limits of the selected parameter - Applies to: ruL2048-19gm

        Removes the factory-set limits of the selected parameter. Having removed the factory-set limits you may set the parameter within extended limits. These are only defined by technical restrictions. Note:  Inferior image quality may result.
    
        Visibility: Guru

        Selected by: ParameterSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=RemoveLimits" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& RemoveLimits;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Indicates the maximum allowed frame acquisition rate (in frames per second) given the current settings for the area of interest, exposure time, and bandwidth - Applies to: ruL2048-19gm

        Indicates the 'absolute' value of the maximum allowed acquisition frame rate. The 'absolute' value is a float value that indicates the maximum allowed acquisition frame rate in frames per second given the current settings for the area of interest, exposure time, and bandwidth.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ResultingFrameRateAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& ResultingFrameRateAbs;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Indicates the maximum allowed line acquisition rate (in lines per second) given the current settings for the area of interest, exposure time, and bandwidth - Applies to: ruL2048-19gm

        Indicates the 'absolute' value of the maximum allowed acquisition line rate. The 'absolute' value is a float value that indicates the maximum allowed acquisition line rate in lines per second given the current settings for the area of interest, exposure time, and bandwidth.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ResultingLineRateAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& ResultingLineRateAbs;

    //@}


    //! \name Categories: ImageFormat
    //@{
    /*!
        \brief Enables the horizontal flipping of the image - Applies to: ruL2048-19gm

        This feature is used to flip horizontally the image sent by the device. The AOI is applied after the flipping.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ReverseX" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& ReverseX;

    //@}


    //! \name Categories: ImageFormat
    //@{
    /*!
        \brief Enables the vertical flipping of the image - Applies to: ruL2048-19gm

        This feature is used to flip vertically the image sent by the device. The AOI is applied after the flipping.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ReverseY" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& ReverseY;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Indicates the height of the camera's sensor in pixels - Applies to: ruL2048-19gm

        This is a read only element. It is an integer that indicates the actual height of the camera's sensor in pixels.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=SensorHeight" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& SensorHeight;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Indicates the width of the camera's sensor in pixels - Applies to: ruL2048-19gm

        This is a read only element. It is an integer that indicates the actual width of the camera's sensor in pixels.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=SensorWidth" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& SensorWidth;

    //@}


    //! \name Categories: Shading
    //@{
    /*!
        \brief Enables the selected kind of shading correction - Applies to: ruL2048-19gm

        This boolean value enables the selected kind of shading correction.
    
        Visibility: Beginner

        Selected by: ShadingSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShadingEnable" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& ShadingEnable;

    //@}


    //! \name Categories: Shading
    //@{
    /*!
        \brief Selects the kind of shading correction - Applies to: ruL2048-19gm

        This enumeration selects the kind of shading correction.
    
        Visibility: Guru

        Selecting Parameters: ShadingEnable, ShadingSetDefaultSelector and ShadingSetSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShadingSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<ShadingSelectorEnums>& ShadingSelector;

    //@}


    //! \name Categories: Shading
    //@{
    /*!
        \brief Activates the selected shading set - Applies to: ruL2048-19gm

        This command copies the selected shading set from the camera's non-volatile memory into the volatile memory. Shading correction is performed using the shading set in the volatile memory.
    
        Visibility: Beginner

        Selected by: ShadingSetSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShadingSetActivate" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& ShadingSetActivate;

    //@}


    //! \name Categories: Shading
    //@{
    /*!
        \brief Creates a shading set - Applies to: ruL2048-19gm

        This command creates a shading set for the preselected kind of shading correction and saves it using the preselected file name.
    
        Visibility: Beginner

        Selected by: ShadingSetSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShadingSetCreate" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& ShadingSetCreate;

    //@}


    //! \name Categories: Shading
    //@{
    /*!
        \brief Selects the bootup shading set - Applies to: ruL2048-19gm

        This enumeration selects the shading set that will be loaded into the volatile memory during camera bootup.
    
        Visibility: Guru

        Selected by: ShadingSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShadingSetDefaultSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<ShadingSetDefaultSelectorEnums>& ShadingSetDefaultSelector;

    //@}


    //! \name Categories: Shading
    //@{
    /*!
        \brief Selects the shading set to which the activate command will be applied - Applies to: ruL2048-19gm

        This enumeration selects the shading set to which the activate command will be applied.
    
        Visibility: Guru

        Selected by: ShadingSelector

        Selecting Parameters: ShadingSetActivate and ShadingSetCreate

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShadingSetSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<ShadingSetSelectorEnums>& ShadingSetSelector;

    //@}


    //! \name Categories: Shading
    //@{
    /*!
        \brief Indicates error statuses related to shading correction - Applies to: ruL2048-19gm

        This enumeratuion indicates error statuses related to shading correction.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShadingStatus" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<ShadingStatusEnums>& ShadingStatus;

    //@}


    //! \name Categories: ShaftEncoderModule
    //@{
    /*!
        \brief Indicates the current value of the tick counter - Applies to: ruL2048-19gm

        This integer value (read only) indicates the current value of the tick counter of the shaft encoder module.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShaftEncoderModuleCounter" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ShaftEncoderModuleCounter;

    //@}


    //! \name Categories: ShaftEncoderModule
    //@{
    /*!
        \brief Sets the maximum value for the tick counter - Applies to: ruL2048-19gm

        This integer value sets the maximum value for the tick counter of the shaft encoder module (range: 0 to 32767). If the tick counter is incrementing and it reaches the set maximum, it willl roll over to 0. If the tick counter is decrementing and it reaches 0, it willl roll back to the set maximum.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShaftEncoderModuleCounterMax" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ShaftEncoderModuleCounterMax;

    //@}


    //! \name Categories: ShaftEncoderModule
    //@{
    /*!
        \brief Selects the counting mode of the tick counter - Applies to: ruL2048-19gm

        Selects the counting mode of the tick counter of the shaft encoder module.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShaftEncoderModuleCounterMode" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<ShaftEncoderModuleCounterModeEnums>& ShaftEncoderModuleCounterMode;

    //@}


    //! \name Categories: ShaftEncoderModule
    //@{
    /*!
        \brief Resets the tick counter to 0 - Applies to: ruL2048-19gm

        This command resets the tick counter count of the shaft encoder module to 0.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShaftEncoderModuleCounterReset" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& ShaftEncoderModuleCounterReset;

    //@}


    //! \name Categories: ShaftEncoderModule
    //@{
    /*!
        \brief Selects the phase of the shaft encoder - Applies to: ruL2048-19gm

        Selects the phase of the shaft encoder as input for the shaft encoder module.
    
        Visibility: Expert

        Selecting Parameters: ShaftEncoderModuleLineSource

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShaftEncoderModuleLineSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<ShaftEncoderModuleLineSelectorEnums>& ShaftEncoderModuleLineSelector;

    //@}


    //! \name Categories: ShaftEncoderModule
    //@{
    /*!
        \brief Selects the input line as signal source for the shaft encoder module - Applies to: ruL2048-19gm

    
        Visibility: Expert

        Selected by: ShaftEncoderModuleLineSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShaftEncoderModuleLineSource" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<ShaftEncoderModuleLineSourceEnums>& ShaftEncoderModuleLineSource;

    //@}


    //! \name Categories: ShaftEncoderModule
    //@{
    /*!
        \brief Selects the circumstances for the shaft encoder module to output trigger signals - Applies to: ruL2048-19gm

        This enumeration value selects the circumstances for the shaft encoder module to output trigger signals.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShaftEncoderModuleMode" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<ShaftEncoderModuleModeEnums>& ShaftEncoderModuleMode;

    //@}


    //! \name Categories: ShaftEncoderModule
    //@{
    /*!
        \brief Sets the maximum value for the reverse counter - Applies to: ruL2048-19gm

        This integer value sets the maximum value for the reverse counter of the shaft encoder module (range: 0 to 32767).
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShaftEncoderModuleReverseCounterMax" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ShaftEncoderModuleReverseCounterMax;

    //@}


    //! \name Categories: ShaftEncoderModule
    //@{
    /*!
        \brief Resets the reverse counter to 0 - Applies to: ruL2048-19gm

        This command resets the reverse counter of the shaft encoder module to 0 and informs the module that the current direction of conveyor movement is forward. Reset must be carried out before the first conveyor movement in the forward direction.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShaftEncoderModuleReverseCounterReset" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& ShaftEncoderModuleReverseCounterReset;

    //@}


    //! \name Categories: ImageFormat
    //@{
    /*!
        \brief Specifies the direction of imaging and the separation (consecutive numbers) of related line captures - Applies to: ruL2048-19gm

        Specifies the direction of imaging and the separation (consecutive numbers) of related line captures. Related line captures will be combined.

Positive integer: The object will pass the top sensor line first.

Negative integer: The object will pass the bottom sensor line first.

In color cameras, the top sensor line is the green line, and the bottom sensor line is the blue line.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=SpatialCorrection" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& SpatialCorrection;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Shows the current temperature of the selected target in degrees celcius - Applies to: ruL2048-19gm

    
        Visibility: Guru

        Selected by: TemperatureSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TemperatureAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& TemperatureAbs;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Lists the temperature sources available for readout - Applies to: ruL2048-19gm

    
        Visibility: Guru

        Selecting Parameters: TemperatureAbs

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TemperatureSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<TemperatureSelectorEnums>& TemperatureSelector;

    //@}


    //! \name Categories: ImageFormat
    //@{
    /*!
        \brief Selecting a test image from the list will enable the test image - Applies to: ruL2048-19gm

        This enumeration provides a list of the available test images. Selecting a test image from the list will enable the test image.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TestImageSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<TestImageSelectorEnums>& TestImageSelector;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Sets the signal transition needed to activate the selected trigger - Applies to: ruL2048-19gm

        This enumeration sets the signal transition needed to activate the selected trigger.
    
        Visibility: Beginner

        Selected by: TriggerSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TriggerActivation" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<TriggerActivationEnums>& TriggerActivation;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Sets the trigger delay time in microseconds - Applies to: ruL2048-19gm

        This float value sets the absolute trigger delay in microseconds to apply after the trigger reception before effectively activating it.
    
        Visibility: Expert

        Selected by: TriggerSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TriggerDelayAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& TriggerDelayAbs;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Sets the trigger delay expressed as number of line triggers - Applies to: ruL2048-19gm

        This integer value sets the trigger delay expressed as a number of consecutive line triggers to apply after the trigger reception before effectively activating it.
    
        Visibility: Expert

        Selected by: TriggerSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TriggerDelayLineTriggerCount" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& TriggerDelayLineTriggerCount;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Selects the kind of trigger delay - Applies to: ruL2048-19gm

        Selects wheter trigger delay is defined as a time interval or as a number of consecutive line triggers.
    
        Visibility: Expert

        Selected by: TriggerSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TriggerDelaySource" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<TriggerDelaySourceEnums>& TriggerDelaySource;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Sets the mode for the selected trigger - Applies to: ruL2048-19gm

        This enumeration sets the trigger mode for the selected trigger.
    
        Visibility: Beginner

        Selected by: TriggerSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TriggerMode" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<TriggerModeEnums>& TriggerMode;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Determines whether a partial or complete frame is transmitted when the frame start trigger prematurely transitions - Applies to: ruL2048-19gm

        This feature determines whether a partial or a complete frame is transmitted when the frame start trigger is used with Level High or Level Low and when the frame start trigger signal transitions while the frame is still being acquired.
    
        Visibility: Expert

        Selected by: TriggerSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TriggerPartialClosingFrame" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& TriggerPartialClosingFrame;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Selects the trigger type to configure  Once a trigger type has been selected, all changes to the trigger settings will be applied to the selected trigger - Applies to: ruL2048-19gm

        This enumeration selects the trigger type to configure. Once a trigger type has been selected, all changes to the trigger settings will be applied to the selected trigger.
    
        Visibility: Beginner

        Selecting Parameters: TriggerMode, TriggerSoftware, TriggerSource, TriggerActivation, TriggerPartialClosingFrame, TriggerDelayAbs, TriggerDelayLineTriggerCount and TriggerDelaySource

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TriggerSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<TriggerSelectorEnums>& TriggerSelector;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Generates a software trigger signal that is used when the trigger source is set to 'software' - Applies to: ruL2048-19gm

        This command generates a software trigger signal. The software trigger signal will be used if the trigger source is set to 'software'.
    
        Visibility: Beginner

        Selected by: TriggerSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TriggerSoftware" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& TriggerSoftware;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Sets the signal source for the selected trigger - Applies to: ruL2048-19gm

        This enumeration sets the signal source for the selected trigger.
    
        Visibility: Beginner

        Selected by: TriggerSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TriggerSource" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<TriggerSourceEnums>& TriggerSource;

    //@}


    //! \name Categories: UserDefinedValues
    //@{
    /*!
        \brief  Applies to: ruL2048-19gm

    
        Visibility: Guru

        Selected by: UserDefinedValueSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=UserDefinedValue" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& UserDefinedValue;

    //@}


    //! \name Categories: UserDefinedValues
    //@{
    /*!
        \brief  Applies to: ruL2048-19gm

    
        Visibility: Guru

        Selecting Parameters: UserDefinedValue

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=UserDefinedValueSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<UserDefinedValueSelectorEnums>& UserDefinedValueSelector;

    //@}


    //! \name Categories: DigitalIO
    //@{
    /*!
        \brief Selects the user settable output signal to configure  Once a user settable output signal has been selected, all changes to the user settable output signal settings will be applied to the selected user settable output signal - Applies to: ruL2048-19gm

        This enumeration selects the user settable output signal to configure. Once a user settable output signal has been selected, all changes to the user settable output signal settings will be applied to the selected user settable output signal.
    
        Visibility: Beginner

        Selecting Parameters: UserOutputValue

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=UserOutputSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<UserOutputSelectorEnums>& UserOutputSelector;

    //@}


    //! \name Categories: DigitalIO
    //@{
    /*!
        \brief Sets the state of the selected user settable output signal - Applies to: ruL2048-19gm

        This boolean value sets the state of the selected user settable output signal.
    
        Visibility: Beginner

        Selected by: UserOutputSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=UserOutputValue" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& UserOutputValue;

    //@}


    //! \name Categories: DigitalIO
    //@{
    /*!
        \brief A single bitfield that sets the state of all user settable output signals in one access - Applies to: ruL2048-19gm

        This integer value is a single bitfield that sets the state of all user settable output signals in one access.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=UserOutputValueAll" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& UserOutputValueAll;

    //@}


    //! \name Categories: UserSets
    //@{
    /*!
        \brief Sets the configuration set to be used as the default startup set  The configuration set that has been selected as the default startup set will be loaded as the active set whenever the camera is powered on or reset - Applies to: ruL2048-19gm

        This enumeration sets the configuration set to be used as the default startup set. The configuration set that has been selected as the default startup set will be loaded as the active set whenever the camera is powered on or reset.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=UserSetDefaultSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<UserSetDefaultSelectorEnums>& UserSetDefaultSelector;

    //@}


    //! \name Categories: UserSets
    //@{
    /*!
        \brief Loads the selected configuration into the camera's volatile memory and makes it the active configuration set  Once the selected set is loaded, the parameters in the selected set will control the camera - Applies to: ruL2048-19gm

        This command loads the selected configuration set from the non-volatile memory in the camera to the volatile memory and makes the selected set the active configuration set. Once the selected set is loaded, the parameters in the selected set will control the camera.
    
        Visibility: Beginner

        Selected by: UserSetSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=UserSetLoad" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& UserSetLoad;

    //@}


    //! \name Categories: UserSets
    //@{
    /*!
        \brief Saves the current active configuration set into the selected user set   - Applies to: ruL2048-19gm

        This command copies the parameters in the current active configuration set into the selected user set in the camera's non-volatile memory.
    
        Visibility: Beginner

        Selected by: UserSetSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=UserSetSave" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& UserSetSave;

    //@}


    //! \name Categories: UserSets
    //@{
    /*!
        \brief Selects the configuration set to load, save, or configure  Once a configuration set has been selected, all changes to the configuration set settings will be applied to the selected configuration set - Applies to: ruL2048-19gm

        This enumeration selects the configuration set to load, save or configure. Possible values for the User Set Selector are: Default: Selects a configuration set that contains factory settings. User Set 1: Selects the first user set. When the Default configuration set is selected and loaded using User Set Load, the device must be in default factory settings state and must make sure the mandatory continuous acquisition use case works directly. Default User Set is read-only and cannot be modified.
    
        Visibility: Beginner

        Selecting Parameters: UserSetLoad and UserSetSave

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=UserSetSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<UserSetSelectorEnums>& UserSetSelector;

    //@}


    //! \name Categories: AOI
    //@{
    /*!
        \brief Sets the width of the area of interest in pixels - Applies to: ruL2048-19gm

        This value sets the width of the area of interest in pixels.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=Width" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& Width;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Indicates the maximum allowed width of the image in pixels - Applies to: ruL2048-19gm

        This is a read only element. It is an integer that indicates maximum allowed width of the image in pixels taking into account any function that may limit the allowed width.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=WidthMax" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& WidthMax;

    //@}


        private:
        //! \cond HIDE_CLASS_METHODS

            //! not implemented copy constructor
            BaslerCameraCameraParams(BaslerCameraCameraParams&);

            //! not implemented assignment operator
            BaslerCameraCameraParams& operator=(BaslerCameraCameraParams&);

        //! \endcond
    };

} // namespace Pylon
} // namespace BaslerCameraCameraParams_Params

#ifdef _MSC_VER
#pragma warning( pop )
#endif

#endif // BASLER_PYLON_BASLERCAMERACAMERAPARAMS_H