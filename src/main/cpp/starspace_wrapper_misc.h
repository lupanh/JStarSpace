#ifndef STARSPACE_WRAPPER_MISC_H
#define STARSPACE_WRAPPER_MISC_H

#include "StarSpace/src/utils/args.h"

namespace StarSpaceWrapper {

    struct StarSpacePrivateMembers {
        std::shared_ptr <starspace::Args> args_;
    };
}

#endif
