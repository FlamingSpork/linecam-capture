//-----------------------------------------------------------------------------
//  Basler pylon SDK
//  Copyright (c) 2023-2025 Basler AG
//  http://www.baslerweb.com
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
//  This file is generated automatically
//  Do not modify!
//-----------------------------------------------------------------------------

// common parameter types
#if defined(PYLON_GENERATED_PARAMETER_CLASSES_USE_STDAFX)
#include "stdafx.h"
#endif
#include "BaslerCameraCameraParams.h"

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
    // Enumeration support classes
    //**************************************************************************************************
    //! \cond HIDE_CLASS_METHODS

    ///////////////////////////////////////////////////////////////////////////
    //
    namespace EnumParameterClasses
    {
        ///////////////////////////////////////////////////////////////////////////
        //
        class AcquisitionModeEnumParameter : public Pylon::CEnumParameterT<AcquisitionModeEnums>
        {
        public:
            AcquisitionModeEnumParameter()
            {
            }

            virtual ~AcquisitionModeEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Continuous", 11),
                    TableItem_t("SingleFrame", 12)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class AcquisitionStatusSelectorEnumParameter : public Pylon::CEnumParameterT<AcquisitionStatusSelectorEnums>
        {
        public:
            AcquisitionStatusSelectorEnumParameter()
            {
            }

            virtual ~AcquisitionStatusSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 7;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("AcquisitionActive", 18),
                    TableItem_t("AcquisitionTransfer", 20),
                    TableItem_t("AcquisitionTriggerWait", 23),
                    TableItem_t("ExposureActive", 15),
                    TableItem_t("FrameActive", 12),
                    TableItem_t("FrameTransfer", 14),
                    TableItem_t("FrameTriggerWait", 17)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class AutoFunctionAOISelectorEnumParameter : public Pylon::CEnumParameterT<AutoFunctionAOISelectorEnums>
        {
        public:
            AutoFunctionAOISelectorEnumParameter()
            {
            }

            virtual ~AutoFunctionAOISelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Todo", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class AutoFunctionProfileEnumParameter : public Pylon::CEnumParameterT<AutoFunctionProfileEnums>
        {
        public:
            AutoFunctionProfileEnumParameter()
            {
            }

            virtual ~AutoFunctionProfileEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Todo", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class BalanceRatioSelectorEnumParameter : public Pylon::CEnumParameterT<BalanceRatioSelectorEnums>
        {
        public:
            BalanceRatioSelectorEnumParameter()
            {
            }

            virtual ~BalanceRatioSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Todo", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class BalanceWhiteAutoEnumParameter : public Pylon::CEnumParameterT<BalanceWhiteAutoEnums>
        {
        public:
            BalanceWhiteAutoEnumParameter()
            {
            }

            virtual ~BalanceWhiteAutoEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Todo", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class BlackLevelSelectorEnumParameter : public Pylon::CEnumParameterT<BlackLevelSelectorEnums>
        {
        public:
            BlackLevelSelectorEnumParameter()
            {
            }

            virtual ~BlackLevelSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 3;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("All", 4),
                    TableItem_t("Tap1", 5),
                    TableItem_t("Tap2", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class ChunkSelectorEnumParameter : public Pylon::CEnumParameterT<ChunkSelectorEnums>
        {
        public:
            ChunkSelectorEnumParameter()
            {
            }

            virtual ~ChunkSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Todo", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class CounterEventSourceEnumParameter : public Pylon::CEnumParameterT<CounterEventSourceEnums>
        {
        public:
            CounterEventSourceEnumParameter()
            {
            }

            virtual ~CounterEventSourceEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("FrameStart", 11)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class CounterResetSourceEnumParameter : public Pylon::CEnumParameterT<CounterResetSourceEnums>
        {
        public:
            CounterResetSourceEnumParameter()
            {
            }

            virtual ~CounterResetSourceEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 5;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Line1", 6),
                    TableItem_t("Line2", 6),
                    TableItem_t("Line3", 6),
                    TableItem_t("Off", 4),
                    TableItem_t("Software", 9)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class CounterSelectorEnumParameter : public Pylon::CEnumParameterT<CounterSelectorEnums>
        {
        public:
            CounterSelectorEnumParameter()
            {
            }

            virtual ~CounterSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Counter2", 9)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class DefaultSetSelectorEnumParameter : public Pylon::CEnumParameterT<DefaultSetSelectorEnums>
        {
        public:
            DefaultSetSelectorEnumParameter()
            {
            }

            virtual ~DefaultSetSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 3;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("AutoFunctions", 14),
                    TableItem_t("HighGain", 9),
                    TableItem_t("Standard", 9)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class DeviceScanTypeEnumParameter : public Pylon::CEnumParameterT<DeviceScanTypeEnums>
        {
        public:
            DeviceScanTypeEnumParameter()
            {
            }

            virtual ~DeviceScanTypeEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Areascan", 9),
                    TableItem_t("Linescan", 9)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class EventNotificationEnumParameter : public Pylon::CEnumParameterT<EventNotificationEnums>
        {
        public:
            EventNotificationEnumParameter()
            {
            }

            virtual ~EventNotificationEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("GenICamEvent", 13),
                    TableItem_t("Off", 4)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class EventSelectorEnumParameter : public Pylon::CEnumParameterT<EventSelectorEnums>
        {
        public:
            EventSelectorEnumParameter()
            {
            }

            virtual ~EventSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 5;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("AcquisitionStartOvertrigger", 28),
                    TableItem_t("EventOverrun", 13),
                    TableItem_t("FrameStartOvertrigger", 22),
                    TableItem_t("FrameTimeout", 13),
                    TableItem_t("LineStartOvertrigger", 21)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class ExpertFeatureAccessSelectorEnumParameter : public Pylon::CEnumParameterT<ExpertFeatureAccessSelectorEnums>
        {
        public:
            ExpertFeatureAccessSelectorEnumParameter()
            {
            }

            virtual ~ExpertFeatureAccessSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("ExpertFeature1", 15)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class ExposureAutoEnumParameter : public Pylon::CEnumParameterT<ExposureAutoEnums>
        {
        public:
            ExposureAutoEnumParameter()
            {
            }

            virtual ~ExposureAutoEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Todo", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class ExposureModeEnumParameter : public Pylon::CEnumParameterT<ExposureModeEnums>
        {
        public:
            ExposureModeEnumParameter()
            {
            }

            virtual ~ExposureModeEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Timed", 6),
                    TableItem_t("TriggerWidth", 13)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class FileOpenModeEnumParameter : public Pylon::CEnumParameterT<FileOpenModeEnums>
        {
        public:
            FileOpenModeEnumParameter()
            {
            }

            virtual ~FileOpenModeEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Read", 5),
                    TableItem_t("Write", 6)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class FileOperationSelectorEnumParameter : public Pylon::CEnumParameterT<FileOperationSelectorEnums>
        {
        public:
            FileOperationSelectorEnumParameter()
            {
            }

            virtual ~FileOperationSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 4;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Close", 6),
                    TableItem_t("Open", 5),
                    TableItem_t("Read", 5),
                    TableItem_t("Write", 6)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class FileOperationStatusEnumParameter : public Pylon::CEnumParameterT<FileOperationStatusEnums>
        {
        public:
            FileOperationStatusEnumParameter()
            {
            }

            virtual ~FileOperationStatusEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Failure", 8),
                    TableItem_t("Success", 8)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class FileSelectorEnumParameter : public Pylon::CEnumParameterT<FileSelectorEnums>
        {
        public:
            FileSelectorEnumParameter()
            {
            }

            virtual ~FileSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 5;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("UserGainShading1", 17),
                    TableItem_t("UserGainShading2", 17),
                    TableItem_t("UserSet1", 9),
                    TableItem_t("UserSet2", 9),
                    TableItem_t("UserSet3", 9)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class FrequencyConverterInputSourceEnumParameter : public Pylon::CEnumParameterT<FrequencyConverterInputSourceEnums>
        {
        public:
            FrequencyConverterInputSourceEnumParameter()
            {
            }

            virtual ~FrequencyConverterInputSourceEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 4;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Line1", 6),
                    TableItem_t("Line2", 6),
                    TableItem_t("Line3", 6),
                    TableItem_t("ShaftEncoderModuleOut", 22)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class FrequencyConverterSignalAlignmentEnumParameter : public Pylon::CEnumParameterT<FrequencyConverterSignalAlignmentEnums>
        {
        public:
            FrequencyConverterSignalAlignmentEnumParameter()
            {
            }

            virtual ~FrequencyConverterSignalAlignmentEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("FallingEdge", 12),
                    TableItem_t("RisingEdge", 11)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class GainAutoEnumParameter : public Pylon::CEnumParameterT<GainAutoEnums>
        {
        public:
            GainAutoEnumParameter()
            {
            }

            virtual ~GainAutoEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Todo", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class GainSelectorEnumParameter : public Pylon::CEnumParameterT<GainSelectorEnums>
        {
        public:
            GainSelectorEnumParameter()
            {
            }

            virtual ~GainSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 3;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("All", 4),
                    TableItem_t("Tap1", 5),
                    TableItem_t("Tap2", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class GevCCPEnumParameter : public Pylon::CEnumParameterT<GevCCPEnums>
        {
        public:
            GevCCPEnumParameter()
            {
            }

            virtual ~GevCCPEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 3;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Control", 8),
                    TableItem_t("Exclusive", 10),
                    TableItem_t("ExclusiveControl", 17)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class GevInterfaceSelectorEnumParameter : public Pylon::CEnumParameterT<GevInterfaceSelectorEnums>
        {
        public:
            GevInterfaceSelectorEnumParameter()
            {
            }

            virtual ~GevInterfaceSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("NetworkInterface0", 18)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class GevStreamChannelSelectorEnumParameter : public Pylon::CEnumParameterT<GevStreamChannelSelectorEnums>
        {
        public:
            GevStreamChannelSelectorEnumParameter()
            {
            }

            virtual ~GevStreamChannelSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("StreamChannel0", 15)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class LUTSelectorEnumParameter : public Pylon::CEnumParameterT<LUTSelectorEnums>
        {
        public:
            LUTSelectorEnumParameter()
            {
            }

            virtual ~LUTSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Luminance", 10)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class LineFormatEnumParameter : public Pylon::CEnumParameterT<LineFormatEnums>
        {
        public:
            LineFormatEnumParameter()
            {
            }

            virtual ~LineFormatEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("RS422", 6)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class LineModeEnumParameter : public Pylon::CEnumParameterT<LineModeEnums>
        {
        public:
            LineModeEnumParameter()
            {
            }

            virtual ~LineModeEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Output", 7)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class LineSelectorEnumParameter : public Pylon::CEnumParameterT<LineSelectorEnums>
        {
        public:
            LineSelectorEnumParameter()
            {
            }

            virtual ~LineSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 5;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Line1", 6),
                    TableItem_t("Line2", 6),
                    TableItem_t("Line3", 6),
                    TableItem_t("Out1", 5),
                    TableItem_t("Out2", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class LineSourceEnumParameter : public Pylon::CEnumParameterT<LineSourceEnums>
        {
        public:
            LineSourceEnumParameter()
            {
            }

            virtual ~LineSourceEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 8;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("AcquisitionTriggerWait", 23),
                    TableItem_t("ExposureActive", 15),
                    TableItem_t("FrameTriggerWait", 17),
                    TableItem_t("FrequencyConverter", 19),
                    TableItem_t("LineTriggerWait", 16),
                    TableItem_t("Off", 4),
                    TableItem_t("ShaftEncoderModuleOut", 22),
                    TableItem_t("UserOutput", 11)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class ParameterSelectorEnumParameter : public Pylon::CEnumParameterT<ParameterSelectorEnums>
        {
        public:
            ParameterSelectorEnumParameter()
            {
            }

            virtual ~ParameterSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Gain", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class PixelColorFilterEnumParameter : public Pylon::CEnumParameterT<PixelColorFilterEnums>
        {
        public:
            PixelColorFilterEnumParameter()
            {
            }

            virtual ~PixelColorFilterEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("None", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class PixelFormatEnumParameter : public Pylon::CEnumParameterT<PixelFormatEnums>
        {
        public:
            PixelFormatEnumParameter()
            {
            }

            virtual ~PixelFormatEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 46;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("BGR10Packed", 12),
                    TableItem_t("BGR12Packed", 12),
                    TableItem_t("BGR8Packed", 11),
                    TableItem_t("BGRA8Packed", 12),
                    TableItem_t("BayerBG10", 10),
                    TableItem_t("BayerBG12", 10),
                    TableItem_t("BayerBG12Packed", 16),
                    TableItem_t("BayerBG16", 10),
                    TableItem_t("BayerBG8", 9),
                    TableItem_t("BayerGB10", 10),
                    TableItem_t("BayerGB12", 10),
                    TableItem_t("BayerGB12Packed", 16),
                    TableItem_t("BayerGB16", 10),
                    TableItem_t("BayerGB8", 9),
                    TableItem_t("BayerGR10", 10),
                    TableItem_t("BayerGR12", 10),
                    TableItem_t("BayerGR12Packed", 16),
                    TableItem_t("BayerGR16", 10),
                    TableItem_t("BayerGR8", 9),
                    TableItem_t("BayerRG10", 10),
                    TableItem_t("BayerRG12", 10),
                    TableItem_t("BayerRG12Packed", 16),
                    TableItem_t("BayerRG16", 10),
                    TableItem_t("BayerRG8", 9),
                    TableItem_t("Mono10", 7),
                    TableItem_t("Mono10Packed", 13),
                    TableItem_t("Mono12", 7),
                    TableItem_t("Mono12Packed", 13),
                    TableItem_t("Mono16", 7),
                    TableItem_t("Mono8", 6),
                    TableItem_t("Mono8Signed", 12),
                    TableItem_t("RGB10Packed", 12),
                    TableItem_t("RGB10Planar", 12),
                    TableItem_t("RGB10V1Packed", 14),
                    TableItem_t("RGB10V2Packed", 14),
                    TableItem_t("RGB12Packed", 12),
                    TableItem_t("RGB12Planar", 12),
                    TableItem_t("RGB12V1Packed", 14),
                    TableItem_t("RGB16Planar", 12),
                    TableItem_t("RGB8Packed", 11),
                    TableItem_t("RGB8Planar", 11),
                    TableItem_t("RGBA8Packed", 12),
                    TableItem_t("YUV411Packed", 13),
                    TableItem_t("YUV422Packed", 13),
                    TableItem_t("YUV422_YUYV_Packed", 19),
                    TableItem_t("YUV444Packed", 13)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class PixelSizeEnumParameter : public Pylon::CEnumParameterT<PixelSizeEnums>
        {
        public:
            PixelSizeEnumParameter()
            {
            }

            virtual ~PixelSizeEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 3;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Bpp12", 6),
                    TableItem_t("Bpp16", 6),
                    TableItem_t("Bpp8", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class ShadingSelectorEnumParameter : public Pylon::CEnumParameterT<ShadingSelectorEnums>
        {
        public:
            ShadingSelectorEnumParameter()
            {
            }

            virtual ~ShadingSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("GainShading", 12)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class ShadingSetDefaultSelectorEnumParameter : public Pylon::CEnumParameterT<ShadingSetDefaultSelectorEnums>
        {
        public:
            ShadingSetDefaultSelectorEnumParameter()
            {
            }

            virtual ~ShadingSetDefaultSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 3;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("DefaultShadingSet", 18),
                    TableItem_t("UserShadingSet1", 16),
                    TableItem_t("UserShadingSet2", 16)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class ShadingSetSelectorEnumParameter : public Pylon::CEnumParameterT<ShadingSetSelectorEnums>
        {
        public:
            ShadingSetSelectorEnumParameter()
            {
            }

            virtual ~ShadingSetSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 3;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("DefaultShadingSet", 18),
                    TableItem_t("UserShadingSet1", 16),
                    TableItem_t("UserShadingSet2", 16)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class ShadingStatusEnumParameter : public Pylon::CEnumParameterT<ShadingStatusEnums>
        {
        public:
            ShadingStatusEnumParameter()
            {
            }

            virtual ~ShadingStatusEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 4;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("ActivateError", 14),
                    TableItem_t("CreateError", 12),
                    TableItem_t("NoError", 8),
                    TableItem_t("StartupSetError", 16)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class ShaftEncoderModuleCounterModeEnumParameter : public Pylon::CEnumParameterT<ShaftEncoderModuleCounterModeEnums>
        {
        public:
            ShaftEncoderModuleCounterModeEnumParameter()
            {
            }

            virtual ~ShaftEncoderModuleCounterModeEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("FollowDirection", 16),
                    TableItem_t("IgnoreDirection", 16)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class ShaftEncoderModuleLineSelectorEnumParameter : public Pylon::CEnumParameterT<ShaftEncoderModuleLineSelectorEnums>
        {
        public:
            ShaftEncoderModuleLineSelectorEnumParameter()
            {
            }

            virtual ~ShaftEncoderModuleLineSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("PhaseA", 7),
                    TableItem_t("PhaseB", 7)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class ShaftEncoderModuleLineSourceEnumParameter : public Pylon::CEnumParameterT<ShaftEncoderModuleLineSourceEnums>
        {
        public:
            ShaftEncoderModuleLineSourceEnumParameter()
            {
            }

            virtual ~ShaftEncoderModuleLineSourceEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 3;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Line1", 6),
                    TableItem_t("Line2", 6),
                    TableItem_t("Line3", 6)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class ShaftEncoderModuleModeEnumParameter : public Pylon::CEnumParameterT<ShaftEncoderModuleModeEnums>
        {
        public:
            ShaftEncoderModuleModeEnumParameter()
            {
            }

            virtual ~ShaftEncoderModuleModeEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("AnyDirection", 13),
                    TableItem_t("ForwardOnly", 12)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class TemperatureSelectorEnumParameter : public Pylon::CEnumParameterT<TemperatureSelectorEnums>
        {
        public:
            TemperatureSelectorEnumParameter()
            {
            }

            virtual ~TemperatureSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Sensorboard", 12)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class TestImageSelectorEnumParameter : public Pylon::CEnumParameterT<TestImageSelectorEnums>
        {
        public:
            TestImageSelectorEnumParameter()
            {
            }

            virtual ~TestImageSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 6;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Off", 4),
                    TableItem_t("Testimage1", 11),
                    TableItem_t("Testimage2", 11),
                    TableItem_t("Testimage3", 11),
                    TableItem_t("Testimage4", 11),
                    TableItem_t("Testimage5", 11)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class TriggerActivationEnumParameter : public Pylon::CEnumParameterT<TriggerActivationEnums>
        {
        public:
            TriggerActivationEnumParameter()
            {
            }

            virtual ~TriggerActivationEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 4;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("FallingEdge", 12),
                    TableItem_t("LevelHigh", 10),
                    TableItem_t("LevelLow", 9),
                    TableItem_t("RisingEdge", 11)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class TriggerDelaySourceEnumParameter : public Pylon::CEnumParameterT<TriggerDelaySourceEnums>
        {
        public:
            TriggerDelaySourceEnumParameter()
            {
            }

            virtual ~TriggerDelaySourceEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("LineTrigger", 12),
                    TableItem_t("Time_us", 8)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class TriggerModeEnumParameter : public Pylon::CEnumParameterT<TriggerModeEnums>
        {
        public:
            TriggerModeEnumParameter()
            {
            }

            virtual ~TriggerModeEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Off", 4),
                    TableItem_t("On", 3)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class TriggerSelectorEnumParameter : public Pylon::CEnumParameterT<TriggerSelectorEnums>
        {
        public:
            TriggerSelectorEnumParameter()
            {
            }

            virtual ~TriggerSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 3;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("AcquisitionStart", 17),
                    TableItem_t("FrameStart", 11),
                    TableItem_t("LineStart", 10)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class TriggerSourceEnumParameter : public Pylon::CEnumParameterT<TriggerSourceEnums>
        {
        public:
            TriggerSourceEnumParameter()
            {
            }

            virtual ~TriggerSourceEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 6;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("FrequencyConverter", 19),
                    TableItem_t("Line1", 6),
                    TableItem_t("Line2", 6),
                    TableItem_t("Line3", 6),
                    TableItem_t("ShaftEncoderModuleOut", 22),
                    TableItem_t("Software", 9)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class UserDefinedValueSelectorEnumParameter : public Pylon::CEnumParameterT<UserDefinedValueSelectorEnums>
        {
        public:
            UserDefinedValueSelectorEnumParameter()
            {
            }

            virtual ~UserDefinedValueSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Todo", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class UserOutputSelectorEnumParameter : public Pylon::CEnumParameterT<UserOutputSelectorEnums>
        {
        public:
            UserOutputSelectorEnumParameter()
            {
            }

            virtual ~UserOutputSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("UserOutput1", 12),
                    TableItem_t("UserOutput2", 12)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class UserSetDefaultSelectorEnumParameter : public Pylon::CEnumParameterT<UserSetDefaultSelectorEnums>
        {
        public:
            UserSetDefaultSelectorEnumParameter()
            {
            }

            virtual ~UserSetDefaultSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 4;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Default", 8),
                    TableItem_t("UserSet1", 9),
                    TableItem_t("UserSet2", 9),
                    TableItem_t("UserSet3", 9)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class UserSetSelectorEnumParameter : public Pylon::CEnumParameterT<UserSetSelectorEnums>
        {
        public:
            UserSetSelectorEnumParameter()
            {
            }

            virtual ~UserSetSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 4;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Default", 8),
                    TableItem_t("UserSet1", 9),
                    TableItem_t("UserSet2", 9),
                    TableItem_t("UserSet3", 9)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


    }

    //! \endcond
    //**************************************************************************************************
    // Parameter class BaslerCameraCameraParams implementation
    //**************************************************************************************************

    //! \cond HIDE_CLASS_METHODS
    
    ///////////////////////////////////////////////////////////////////////////
    //
    class BaslerCameraCameraParams::BaslerCameraCameraParams_Data
    {
    public:
        Pylon::CIntegerParameter AcquisitionFrameCount;
        Pylon::CFloatParameter AcquisitionFrameRateAbs;
        Pylon::CBooleanParameter AcquisitionFrameRateEnable;
        Pylon::CFloatParameter AcquisitionLineRateAbs;
        EnumParameterClasses::AcquisitionModeEnumParameter AcquisitionMode;
        Pylon::CCommandParameter AcquisitionStart;
        Pylon::CIntegerParameter AcquisitionStartOvertriggerEventStreamChannelIndex;
        Pylon::CIntegerParameter AcquisitionStartOvertriggerEventTimestamp;
        Pylon::CBooleanParameter AcquisitionStatus;
        EnumParameterClasses::AcquisitionStatusSelectorEnumParameter AcquisitionStatusSelector;
        Pylon::CCommandParameter AcquisitionStop;
        Pylon::CFloatParameter AutoExposureTimeAbsLowerLimit;
        Pylon::CFloatParameter AutoExposureTimeAbsUpperLimit;
        Pylon::CIntegerParameter AutoFunctionAOIHeight;
        Pylon::CIntegerParameter AutoFunctionAOIOffsetX;
        Pylon::CIntegerParameter AutoFunctionAOIOffsetY;
        EnumParameterClasses::AutoFunctionAOISelectorEnumParameter AutoFunctionAOISelector;
        Pylon::CIntegerParameter AutoFunctionAOIWidth;
        EnumParameterClasses::AutoFunctionProfileEnumParameter AutoFunctionProfile;
        Pylon::CIntegerParameter AutoGainRawLowerLimit;
        Pylon::CIntegerParameter AutoGainRawUpperLimit;
        Pylon::CIntegerParameter AutoTargetValue;
        Pylon::CFloatParameter BalanceRatioAbs;
        Pylon::CIntegerParameter BalanceRatioRaw;
        EnumParameterClasses::BalanceRatioSelectorEnumParameter BalanceRatioSelector;
        EnumParameterClasses::BalanceWhiteAutoEnumParameter BalanceWhiteAuto;
        Pylon::CIntegerParameter BinningHorizontal;
        Pylon::CIntegerParameter BinningVertical;
        Pylon::CIntegerParameter BlackLevelRaw;
        EnumParameterClasses::BlackLevelSelectorEnumParameter BlackLevelSelector;
        Pylon::CBooleanParameter CenterX;
        Pylon::CBooleanParameter CenterY;
        Pylon::CBooleanParameter ChunkEnable;
        Pylon::CBooleanParameter ChunkModeActive;
        EnumParameterClasses::ChunkSelectorEnumParameter ChunkSelector;
        EnumParameterClasses::CounterEventSourceEnumParameter CounterEventSource;
        Pylon::CCommandParameter CounterReset;
        EnumParameterClasses::CounterResetSourceEnumParameter CounterResetSource;
        EnumParameterClasses::CounterSelectorEnumParameter CounterSelector;
        EnumParameterClasses::DefaultSetSelectorEnumParameter DefaultSetSelector;
        Pylon::CStringParameter DeviceFirmwareVersion;
        Pylon::CStringParameter DeviceID;
        Pylon::CStringParameter DeviceManufacturerInfo;
        Pylon::CStringParameter DeviceModelName;
        Pylon::CCommandParameter DeviceReset;
        EnumParameterClasses::DeviceScanTypeEnumParameter DeviceScanType;
        Pylon::CStringParameter DeviceUserID;
        Pylon::CStringParameter DeviceVendorName;
        Pylon::CStringParameter DeviceVersion;
        Pylon::CIntegerParameter DigitalShift;
        EnumParameterClasses::EventNotificationEnumParameter EventNotification;
        Pylon::CIntegerParameter EventOverrunEventFrameID;
        Pylon::CIntegerParameter EventOverrunEventStreamChannelIndex;
        Pylon::CIntegerParameter EventOverrunEventTimestamp;
        EnumParameterClasses::EventSelectorEnumParameter EventSelector;
        Pylon::CIntegerParameter ExpertFeatureAccessKey;
        EnumParameterClasses::ExpertFeatureAccessSelectorEnumParameter ExpertFeatureAccessSelector;
        Pylon::CBooleanParameter ExpertFeatureEnable;
        EnumParameterClasses::ExposureAutoEnumParameter ExposureAuto;
        Pylon::CIntegerParameter ExposureEndEventFrameID;
        Pylon::CIntegerParameter ExposureEndEventStreamChannelIndex;
        Pylon::CIntegerParameter ExposureEndEventTimestamp;
        EnumParameterClasses::ExposureModeEnumParameter ExposureMode;
        Pylon::CFloatParameter ExposureTimeAbs;
        Pylon::CFloatParameter ExposureTimeBaseAbs;
        Pylon::CIntegerParameter ExposureTimeRaw;
        Pylon::CArrayParameter FileAccessBuffer;
        Pylon::CIntegerParameter FileAccessLength;
        Pylon::CIntegerParameter FileAccessOffset;
        EnumParameterClasses::FileOpenModeEnumParameter FileOpenMode;
        Pylon::CCommandParameter FileOperationExecute;
        Pylon::CIntegerParameter FileOperationResult;
        EnumParameterClasses::FileOperationSelectorEnumParameter FileOperationSelector;
        EnumParameterClasses::FileOperationStatusEnumParameter FileOperationStatus;
        EnumParameterClasses::FileSelectorEnumParameter FileSelector;
        Pylon::CIntegerParameter FileSize;
        Pylon::CIntegerParameter FrameStartOvertriggerEventStreamChannelIndex;
        Pylon::CIntegerParameter FrameStartOvertriggerEventTimestamp;
        Pylon::CFloatParameter FrameTimeoutAbs;
        Pylon::CBooleanParameter FrameTimeoutEnable;
        Pylon::CIntegerParameter FrameTimeoutEventStreamChannelIndex;
        Pylon::CIntegerParameter FrameTimeoutEventTimestamp;
        EnumParameterClasses::FrequencyConverterInputSourceEnumParameter FrequencyConverterInputSource;
        Pylon::CIntegerParameter FrequencyConverterMultiplier;
        Pylon::CIntegerParameter FrequencyConverterPostDivider;
        Pylon::CIntegerParameter FrequencyConverterPreDivider;
        Pylon::CBooleanParameter FrequencyConverterPreventOvertrigger;
        EnumParameterClasses::FrequencyConverterSignalAlignmentEnumParameter FrequencyConverterSignalAlignment;
        EnumParameterClasses::GainAutoEnumParameter GainAuto;
        Pylon::CIntegerParameter GainRaw;
        EnumParameterClasses::GainSelectorEnumParameter GainSelector;
        Pylon::CFloatParameter Gamma;
        Pylon::CBooleanParameter GammaEnable;
        EnumParameterClasses::GevCCPEnumParameter GevCCP;
        Pylon::CIntegerParameter GevCurrentDefaultGateway;
        Pylon::CIntegerParameter GevCurrentIPAddress;
        Pylon::CIntegerParameter GevCurrentIPConfiguration;
        Pylon::CIntegerParameter GevCurrentSubnetMask;
        Pylon::CIntegerParameter GevDeviceModeCharacterSet;
        Pylon::CBooleanParameter GevDeviceModeIsBigEndian;
        Pylon::CStringParameter GevFirstURL;
        Pylon::CIntegerParameter GevHeartbeatTimeout;
        EnumParameterClasses::GevInterfaceSelectorEnumParameter GevInterfaceSelector;
        Pylon::CBooleanParameter GevLinkCrossover;
        Pylon::CBooleanParameter GevLinkFullDuplex;
        Pylon::CBooleanParameter GevLinkMaster;
        Pylon::CIntegerParameter GevLinkSpeed;
        Pylon::CIntegerParameter GevMACAddress;
        Pylon::CIntegerParameter GevMessageChannelCount;
        Pylon::CIntegerParameter GevNumberOfInterfaces;
        Pylon::CIntegerParameter GevPersistentDefaultGateway;
        Pylon::CIntegerParameter GevPersistentIPAddress;
        Pylon::CIntegerParameter GevPersistentSubnetMask;
        Pylon::CIntegerParameter GevSCBWA;
        Pylon::CIntegerParameter GevSCBWR;
        Pylon::CIntegerParameter GevSCBWRA;
        Pylon::CIntegerParameter GevSCDA;
        Pylon::CIntegerParameter GevSCDCT;
        Pylon::CIntegerParameter GevSCDMT;
        Pylon::CIntegerParameter GevSCFJM;
        Pylon::CIntegerParameter GevSCFTD;
        Pylon::CIntegerParameter GevSCPD;
        Pylon::CIntegerParameter GevSCPHostPort;
        Pylon::CIntegerParameter GevSCPInterfaceIndex;
        Pylon::CBooleanParameter GevSCPSBigEndian;
        Pylon::CBooleanParameter GevSCPSDoNotFragment;
        Pylon::CIntegerParameter GevSCPSPacketSize;
        Pylon::CStringParameter GevSecondURL;
        Pylon::CIntegerParameter GevStreamChannelCount;
        EnumParameterClasses::GevStreamChannelSelectorEnumParameter GevStreamChannelSelector;
        Pylon::CBooleanParameter GevSupportedIPConfigurationDHCP;
        Pylon::CBooleanParameter GevSupportedIPConfigurationLLA;
        Pylon::CBooleanParameter GevSupportedIPConfigurationPersistentIP;
        Pylon::CBooleanParameter GevSupportedOptionalCommandsConcatenation;
        Pylon::CBooleanParameter GevSupportedOptionalCommandsEVENT;
        Pylon::CBooleanParameter GevSupportedOptionalCommandsEVENTDATA;
        Pylon::CBooleanParameter GevSupportedOptionalCommandsPACKETRESEND;
        Pylon::CBooleanParameter GevSupportedOptionalCommandsWRITEMEM;
        Pylon::CCommandParameter GevTimestampControlLatch;
        Pylon::CCommandParameter GevTimestampControlLatchReset;
        Pylon::CCommandParameter GevTimestampControlReset;
        Pylon::CIntegerParameter GevTimestampTickFrequency;
        Pylon::CIntegerParameter GevTimestampValue;
        Pylon::CIntegerParameter GevVersionMajor;
        Pylon::CIntegerParameter GevVersionMinor;
        Pylon::CIntegerParameter Height;
        Pylon::CIntegerParameter HeightMax;
        Pylon::CBooleanParameter LUTEnable;
        Pylon::CIntegerParameter LUTIndex;
        EnumParameterClasses::LUTSelectorEnumParameter LUTSelector;
        Pylon::CIntegerParameter LUTValue;
        Pylon::CArrayParameter LUTValueAll;
        Pylon::CFloatParameter LineDebouncerTimeAbs;
        EnumParameterClasses::LineFormatEnumParameter LineFormat;
        Pylon::CBooleanParameter LineInverter;
        EnumParameterClasses::LineModeEnumParameter LineMode;
        EnumParameterClasses::LineSelectorEnumParameter LineSelector;
        EnumParameterClasses::LineSourceEnumParameter LineSource;
        Pylon::CIntegerParameter LineStartOvertriggerEventStreamChannelIndex;
        Pylon::CIntegerParameter LineStartOvertriggerEventTimestamp;
        Pylon::CBooleanParameter LineStatus;
        Pylon::CIntegerParameter LineStatusAll;
        Pylon::CBooleanParameter LineTermination;
        Pylon::CFloatParameter MinOutPulseWidthAbs;
        Pylon::CIntegerParameter OffsetX;
        Pylon::CIntegerParameter OffsetY;
        EnumParameterClasses::ParameterSelectorEnumParameter ParameterSelector;
        Pylon::CIntegerParameter PayloadSize;
        EnumParameterClasses::PixelColorFilterEnumParameter PixelColorFilter;
        Pylon::CIntegerParameter PixelDynamicRangeMax;
        Pylon::CIntegerParameter PixelDynamicRangeMin;
        EnumParameterClasses::PixelFormatEnumParameter PixelFormat;
        EnumParameterClasses::PixelSizeEnumParameter PixelSize;
        Pylon::CIntegerParameter Prelines;
        Pylon::CBooleanParameter RemoveLimits;
        Pylon::CFloatParameter ResultingFrameRateAbs;
        Pylon::CFloatParameter ResultingLineRateAbs;
        Pylon::CBooleanParameter ReverseX;
        Pylon::CBooleanParameter ReverseY;
        Pylon::CIntegerParameter SensorHeight;
        Pylon::CIntegerParameter SensorWidth;
        Pylon::CBooleanParameter ShadingEnable;
        EnumParameterClasses::ShadingSelectorEnumParameter ShadingSelector;
        Pylon::CCommandParameter ShadingSetActivate;
        Pylon::CCommandParameter ShadingSetCreate;
        EnumParameterClasses::ShadingSetDefaultSelectorEnumParameter ShadingSetDefaultSelector;
        EnumParameterClasses::ShadingSetSelectorEnumParameter ShadingSetSelector;
        EnumParameterClasses::ShadingStatusEnumParameter ShadingStatus;
        Pylon::CIntegerParameter ShaftEncoderModuleCounter;
        Pylon::CIntegerParameter ShaftEncoderModuleCounterMax;
        EnumParameterClasses::ShaftEncoderModuleCounterModeEnumParameter ShaftEncoderModuleCounterMode;
        Pylon::CCommandParameter ShaftEncoderModuleCounterReset;
        EnumParameterClasses::ShaftEncoderModuleLineSelectorEnumParameter ShaftEncoderModuleLineSelector;
        EnumParameterClasses::ShaftEncoderModuleLineSourceEnumParameter ShaftEncoderModuleLineSource;
        EnumParameterClasses::ShaftEncoderModuleModeEnumParameter ShaftEncoderModuleMode;
        Pylon::CIntegerParameter ShaftEncoderModuleReverseCounterMax;
        Pylon::CCommandParameter ShaftEncoderModuleReverseCounterReset;
        Pylon::CIntegerParameter SpatialCorrection;
        Pylon::CFloatParameter TemperatureAbs;
        EnumParameterClasses::TemperatureSelectorEnumParameter TemperatureSelector;
        EnumParameterClasses::TestImageSelectorEnumParameter TestImageSelector;
        EnumParameterClasses::TriggerActivationEnumParameter TriggerActivation;
        Pylon::CFloatParameter TriggerDelayAbs;
        Pylon::CIntegerParameter TriggerDelayLineTriggerCount;
        EnumParameterClasses::TriggerDelaySourceEnumParameter TriggerDelaySource;
        EnumParameterClasses::TriggerModeEnumParameter TriggerMode;
        Pylon::CBooleanParameter TriggerPartialClosingFrame;
        EnumParameterClasses::TriggerSelectorEnumParameter TriggerSelector;
        Pylon::CCommandParameter TriggerSoftware;
        EnumParameterClasses::TriggerSourceEnumParameter TriggerSource;
        Pylon::CIntegerParameter UserDefinedValue;
        EnumParameterClasses::UserDefinedValueSelectorEnumParameter UserDefinedValueSelector;
        EnumParameterClasses::UserOutputSelectorEnumParameter UserOutputSelector;
        Pylon::CBooleanParameter UserOutputValue;
        Pylon::CIntegerParameter UserOutputValueAll;
        EnumParameterClasses::UserSetDefaultSelectorEnumParameter UserSetDefaultSelector;
        Pylon::CCommandParameter UserSetLoad;
        Pylon::CCommandParameter UserSetSave;
        EnumParameterClasses::UserSetSelectorEnumParameter UserSetSelector;
        Pylon::CIntegerParameter Width;
        Pylon::CIntegerParameter WidthMax;
    };


    ///////////////////////////////////////////////////////////////////////////
    //
    BaslerCameraCameraParams::BaslerCameraCameraParams(void)
        : m_pData(new BaslerCameraCameraParams_Data())
        , AcquisitionFrameCount(m_pData->AcquisitionFrameCount)
        , AcquisitionFrameRateAbs(m_pData->AcquisitionFrameRateAbs)
        , AcquisitionFrameRateEnable(m_pData->AcquisitionFrameRateEnable)
        , AcquisitionLineRateAbs(m_pData->AcquisitionLineRateAbs)
        , AcquisitionMode(m_pData->AcquisitionMode)
        , AcquisitionStart(m_pData->AcquisitionStart)
        , AcquisitionStartOvertriggerEventStreamChannelIndex(m_pData->AcquisitionStartOvertriggerEventStreamChannelIndex)
        , AcquisitionStartOvertriggerEventTimestamp(m_pData->AcquisitionStartOvertriggerEventTimestamp)
        , AcquisitionStatus(m_pData->AcquisitionStatus)
        , AcquisitionStatusSelector(m_pData->AcquisitionStatusSelector)
        , AcquisitionStop(m_pData->AcquisitionStop)
        , AutoExposureTimeAbsLowerLimit(m_pData->AutoExposureTimeAbsLowerLimit)
        , AutoExposureTimeAbsUpperLimit(m_pData->AutoExposureTimeAbsUpperLimit)
        , AutoFunctionAOIHeight(m_pData->AutoFunctionAOIHeight)
        , AutoFunctionAOIOffsetX(m_pData->AutoFunctionAOIOffsetX)
        , AutoFunctionAOIOffsetY(m_pData->AutoFunctionAOIOffsetY)
        , AutoFunctionAOISelector(m_pData->AutoFunctionAOISelector)
        , AutoFunctionAOIWidth(m_pData->AutoFunctionAOIWidth)
        , AutoFunctionProfile(m_pData->AutoFunctionProfile)
        , AutoGainRawLowerLimit(m_pData->AutoGainRawLowerLimit)
        , AutoGainRawUpperLimit(m_pData->AutoGainRawUpperLimit)
        , AutoTargetValue(m_pData->AutoTargetValue)
        , BalanceRatioAbs(m_pData->BalanceRatioAbs)
        , BalanceRatioRaw(m_pData->BalanceRatioRaw)
        , BalanceRatioSelector(m_pData->BalanceRatioSelector)
        , BalanceWhiteAuto(m_pData->BalanceWhiteAuto)
        , BinningHorizontal(m_pData->BinningHorizontal)
        , BinningVertical(m_pData->BinningVertical)
        , BlackLevelRaw(m_pData->BlackLevelRaw)
        , BlackLevelSelector(m_pData->BlackLevelSelector)
        , CenterX(m_pData->CenterX)
        , CenterY(m_pData->CenterY)
        , ChunkEnable(m_pData->ChunkEnable)
        , ChunkModeActive(m_pData->ChunkModeActive)
        , ChunkSelector(m_pData->ChunkSelector)
        , CounterEventSource(m_pData->CounterEventSource)
        , CounterReset(m_pData->CounterReset)
        , CounterResetSource(m_pData->CounterResetSource)
        , CounterSelector(m_pData->CounterSelector)
        , DefaultSetSelector(m_pData->DefaultSetSelector)
        , DeviceFirmwareVersion(m_pData->DeviceFirmwareVersion)
        , DeviceID(m_pData->DeviceID)
        , DeviceManufacturerInfo(m_pData->DeviceManufacturerInfo)
        , DeviceModelName(m_pData->DeviceModelName)
        , DeviceReset(m_pData->DeviceReset)
        , DeviceScanType(m_pData->DeviceScanType)
        , DeviceUserID(m_pData->DeviceUserID)
        , DeviceVendorName(m_pData->DeviceVendorName)
        , DeviceVersion(m_pData->DeviceVersion)
        , DigitalShift(m_pData->DigitalShift)
        , EventNotification(m_pData->EventNotification)
        , EventOverrunEventFrameID(m_pData->EventOverrunEventFrameID)
        , EventOverrunEventStreamChannelIndex(m_pData->EventOverrunEventStreamChannelIndex)
        , EventOverrunEventTimestamp(m_pData->EventOverrunEventTimestamp)
        , EventSelector(m_pData->EventSelector)
        , ExpertFeatureAccessKey(m_pData->ExpertFeatureAccessKey)
        , ExpertFeatureAccessSelector(m_pData->ExpertFeatureAccessSelector)
        , ExpertFeatureEnable(m_pData->ExpertFeatureEnable)
        , ExposureAuto(m_pData->ExposureAuto)
        , ExposureEndEventFrameID(m_pData->ExposureEndEventFrameID)
        , ExposureEndEventStreamChannelIndex(m_pData->ExposureEndEventStreamChannelIndex)
        , ExposureEndEventTimestamp(m_pData->ExposureEndEventTimestamp)
        , ExposureMode(m_pData->ExposureMode)
        , ExposureTimeAbs(m_pData->ExposureTimeAbs)
        , ExposureTimeBaseAbs(m_pData->ExposureTimeBaseAbs)
        , ExposureTimeRaw(m_pData->ExposureTimeRaw)
        , FileAccessBuffer(m_pData->FileAccessBuffer)
        , FileAccessLength(m_pData->FileAccessLength)
        , FileAccessOffset(m_pData->FileAccessOffset)
        , FileOpenMode(m_pData->FileOpenMode)
        , FileOperationExecute(m_pData->FileOperationExecute)
        , FileOperationResult(m_pData->FileOperationResult)
        , FileOperationSelector(m_pData->FileOperationSelector)
        , FileOperationStatus(m_pData->FileOperationStatus)
        , FileSelector(m_pData->FileSelector)
        , FileSize(m_pData->FileSize)
        , FrameStartOvertriggerEventStreamChannelIndex(m_pData->FrameStartOvertriggerEventStreamChannelIndex)
        , FrameStartOvertriggerEventTimestamp(m_pData->FrameStartOvertriggerEventTimestamp)
        , FrameTimeoutAbs(m_pData->FrameTimeoutAbs)
        , FrameTimeoutEnable(m_pData->FrameTimeoutEnable)
        , FrameTimeoutEventStreamChannelIndex(m_pData->FrameTimeoutEventStreamChannelIndex)
        , FrameTimeoutEventTimestamp(m_pData->FrameTimeoutEventTimestamp)
        , FrequencyConverterInputSource(m_pData->FrequencyConverterInputSource)
        , FrequencyConverterMultiplier(m_pData->FrequencyConverterMultiplier)
        , FrequencyConverterPostDivider(m_pData->FrequencyConverterPostDivider)
        , FrequencyConverterPreDivider(m_pData->FrequencyConverterPreDivider)
        , FrequencyConverterPreventOvertrigger(m_pData->FrequencyConverterPreventOvertrigger)
        , FrequencyConverterSignalAlignment(m_pData->FrequencyConverterSignalAlignment)
        , GainAuto(m_pData->GainAuto)
        , GainRaw(m_pData->GainRaw)
        , GainSelector(m_pData->GainSelector)
        , Gamma(m_pData->Gamma)
        , GammaEnable(m_pData->GammaEnable)
        , GevCCP(m_pData->GevCCP)
        , GevCurrentDefaultGateway(m_pData->GevCurrentDefaultGateway)
        , GevCurrentIPAddress(m_pData->GevCurrentIPAddress)
        , GevCurrentIPConfiguration(m_pData->GevCurrentIPConfiguration)
        , GevCurrentSubnetMask(m_pData->GevCurrentSubnetMask)
        , GevDeviceModeCharacterSet(m_pData->GevDeviceModeCharacterSet)
        , GevDeviceModeIsBigEndian(m_pData->GevDeviceModeIsBigEndian)
        , GevFirstURL(m_pData->GevFirstURL)
        , GevHeartbeatTimeout(m_pData->GevHeartbeatTimeout)
        , GevInterfaceSelector(m_pData->GevInterfaceSelector)
        , GevLinkCrossover(m_pData->GevLinkCrossover)
        , GevLinkFullDuplex(m_pData->GevLinkFullDuplex)
        , GevLinkMaster(m_pData->GevLinkMaster)
        , GevLinkSpeed(m_pData->GevLinkSpeed)
        , GevMACAddress(m_pData->GevMACAddress)
        , GevMessageChannelCount(m_pData->GevMessageChannelCount)
        , GevNumberOfInterfaces(m_pData->GevNumberOfInterfaces)
        , GevPersistentDefaultGateway(m_pData->GevPersistentDefaultGateway)
        , GevPersistentIPAddress(m_pData->GevPersistentIPAddress)
        , GevPersistentSubnetMask(m_pData->GevPersistentSubnetMask)
        , GevSCBWA(m_pData->GevSCBWA)
        , GevSCBWR(m_pData->GevSCBWR)
        , GevSCBWRA(m_pData->GevSCBWRA)
        , GevSCDA(m_pData->GevSCDA)
        , GevSCDCT(m_pData->GevSCDCT)
        , GevSCDMT(m_pData->GevSCDMT)
        , GevSCFJM(m_pData->GevSCFJM)
        , GevSCFTD(m_pData->GevSCFTD)
        , GevSCPD(m_pData->GevSCPD)
        , GevSCPHostPort(m_pData->GevSCPHostPort)
        , GevSCPInterfaceIndex(m_pData->GevSCPInterfaceIndex)
        , GevSCPSBigEndian(m_pData->GevSCPSBigEndian)
        , GevSCPSDoNotFragment(m_pData->GevSCPSDoNotFragment)
        , GevSCPSPacketSize(m_pData->GevSCPSPacketSize)
        , GevSecondURL(m_pData->GevSecondURL)
        , GevStreamChannelCount(m_pData->GevStreamChannelCount)
        , GevStreamChannelSelector(m_pData->GevStreamChannelSelector)
        , GevSupportedIPConfigurationDHCP(m_pData->GevSupportedIPConfigurationDHCP)
        , GevSupportedIPConfigurationLLA(m_pData->GevSupportedIPConfigurationLLA)
        , GevSupportedIPConfigurationPersistentIP(m_pData->GevSupportedIPConfigurationPersistentIP)
        , GevSupportedOptionalCommandsConcatenation(m_pData->GevSupportedOptionalCommandsConcatenation)
        , GevSupportedOptionalCommandsEVENT(m_pData->GevSupportedOptionalCommandsEVENT)
        , GevSupportedOptionalCommandsEVENTDATA(m_pData->GevSupportedOptionalCommandsEVENTDATA)
        , GevSupportedOptionalCommandsPACKETRESEND(m_pData->GevSupportedOptionalCommandsPACKETRESEND)
        , GevSupportedOptionalCommandsWRITEMEM(m_pData->GevSupportedOptionalCommandsWRITEMEM)
        , GevTimestampControlLatch(m_pData->GevTimestampControlLatch)
        , GevTimestampControlLatchReset(m_pData->GevTimestampControlLatchReset)
        , GevTimestampControlReset(m_pData->GevTimestampControlReset)
        , GevTimestampTickFrequency(m_pData->GevTimestampTickFrequency)
        , GevTimestampValue(m_pData->GevTimestampValue)
        , GevVersionMajor(m_pData->GevVersionMajor)
        , GevVersionMinor(m_pData->GevVersionMinor)
        , Height(m_pData->Height)
        , HeightMax(m_pData->HeightMax)
        , LUTEnable(m_pData->LUTEnable)
        , LUTIndex(m_pData->LUTIndex)
        , LUTSelector(m_pData->LUTSelector)
        , LUTValue(m_pData->LUTValue)
        , LUTValueAll(m_pData->LUTValueAll)
        , LineDebouncerTimeAbs(m_pData->LineDebouncerTimeAbs)
        , LineFormat(m_pData->LineFormat)
        , LineInverter(m_pData->LineInverter)
        , LineMode(m_pData->LineMode)
        , LineSelector(m_pData->LineSelector)
        , LineSource(m_pData->LineSource)
        , LineStartOvertriggerEventStreamChannelIndex(m_pData->LineStartOvertriggerEventStreamChannelIndex)
        , LineStartOvertriggerEventTimestamp(m_pData->LineStartOvertriggerEventTimestamp)
        , LineStatus(m_pData->LineStatus)
        , LineStatusAll(m_pData->LineStatusAll)
        , LineTermination(m_pData->LineTermination)
        , MinOutPulseWidthAbs(m_pData->MinOutPulseWidthAbs)
        , OffsetX(m_pData->OffsetX)
        , OffsetY(m_pData->OffsetY)
        , ParameterSelector(m_pData->ParameterSelector)
        , PayloadSize(m_pData->PayloadSize)
        , PixelColorFilter(m_pData->PixelColorFilter)
        , PixelDynamicRangeMax(m_pData->PixelDynamicRangeMax)
        , PixelDynamicRangeMin(m_pData->PixelDynamicRangeMin)
        , PixelFormat(m_pData->PixelFormat)
        , PixelSize(m_pData->PixelSize)
        , Prelines(m_pData->Prelines)
        , RemoveLimits(m_pData->RemoveLimits)
        , ResultingFrameRateAbs(m_pData->ResultingFrameRateAbs)
        , ResultingLineRateAbs(m_pData->ResultingLineRateAbs)
        , ReverseX(m_pData->ReverseX)
        , ReverseY(m_pData->ReverseY)
        , SensorHeight(m_pData->SensorHeight)
        , SensorWidth(m_pData->SensorWidth)
        , ShadingEnable(m_pData->ShadingEnable)
        , ShadingSelector(m_pData->ShadingSelector)
        , ShadingSetActivate(m_pData->ShadingSetActivate)
        , ShadingSetCreate(m_pData->ShadingSetCreate)
        , ShadingSetDefaultSelector(m_pData->ShadingSetDefaultSelector)
        , ShadingSetSelector(m_pData->ShadingSetSelector)
        , ShadingStatus(m_pData->ShadingStatus)
        , ShaftEncoderModuleCounter(m_pData->ShaftEncoderModuleCounter)
        , ShaftEncoderModuleCounterMax(m_pData->ShaftEncoderModuleCounterMax)
        , ShaftEncoderModuleCounterMode(m_pData->ShaftEncoderModuleCounterMode)
        , ShaftEncoderModuleCounterReset(m_pData->ShaftEncoderModuleCounterReset)
        , ShaftEncoderModuleLineSelector(m_pData->ShaftEncoderModuleLineSelector)
        , ShaftEncoderModuleLineSource(m_pData->ShaftEncoderModuleLineSource)
        , ShaftEncoderModuleMode(m_pData->ShaftEncoderModuleMode)
        , ShaftEncoderModuleReverseCounterMax(m_pData->ShaftEncoderModuleReverseCounterMax)
        , ShaftEncoderModuleReverseCounterReset(m_pData->ShaftEncoderModuleReverseCounterReset)
        , SpatialCorrection(m_pData->SpatialCorrection)
        , TemperatureAbs(m_pData->TemperatureAbs)
        , TemperatureSelector(m_pData->TemperatureSelector)
        , TestImageSelector(m_pData->TestImageSelector)
        , TriggerActivation(m_pData->TriggerActivation)
        , TriggerDelayAbs(m_pData->TriggerDelayAbs)
        , TriggerDelayLineTriggerCount(m_pData->TriggerDelayLineTriggerCount)
        , TriggerDelaySource(m_pData->TriggerDelaySource)
        , TriggerMode(m_pData->TriggerMode)
        , TriggerPartialClosingFrame(m_pData->TriggerPartialClosingFrame)
        , TriggerSelector(m_pData->TriggerSelector)
        , TriggerSoftware(m_pData->TriggerSoftware)
        , TriggerSource(m_pData->TriggerSource)
        , UserDefinedValue(m_pData->UserDefinedValue)
        , UserDefinedValueSelector(m_pData->UserDefinedValueSelector)
        , UserOutputSelector(m_pData->UserOutputSelector)
        , UserOutputValue(m_pData->UserOutputValue)
        , UserOutputValueAll(m_pData->UserOutputValueAll)
        , UserSetDefaultSelector(m_pData->UserSetDefaultSelector)
        , UserSetLoad(m_pData->UserSetLoad)
        , UserSetSave(m_pData->UserSetSave)
        , UserSetSelector(m_pData->UserSetSelector)
        , Width(m_pData->Width)
        , WidthMax(m_pData->WidthMax)
    {
    }


    ///////////////////////////////////////////////////////////////////////////
    //
    BaslerCameraCameraParams::~BaslerCameraCameraParams(void)
    {
        delete m_pData;
    }


    ///////////////////////////////////////////////////////////////////////////
    //
    void BaslerCameraCameraParams::_Initialize(GENAPI_NAMESPACE::INodeMap* pNodeMap)
    {
        m_pData->AcquisitionFrameCount.Attach(pNodeMap, "AcquisitionFrameCount");
        m_pData->AcquisitionFrameRateAbs.Attach(pNodeMap, "AcquisitionFrameRateAbs");
        m_pData->AcquisitionFrameRateEnable.Attach(pNodeMap, "AcquisitionFrameRateEnable");
        m_pData->AcquisitionLineRateAbs.Attach(pNodeMap, "AcquisitionLineRateAbs");
        m_pData->AcquisitionMode.Attach(pNodeMap, "AcquisitionMode");
        m_pData->AcquisitionStart.Attach(pNodeMap, "AcquisitionStart");
        m_pData->AcquisitionStartOvertriggerEventStreamChannelIndex.Attach(pNodeMap, "AcquisitionStartOvertriggerEventStreamChannelIndex");
        m_pData->AcquisitionStartOvertriggerEventTimestamp.Attach(pNodeMap, "AcquisitionStartOvertriggerEventTimestamp");
        m_pData->AcquisitionStatus.Attach(pNodeMap, "AcquisitionStatus");
        m_pData->AcquisitionStatusSelector.Attach(pNodeMap, "AcquisitionStatusSelector");
        m_pData->AcquisitionStop.Attach(pNodeMap, "AcquisitionStop");
        m_pData->AutoExposureTimeAbsLowerLimit.Attach(pNodeMap, "AutoExposureTimeAbsLowerLimit");
        m_pData->AutoExposureTimeAbsUpperLimit.Attach(pNodeMap, "AutoExposureTimeAbsUpperLimit");
        m_pData->AutoFunctionAOIHeight.Attach(pNodeMap, "AutoFunctionAOIHeight");
        m_pData->AutoFunctionAOIOffsetX.Attach(pNodeMap, "AutoFunctionAOIOffsetX");
        m_pData->AutoFunctionAOIOffsetY.Attach(pNodeMap, "AutoFunctionAOIOffsetY");
        m_pData->AutoFunctionAOISelector.Attach(pNodeMap, "AutoFunctionAOISelector");
        m_pData->AutoFunctionAOIWidth.Attach(pNodeMap, "AutoFunctionAOIWidth");
        m_pData->AutoFunctionProfile.Attach(pNodeMap, "AutoFunctionProfile");
        m_pData->AutoGainRawLowerLimit.Attach(pNodeMap, "AutoGainRawLowerLimit");
        m_pData->AutoGainRawUpperLimit.Attach(pNodeMap, "AutoGainRawUpperLimit");
        m_pData->AutoTargetValue.Attach(pNodeMap, "AutoTargetValue");
        m_pData->BalanceRatioAbs.Attach(pNodeMap, "BalanceRatioAbs");
        m_pData->BalanceRatioRaw.Attach(pNodeMap, "BalanceRatioRaw");
        m_pData->BalanceRatioSelector.Attach(pNodeMap, "BalanceRatioSelector");
        m_pData->BalanceWhiteAuto.Attach(pNodeMap, "BalanceWhiteAuto");
        m_pData->BinningHorizontal.Attach(pNodeMap, "BinningHorizontal");
        m_pData->BinningVertical.Attach(pNodeMap, "BinningVertical");
        m_pData->BlackLevelRaw.Attach(pNodeMap, "BlackLevelRaw");
        m_pData->BlackLevelSelector.Attach(pNodeMap, "BlackLevelSelector");
        m_pData->CenterX.Attach(pNodeMap, "CenterX");
        m_pData->CenterY.Attach(pNodeMap, "CenterY");
        m_pData->ChunkEnable.Attach(pNodeMap, "ChunkEnable");
        m_pData->ChunkModeActive.Attach(pNodeMap, "ChunkModeActive");
        m_pData->ChunkSelector.Attach(pNodeMap, "ChunkSelector");
        m_pData->CounterEventSource.Attach(pNodeMap, "CounterEventSource");
        m_pData->CounterReset.Attach(pNodeMap, "CounterReset");
        m_pData->CounterResetSource.Attach(pNodeMap, "CounterResetSource");
        m_pData->CounterSelector.Attach(pNodeMap, "CounterSelector");
        m_pData->DefaultSetSelector.Attach(pNodeMap, "DefaultSetSelector");
        m_pData->DeviceFirmwareVersion.Attach(pNodeMap, "DeviceFirmwareVersion");
        m_pData->DeviceID.Attach(pNodeMap, "DeviceID");
        m_pData->DeviceManufacturerInfo.Attach(pNodeMap, "DeviceManufacturerInfo");
        m_pData->DeviceModelName.Attach(pNodeMap, "DeviceModelName");
        m_pData->DeviceReset.Attach(pNodeMap, "DeviceReset");
        m_pData->DeviceScanType.Attach(pNodeMap, "DeviceScanType");
        m_pData->DeviceUserID.Attach(pNodeMap, "DeviceUserID");
        m_pData->DeviceVendorName.Attach(pNodeMap, "DeviceVendorName");
        m_pData->DeviceVersion.Attach(pNodeMap, "DeviceVersion");
        m_pData->DigitalShift.Attach(pNodeMap, "DigitalShift");
        m_pData->EventNotification.Attach(pNodeMap, "EventNotification");
        m_pData->EventOverrunEventFrameID.Attach(pNodeMap, "EventOverrunEventFrameID");
        m_pData->EventOverrunEventStreamChannelIndex.Attach(pNodeMap, "EventOverrunEventStreamChannelIndex");
        m_pData->EventOverrunEventTimestamp.Attach(pNodeMap, "EventOverrunEventTimestamp");
        m_pData->EventSelector.Attach(pNodeMap, "EventSelector");
        m_pData->ExpertFeatureAccessKey.Attach(pNodeMap, "ExpertFeatureAccessKey");
        m_pData->ExpertFeatureAccessSelector.Attach(pNodeMap, "ExpertFeatureAccessSelector");
        m_pData->ExpertFeatureEnable.Attach(pNodeMap, "ExpertFeatureEnable");
        m_pData->ExposureAuto.Attach(pNodeMap, "ExposureAuto");
        m_pData->ExposureEndEventFrameID.Attach(pNodeMap, "ExposureEndEventFrameID");
        m_pData->ExposureEndEventStreamChannelIndex.Attach(pNodeMap, "ExposureEndEventStreamChannelIndex");
        m_pData->ExposureEndEventTimestamp.Attach(pNodeMap, "ExposureEndEventTimestamp");
        m_pData->ExposureMode.Attach(pNodeMap, "ExposureMode");
        m_pData->ExposureTimeAbs.Attach(pNodeMap, "ExposureTimeAbs");
        m_pData->ExposureTimeBaseAbs.Attach(pNodeMap, "ExposureTimeBaseAbs");
        m_pData->ExposureTimeRaw.Attach(pNodeMap, "ExposureTimeRaw");
        m_pData->FileAccessBuffer.Attach(pNodeMap, "FileAccessBuffer");
        m_pData->FileAccessLength.Attach(pNodeMap, "FileAccessLength");
        m_pData->FileAccessOffset.Attach(pNodeMap, "FileAccessOffset");
        m_pData->FileOpenMode.Attach(pNodeMap, "FileOpenMode");
        m_pData->FileOperationExecute.Attach(pNodeMap, "FileOperationExecute");
        m_pData->FileOperationResult.Attach(pNodeMap, "FileOperationResult");
        m_pData->FileOperationSelector.Attach(pNodeMap, "FileOperationSelector");
        m_pData->FileOperationStatus.Attach(pNodeMap, "FileOperationStatus");
        m_pData->FileSelector.Attach(pNodeMap, "FileSelector");
        m_pData->FileSize.Attach(pNodeMap, "FileSize");
        m_pData->FrameStartOvertriggerEventStreamChannelIndex.Attach(pNodeMap, "FrameStartOvertriggerEventStreamChannelIndex");
        m_pData->FrameStartOvertriggerEventTimestamp.Attach(pNodeMap, "FrameStartOvertriggerEventTimestamp");
        m_pData->FrameTimeoutAbs.Attach(pNodeMap, "FrameTimeoutAbs");
        m_pData->FrameTimeoutEnable.Attach(pNodeMap, "FrameTimeoutEnable");
        m_pData->FrameTimeoutEventStreamChannelIndex.Attach(pNodeMap, "FrameTimeoutEventStreamChannelIndex");
        m_pData->FrameTimeoutEventTimestamp.Attach(pNodeMap, "FrameTimeoutEventTimestamp");
        m_pData->FrequencyConverterInputSource.Attach(pNodeMap, "FrequencyConverterInputSource");
        m_pData->FrequencyConverterMultiplier.Attach(pNodeMap, "FrequencyConverterMultiplier");
        m_pData->FrequencyConverterPostDivider.Attach(pNodeMap, "FrequencyConverterPostDivider");
        m_pData->FrequencyConverterPreDivider.Attach(pNodeMap, "FrequencyConverterPreDivider");
        m_pData->FrequencyConverterPreventOvertrigger.Attach(pNodeMap, "FrequencyConverterPreventOvertrigger");
        m_pData->FrequencyConverterSignalAlignment.Attach(pNodeMap, "FrequencyConverterSignalAlignment");
        m_pData->GainAuto.Attach(pNodeMap, "GainAuto");
        m_pData->GainRaw.Attach(pNodeMap, "GainRaw");
        m_pData->GainSelector.Attach(pNodeMap, "GainSelector");
        m_pData->Gamma.Attach(pNodeMap, "Gamma");
        m_pData->GammaEnable.Attach(pNodeMap, "GammaEnable");
        m_pData->GevCCP.Attach(pNodeMap, "GevCCP");
        m_pData->GevCurrentDefaultGateway.Attach(pNodeMap, "GevCurrentDefaultGateway");
        m_pData->GevCurrentIPAddress.Attach(pNodeMap, "GevCurrentIPAddress");
        m_pData->GevCurrentIPConfiguration.Attach(pNodeMap, "GevCurrentIPConfiguration");
        m_pData->GevCurrentSubnetMask.Attach(pNodeMap, "GevCurrentSubnetMask");
        m_pData->GevDeviceModeCharacterSet.Attach(pNodeMap, "GevDeviceModeCharacterSet");
        m_pData->GevDeviceModeIsBigEndian.Attach(pNodeMap, "GevDeviceModeIsBigEndian");
        m_pData->GevFirstURL.Attach(pNodeMap, "GevFirstURL");
        m_pData->GevHeartbeatTimeout.Attach(pNodeMap, "GevHeartbeatTimeout");
        m_pData->GevInterfaceSelector.Attach(pNodeMap, "GevInterfaceSelector");
        m_pData->GevLinkCrossover.Attach(pNodeMap, "GevLinkCrossover");
        m_pData->GevLinkFullDuplex.Attach(pNodeMap, "GevLinkFullDuplex");
        m_pData->GevLinkMaster.Attach(pNodeMap, "GevLinkMaster");
        m_pData->GevLinkSpeed.Attach(pNodeMap, "GevLinkSpeed");
        m_pData->GevMACAddress.Attach(pNodeMap, "GevMACAddress");
        m_pData->GevMessageChannelCount.Attach(pNodeMap, "GevMessageChannelCount");
        m_pData->GevNumberOfInterfaces.Attach(pNodeMap, "GevNumberOfInterfaces");
        m_pData->GevPersistentDefaultGateway.Attach(pNodeMap, "GevPersistentDefaultGateway");
        m_pData->GevPersistentIPAddress.Attach(pNodeMap, "GevPersistentIPAddress");
        m_pData->GevPersistentSubnetMask.Attach(pNodeMap, "GevPersistentSubnetMask");
        m_pData->GevSCBWA.Attach(pNodeMap, "GevSCBWA");
        m_pData->GevSCBWR.Attach(pNodeMap, "GevSCBWR");
        m_pData->GevSCBWRA.Attach(pNodeMap, "GevSCBWRA");
        m_pData->GevSCDA.Attach(pNodeMap, "GevSCDA");
        m_pData->GevSCDCT.Attach(pNodeMap, "GevSCDCT");
        m_pData->GevSCDMT.Attach(pNodeMap, "GevSCDMT");
        m_pData->GevSCFJM.Attach(pNodeMap, "GevSCFJM");
        m_pData->GevSCFTD.Attach(pNodeMap, "GevSCFTD");
        m_pData->GevSCPD.Attach(pNodeMap, "GevSCPD");
        m_pData->GevSCPHostPort.Attach(pNodeMap, "GevSCPHostPort");
        m_pData->GevSCPInterfaceIndex.Attach(pNodeMap, "GevSCPInterfaceIndex");
        m_pData->GevSCPSBigEndian.Attach(pNodeMap, "GevSCPSBigEndian");
        m_pData->GevSCPSDoNotFragment.Attach(pNodeMap, "GevSCPSDoNotFragment");
        m_pData->GevSCPSPacketSize.Attach(pNodeMap, "GevSCPSPacketSize");
        m_pData->GevSecondURL.Attach(pNodeMap, "GevSecondURL");
        m_pData->GevStreamChannelCount.Attach(pNodeMap, "GevStreamChannelCount");
        m_pData->GevStreamChannelSelector.Attach(pNodeMap, "GevStreamChannelSelector");
        m_pData->GevSupportedIPConfigurationDHCP.Attach(pNodeMap, "GevSupportedIPConfigurationDHCP");
        m_pData->GevSupportedIPConfigurationLLA.Attach(pNodeMap, "GevSupportedIPConfigurationLLA");
        m_pData->GevSupportedIPConfigurationPersistentIP.Attach(pNodeMap, "GevSupportedIPConfigurationPersistentIP");
        m_pData->GevSupportedOptionalCommandsConcatenation.Attach(pNodeMap, "GevSupportedOptionalCommandsConcatenation");
        m_pData->GevSupportedOptionalCommandsEVENT.Attach(pNodeMap, "GevSupportedOptionalCommandsEVENT");
        m_pData->GevSupportedOptionalCommandsEVENTDATA.Attach(pNodeMap, "GevSupportedOptionalCommandsEVENTDATA");
        m_pData->GevSupportedOptionalCommandsPACKETRESEND.Attach(pNodeMap, "GevSupportedOptionalCommandsPACKETRESEND");
        m_pData->GevSupportedOptionalCommandsWRITEMEM.Attach(pNodeMap, "GevSupportedOptionalCommandsWRITEMEM");
        m_pData->GevTimestampControlLatch.Attach(pNodeMap, "GevTimestampControlLatch");
        m_pData->GevTimestampControlLatchReset.Attach(pNodeMap, "GevTimestampControlLatchReset");
        m_pData->GevTimestampControlReset.Attach(pNodeMap, "GevTimestampControlReset");
        m_pData->GevTimestampTickFrequency.Attach(pNodeMap, "GevTimestampTickFrequency");
        m_pData->GevTimestampValue.Attach(pNodeMap, "GevTimestampValue");
        m_pData->GevVersionMajor.Attach(pNodeMap, "GevVersionMajor");
        m_pData->GevVersionMinor.Attach(pNodeMap, "GevVersionMinor");
        m_pData->Height.Attach(pNodeMap, "Height");
        m_pData->HeightMax.Attach(pNodeMap, "HeightMax");
        m_pData->LUTEnable.Attach(pNodeMap, "LUTEnable");
        m_pData->LUTIndex.Attach(pNodeMap, "LUTIndex");
        m_pData->LUTSelector.Attach(pNodeMap, "LUTSelector");
        m_pData->LUTValue.Attach(pNodeMap, "LUTValue");
        m_pData->LUTValueAll.Attach(pNodeMap, "LUTValueAll");
        m_pData->LineDebouncerTimeAbs.Attach(pNodeMap, "LineDebouncerTimeAbs");
        m_pData->LineFormat.Attach(pNodeMap, "LineFormat");
        m_pData->LineInverter.Attach(pNodeMap, "LineInverter");
        m_pData->LineMode.Attach(pNodeMap, "LineMode");
        m_pData->LineSelector.Attach(pNodeMap, "LineSelector");
        m_pData->LineSource.Attach(pNodeMap, "LineSource");
        m_pData->LineStartOvertriggerEventStreamChannelIndex.Attach(pNodeMap, "LineStartOvertriggerEventStreamChannelIndex");
        m_pData->LineStartOvertriggerEventTimestamp.Attach(pNodeMap, "LineStartOvertriggerEventTimestamp");
        m_pData->LineStatus.Attach(pNodeMap, "LineStatus");
        m_pData->LineStatusAll.Attach(pNodeMap, "LineStatusAll");
        m_pData->LineTermination.Attach(pNodeMap, "LineTermination");
        m_pData->MinOutPulseWidthAbs.Attach(pNodeMap, "MinOutPulseWidthAbs");
        m_pData->OffsetX.Attach(pNodeMap, "OffsetX");
        m_pData->OffsetY.Attach(pNodeMap, "OffsetY");
        m_pData->ParameterSelector.Attach(pNodeMap, "ParameterSelector");
        m_pData->PayloadSize.Attach(pNodeMap, "PayloadSize");
        m_pData->PixelColorFilter.Attach(pNodeMap, "PixelColorFilter");
        m_pData->PixelDynamicRangeMax.Attach(pNodeMap, "PixelDynamicRangeMax");
        m_pData->PixelDynamicRangeMin.Attach(pNodeMap, "PixelDynamicRangeMin");
        m_pData->PixelFormat.Attach(pNodeMap, "PixelFormat");
        m_pData->PixelSize.Attach(pNodeMap, "PixelSize");
        m_pData->Prelines.Attach(pNodeMap, "Prelines");
        m_pData->RemoveLimits.Attach(pNodeMap, "RemoveLimits");
        m_pData->ResultingFrameRateAbs.Attach(pNodeMap, "ResultingFrameRateAbs");
        m_pData->ResultingLineRateAbs.Attach(pNodeMap, "ResultingLineRateAbs");
        m_pData->ReverseX.Attach(pNodeMap, "ReverseX");
        m_pData->ReverseY.Attach(pNodeMap, "ReverseY");
        m_pData->SensorHeight.Attach(pNodeMap, "SensorHeight");
        m_pData->SensorWidth.Attach(pNodeMap, "SensorWidth");
        m_pData->ShadingEnable.Attach(pNodeMap, "ShadingEnable");
        m_pData->ShadingSelector.Attach(pNodeMap, "ShadingSelector");
        m_pData->ShadingSetActivate.Attach(pNodeMap, "ShadingSetActivate");
        m_pData->ShadingSetCreate.Attach(pNodeMap, "ShadingSetCreate");
        m_pData->ShadingSetDefaultSelector.Attach(pNodeMap, "ShadingSetDefaultSelector");
        m_pData->ShadingSetSelector.Attach(pNodeMap, "ShadingSetSelector");
        m_pData->ShadingStatus.Attach(pNodeMap, "ShadingStatus");
        m_pData->ShaftEncoderModuleCounter.Attach(pNodeMap, "ShaftEncoderModuleCounter");
        m_pData->ShaftEncoderModuleCounterMax.Attach(pNodeMap, "ShaftEncoderModuleCounterMax");
        m_pData->ShaftEncoderModuleCounterMode.Attach(pNodeMap, "ShaftEncoderModuleCounterMode");
        m_pData->ShaftEncoderModuleCounterReset.Attach(pNodeMap, "ShaftEncoderModuleCounterReset");
        m_pData->ShaftEncoderModuleLineSelector.Attach(pNodeMap, "ShaftEncoderModuleLineSelector");
        m_pData->ShaftEncoderModuleLineSource.Attach(pNodeMap, "ShaftEncoderModuleLineSource");
        m_pData->ShaftEncoderModuleMode.Attach(pNodeMap, "ShaftEncoderModuleMode");
        m_pData->ShaftEncoderModuleReverseCounterMax.Attach(pNodeMap, "ShaftEncoderModuleReverseCounterMax");
        m_pData->ShaftEncoderModuleReverseCounterReset.Attach(pNodeMap, "ShaftEncoderModuleReverseCounterReset");
        m_pData->SpatialCorrection.Attach(pNodeMap, "SpatialCorrection");
        m_pData->TemperatureAbs.Attach(pNodeMap, "TemperatureAbs");
        m_pData->TemperatureSelector.Attach(pNodeMap, "TemperatureSelector");
        m_pData->TestImageSelector.Attach(pNodeMap, "TestImageSelector");
        m_pData->TriggerActivation.Attach(pNodeMap, "TriggerActivation");
        m_pData->TriggerDelayAbs.Attach(pNodeMap, "TriggerDelayAbs");
        m_pData->TriggerDelayLineTriggerCount.Attach(pNodeMap, "TriggerDelayLineTriggerCount");
        m_pData->TriggerDelaySource.Attach(pNodeMap, "TriggerDelaySource");
        m_pData->TriggerMode.Attach(pNodeMap, "TriggerMode");
        m_pData->TriggerPartialClosingFrame.Attach(pNodeMap, "TriggerPartialClosingFrame");
        m_pData->TriggerSelector.Attach(pNodeMap, "TriggerSelector");
        m_pData->TriggerSoftware.Attach(pNodeMap, "TriggerSoftware");
        m_pData->TriggerSource.Attach(pNodeMap, "TriggerSource");
        m_pData->UserDefinedValue.Attach(pNodeMap, "UserDefinedValue");
        m_pData->UserDefinedValueSelector.Attach(pNodeMap, "UserDefinedValueSelector");
        m_pData->UserOutputSelector.Attach(pNodeMap, "UserOutputSelector");
        m_pData->UserOutputValue.Attach(pNodeMap, "UserOutputValue");
        m_pData->UserOutputValueAll.Attach(pNodeMap, "UserOutputValueAll");
        m_pData->UserSetDefaultSelector.Attach(pNodeMap, "UserSetDefaultSelector");
        m_pData->UserSetLoad.Attach(pNodeMap, "UserSetLoad");
        m_pData->UserSetSave.Attach(pNodeMap, "UserSetSave");
        m_pData->UserSetSelector.Attach(pNodeMap, "UserSetSelector");
        m_pData->Width.Attach(pNodeMap, "Width");
        m_pData->WidthMax.Attach(pNodeMap, "WidthMax");
    }

    //! \endcond

} // namespace Pylon
} // namespace BaslerCameraCameraParams_Params

#ifdef _MSC_VER
#pragma warning( pop )
#endif