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
#include "BaslerCameraEventParams.h"

#ifdef _MSC_VER
#pragma warning( push )
#pragma warning( disable : 4250 ) // warning C4250: 'Pylon::CXYZParameter': inherits 'Pylon::CParameter::Pylon::CParameter::ZYX' via dominance
#endif

//! The namespace containing the a control interface and related enumeration types for ruL2048-19gm
namespace Pylon
{
namespace BaslerCameraEventParams_Params
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
        class StatusEnumParameter : public Pylon::CEnumParameterT<StatusEnums>
        {
        public:
            StatusEnumParameter()
            {
            }

            virtual ~StatusEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Closed", 7),
                    TableItem_t("Open", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


    }

    //! \endcond
    //**************************************************************************************************
    // Parameter class BaslerCameraEventParams implementation
    //**************************************************************************************************

    //! \cond HIDE_CLASS_METHODS
    
    ///////////////////////////////////////////////////////////////////////////
    //
    class BaslerCameraEventParams::BaslerCameraEventParams_Data
    {
    public:
        Pylon::CIntegerParameter FirewallTraversalInterval;
        Pylon::CIntegerParameter NumBuffer;
        Pylon::CIntegerParameter RetryCount;
        EnumParameterClasses::StatusEnumParameter Status;
        Pylon::CIntegerParameter Timeout;
    };


    ///////////////////////////////////////////////////////////////////////////
    //
    BaslerCameraEventParams::BaslerCameraEventParams(void)
        : m_pData(new BaslerCameraEventParams_Data())
        , FirewallTraversalInterval(m_pData->FirewallTraversalInterval)
        , NumBuffer(m_pData->NumBuffer)
        , RetryCount(m_pData->RetryCount)
        , Status(m_pData->Status)
        , Timeout(m_pData->Timeout)
    {
    }


    ///////////////////////////////////////////////////////////////////////////
    //
    BaslerCameraEventParams::~BaslerCameraEventParams(void)
    {
        delete m_pData;
    }


    ///////////////////////////////////////////////////////////////////////////
    //
    void BaslerCameraEventParams::_Initialize(GENAPI_NAMESPACE::INodeMap* pNodeMap)
    {
        m_pData->FirewallTraversalInterval.Attach(pNodeMap, "FirewallTraversalInterval");
        m_pData->NumBuffer.Attach(pNodeMap, "NumBuffer");
        m_pData->RetryCount.Attach(pNodeMap, "RetryCount");
        m_pData->Status.Attach(pNodeMap, "Status");
        m_pData->Timeout.Attach(pNodeMap, "Timeout");
    }

    //! \endcond

} // namespace Pylon
} // namespace BaslerCameraEventParams_Params

#ifdef _MSC_VER
#pragma warning( pop )
#endif