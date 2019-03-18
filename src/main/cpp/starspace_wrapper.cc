#include <iostream>
#include <sstream>

#include "starspace_wrapper.h"
#include "StarSpace/src/main.cc"

namespace StarSpaceWrapper {

    using namespace starspace;

    StarSpaceApi::StarSpaceApi() {
        privateMembers = (StarSpacePrivateMembers*) &starSpace;
    }

    void StarSpaceApi::runCmd(int argc, char **argv) {
        main(argc, argv);
    }
}
