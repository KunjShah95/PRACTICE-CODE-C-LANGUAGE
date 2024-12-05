#include<stdio.h>
#define NUM_STUDENTS 5
#define NUM_SUBJECTS 5

int main(){
    int codes[NUM_STUDENTS];
    int marks[NUM_STUDENTS][NUM_SUBJECTS];
    int totalMarks[NUM_STUDENTS]={0};
    int i,j;
    for(i=0;i<NUM_STUDENTS;i++){    
        printf("Enter code for student %d : ",i+1);
        scanf("%d",&codes[i]);
        for(j=0;j<NUM_SUBJECTS;j++){
            printf("Enter marks for student %d for subject %d : ",i+1,j+1);
            scanf("%d",&marks[i][j]);
            totalMarks[i]+=marks[i][j];
        }
    }
    int top1=-1,top2=-1;
    for(i =0;i<NUM_STUDENTS;i++){
        if(totalMarks[i]>totalMarks[top1]){
            top2 = top1;
            top1 = i;
        }else if(totalMarks[i]>totalMarks[top1] && i!=top1){
            top2 = i;
        }
        }    
        printf("\nTop Student:Code=%d,TotalMarks=%d\n",codes[top1],totalMarks[top1]);
        printf("Top Student:Code=%d,TotalMarks=%d\n",codes[top2],totalMarks[top2]);
     return 0;
}