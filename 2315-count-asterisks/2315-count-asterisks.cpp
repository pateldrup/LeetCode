class Solution {
public:
    int countAsterisks(string s) {

       int count=0;
       
       bool insideBars= false;

       for(char ch: s){
        if(ch=='|'){

            insideBars= !insideBars;
        }
        else if(ch =='*' && insideBars==false){
            count++;
        }
       }
       return  count;
    }
};