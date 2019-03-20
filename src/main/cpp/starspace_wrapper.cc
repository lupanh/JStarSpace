#include <iostream>
#include <sstream>

#include "starspace_wrapper.h"
#include "StarSpace/src/main.cpp"

namespace StarSpaceWrapper {

    using namespace starspace;

    void StarSpaceApi::runCmd(int argc, char **argv) {
        main(argc, argv);
    }
}
