//-----------------------------------------------------------------------------
//  Basler pylon SDK
//  Copyright (c) 2023-2025 Basler AG
//  http://www.baslerweb.com
//-----------------------------------------------------------------------------
/*!
\file
\brief instant camera array class.
*/

#ifndef INCLUDED_BASLERCAMERAFILE_H_75902398
#define INCLUDED_BASLERCAMERAFILE_H_75902398

#pragma once

#include "BaslerCamera.h"
#include <pylon/private/DeviceSpecificInstantCameraArray.h>

namespace Pylon
{
    /*!
    \class  BaslerCameraArrayArray
    \brief  BaslerCamera based instant camera array.

    \threading
        The BaslerCameraArrayArray class is not thread-safe.
    */
    class BaslerCameraArrayArray: public CDeviceSpecificInstantCameraArrayT<BaslerCamera>
    {
    public:
        /*!
            \copybrief CInstantCameraArray::CInstantCameraArray()
            \copydetails CInstantCameraArray::CInstantCameraArray()
        */
        BaslerCameraArrayArray() {}
        /*!
            \copybrief CInstantCameraArray::CInstantCameraArray( size_t)
            \copydetails CInstantCameraArray::CInstantCameraArray( size_t)
        */
        BaslerCameraArrayArray( size_t numberOfCameras) : CDeviceSpecificInstantCameraArrayT<BaslerCamera>(numberOfCameras) {}

    };

} // namespace Pylon

#endif /* INCLUDED_BASLERCAMERAFILE_H_75902398 */