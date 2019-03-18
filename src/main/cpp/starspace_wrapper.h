#ifndef STARSPACE_WRAPPER_H
#define STARSPACE_WRAPPER_H

#include "StarSpace/src/starspace.h"
#include "starspace_wrapper_misc.h"

namespace StarSpaceWrapper {

    using namespace starspace;

    class StarSpaceApi {
    private:
        StarSpace starSpace;
        StarSpacePrivateMembers* privateMembers;
    public:
        StarSpaceApi();
        void runCmd(int, char **);
    };
}

#endif
