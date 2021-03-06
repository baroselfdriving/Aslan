/*
 * Originally included at Autoware.ai version 1.10.0 and
 * has been modified to fit the requirements of Project ASLAN.
 *
 * Copyright (C) 2020 Project ASLAN - All rights reserved
 *
 * Original copyright notice:
 * Copyright 2015-2019 Autoware Foundation. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "astar_util.h"

namespace astar_planner
{
WaveFrontNode::WaveFrontNode()
{
}

WaveFrontNode::WaveFrontNode(int x, int y, double cost) : index_x(x), index_y(y), hc(cost)
{
}

SimpleNode::SimpleNode()
{
}

SimpleNode::SimpleNode(int x, int y, int theta, double gc, double hc)
  : index_x(x), index_y(y), index_theta(theta), cost(gc + hc)
{
}

}  // namespace astar_planner
