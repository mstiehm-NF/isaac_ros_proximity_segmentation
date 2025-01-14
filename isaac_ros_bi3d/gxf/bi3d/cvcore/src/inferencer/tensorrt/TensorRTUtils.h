// SPDX-FileCopyrightText: NVIDIA CORPORATION & AFFILIATES
// Copyright (c) 2021-2023 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// SPDX-License-Identifier: Apache-2.0
#ifndef TENSORRT_UTILS_H
#define TENSORRT_UTILS_H

#include "NvInferRuntime.h"
#include "cv/core/Tensor.h"
#include "cv/inferencer/Errors.h"

namespace cvcore { namespace inferencer {

/*
 * Maps tensorrt datatype to cvcore Channel type.
 * @param channelType cvcore channel type.
 * @param dtype tensorrt datatype
 * return error code
 */
std::error_code getCVCoreChannelTypeFromTensorRT(cvcore::ChannelType &channelType, nvinfer1::DataType dtype);

/*
 * Maps tensorrt datatype to cvcore Channel type.
 * @param channelLayout cvcore channel type.
 * @param dtype tensorrt layout
 * return error code
 */
std::error_code getCVCoreChannelLayoutFromTensorRT(cvcore::TensorLayout &channelLayout,
                                                   nvinfer1::TensorFormat tensorFormat);

}} // namespace cvcore::inferencer

#endif
