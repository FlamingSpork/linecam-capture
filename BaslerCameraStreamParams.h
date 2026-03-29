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

#ifndef BASLER_PYLON_BASLERCAMERASTREAMPARAMS_H
#define BASLER_PYLON_BASLERCAMERASTREAMPARAMS_H

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
namespace BaslerCameraStreamParams_Params
{
    //**************************************************************************************************
    // Enumerations
    //**************************************************************************************************
    //! Valid values for AccessMode
    enum AccessModeEnums
    {
        AccessMode_Control,  //!< Applies to: ruL2048-19gm
        AccessMode_Exclusive,  //!< Applies to: ruL2048-19gm
        AccessMode_Monitor,  //!< Applies to: ruL2048-19gm
        AccessMode_NotInitialized  //!< Applies to: ruL2048-19gm
    };

    //! Valid values for Status
    enum StatusEnums
    {
        Status_Closed,  //!< The stream grabber is closed - Applies to: ruL2048-19gm
        Status_Locked,  //!< The stream grabber is locked - Applies to: ruL2048-19gm
        Status_NotInitialized,  //!< The stream grabber is not initialized - Applies to: ruL2048-19gm
        Status_Open  //!< The stream grabber is open - Applies to: ruL2048-19gm
    };

    //! Valid values for TransmissionType
    enum TransmissionTypeEnums
    {
        TransmissionType_LimitedBroadcast,  //!< The stream data is sent to all devices in the local area network (255 255 255 255) - Applies to: ruL2048-19gm
        TransmissionType_Multicast,  //!< The stream data is sent to selected devices in the local network   - Applies to: ruL2048-19gm
        TransmissionType_SubnetDirectedBroadcast,  //!< The stream data is sent to all devices in the same subnet as the camera - Applies to: ruL2048-19gm
        TransmissionType_Unicast,  //!< The stream data is sent to a single device in the local network - Applies to: ruL2048-19gm
        TransmissionType_UseCameraConfig  //!< The stream transmission configuration is read from the camera - Applies to: ruL2048-19gm
    };

    //! Valid values for Type
    enum TypeEnums
    {
        Type_SocketDriver  //!< The socket driver is used - Applies to: ruL2048-19gm
    };


    
    
    //**************************************************************************************************
    // Parameter class BaslerCameraStreamParams
    //**************************************************************************************************
    

    /*!
    \brief A parameter class containing all parameters as members that are available for ruL2048-19gm

    Sources:
    ruL2048-19gm 106152-01;U;ruL2048_19gm;V2.0-4
    */
    class BaslerCameraStreamParams
    {
    //----------------------------------------------------------------------------------------------------------------
    // Implementation
    //----------------------------------------------------------------------------------------------------------------
    protected:
        // If you want to show the following methods in the help file
        // add the string HIDE_CLASS_METHODS to the ENABLED_SECTIONS tag in the doxygen file
        //! \cond HIDE_CLASS_METHODS
        
            //! Constructor
            BaslerCameraStreamParams(void);

            //! Destructor
            ~BaslerCameraStreamParams(void);

            //! Initializes the references
            void _Initialize(GENAPI_NAMESPACE::INodeMap*);

    //! \endcond

    private:
        class BaslerCameraStreamParams_Data;
        BaslerCameraStreamParams_Data* m_pData;


