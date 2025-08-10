class Solution {
public:
        unordered_map<char,int>countDigits(string s){
            unordered_map<char, int> freq;
            for(char c :s){
                freq[c]++;
            }
            return freq;
        }
    bool reorderedPowerOf2(int n) {
        string s = to_string(n);
        unordered_map<char,int>digits = countDigits(s);
        for(int i=0; i<31;i++){
            string pow = to_string(1<<i);
            if(pow.length()== s.length()){
                unordered_map<char,int>powcount= countDigits(pow);
                if(powcount==digits){
                return true;
            }
            
            }
        }
        return false;
    }
};