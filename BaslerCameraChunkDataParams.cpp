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
#include "BaslerCameraChunkDataParams.h"

#ifdef _MSC_VER
#pragma warning( push )
#pragma warning( disable : 4250 ) // warning C4250: 'Pylon::CXYZParameter': inherits 'Pylon::CParameter::Pylon::CParameter::ZYX' via dominance
#endif

//! The namespace containing the a control interface and related enumeration types for ruL2048-19gm
namespace Pylon
{
namespace BaslerCameraChunkDataParams_Params
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
        class ChunkPixelFormatEnumParameter : public Pylon::CEnumParameterT<ChunkPixelFormatEnums>
        {
        public:
            ChunkPixelFormatEnumParameter()
            {
            }

            virtual ~ChunkPixelFormatEnumParameter()
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


    }

    //! \endcond
    //**************************************************************************************************
    // Parameter class BaslerCameraChunkDataParams implementation
    //**************************************************************************************************

    //! \cond HIDE_CLASS_METHODS
    
    ///////////////////////////////////////////////////////////////////////////
    //
    class BaslerCameraChunkDataParams::BaslerCameraChunkDataParams_Data
    {
    public:
        Pylon::CIntegerParameter ChunkDynamicRangeMax;
        Pylon::CIntegerParameter ChunkDynamicRangeMin;
        Pylon::CIntegerParameter ChunkFrameTriggerCounter;
        Pylon::CIntegerParameter ChunkFrameTriggerIgnoredCounter;
        Pylon::CIntegerParameter ChunkFramecounter;
        Pylon::CIntegerParameter ChunkFramesPerTriggerCounter;
        Pylon::CIntegerParameter ChunkHeight;
        Pylon::CIntegerParameter ChunkInputStatusAtLineTriggerBitsPerLine;
        Pylon::CIntegerParameter ChunkInputStatusAtLineTriggerIndex;
        Pylon::CIntegerParameter ChunkInputStatusAtLineTriggerValue;
        Pylon::CIntegerParameter ChunkLineStatusAll;
        Pylon::CIntegerParameter ChunkLineTriggerEndToEndCounter;
        Pylon::CIntegerParameter ChunkLineTriggerIgnoredCounter;
        Pylon::CIntegerParameter ChunkOffsetX;
        Pylon::CIntegerParameter ChunkOffsetY;
        Pylon::CIntegerParameter ChunkPayloadCRC16;
        EnumParameterClasses::ChunkPixelFormatEnumParameter ChunkPixelFormat;
        Pylon::CIntegerParameter ChunkShaftEncoderCounter;
        Pylon::CIntegerParameter ChunkStride;
        Pylon::CIntegerParameter ChunkTimestamp;
        Pylon::CIntegerParameter ChunkTriggerinputcounter;
        Pylon::CIntegerParameter ChunkWidth;
    };


    ///////////////////////////////////////////////////////////////////////////
    //
    BaslerCameraChunkDataParams::BaslerCameraChunkDataParams(void)
        : m_pData(new BaslerCameraChunkDataParams_Data())
        , ChunkDynamicRangeMax(m_pData->ChunkDynamicRangeMax)
        , ChunkDynamicRangeMin(m_pData->ChunkDynamicRangeMin)
        , ChunkFrameTriggerCounter(m_pData->ChunkFrameTriggerCounter)
        , ChunkFrameTriggerIgnoredCounter(m_pData->ChunkFrameTriggerIgnoredCounter)
        , ChunkFramecounter(m_pData->ChunkFramecounter)
        , ChunkFramesPerTriggerCounter(m_pData->ChunkFramesPerTriggerCounter)
        , ChunkHeight(m_pData->ChunkHeight)
        , ChunkInputStatusAtLineTriggerBitsPerLine(m_pData->ChunkInputStatusAtLineTriggerBitsPerLine)
        , ChunkInputStatusAtLineTriggerIndex(m_pData->ChunkInputStatusAtLineTriggerIndex)
        , ChunkInputStatusAtLineTriggerValue(m_pData->ChunkInputStatusAtLineTriggerValue)
        , ChunkLineStatusAll(m_pData->ChunkLineStatusAll)
        , ChunkLineTriggerEndToEndCounter(m_pData->ChunkLineTriggerEndToEndCounter)
        , ChunkLineTriggerIgnoredCounter(m_pData->ChunkLineTriggerIgnoredCounter)
        , ChunkOffsetX(m_pData->ChunkOffsetX)
        , ChunkOffsetY(m_pData->ChunkOffsetY)
        , ChunkPayloadCRC16(m_pData->ChunkPayloadCRC16)
        , ChunkPixelFormat(m_pData->ChunkPixelFormat)
        , ChunkShaftEncoderCounter(m_pData->ChunkShaftEncoderCounter)
        , ChunkStride(m_pData->ChunkStride)
        , ChunkTimestamp(m_pData->ChunkTimestamp)
        , ChunkTriggerinputcounter(m_pData->ChunkTriggerinputcounter)
        , ChunkWidth(m_pData->ChunkWidth)
    {
    }


