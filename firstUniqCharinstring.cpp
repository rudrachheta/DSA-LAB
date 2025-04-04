class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int>mp;
        for(int i=s.size()-1 ; i>=0 ; i--){
            mp[s[i]]++;
        }
        char ch;
        int a=0;
        unordered_map <char, int> :: iterator it;
        for(it=mp.begin() ; it!=mp.end() ; ++it){
            if(it->second==1 && a==0){
                ch=it->first; a=1;
            }
        }

        for(int i=0 ; i<s.size() ; i++){
            if(s[i]==ch){
                return  i;
            }
        }
        return -1;
    }
};
