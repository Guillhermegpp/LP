#include <stdio.h>
int main(){
   int t,i,p;
   scanf("%d",&t);
   for(i=1;i<=t;i++){
       int l,c,i2,i3,i4,p;
       scanf("%d %d",&l,&c);
       char* wordpuzzle[l];
       for(i2=0;i2<l;i2++){
           wordpuzzle[i2] = (char*) malloc(c);
           scanf("%s",wordpuzzle[i2]);
       }
       scanf("%d",&p);
       char* words[p];
       for(i2=0;i2<p;i2++){
           if(l>c)words[i2] = (char*) malloc(l+1);
           else words[i2] = (char*) malloc(c+1);
           scanf("%s",words[i2]);
       }
       /*here the program goes through each word*/
       for(i2=0;i2<p;i2++){
            int counter=0; /*word counter*/
            /*here the program goes through the entire matrix*/
            for(i3=0;i3<l;i3++){
                for(i4=0;i4<c;i4++){
                    int li=0; /* letter index */
                    if(wordpuzzle[i3][i4]==words[i2][li]){
                        int flag=1;
                        if(words[i2][1]=='\0')counter++;
                        else{
                            if(wordpuzzle[i3+1][i4]==words[i2][li+1]){
                                while(words[i2][li]!='\0'){
                                    if(words[i2][li]!=wordpuzzle[i3+li][i4]){
                                        flag=0;
                                        break;
                                    }
                                    else li++;
                                }
                                if(flag==1)counter++;
                            }
                            li = 0;
                            flag = 1;
                            if(wordpuzzle[i3][i4+1]==words[i2][li+1]){
                                while(words[i2][li]!='\0'){
                                    if(words[i2][li]!=wordpuzzle[i3][i4+li]){
                                        flag=0;
                                        break;
                                    }
                                    else li++;
                                }
                                if(flag==1)counter++;
                            }
                        }
                    }
                }
            }
            printf("%d\n",counter);
       }
   }
   return 0;
}
