public class Problem_69 {

    public static int mySqrt(int x) {
        if(x<0){
            throw new IllegalArgumentException("Negetive numbers not allowed");
        } else {
            int start = 0, end = x, ans = -1;

            while(start <= end){
                int mid = (start + end) / 2;
                int square = mid * mid;

                if(square == x){
                    return square;
                }
                else if(square < x){
                    ans = mid;
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
            }

            return ans;
        }
    }

    public static void main(String[] args) {
        int answer = mySqrt(10);

        System.out.println("Result: " + answer);
    }
}