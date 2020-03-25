#include<stdio.h>
#include<stdlib.h>


int main(){
    // burst, arrival, flag, waiting
    system("clear");
    int p[30][4], n, gt=0, loc=0, i, found=0;
    float pt[30]; 
    printf("Enter number of processes to add: ");
    scanf("%d", &n);
    printf("Enter burst time and arrival time for each process (in same order). Format: int int\n");
    for(i=0; i<n;i++){
        printf("p%d: ", i+1);
        scanf("%d %d", &p[i][0], &p[i][1]);
        p[i][2] = 0;
    }
    while (1){
        found = 0;
        for(i=0;i<n;i++){
            if (p[i][2] == 0){
                pt[i] = 0.0;
                found = 1;
                if (gt - p[i][1] >=0){
                    found = 2;
                    p[i][3] = gt - p[i][1];
                    pt[i] = 1+ ((float)p[i][3]/(float)p[i][0]) - (float)(p[i][0]);
                    if(pt[i] > pt[loc]){
                        loc = i;
                    }
                }
            }
        }
        if (found == 1){
            gt+=1;
        } else if (found == 0){
            break;
        } else {
        printf("p%d\n", loc + 1);
        gt += p[loc][0];
        p[loc][2] = 1;
        pt[loc] = -100000;
        }
        
    }

    return 0;
}
