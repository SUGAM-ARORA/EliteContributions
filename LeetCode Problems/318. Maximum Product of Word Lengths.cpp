class Solution {
public:
    int maxProduct(vector<string>& words) {
        int maxLength = 0;
        vector<int> mask(words.size(), 0);

        for(int i =0 ;i<words.size(); i++){
            for(char ch: words[i]){
                mask[i] |= (1 << (ch-'a'));
            }
        }

        for(int i =0; i<words.size(); i++){
            for(int j = i+1; j<words.size(); j++){
                if((mask[i] & mask[j]) == 0){

                
                int product = words[i].length() * words[j].length();
                maxLength = max(maxLength, product);
            }
            }
        }
    
    return maxLength;
    }
};
