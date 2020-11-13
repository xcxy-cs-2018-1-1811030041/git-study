#include <stdio.h>
struct stu{int num; char name[10]; int score[3];} student[5];
void print(struct stu student[5])
{   int i;
    printf("Num\t\tName\t\tEnglish\tMath\tPE\n");
    for(i=0;i<5;i++)
   {printf("%d\t\t",student[i].num);
    printf("%s\t\t",student[i].name);
    printf("%d\t%d\t%d\n",student[i].score[0],student[i].score[1],student[i].score[2]);
    printf("\n");}
}
int main()
{   void print(struct stu student[5]);
    int i;
    printf("请输入学生的信息：\n");
    for(i=0;i<5;i++)
        {printf("请输入第%d个学生的信息\n",i+1);
            printf("num:");
            scanf("%d",&student[i].num);
            printf("name:");
         scanf("%s",&student[i].name);
         printf("score:");
         scanf("%d%d%d",&student[i].score[0],&student[i].score[1],&student[i].score[2]);}
    print(student);
    return 0;
}