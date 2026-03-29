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
#include "BaslerCameraTLParams.h"

#ifdef _MSC_VER
#pragma warning( push )
#pragma warning( disable : 4250 ) // warning C4250: 'Pylon::CXYZParameter': inherits 'Pylon::CParameter::Pylon::CParameter::ZYX' via dominance
#endif

//! The namespace containing the a control interface and related enumeration types for ruL2048-19gm
namespace Pylon
{
namespace BaslerCameraTLParams_Params
{
    //**************************************************************************************************
    // Enumeration support classes
    //**************************************************************************************************
    //! \cond HIDE_CLASS_METHODS

    ///////////////////////////////////////////////////////////////////////////
    //
    namespace EnumParameterClasses
    {
    }

    //! \endcond
    //**************************************************************************************************
    // Parameter class BaslerCameraTLParams implementation
    //**************************************************************************************************

    //! \cond HIDE_CLASS_METHODS
    
    ///////////////////////////////////////////////////////////////////////////
    //
    class BaslerCameraTLParams::BaslerCameraTLParams_Data
    {
    public:
        Pylon::CBooleanParameter CommandDuplicationEnable;
        Pylon::CBooleanParameter ConnectionGuardEnable;
        Pylon::CIntegerParameter HeartbeatTimeout;
        Pylon::CIntegerParameter MaxRetryCountRead;
        Pylon::CIntegerParameter MaxRetryCountWrite;
        Pylon::CBooleanParameter MigrationModeEnable;
        Pylon::CIntegerParameter ReadTimeout;
        Pylon::CIntegerParameter StatisticReadWriteTimeoutCount;
        Pylon::CIntegerParameter WriteTimeout;
    };


    ///////////////////////////////////////////////////////////////////////////
    //
    BaslerCameraTLParams::BaslerCameraTLParams(void)
        : m_pData(new BaslerCameraTLParams_Data())
        , CommandDuplicationEnable(m_pData->CommandDuplicationEnable)
        , ConnectionGuardEnable(m_pData->ConnectionGuardEnable)
        , HeartbeatTimeout(m_pData->HeartbeatTimeout)
        , MaxRetryCountRead(m_pData->MaxRetryCountRead)
        , MaxRetryCountWrite(m_pData->MaxRetryCountWrite)
        , MigrationModeEnable(m_pData->MigrationModeEnable)
        , ReadTimeout(m_pData->ReadTimeout)
        , StatisticReadWriteTimeoutCount(m_pData->StatisticReadWriteTimeoutCount)
        , WriteTimeout(m_pData->WriteTimeout)
    {
    }


    ///////////////////////////////////////////////////////////////////////////
    //
    BaslerCameraTLParams::~BaslerCameraTLParams(void)
    {
        delete m_pData;
    }


    ///////////////////////////////////////////////////////////////////////////
    //
    void BaslerCameraTLParams::_Initialize(GENAPI_NAMESPACE::INodeMap* pNodeMap)
    {
        m_pData->CommandDuplicationEnable.Attach(pNodeMap, "CommandDuplicationEnable");
        m_pData->ConnectionGuardEnable.Attach(pNodeMap, "ConnectionGuardEnable");
        m_pData->HeartbeatTimeout.Attach(pNodeMap, "HeartbeatTimeout");
        m_pData->MaxRetryCountRead.Attach(pNodeMap, "MaxRetryCountRead");
        m_pData->MaxRetryCountWrite.Attach(pNodeMap, "MaxRetryCountWrite");
        m_pData->MigrationModeEnable.Attach(pNodeMap, "MigrationModeEnable");
        m_pData->ReadTimeout.Attach(pNodeMap, "ReadTimeout");
        m_pData->StatisticReadWriteTimeoutCount.Attach(pNodeMap, "StatisticReadWriteTimeoutCount");
        m_pData->WriteTimeout.Attach(pNodeMap, "WriteTimeout");
    }

    //! \endcond

} // namespace Pylon
} // namespace BaslerCameraTLParams_Params

#ifdef _MSC_VER
#pragma warning( pop )
#endif