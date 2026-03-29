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

#ifndef BASLER_PYLON_BASLERCAMERAEVENTPARAMS_H
#define BASLER_PYLON_BASLERCAMERAEVENTPARAMS_H

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
namespace BaslerCameraEventParams_Params
{
    //**************************************************************************************************
    // Enumerations
    //**************************************************************************************************
    //! Valid values for Status
    enum StatusEnums
    {
        Status_Closed,  //!< The low level event grabber is closed - Applies to: ruL2048-19gm
        Status_Open  //!< The low level event grabber is open - Applies to: ruL2048-19gm
    };


    
    
    //**************************************************************************************************
    // Parameter class BaslerCameraEventParams
    //**************************************************************************************************
    

    /*!
    \brief A parameter class containing all parameters as members that are available for ruL2048-19gm

    Sources:
    ruL2048-19gm 106152-01;U;ruL2048_19gm;V2.0-4
    */
    class BaslerCameraEventParams
    {
    //----------------------------------------------------------------------------------------------------------------
    // Implementation
    //----------------------------------------------------------------------------------------------------------------
    protected:
        // If you want to show the following methods in the help file
        // add the string HIDE_CLASS_METHODS to the ENABLED_SECTIONS tag in the doxygen file
        //! \cond HIDE_CLASS_METHODS
        
            //! Constructor
            BaslerCameraEventParams(void);

            //! Destructor
            ~BaslerCameraEventParams(void);

            //! Initializes the references
            void _Initialize(GENAPI_NAMESPACE::INodeMap*);

    //! \endcond

    private:
        class BaslerCameraEventParams_Data;
        BaslerCameraEventParams_Data* m_pData;


    //----------------------------------------------------------------------------------------------------------------
    // References to features
    //----------------------------------------------------------------------------------------------------------------
    public:
    //! \name Categories: Root
    //@{
    /*!
        \brief Firewall traversal interval value in milliseconds  This applies to the event channel  If set to 0, this feature is disabled - Applies to: ruL2048-19gm

    
        Visibility: Guru

    */
    Pylon::IIntegerEx& FirewallTraversalInterval;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Number of buffers to be used - Applies to: ruL2048-19gm

        Number of Buffers that are going to be used receiving events. .
    
        Visibility: Expert

    */
    Pylon::IIntegerEx& NumBuffer;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Maximum number of retries - Applies to: ruL2048-19gm

        Number retry attempts by the camera to get an acknowledge for a sent event message.
    
        Visibility: Expert

    */
    Pylon::IIntegerEx& RetryCount;

    //@}


    //! \name Categories: Debug
    //@{
    /*!
        \brief For internal use only - Applies to: ruL2048-19gm

    
        Visibility: Guru

    */
    Pylon::IEnumParameterT<StatusEnums>& Status;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Acknowledge timeout in milliseconds - Applies to: ruL2048-19gm

        Time to wait by the camera if an acknowledge request is configured (RetryCount != 0) to wait until the acknowledge arrives before resending the event message on its own.
    
        Visibility: Expert

    */
    Pylon::IIntegerEx& Timeout;

    //@}


        private:
        //! \cond HIDE_CLASS_METHODS

            //! not implemented copy constructor
            BaslerCameraEventParams(BaslerCameraEventParams&);

            //! not implemented assignment operator
            BaslerCameraEventParams& operator=(BaslerCameraEventParams&);

        //! \endcond
    };

} // namespace Pylon
} // namespace BaslerCameraEventParams_Params

#ifdef _MSC_VER
#pragma warning( pop )
#endif

#endif // BASLER_PYLON_BASLERCAMERAEVENTPARAMS_H