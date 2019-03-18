package com.github.jstarspace;

import org.bytedeco.javacpp.PointerPointer;

import java.io.File;
import java.util.ArrayList;
import java.util.List;

public class JStarSpace {

    private StarSpaceWrapper.StarSpaceApi ssa;

    public JStarSpace() {
        ssa = new StarSpaceWrapper.StarSpaceApi();
    }

    public void runCmd(String[] args) {
        // Prepend "starspace" to the argument list so that it is compatible with C++'s main()
        String[] cArgs = new String[args.length + 1];
        cArgs[0] = "starspace";
        System.arraycopy(args, 0, cArgs, 1, args.length);
        ssa.runCmd(cArgs.length, new PointerPointer(cArgs));
    }

    public static void main(String[] args) {
        JStarSpace jss = new JStarSpace();
        jss.runCmd(args);
    }
}
