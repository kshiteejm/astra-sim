/******************************************************************************
This source code is licensed under the MIT license found in the
LICENSE file in the root directory of this source tree.
*******************************************************************************/

#ifndef __BASICLOGICALTOPOLOGY_HH__
#define __BASICLOGICALTOPOLOGY_HH__

#include <map>
#include <math.h>
#include <fstream>
#include <chrono>
#include <ctime>
#include <tuple>
#include <cstdint>
#include <list>
#include <vector>
#include <algorithm>
#include <chrono>
#include <sstream>
#include <assert.h>
#include "astra-sim/system/Common.hh"
#include "LogicalTopology.hh"

namespace AstraSim{
    class BasicLogicalTopology: public LogicalTopology{
    public:
        enum class BasicTopology{Ring,BinaryTree};
        BasicTopology basic_topology;
        BasicLogicalTopology(BasicTopology basic_topology){this->basic_topology=basic_topology;
            this->complexity=LogicalTopology::Complexity::Basic;}
        virtual ~BasicLogicalTopology()=default;
        int get_num_of_dimensions() override{return 1;};
        BasicLogicalTopology* get_basic_topology_at_dimension(int dimension,ComType type) override{return this;}
    };
}
#endif