    //----------------------------------------------------------------------------------------------------------------
    // References to features
    //----------------------------------------------------------------------------------------------------------------
    public:
    //! \name Categories: Debug
    //@{
    /*!
        \brief Indicates the mode of access the current application has to the device - Applies to: ruL2048-19gm

    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AccessMode" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<AccessModeEnums>& AccessMode;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Enables negotiation of the packet size to find the largest possible packet size - Applies to: ruL2048-19gm

        
        
        Enables or disables probing of a working large packet size before grabbing.
        Using large packets reduces the overhead for transferring images but
        whether a large packet can be transported depends on the used network hardware
        and its configuration.
        
        
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AutoPacketSize" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& AutoPacketSize;

    //@}


    //! \name Categories: IPConfig
    //@{
    /*!
        \brief IP address to which the stream grabber sends all stream data - Applies to: ruL2048-19gm

    
        Visibility: Expert

        Selected by: TransmissionType

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=DestinationAddr" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IStringEx& DestinationAddr;

    //@}


    //! \name Categories: IPConfig
    //@{
    /*!
        \brief Port to which the stream grabber sends all stream data - Applies to: ruL2048-19gm

        
        
            The camera will send all stream data to this port. If you manually enter a port
            number, it is highly recommended not to choose a port from the ephemeral port
            range of the operating system (https://en.wikipedia.org/wiki/Ephemeral_port)
            in order to avoid port collisions.

            <b>Port configuration:</b>
            <ol>
            <li>
                <b>Unicast</b><br>
                The port is determined automatically.
                Manually choosing a port number might be useful for certain firewall configurations.
            </li>
            <br>
            <li>
                <b>Broadcast & Multicast</b><br>
                For each device reachable by a specific network interface, a unique, unused port number
                must be assigned. Be aware that the suggested default value might be already in use.
                Choose an unused port or 0=autoselect in that case. The controlling application and all 
                monitor applications must use the same port number. There is no autoselect feature
                availbale for monitor applications, i.e., monitor applications must not use the 0 value.
                For monitor applications it is convenient to use the 'UseCameraConfig' value for the 
                'TransmissionType' feature instead. For more details see the 'TransmissionType' feature.
            </li>
            </ol>
        
        
    
        Visibility: Expert

        Selected by: TransmissionType

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=DestinationPort" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& DestinationPort;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Enables the packet resend mechanism - Applies to: ruL2048-19gm

        
        
        An image frame consists of n numbers of packets. Each packet has a header consisting of a 24-bit packet ID. 
        This packet ID increases with each packet sent, and makes it possible for the receiving end to know if a 
        particular packet has been lost during the transfer. If 'ResendPacketMechanism' is enabled, and the receiving
        end notices a lost packet, it will request the other side (e.g. the camera) to send the lost packet again.
        If enabled, the 'ResendPacketMechanism' can cause delays in the timing because the sending end will resend 
        the lost packet. If disabled, image data packet(s) can get lost which results in an incomplete received frame.
        You have to weigh the disadvantages and advantages for your special application to decide whether to enable 
        or disable this command.<br><br>
        
        Default setting: <i>Enabled</i>
        
        
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=EnableResend" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& EnableResend;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Firewall traversal interval value in milliseconds  This applies to the stream channel  If set to 0, this feature is disabled - Applies to: ruL2048-19gm

    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FirewallTraversalInterval" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& FirewallTraversalInterval;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Maximum time in milliseconds to receive all packets of a frame - Applies to: ruL2048-19gm

        
      
      An image frame consists of n numbers of packets. The 'FrameRetention' always starts from the
      point in time the receiving end notices that a packet has been received for a particular frame. 
      If the transmission of packets of a frame is not completed within the 'FrameRetention' time, 
      the corresponding frame is delivered with status 'Failed'.
      
      
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrameRetention" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& FrameRetention;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Maximum size (in bytes) of a buffer used for grabbing images - Applies to: ruL2048-19gm

    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=MaxBufferSize" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& MaxBufferSize;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Maximum number of buffers that can be used simultaneously for grabbing images - Applies to: ruL2048-19gm

    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=MaxNumBuffer" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& MaxNumBuffer;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Maximum number of resend requests per missing packet - Applies to: ruL2048-19gm

    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=MaximumNumberResendRequests" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& MaximumNumberResendRequests;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Timeout period in milliseconds between two packets within one frame - Applies to: ruL2048-19gm

        
        
        An image frame consists of n numbers of packets. The packet timeout counting is (re)started
        each time a packet is received. If the timeout expires (e.g. no packet was received 
        during the last 'PacketTimeout' period), the 'Resend Packet Mechanism' is started. 
        For information, see the 'EnableResend' feature.
        
        
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=PacketTimeout" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& PacketTimeout;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Determines the largest possible packet size - Applies to: ruL2048-19gm

        
        
        Determines the largest possible packet size. 
        Using large packets reduces the overhead for transmitting images. 
        Whether large packets can be transmitted depends on the network hardware used 
        and its configuration.
        
        
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ProbePacketSize" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& ProbePacketSize;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Thread priority of the receive thread - Applies to: ruL2048-19gm

        Thread priority of the receive thread. Only available if the socket driver is used. To assign the priority, the Receive Thread Priority Override parameter must be set to true.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ReceiveThreadPriority" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ReceiveThreadPriority;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Enables assigning a custom priority to the thread which receives incoming stream packets - Applies to: ruL2048-19gm

    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ReceiveThreadPriorityOverride" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& ReceiveThreadPriorityOverride;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Size (in frames) of the receive window in which the stream grabber looks for missing packets - Applies to: ruL2048-19gm

    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ReceiveWindowSize" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ReceiveWindowSize;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Amount of packet resend requests to be batched, i e , sent together - Applies to: ruL2048-19gm

    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ResendRequestBatching" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ResendRequestBatching;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Time to wait (in milliseconds) between sending a resend request and considering the request as lost - Applies to: ruL2048-19gm

    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ResendRequestResponseTimeout" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ResendRequestResponseTimeout;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Threshold after which resend requests are initiated - Applies to: ruL2048-19gm

    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ResendRequestThreshold" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ResendRequestThreshold;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Time to wait (in milliseconds) between detecting a missing packet and sending a resend request - Applies to: ruL2048-19gm

    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ResendTimeout" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ResendTimeout;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Socket buffer size in kilobytes - Applies to: ruL2048-19gm

    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=SocketBufferSize" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& SocketBufferSize;

    //@}


    //! \name Categories: Statistic
    //@{
    /*!
        \brief Number of frames lost because there were no buffers in the queue - Applies to: ruL2048-19gm

    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=Statistic_Buffer_Underrun_Count" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& Statistic_Buffer_Underrun_Count;

    //@}


    //! \name Categories: Statistic
    //@{
    /*!
        \brief GigE cameras: Number of buffers with at least one failed packet  A packet is considered failed if its status is not 'success'  Other cameras: Number of buffers that returned with an error status   - Applies to: ruL2048-19gm

    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=Statistic_Failed_Buffer_Count" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& Statistic_Failed_Buffer_Count;

    //@}


    //! \name Categories: Statistic
    //@{
    /*!
        \brief Number of failed packets - Applies to: ruL2048-19gm

    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=Statistic_Failed_Packet_Count" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& Statistic_Failed_Packet_Count;

    //@}


    //! \name Categories: Statistic
    //@{
    /*!
        \brief Number of packets requested by packet resend commands - Applies to: ruL2048-19gm

    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=Statistic_Resend_Packet_Count" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& Statistic_Resend_Packet_Count;

    //@}


    //! \name Categories: Statistic
    //@{
    /*!
        \brief Number of emitted packet resend commands sent - Applies to: ruL2048-19gm

    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=Statistic_Resend_Request_Count" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& Statistic_Resend_Request_Count;

    //@}


    //! \name Categories: Statistic
    //@{
    /*!
        \brief GigE cameras: Number of frames received  Other cameras: Number of buffers processed - Applies to: ruL2048-19gm

    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=Statistic_Total_Buffer_Count" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& Statistic_Total_Buffer_Count;

    //@}


    //! \name Categories: Statistic
    //@{
    /*!
        \brief Number of packets received - Applies to: ruL2048-19gm

    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=Statistic_Total_Packet_Count" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& Statistic_Total_Packet_Count;

    //@}


    //! \name Categories: Debug
    //@{
    /*!
        \brief Indicates the current status of the stream grabber - Applies to: ruL2048-19gm

    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=Status" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<StatusEnums>& Status;

    //@}


    //! \name Categories: IPConfig
    //@{
    /*!
        \brief Sets how stream data is transferred within the network - Applies to: ruL2048-19gm

        
        
        <ul>
        <li>
            <b>Default (Unicast)</b><br>
            The camera sends stream data to a single controlling application. Other devices cannot
            receive the stream data.
        </li>
        <br>
        <li>
            <b>Broadcast</b><br>
            The camera sends the stream data to all devices on the network. The application which 
            starts/stops the acquisition is called the controlling application. Other applications
            can receive the stream data. These applications are called monitor applications, because 
            they open the camera in read-only mode. This implies that monitor applications cannot 
            change the camera configuration and they cannot start/stop the image acquisition.
            However, monitor applications can request resend requests for lost stream data packets.
            <br><br>
            Attention: Broadcasting the stream data packets uses a high amount of network bandwidth 
                       because the stream data packets are forwarded to all devices attached to the 
                       network, even if they are not interested in receiving stream data.
        </li>
        <br>
        <li>
            <b>Multicast</b><br>
            Multicasting is very similar to broadcasting. The main advantage of multicasting is that 
            multicasting saves network bandwidth, because the image data stream is only sent to those 
            devices that are interested in receiving the data. To achieve this, the camera sends image 
            data streams to members of a multicast group only. A multicast group is defined by an IP 
            address taken from the multicast address range (224.0.0.0 to 239.255.255.255). 
            <br><br>
            Every device that wants to receive a multicast data stream has to be a member of a multicast 
            group. A member of a specific multicast group only receives data destinated for this group.
            Data for other groups is not received. Usually network adapters and switches are able to filter
            the data efficently on hardware level (layer-2 packet filtering). 
            <br><br>
            When multicasting is enabled for pylon, pylon automatically takes care of joining and leaving 
            the multicast groups defined by the destination IP address. Keep in mind that some addresses
            from the multicast address range are reserved for general purposes. The address range from
            239.255.0.0 to 239.255.255.255 is assigned by RFC 2365 as a locally administered address space.
            Use one of these addresses if you are not sure.
            <br><br>
            On protocol level multicasting involves a so-called IGMP message (IGMP = Internet Group Management Protocol).
            To benefit from multicasting, managed network switches should be used. These managed network 
            switches support the IGMP protocol. Managed network switches supporting the IGMP protocol
            will forward multicast packets only if there is a connected device that has joined the
            corresponding multicast group. If the switch does not support the IGMP protocol, multicast
            is equivalent to broadcasting.
            <br><br>
            Recommendation:<br>
            <ul>
                <li>
                    Each camera should stream to a different multicast group.
                </li>
                <li>
                    Streaming to different multicast groups reduces the CPU load and saves network bandwidth 
                    if the network switches supports the IGMP protocol.
                </li>
            </ul>
        </li>
        <br>        
        <li>
            <b>Use camera configuration</b><br>
            This setting is only available if the application has opened the device in monitor mode. If 
            the controlling application has already configured the camera stream channel and has possibly 
            started the acquisition, the monitor application can read all required configuration data 
            from the camera. Additional configuration is not required. This setting can only be used if 
            the controlling application has established the stream channel (by opening a pylon stream 
            grabber object), and the monitor application is started afterwards.
            <br><br>
            Note, when using broadcast and multicast configurations: When there is more than one camera 
            device reachable by one network interface, make sure that for each camera a different port
            number must be assigned. For assigning port numbers, see the 'DestinationPort' feature.
        </li>
        </ul>
        
        
    
        Visibility: Expert

        Selecting Parameters: DestinationAddr and DestinationPort

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TransmissionType" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<TransmissionTypeEnums>& TransmissionType;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Sets the driver type to be used by the stream grabber - Applies to: ruL2048-19gm

    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=Type" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<TypeEnums>& Type;

    //@}


    //! \name Categories: Debug
    //@{
    /*!
        \brief Indicates whether the GigE Accelerator is currently available - Applies to: ruL2048-19gm

    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TypeIsGigEAcceleratorAvailable" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& TypeIsGigEAcceleratorAvailable;

    //@}


    //! \name Categories: Debug
    //@{
    /*!
        \brief Indicates whether the socket driver is currently available - Applies to: ruL2048-19gm

    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TypeIsSocketDriverAvailable" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& TypeIsSocketDriverAvailable;

    //@}


    //! \name Categories: Debug
    //@{
    /*!
        \brief Indicates whether the pylon GigE Vision Filter Driver is currently available - Applies to: ruL2048-19gm

    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TypeIsWindowsFilterDriverAvailable" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& TypeIsWindowsFilterDriverAvailable;

    //@}


    //! \name Categories: Debug
    //@{
    /*!
        \brief Indicates whether the pylon GigE Vision Performance Driver is currently available - Applies to: ruL2048-19gm

    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TypeIsWindowsIntelPerformanceDriverAvailable" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& TypeIsWindowsIntelPerformanceDriverAvailable;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Use Extended ID if available in the camera and supported by the driver - Applies to: ruL2048-19gm

        
            
        Enabling this setting will use Extended ID if it is supported by the camera and driver.
        If it is not supported, it will not be used and this setting has no negative side effects.
        
        
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=UseExtendedIdIfAvailable" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& UseExtendedIdIfAvailable;

    //@}


        private:
        //! \cond HIDE_CLASS_METHODS

            //! not implemented copy constructor
            BaslerCameraStreamParams(BaslerCameraStreamParams&);

            //! not implemented assignment operator
            BaslerCameraStreamParams& operator=(BaslerCameraStreamParams&);

        //! \endcond
    };

} // namespace Pylon
} // namespace BaslerCameraStreamParams_Params

#ifdef _MSC_VER
#pragma warning( pop )
#endif

#endif // BASLER_PYLON_BASLERCAMERASTREAMPARAMS_H