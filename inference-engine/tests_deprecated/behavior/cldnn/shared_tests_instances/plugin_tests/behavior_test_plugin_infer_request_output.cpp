// Copyright (C) 2018-2020 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#include "behavior_test_plugin_infer_request_output.hpp"
#include "cldnn_test_data.hpp"

INSTANTIATE_TEST_CASE_P(smoke_BehaviorTest, BehaviorPluginTestInferRequestOutput, ValuesIn(allOutputSupportedValues),
                        getOutputTestCaseName);