    ///////////////////////////////////////////////////////////////////////////
    //
    BaslerCameraChunkDataParams::~BaslerCameraChunkDataParams(void)
    {
        delete m_pData;
    }


    ///////////////////////////////////////////////////////////////////////////
    //
    void BaslerCameraChunkDataParams::_Initialize(GENAPI_NAMESPACE::INodeMap* pNodeMap)
    {
        m_pData->ChunkDynamicRangeMax.Attach(pNodeMap, "ChunkDynamicRangeMax");
        m_pData->ChunkDynamicRangeMin.Attach(pNodeMap, "ChunkDynamicRangeMin");
        m_pData->ChunkFrameTriggerCounter.Attach(pNodeMap, "ChunkFrameTriggerCounter");
        m_pData->ChunkFrameTriggerIgnoredCounter.Attach(pNodeMap, "ChunkFrameTriggerIgnoredCounter");
        m_pData->ChunkFramecounter.Attach(pNodeMap, "ChunkFramecounter");
        m_pData->ChunkFramesPerTriggerCounter.Attach(pNodeMap, "ChunkFramesPerTriggerCounter");
        m_pData->ChunkHeight.Attach(pNodeMap, "ChunkHeight");
        m_pData->ChunkInputStatusAtLineTriggerBitsPerLine.Attach(pNodeMap, "ChunkInputStatusAtLineTriggerBitsPerLine");
        m_pData->ChunkInputStatusAtLineTriggerIndex.Attach(pNodeMap, "ChunkInputStatusAtLineTriggerIndex");
        m_pData->ChunkInputStatusAtLineTriggerValue.Attach(pNodeMap, "ChunkInputStatusAtLineTriggerValue");
        m_pData->ChunkLineStatusAll.Attach(pNodeMap, "ChunkLineStatusAll");
        m_pData->ChunkLineTriggerEndToEndCounter.Attach(pNodeMap, "ChunkLineTriggerEndToEndCounter");
        m_pData->ChunkLineTriggerIgnoredCounter.Attach(pNodeMap, "ChunkLineTriggerIgnoredCounter");
        m_pData->ChunkOffsetX.Attach(pNodeMap, "ChunkOffsetX");
        m_pData->ChunkOffsetY.Attach(pNodeMap, "ChunkOffsetY");
        m_pData->ChunkPayloadCRC16.Attach(pNodeMap, "ChunkPayloadCRC16");
        m_pData->ChunkPixelFormat.Attach(pNodeMap, "ChunkPixelFormat");
        m_pData->ChunkShaftEncoderCounter.Attach(pNodeMap, "ChunkShaftEncoderCounter");
        m_pData->ChunkStride.Attach(pNodeMap, "ChunkStride");
        m_pData->ChunkTimestamp.Attach(pNodeMap, "ChunkTimestamp");
        m_pData->ChunkTriggerinputcounter.Attach(pNodeMap, "ChunkTriggerinputcounter");
        m_pData->ChunkWidth.Attach(pNodeMap, "ChunkWidth");
    }

    //! \endcond

} // namespace Pylon
} // namespace BaslerCameraChunkDataParams_Params

#ifdef _MSC_VER
#pragma warning( pop )
#endif