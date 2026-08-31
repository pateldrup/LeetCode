class Solution {
public:
    int lengthOfLastWord(string s) {
            
            string res ="";

            bool started =false;

            for( int i=s.size()-1 ; i>=0;i--){

                if(s[i] !=' '){

                    started =true;

                    res=s[i] + res;
                }
                else if
                (started){

                    break;
                }
            }
            return res.size();
    }
};