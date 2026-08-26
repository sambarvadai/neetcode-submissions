class Solution {
public:
    int climbStairs(int n) {
        return dp(n);
    }
    int dp(int n)
    {
        int base[2] = {1,2};
        int i=2;
        if(n<=2)
        {
            return n;
        }
        while(i<=n){
            int tmp = base[1];
            base[1] = base[0] + base[1];
            base[0] = tmp;
            i++;
        }
        return base[0];

    }
};
