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

#ifndef BASLER_PYLON_BASLERCAMERATLPARAMS_H
#define BASLER_PYLON_BASLERCAMERATLPARAMS_H

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
namespace BaslerCameraTLParams_Params
{
    //**************************************************************************************************
    // Enumerations
    //**************************************************************************************************

    
    
    //**************************************************************************************************
    // Parameter class BaslerCameraTLParams
    //**************************************************************************************************
    

    /*!
    \brief A parameter class containing all parameters as members that are available for ruL2048-19gm

    Sources:
    ruL2048-19gm 106152-01;U;ruL2048_19gm;V2.0-4
    */
    class BaslerCameraTLParams
    {
    //----------------------------------------------------------------------------------------------------------------
    // Implementation
    //----------------------------------------------------------------------------------------------------------------
    protected:
        // If you want to show the following methods in the help file
        // add the string HIDE_CLASS_METHODS to the ENABLED_SECTIONS tag in the doxygen file
        //! \cond HIDE_CLASS_METHODS
        
            //! Constructor
            BaslerCameraTLParams(void);

            //! Destructor
            ~BaslerCameraTLParams(void);

            //! Initializes the references
            void _Initialize(GENAPI_NAMESPACE::INodeMap*);

    //! \endcond

    private:
        class BaslerCameraTLParams_Data;
        BaslerCameraTLParams_Data* m_pData;


    //----------------------------------------------------------------------------------------------------------------
    // References to features
    //----------------------------------------------------------------------------------------------------------------
    public:
    //! \name Categories: Root
    //@{
    /*!
        \brief Enables sending all commands and receiving all acknowledges twice - Applies to: ruL2048-19gm

        Enables sending all commands and receiving all acknowledges twice. This option should only be enabled in case of network problems.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=CommandDuplicationEnable" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& CommandDuplicationEnable;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Enables the automatic start of the PylonGigEConnectionGuard - Applies to: ruL2048-19gm

    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ConnectionGuardEnable" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& ConnectionGuardEnable;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Heartbeat timeout value on the host side in milliseconds - Applies to: ruL2048-19gm

    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=HeartbeatTimeout" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& HeartbeatTimeout;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Maximum number of retries for read operations after a read operation has timed out - Applies to: ruL2048-19gm

    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=MaxRetryCountRead" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& MaxRetryCountRead;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Maximum number of retries for write operations after a write operation has timed out - Applies to: ruL2048-19gm

    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=MaxRetryCountWrite" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& MaxRetryCountWrite;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Enables mapping of certain SFNC 1 x node names to SFNC 2 x node names - Applies to: ruL2048-19gm

    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=MigrationModeEnable" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& MigrationModeEnable;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Read access timeout value in milliseconds - Applies to: ruL2048-19gm

    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ReadTimeout" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ReadTimeout;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Number of timeouts during read and write operations when waiting for a response from the device - Applies to: ruL2048-19gm

    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=StatisticReadWriteTimeoutCount" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& StatisticReadWriteTimeoutCount;

    //@}


    //! \name Categories: Root
    //@{
    /*!
        \brief Write access timeout in milliseconds - Applies to: ruL2048-19gm

    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=WriteTimeout" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& WriteTimeout;

    //@}


        private:
        //! \cond HIDE_CLASS_METHODS

            //! not implemented copy constructor
            BaslerCameraTLParams(BaslerCameraTLParams&);

            //! not implemented assignment operator
            BaslerCameraTLParams& operator=(BaslerCameraTLParams&);

        //! \endcond
    };

} // namespace Pylon
} // namespace BaslerCameraTLParams_Params

#ifdef _MSC_VER
#pragma warning( pop )
#endif

#endif // BASLER_PYLON_BASLERCAMERATLPARAMS_H