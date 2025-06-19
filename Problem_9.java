public class Problem_9 {
    
    public static boolean isPalindrome(int x){
        if (x < 0) {
            throw new IllegalArgumentException("Negatives are not allowed");
        } else {
            int orginal = x, remainder;
            long reserved = 0;

            while (x != 0) {
                remainder = x % 10;
                reserved = reserved * 10 + remainder;
                x /= 10;
            }

            if (orginal == reserved) {
                return true;
            }else {
                return false;
            }

        }
    }

    public static void main(String[] args) {
        System.out.println(isPalindrome(12131));
    }

}
