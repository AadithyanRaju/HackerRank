import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int base = scan.nextInt();
        int height = scan.nextInt();
        scan.close();
        if (base <= 0 || height <= 0) {
            System.out.println("java.lang.Exception: Breadth and height must be positive");
            return;
        }
        scan.close();
        int parallelogramArea = base * height;
        System.out.println(parallelogramArea);
    }
}
