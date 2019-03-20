#include <iostream>
#include <sstream>

#include "starspace_wrapper.h"
#include "StarSpace/src/main.cpp"

namespace StarSpaceWrapper {

    using namespace starspace;

    StarSpaceApi::StarSpaceApi() {
        // HACK: A trick to get access to FastText's private members.
        // Reference: http://stackoverflow.com/a/8282638
        privateMembers = (StarSpacePrivateMembers*) &starSpace;
    }

    void StarSpaceApi::runCmd(int argc, char **argv) {
        main(argc, argv);
    }
}
