class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        bool found=false;
        char current;
        for(int i=0;i<letters.size();i++){
            if(letters[i]>target){
                found=true;
                current=letters[i];
                break;
            }
        }
        if(found==true){
            return current;
        }else{
            return letters[0];
        }
    }
};