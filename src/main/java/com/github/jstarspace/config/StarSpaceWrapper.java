package com.github.jstarspace.config;

import org.bytedeco.javacpp.annotation.Platform;
import org.bytedeco.javacpp.annotation.Properties;
import org.bytedeco.javacpp.tools.Info;
import org.bytedeco.javacpp.tools.InfoMap;
import org.bytedeco.javacpp.tools.InfoMapper;

/**
 * This configuration file is used for JavaCpp's parser to generate the actual StarSpaceWrapper.java
 *  starspace_wrapper.h includes StarSpaceApi's declarations,
 *  starspace_wrapper_javacpp.h includes *.cpp files for compiling.
 */
@Properties(value = @Platform(include = {"starspace_wrapper.h", "starspace_wrapper_javacpp.h"}),
        target = "com.github.jstarspace.StarSpaceWrapper")
public class StarSpaceWrapper implements InfoMapper {
    public void map(InfoMap infoMap) {
        infoMap
            .put(new Info("std::vector<std::string>").pointerTypes("StringVector").define());
    }
}