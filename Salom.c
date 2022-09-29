// Salom xammaga bugun silar bilan Toq yoki Juft sonni aniqlovchi dastur tuzamiz!


// Bu codelar xammasi GitHubda joylaganman

// accountini opisaniyada qoldiraman


//Code Boshlandi

#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[35];
    for(int i=0;i<5;i++){
    printf("%d-Sonlarni kiriting: ",i+1);
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            printf("%d-Juft son\n",arr[i]); // Juft qaysi Toq qaysi bilmeman uzilar tug'irlab olasilar!
        }
        else if(arr[i]%2!=0){
            printf("%d-Toq son\n",arr[i]);
        }
    }
// code tugadi

// Xammaga raxmad Like bosilar!


}