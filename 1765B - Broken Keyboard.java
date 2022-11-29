import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t --> 0) {
            outer: {
                int n = in.nextInt();
                String s = in.next();
                try {
                    for(int i = 1; i < n; i += 3) {
                        if (s.charAt(i) != s.charAt(i + 1)) {
                            System.out.println("NO");
                            break outer;
                        }
                    }
                } catch (Exception e) {
                    System.out.println("NO");
                    break outer;
                }
                System.out.println("YES");
            }
        }
        in.close();
    }
}
