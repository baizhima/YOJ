#include <stdio.h>

typedef struct {
    int r,g,b;
    
} Pixel;


int goodPixel(Pixel (*pixel)[100],int i, int j){
    if( (*(*(pixel + i) + j)).r == 0 && (*(*(pixel + i) + j)).g == 0 &&
       (*(*(pixel + i) + j)).b == 0) return 0;
    else return 1;
}

int pixelRepair(Pixel (*pixel)[100],Pixel (*pixel2)[100],int n, int m, int i, int j)
{
    
    int valid = 0,sr = 0, sg = 0, sb = 0,change = 0;
    double avgr,avgg,avgb;
    int newr,newg,newb;
    if (i > 0 && goodPixel(pixel,i-1,j)) // upper pixel
    {
        valid += 1;
        sr += (*(*(pixel + i-1) + j)).r;
        sg += (*(*(pixel + i-1) + j)).g;
        sb += (*(*(pixel + i-1) + j)).b;
    }
    if (i < n-1 && goodPixel(pixel,i+1,j)) // lower pixel
    {
        valid += 1;
        sr += (*(*(pixel + i+1) + j)).r;
        sg += (*(*(pixel + i+1) + j)).g;
        sb += (*(*(pixel + i+1) + j)).b;
    }
    if (j > 0 && goodPixel(pixel,i,j-1)) // left pixel
    {
        valid += 1;
        sr += (*(*(pixel + i) + j-1)).r;
        sg += (*(*(pixel + i) + j-1)).g;
        sb += (*(*(pixel + i) + j-1)).b;
    }
    if (j < n-1 && goodPixel(pixel,i,j+1))
    {
        valid += 1;
        sr += (*(*(pixel + i) + j+1)).r;
        sg += (*(*(pixel + i) + j+1)).g;
        sb += (*(*(pixel + i) + j+1)).b;
    }
    if (valid == 0) return change;
    avgr = sr * 1.0 / valid;
    avgg = sg * 1.0 / valid;
    avgb = sb * 1.0 / valid;
    if(avgr - sr / valid > 10e-5)
        newr = sr / valid + 1;
        else
        newr = sr / valid;
    if(avgg - sg / valid > 10e-5)
        newg = sg / valid + 1;
    else
        newg = sg / valid;
    if(avgb - sb / valid > 10e-5)
        newb = sb / valid + 1 ;
    else
        newb = sb / valid;
    if ((*(*(pixel + i) + j)).r != newr
        ||(*(*(pixel + i) + j)).g != newg
        ||(*(*(pixel + i) + j)).b != newb) change = 1;
    (*(*(pixel2 + i) + j)).r = newr;
    (*(*(pixel2 + i) + j)).g = newg;
    (*(*(pixel2 + i) + j)).b = newb;
    return change;
    
}

int repair(Pixel (*pixel)[100],Pixel (*pixel2)[100],int n, int m)
{
    int i,j;
    int bad = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            if(goodPixel(pixel,i,j))
            {
                *(*(pixel2 + i) + j) = *(*(pixel + i) + j);
                continue; // do not modify good pixel
            }
            bad += pixelRepair(pixel,pixel2,n,m,i,j);
            //bad += 1;
        }
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            *(*(pixel + i) + j) = *(*(pixel2 + i) + j);
        }
    return bad;
}

int PictureGood(Pixel (*pixel)[100],int n, int m)
{
    int i,j;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            if(!goodPixel(pixel,i,j)) return 0;
        }
    return 1;
}

int main()
{
    int n,m,i,j;
    Pixel pixel[100][100]; // old generation
    Pixel pixel2[100][100]; // new generation
    scanf("%d %d",&n,&m);
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            char c1[5],c2[5],c3[5];
            int r,g,b;
            scanf("%s %d %s %d %s %d",c1,&r,c2,&g,c3,&b);
            //if (j == m-1)scanf("\n");
            pixel[i][j].r = r; pixel[i][j].g = g; pixel[i][j].b = b;
        }
    
    while (1)
    {
        int flag = 0;
        flag = repair(pixel,pixel2,n,m);
       // printf("\nflag = %d\n\n",flag);
        /*
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
            {
                if (j != 0)printf(" ");
                printf("R %d G %d B %d",pixel[i][j].r,pixel[i][j].g ,pixel[i][j].b);
                if (j == m-1)printf("\n");
                //else printf(" ");
            }
        */
        
        if (PictureGood(pixel,n,m)|| flag == 0) break;
    }
    //print out
    printf("\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            if (j != 0)printf(" ");
            printf("R %d G %d B %d",pixel[i][j].r,pixel[i][j].g ,pixel[i][j].b);
            if (j == m-1)printf("\n");
            //else printf(" ");
        }
        
}
