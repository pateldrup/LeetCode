class Solution {
public:
    string capitalizeTitle(string title) {
      
       
        int n = title.size();

        int start=0;

        while(start<n){

            int end= start;

            while(end <n && title[end] !=' ' ){

                end++;
            }
            int  len =end- start;

            for(int i=start; i<end;i++){
                title[i]= tolower(title[i]);

            }
            if(len>2){
                title[start]=toupper(title[start]);

            }
            start =end + 1;

        }

        return title;
    }
};