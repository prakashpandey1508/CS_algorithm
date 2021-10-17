#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int app = 0;
    int ora = 0;
    
    int s, t, a, b, m, n; 
    scanf("%d %d",&s,&t);
    scanf("%d %d",&a,&b);
    scanf("%d %d",&m,&n);
    int apple;
    for(int i = 0; i < m; i++){
       scanf("%d",&apple);
       if( s<=a+apple && a+apple<=t ) app++;
    }
    int orange;
    for(int j = 0; j < n; j++){
       scanf("%d",&orange);
        if( s<=b+orange && b+orange<=t ) ora++;
    }
    
    printf("%d\n%d\n",app,ora);
    
    return 0;
}