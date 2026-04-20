class Solution {
public:
    int pivotInteger(int n) {
        int total = n * (n + 1) / 2;
        int pivot = sqrt(total);
        
        if(pivot * pivot == total)
            return pivot;
        
        return -1;
    }
};
//time - O(1)
//see NOTE

/*MY APPROACH -

class Solution {
public:
    int sumBetween(int a, int b){
    int n = abs(b - a) + 1;
    return n * (a + b) / 2;
    }

    int pivotInteger(int n) {
        int sum=0;
        int sum2=0;
        for(int i=1;i<=n;i++){
            sum=sumBetween(1,i);
            sum2=sumBetween(i,n);
            if(sum==sum2)return i;
        }
        return -1;
    }
};

time - O(N)*/