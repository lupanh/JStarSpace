Installation
1. git clone --recursive https://github.com/torayeff/JStarSpace
2. cd JStarSpace
3. mvn package

Example:
```java
import com.github.jstarspace.JStarSpace;

public class Main {

    public static void main(String[] args) {
        JStarSpace jss = new JStarSpace();

         // $./starspace train -trainFile data.txt -model modelSaveFile
        jss.runCmd(new String[] {
                "train",
                "-trainFile", "resources/data/labeled_data.txt",
                "-model", "resources/models/supervised.model"
        });
    }
}
```

Further implementation notes:
Refer to https://github.com/vinhkhuc/JFastText
