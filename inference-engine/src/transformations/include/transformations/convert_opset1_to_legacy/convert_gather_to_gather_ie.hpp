// Copyright (C) 2018-2020 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include <vector>
#include <memory>
#include <string>

#include <ie_api.h>

#include <ngraph/pass/graph_rewrite.hpp>
#include <ngraph_ops/gather_ie.hpp>

#include "ngraph/op/gather.hpp"
#include "ngraph/op/constant.hpp"
#include "ngraph/op/fused/squeeze.hpp"
#include "ngraph/op/fused/unsqueeze.hpp"


namespace ngraph {
namespace pass {

class INFERENCE_ENGINE_API_CLASS(ConvertGatherToGatherIE);

}  // namespace pass
}  // namespace ngraph

class ngraph::pass::ConvertGatherToGatherIE : public ngraph::pass::GraphRewrite {
public:
    ConvertGatherToGatherIE() : GraphRewrite() {
        convert_gather_to_gather_ie();
    }

private:
    void convert_gather_to_gather_ie();
};
