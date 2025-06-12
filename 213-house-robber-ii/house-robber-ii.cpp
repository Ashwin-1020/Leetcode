class Solution {
public:
    int rob(vector<int>& v) {
        if(v.size()==1) return v[0];
        if(v.size()==2) return max(v[0],v[1]);

        int a=v[0], b=max(v[0],v[1]),ans=b;

        for(int i=2;i<v.size()-1;i++){
            ans=max(b,a+v[i]);
            a=b;
            b=ans;
        }

        a=0,b=v[1];
        int c=b;

        for(int i=2;i<v.size();i++){
            c=max(b,a+v[i]);
            a=b;
            b=c;
        }

        return max(ans,c);
    }
};