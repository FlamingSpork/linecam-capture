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

#ifndef BASLER_PYLON_BASLERCAMERACHUNKDATAPARAMS_H
#define BASLER_PYLON_BASLERCAMERACHUNKDATAPARAMS_H

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
namespace BaslerCameraChunkDataParams_Params
{
    //**************************************************************************************************
    // Enumerations
    //**************************************************************************************************
    //! Valid values for ChunkPixelFormat
    enum ChunkPixelFormatEnums
    {
        ChunkPixelFormat_Todo  //!< TODO - Applies to: ruL2048-19gm
    };


    
    
    //**************************************************************************************************
    // Parameter class BaslerCameraChunkDataParams
    //**************************************************************************************************
    

    /*!
    \brief A parameter class containing all parameters as members that are available for ruL2048-19gm

    Sources:
    ruL2048-19gm 106152-01;U;ruL2048_19gm;V2.0-4
    */
    class BaslerCameraChunkDataParams
    {
    //----------------------------------------------------------------------------------------------------------------
    // Implementation
    //----------------------------------------------------------------------------------------------------------------
    protected:
        // If you want to show the following methods in the help file
        // add the string HIDE_CLASS_METHODS to the ENABLED_SECTIONS tag in the doxygen file
        //! \cond HIDE_CLASS_METHODS
        
            //! Constructor
            BaslerCameraChunkDataParams(void);

            //! Destructor
            ~BaslerCameraChunkDataParams(void);

            //! Initializes the references
            void _Initialize(GENAPI_NAMESPACE::INodeMap*);

    //! \endcond

    private:
        class BaslerCameraChunkDataParams_Data;
        BaslerCameraChunkDataParams_Data* m_pData;


    //----------------------------------------------------------------------------------------------------------------
    // References to features
    //----------------------------------------------------------------------------------------------------------------
    public:
    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Indicates the maximum possible pixel value in the acquired image - Applies to: ruL2048-19gm

        This value indicates indicates the maximum possible pixel value acquired in the image
    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkDynamicRangeMax;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Indicates the minimum possible pixel value in the acquired image - Applies to: ruL2048-19gm

        This value indicates the minimum possible pixel value in the acquired image.
    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkDynamicRangeMin;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief  Applies to: ruL2048-19gm

    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkFrameTriggerCounter;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief  Applies to: ruL2048-19gm

    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkFrameTriggerIgnoredCounter;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Indicates the value of the frame counter when the image was acquired - Applies to: ruL2048-19gm

        This integer indicates the value of the frame counter when the image was acquired.
    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkFramecounter;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief  Applies to: ruL2048-19gm

    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkFramesPerTriggerCounter;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Indicates the height of the area of interest represented in the acquired image - Applies to: ruL2048-19gm

        This value Indicates the height of the area of interest represented in the acquired image.
    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkHeight;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Number of bits per status - Applies to: ruL2048-19gm

    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkInputStatusAtLineTriggerBitsPerLine;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Used to select a certain status - Applies to: ruL2048-19gm

    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkInputStatusAtLineTriggerIndex;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Value of the status selected by 'Index' - Applies to: ruL2048-19gm

    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkInputStatusAtLineTriggerValue;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief A bit field that indicates the status of all of the camera's input and output lines when the image was acquired - Applies to: ruL2048-19gm

        This value is a bit field that indicates the status of all of the camera's input and output lines when the image was acquired.
    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkLineStatusAll;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief  Applies to: ruL2048-19gm

    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkLineTriggerEndToEndCounter;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief  Applies to: ruL2048-19gm

    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkLineTriggerIgnoredCounter;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Indicates the X offset of the area of interest represented in the acquired image - Applies to: ruL2048-19gm

        This value Indicates the X offset of the area of interest represented in the acquired image.
    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkOffsetX;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Indicates the Y offset of the area of interest represented in the acquired image - Applies to: ruL2048-19gm

        This value Indicates the Y offset of the area of interest represented in the acquired image.
    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkOffsetY;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Indicates the value of CRC checksum - Applies to: ruL2048-19gm

        This integer indicates the value of CRC checksum.
    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkPayloadCRC16;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Indicates the format of the pixel data in the acquired image - Applies to: ruL2048-19gm

        This enumeration lists the pixel formats that can be indicated by the pixel format chunk.
    
        Visibility: Beginner

    */
    Pylon::IEnumParameterT<ChunkPixelFormatEnums>& ChunkPixelFormat;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Shaft encoder counter at frame trigger - Applies to: ruL2048-19gm

    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkShaftEncoderCounter;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Indicates the number of bytes of data between the beginning of one line in the acquired image and the beginning of the next line in the acquired image - Applies to: ruL2048-19gm

        This value indicates the number of bytes of data between the beginning of one line in the acquired image and the beginning of the next line in the acquired image.
    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkStride;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Indicates the value of the timestamp when the image was acquired - Applies to: ruL2048-19gm

        This integer indicates the value of the timestamp when the image was acquired.
    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkTimestamp;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Indicates the value of the trigger input counter when the image was acquired - Applies to: ruL2048-19gm

        This integer indicates the value of the trigger input counter when the image was acquired.
    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkTriggerinputcounter;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Indicates the widtth of the area of interest represented in the acquired image - Applies to: ruL2048-19gm

        This value Indicates the width of the area of interest represented in the acquired image.
    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkWidth;

    //@}


        private:
        //! \cond HIDE_CLASS_METHODS

            //! not implemented copy constructor
            BaslerCameraChunkDataParams(BaslerCameraChunkDataParams&);

            //! not implemented assignment operator
            BaslerCameraChunkDataParams& operator=(BaslerCameraChunkDataParams&);

        //! \endcond
    };

} // namespace Pylon
} // namespace BaslerCameraChunkDataParams_Params

#ifdef _MSC_VER
#pragma warning( pop )
#endif

#endif // BASLER_PYLON_BASLERCAMERACHUNKDATAPARAMS_H