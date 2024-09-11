class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp;
        int size1 = s.size();
        int size2 = t.size();
        if(size1 != size2){
            return false;
        }
        for(int i=0; i<size1; i++){
            mp[s[i]]++;
        }
        for(int i=0; i<size2; i++){
            if(mp.find(t[i])==mp.end()){
                return false;
            }
            else{
                mp[t[i]]--;
            }
        }
        for(auto j:mp){
            if(j.second<0){
                return false;
            }
        }
        return true;

    }
};
