class Solution {
public:
    int reverse(int x) {
        long s=0;
        int rem=0;
        int t=abs(x);
        while(t>0)
        {
            rem=t%10;
            s=(s*10)+rem;
            t=t/10;
        }
        if(s>=pow(2,31)-1||s<=pow(-2,31))
        {
            return 0;
        }
        if(x>=0)
        return s;
        else
        return -s;
    }
};
//x s rem 
// 1056389759  0  0
//             9   9