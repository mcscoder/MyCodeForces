import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t --> 0) {
            List<Integer> a = Arrays.asList(new Integer[3]);
            for(int i = 0; i < 3; i++) {
                a.set(i, in.nextInt());
            }
            Collections.sort(a);
            System.out.println(a.get(1));
        }
    }
}
