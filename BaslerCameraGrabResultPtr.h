//-----------------------------------------------------------------------------
//  Basler pylon SDK
//  Copyright (c) 2023-2025 Basler AG
//  http://www.baslerweb.com
//-----------------------------------------------------------------------------
/*!
\file
\brief grab result ptr class.
*/

#ifndef INCLUDED_BASLERCAMERAFILE_H_19854797
#define INCLUDED_BASLERCAMERAFILE_H_19854797

#pragma once

#include "BaslerCameraGrabResultData.h"
#include <pylon/private/DeviceSpecificGrabResultPtr.h>

namespace Pylon
{
    /// The grab result smart pointer.
    PYLON_DEFINE_DEVICE_SPECIFIC_GRAB_RESULT_PTR( BaslerCameraGrabResultPtr, BaslerCameraGrabResultData)

} // namespace Pylon

#endif /* INCLUDED_BASLERCAMERAFILE_H_19854797 */