#include<stdio.h>
#include<stdlib.h>


int main(){
    // burst, arrival, flag, waiting
    system("clear");
    int process[30][4], n, global_time, loc=0, i, found=0, choice, temp1=0, temp2=0;
    float priority[30]; 
    printf("Enter number of processes: ");
    scanf("%d", &n);
    printf("Enter burst time and arrival time for each process (in same order). Format: int int\n");
    for(i=0; i<n;i++){
        printf("process %d: ", i+1);
        scanf("%d %d", &process[i][0], &process[i][1]);
        process[i][2] = 0;
        if (i==0){
            global_time = process[i][1];
        } else
        {
            if(process[i][1] < global_time){
                global_time = process[i][1];
            }
        }
        

    }
    system("clear");
    printf("pro\tbt\tat\twt\ttat\n");
    while (1){
        found = 0;
        for(i=0;i<n;i++){
            if (process[i][2] == 0){
                priority[i] = -100000000.0;
                if (found != 2) {
                    found = 1;
                }
                if (global_time - process[i][1] >=0){
                    found = 2;
                    process[i][3] = global_time - process[i][1];
                    priority[i] = 1+ ((float)process[i][3]/(float)process[i][0]) - (float)(process[i][0]);
                    if(priority[i] > priority[loc]){
                        loc = i;
                    }
                }
            }
        }
        if (found == 1){
            global_time -= process[loc][0];
            if (global_time == process[0][1]){
                global_time = process[1][1];
            } else {
                global_time = process[0][1];
            }
            for (i=0;i<n;i++){
                if (process[i][2] == 0){
                    if (process[i][1] < global_time){
                        global_time = process[i][1];
                    }
                }
            }
        }else if (found == 0){
            break;
        } else if(found == 2) {
            printf("p%d\t%d\t%d\t%d\t%d\n", loc + 1, process[loc][0],process[loc][1],process[loc][3],process[loc][0]+process[loc][3]);
            global_time += process[loc][0];
            process[loc][2] = 1;
            priority[loc] = -100000000.0;
        }
        
    }
    for (i=0;i<n;i++){
        temp1 += process[i][3];
        temp2 += process[i][0]+process[i][3];
    }
    printf("\nAverage Waiting Time: %.3f\nAverage Turnaround Time: %.3f\n", (float)temp1/(float)n, (float)temp2/(float)n);

    return 0;
}

