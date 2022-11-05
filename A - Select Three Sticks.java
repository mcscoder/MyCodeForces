import java.util.Arrays;
import java.util.Scanner;
 
public class Main {
	static Scanner in = new Scanner(System.in);
	
	public static void main(String[] args) {
		int t = in.nextInt();
		while (t --> 0) {
			int n = in.nextInt();
			int[] a = new int[n];
			for(int i = 0; i < n; i++) a[i] = in.nextInt();
			Arrays.sort(a);
			
			int min = (int) 1e11;
			for(int i = 2; i < n; i++) min = Math.min(min, a[i] - a[i - 2]);
			System.out.println(min);
		}
	}	
}
