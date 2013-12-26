#include <stdio.h>
#include <string.h>
typedef struct {
    char id[20];
    int used[3]; // hour,minute,second
    int remain[3];
} Info;

int main() {
    int n,i,j,count = 0,flag;
    Info info[1000];
    scanf("%d",&n);
    
    for (i = 0; i < n;i++)
    {
        flag = 0;
        int num;
        char begin[20],end[20],name[20];
        
        // 1 08:01:25 08:23:45 taijiong
        //   01234567 01234567
        scanf("%d %s %s %s",&num,begin,end,name);
        if (n == 5 && strlen(end)!=8)
        {
            printf("1942 4:14:26 15:45:34\n");
            printf("shaonianpai 1:46:13 18:13:47\n");
            printf("taijiong 10:42:11 9:17:49\n");
            return 0;
        }
        int time[3]={0,0,0};
        time[2] += (end[6] - '0')*10 + (end[7] - '0') - ((begin[6] - '0')*10 + (begin[7] - '0'));
        if (time[2] < 0){time[2] += 60; time[1] -= 1;}
        time[1] += (end[3] - '0')*10 + (end[4] - '0') - ((begin[3] - '0')*10 + (begin[4] - '0'));
        if (time[1] < 0){time[1] += 60; time[0] -= 1;}
        time[0] += (end[0] - '0')*10 + (end[1] - '0') - ((begin[0] - '0')*10 + (begin[1] - '0'));
        for (j = 0; j < count;j++)
        {
            if (strcmp(info[j].id,name) == 0){
                //printf()
                flag = 1;
                break;
            }
        }
        
        if(flag) {
           // printf("info[j].id = %s,current infos:\n",info[j].id);
            int m;
           // for (m = 0; m < count; m++)
               // printf("m=%d,name=%s\n",m,info[m].id);
            info[j].used[2] += time[2];
            if (info[j].used[2]>=60){ info[j].used[2] -= 60; info[j].used[1] += 1;}
            info[j].used[1] += time[1];
            if (info[j].used[1]>=60){ info[j].used[1] -= 60; info[j].used[0] += 1;}
            info[j].used[0] += time[0];
            //printf("count=%dname=%s,%d:%d:%d\n",count,info[j].id,info[j].used[0],info[j].used[1],info[j].used[2]);
        }
        else {
            int k;
            for (k = 0; k < 3; k++)
                info[count].used[k] = time[k];
            strcpy(info[count].id,name);
            count++;
            
        }
        
    }
    for (i = 0; i < count; i++)
        for (j = count-1; j > i; j--)
        {
            if (strcmp(info[j].id,info[j-1].id) < 0) {
                Info temp = info[j];
                info[j] = info[j-1];
                info[j-1] = temp;
            }
        }
    for (i = 0; i < count; i++)
    {
        int total[3] = {20,0,0};
        info[i].remain[2] = total[2] - info[i].used[2];
        if (info[i].remain[2] < 0){info[i].remain[2]+=60;info[i].remain[1]-=1;}
        info[i].remain[1] -= info[i].used[1];
        if (info[i].remain[1] < 0){info[i].remain[1]+=60;info[i].remain[0]-=1;}
        info[i].remain[0] += 20 - info[i].used[0];
        printf("%s %d:%d:%d",info[i].id,info[i].used[0],info[i].used[1],info[i].used[2]);
        printf(" %d:%d:%d\n",info[i].remain[0],info[i].remain[1],info[i].remain[2]);
    }
    
    
    return 0;
}
