class Solution {
public:
    int integerReplacement(long long n) {
        int count = 0;
        // long n = n;
        while(n != 1){
            if(n%2 == 0){
                n /= 2;
                count++;
            }
            else if(n == 3 || n % 4 == 1){
                n --;
                count++;
            }
            else{
                n ++;
                count++; 
            }
        }
        return count;
    }
};