class Solution {
public:
    int countPairs(vector<int>& de) {
        unordered_map<long,long> st;
        set<int> visi;
        long count=0;
        int l=de.size();
        sort(de.begin(),de.end());
        for(int i=0;i<l;i++){
            int rem=pow(2,ceil(log(de[i])/log(2)));
            if(de[i]==0) {
                st[de[i]]+=1;
                continue;
            }
            if(ceil(log(de[i])/log(2))==floor(log(de[i])/log(2))){
                if(st.find(de[i])!=st.end()){
                    count+=st[de[i]];
                    count%=1000000007;
                }
                if(st.find(0)!=st.end()){
                    count+=st[0];
                    count%=1000000007;
                }
            }
            else if(st.find(rem-de[i])!=st.end()){
                count+=st[rem-de[i]];
                count%=1000000007;
            }
            st[de[i]]+=1;
        }
        return count%1000000007;
    }
};