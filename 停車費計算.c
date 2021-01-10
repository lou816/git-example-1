#include <stdio.h>  
  
int main(){  
    int start_hour = 0,start_min = 0;  
    int end_hour = 0,end_min = 0;  
    scanf("%d %d", &start_hour, &start_min);  
    scanf("%d %d", &end_hour, &end_min);  
    int cost = 0;  
    int start_time = 60*start_hour+start_min;  
    int end_time = 60*end_hour+end_min;
    //判斷停車時間<2小時
    if(end_time - start_time < 120){
        cost = (end_time - start_time)/30;  
        cost = cost*30;  
    }  
    else{
        //判斷停車時間<4小時  
        if(end_time - start_time < 240){  
            cost = (end_time - start_time - 120)/30;  
            cost = cost*40;  
            cost += 120;  
        }  
        else{
            //停車時間大於4小時計算
            cost = (end_time - start_time - 240)/30;  
            cost = cost*60;  
            cost += 280;  
        }  
    }  
    printf("%d\n", cost);  
}