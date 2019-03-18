#ifndef STARSPACE_WRAPPER_MISC_H
#define STARSPACE_WRAPPER_MISC_H

#include "StarSpace/src/utils/args.h"
#include "StarSpace/src/dict.h"
#include "StarSpace/src/matrix.h"
#include "StarSpace/src/model.h"

namespace StarSpaceWrapper {

    struct StarSpacePrivateMembers {
        std::shared_ptr <starspace::Args> args_;
        std::shared_ptr <starspace::Dictionary> dict_;
        std::shared_ptr <starspace::Matrix> input_;
        std::shared_ptr <starspace::Matrix> output_;
        std::shared_ptr <starspace::Model> model_;
    };
}

#endif
