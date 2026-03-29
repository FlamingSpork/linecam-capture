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
#include "BaslerCameraStreamParams.h"

#ifdef _MSC_VER
#pragma warning( push )
#pragma warning( disable : 4250 ) // warning C4250: 'Pylon::CXYZParameter': inherits 'Pylon::CParameter::Pylon::CParameter::ZYX' via dominance
#endif

//! The namespace containing the a control interface and related enumeration types for ruL2048-19gm
namespace Pylon
{
namespace BaslerCameraStreamParams_Params
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
        class AccessModeEnumParameter : public Pylon::CEnumParameterT<AccessModeEnums>
        {
        public:
            AccessModeEnumParameter()
            {
            }

            virtual ~AccessModeEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 4;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Control", 8),
                    TableItem_t("Exclusive", 10),
                    TableItem_t("Monitor", 8),
                    TableItem_t("NotInitialized", 15)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


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
                static const size_t cItemCount = 4;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Closed", 7),
                    TableItem_t("Locked", 7),
                    TableItem_t("NotInitialized", 15),
                    TableItem_t("Open", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class TransmissionTypeEnumParameter : public Pylon::CEnumParameterT<TransmissionTypeEnums>
        {
        public:
            TransmissionTypeEnumParameter()
            {
            }

            virtual ~TransmissionTypeEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 5;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("LimitedBroadcast", 17),
                    TableItem_t("Multicast", 10),
                    TableItem_t("SubnetDirectedBroadcast", 24),
                    TableItem_t("Unicast", 8),
                    TableItem_t("UseCameraConfig", 16)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class TypeEnumParameter : public Pylon::CEnumParameterT<TypeEnums>
        {
        public:
            TypeEnumParameter()
            {
            }

            virtual ~TypeEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("SocketDriver", 13)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


    }

    //! \endcond
    //**************************************************************************************************
    // Parameter class BaslerCameraStreamParams implementation
    //**************************************************************************************************

    //! \cond HIDE_CLASS_METHODS
    
    ///////////////////////////////////////////////////////////////////////////
    //
    class BaslerCameraStreamParams::BaslerCameraStreamParams_Data
    {
    public:
        EnumParameterClasses::AccessModeEnumParameter AccessMode;
        Pylon::CBooleanParameter AutoPacketSize;
        Pylon::CStringParameter DestinationAddr;
        Pylon::CIntegerParameter DestinationPort;
        Pylon::CBooleanParameter EnableResend;
        Pylon::CIntegerParameter FirewallTraversalInterval;
        Pylon::CIntegerParameter FrameRetention;
        Pylon::CIntegerParameter MaxBufferSize;
        Pylon::CIntegerParameter MaxNumBuffer;
        Pylon::CIntegerParameter MaximumNumberResendRequests;
        Pylon::CIntegerParameter PacketTimeout;
        Pylon::CCommandParameter ProbePacketSize;
        Pylon::CIntegerParameter ReceiveThreadPriority;
        Pylon::CBooleanParameter ReceiveThreadPriorityOverride;
        Pylon::CIntegerParameter ReceiveWindowSize;
        Pylon::CIntegerParameter ResendRequestBatching;
        Pylon::CIntegerParameter ResendRequestResponseTimeout;
        Pylon::CIntegerParameter ResendRequestThreshold;
        Pylon::CIntegerParameter ResendTimeout;
        Pylon::CIntegerParameter SocketBufferSize;
        Pylon::CIntegerParameter Statistic_Buffer_Underrun_Count;
        Pylon::CIntegerParameter Statistic_Failed_Buffer_Count;
        Pylon::CIntegerParameter Statistic_Failed_Packet_Count;
        Pylon::CIntegerParameter Statistic_Resend_Packet_Count;
        Pylon::CIntegerParameter Statistic_Resend_Request_Count;
        Pylon::CIntegerParameter Statistic_Total_Buffer_Count;
        Pylon::CIntegerParameter Statistic_Total_Packet_Count;
        EnumParameterClasses::StatusEnumParameter Status;
        EnumParameterClasses::TransmissionTypeEnumParameter TransmissionType;
        EnumParameterClasses::TypeEnumParameter Type;
        Pylon::CIntegerParameter TypeIsGigEAcceleratorAvailable;
        Pylon::CIntegerParameter TypeIsSocketDriverAvailable;
        Pylon::CIntegerParameter TypeIsWindowsFilterDriverAvailable;
        Pylon::CIntegerParameter TypeIsWindowsIntelPerformanceDriverAvailable;
        Pylon::CBooleanParameter UseExtendedIdIfAvailable;
    };


    ///////////////////////////////////////////////////////////////////////////
    //
    BaslerCameraStreamParams::BaslerCameraStreamParams(void)
        : m_pData(new BaslerCameraStreamParams_Data())
        , AccessMode(m_pData->AccessMode)
        , AutoPacketSize(m_pData->AutoPacketSize)
        , DestinationAddr(m_pData->DestinationAddr)
        , DestinationPort(m_pData->DestinationPort)
        , EnableResend(m_pData->EnableResend)
        , FirewallTraversalInterval(m_pData->FirewallTraversalInterval)
        , FrameRetention(m_pData->FrameRetention)
        , MaxBufferSize(m_pData->MaxBufferSize)
        , MaxNumBuffer(m_pData->MaxNumBuffer)
        , MaximumNumberResendRequests(m_pData->MaximumNumberResendRequests)
        , PacketTimeout(m_pData->PacketTimeout)
        , ProbePacketSize(m_pData->ProbePacketSize)
        , ReceiveThreadPriority(m_pData->ReceiveThreadPriority)
        , ReceiveThreadPriorityOverride(m_pData->ReceiveThreadPriorityOverride)
        , ReceiveWindowSize(m_pData->ReceiveWindowSize)
        , ResendRequestBatching(m_pData->ResendRequestBatching)
        , ResendRequestResponseTimeout(m_pData->ResendRequestResponseTimeout)
        , ResendRequestThreshold(m_pData->ResendRequestThreshold)
        , ResendTimeout(m_pData->ResendTimeout)
        , SocketBufferSize(m_pData->SocketBufferSize)
        , Statistic_Buffer_Underrun_Count(m_pData->Statistic_Buffer_Underrun_Count)
        , Statistic_Failed_Buffer_Count(m_pData->Statistic_Failed_Buffer_Count)
        , Statistic_Failed_Packet_Count(m_pData->Statistic_Failed_Packet_Count)
        , Statistic_Resend_Packet_Count(m_pData->Statistic_Resend_Packet_Count)
        , Statistic_Resend_Request_Count(m_pData->Statistic_Resend_Request_Count)
        , Statistic_Total_Buffer_Count(m_pData->Statistic_Total_Buffer_Count)
        , Statistic_Total_Packet_Count(m_pData->Statistic_Total_Packet_Count)
        , Status(m_pData->Status)
        , TransmissionType(m_pData->TransmissionType)
        , Type(m_pData->Type)
        , TypeIsGigEAcceleratorAvailable(m_pData->TypeIsGigEAcceleratorAvailable)
        , TypeIsSocketDriverAvailable(m_pData->TypeIsSocketDriverAvailable)
        , TypeIsWindowsFilterDriverAvailable(m_pData->TypeIsWindowsFilterDriverAvailable)
        , TypeIsWindowsIntelPerformanceDriverAvailable(m_pData->TypeIsWindowsIntelPerformanceDriverAvailable)
        , UseExtendedIdIfAvailable(m_pData->UseExtendedIdIfAvailable)
    {
    }


    ///////////////////////////////////////////////////////////////////////////
    //
    BaslerCameraStreamParams::~BaslerCameraStreamParams(void)
    {
        delete m_pData;
    }


    ///////////////////////////////////////////////////////////////////////////
    //
    void BaslerCameraStreamParams::_Initialize(GENAPI_NAMESPACE::INodeMap* pNodeMap)
    {
        m_pData->AccessMode.Attach(pNodeMap, "AccessMode");
        m_pData->AutoPacketSize.Attach(pNodeMap, "AutoPacketSize");
        m_pData->DestinationAddr.Attach(pNodeMap, "DestinationAddr");
        m_pData->DestinationPort.Attach(pNodeMap, "DestinationPort");
        m_pData->EnableResend.Attach(pNodeMap, "EnableResend");
        m_pData->FirewallTraversalInterval.Attach(pNodeMap, "FirewallTraversalInterval");
        m_pData->FrameRetention.Attach(pNodeMap, "FrameRetention");
        m_pData->MaxBufferSize.Attach(pNodeMap, "MaxBufferSize");
        m_pData->MaxNumBuffer.Attach(pNodeMap, "MaxNumBuffer");
        m_pData->MaximumNumberResendRequests.Attach(pNodeMap, "MaximumNumberResendRequests");
        m_pData->PacketTimeout.Attach(pNodeMap, "PacketTimeout");
        m_pData->ProbePacketSize.Attach(pNodeMap, "ProbePacketSize");
        m_pData->ReceiveThreadPriority.Attach(pNodeMap, "ReceiveThreadPriority");
        m_pData->ReceiveThreadPriorityOverride.Attach(pNodeMap, "ReceiveThreadPriorityOverride");
        m_pData->ReceiveWindowSize.Attach(pNodeMap, "ReceiveWindowSize");
        m_pData->ResendRequestBatching.Attach(pNodeMap, "ResendRequestBatching");
        m_pData->ResendRequestResponseTimeout.Attach(pNodeMap, "ResendRequestResponseTimeout");
        m_pData->ResendRequestThreshold.Attach(pNodeMap, "ResendRequestThreshold");
        m_pData->ResendTimeout.Attach(pNodeMap, "ResendTimeout");
        m_pData->SocketBufferSize.Attach(pNodeMap, "SocketBufferSize");
        m_pData->Statistic_Buffer_Underrun_Count.Attach(pNodeMap, "Statistic_Buffer_Underrun_Count");
        m_pData->Statistic_Failed_Buffer_Count.Attach(pNodeMap, "Statistic_Failed_Buffer_Count");
        m_pData->Statistic_Failed_Packet_Count.Attach(pNodeMap, "Statistic_Failed_Packet_Count");
        m_pData->Statistic_Resend_Packet_Count.Attach(pNodeMap, "Statistic_Resend_Packet_Count");
        m_pData->Statistic_Resend_Request_Count.Attach(pNodeMap, "Statistic_Resend_Request_Count");
        m_pData->Statistic_Total_Buffer_Count.Attach(pNodeMap, "Statistic_Total_Buffer_Count");
        m_pData->Statistic_Total_Packet_Count.Attach(pNodeMap, "Statistic_Total_Packet_Count");
        m_pData->Status.Attach(pNodeMap, "Status");
        m_pData->TransmissionType.Attach(pNodeMap, "TransmissionType");
        m_pData->Type.Attach(pNodeMap, "Type");
        m_pData->TypeIsGigEAcceleratorAvailable.Attach(pNodeMap, "TypeIsGigEAcceleratorAvailable");
        m_pData->TypeIsSocketDriverAvailable.Attach(pNodeMap, "TypeIsSocketDriverAvailable");
        m_pData->TypeIsWindowsFilterDriverAvailable.Attach(pNodeMap, "TypeIsWindowsFilterDriverAvailable");
        m_pData->TypeIsWindowsIntelPerformanceDriverAvailable.Attach(pNodeMap, "TypeIsWindowsIntelPerformanceDriverAvailable");
        m_pData->UseExtendedIdIfAvailable.Attach(pNodeMap, "UseExtendedIdIfAvailable");
    }

    //! \endcond

} // namespace Pylon
} // namespace BaslerCameraStreamParams_Params

#ifdef _MSC_VER
#pragma warning( pop )
#endif