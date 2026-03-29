//-----------------------------------------------------------------------------
//  Basler pylon SDK
//  Copyright (c) 2023-2025 Basler AG
//  http://www.baslerweb.com
//-----------------------------------------------------------------------------
/*!
\file
\brief grab result data class.
*/

#ifndef INCLUDED_BASLERCAMERAFILE_H_90437477
#define INCLUDED_BASLERCAMERAFILE_H_90437477

#pragma once

#include "BaslerCameraChunkDataParams.h"
#include <pylon/GrabResultData.h>

namespace Pylon
{
    /// The grab result data.
    class BaslerCameraGrabResultData : public CGrabResultData, public BaslerCameraChunkDataParams_Params::BaslerCameraChunkDataParams
    {
    protected:
        // Internal use only. The grab result data class should only be created by the instant camera class.
        friend class BaslerCamera;
        BaslerCameraGrabResultData()
        {
        }

        // Internal use only.
        virtual void Destroy()
        {
            delete this;
        }

        // Internal use only.
        virtual void Initialize()
        {
            _Initialize( &GetChunkDataNodeMap());
        }
    };

} // namespace Pylon

#endif /* INCLUDED_BASLERCAMERAFILE_H_90437477 */