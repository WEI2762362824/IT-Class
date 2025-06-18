#include <stdio.h>

int main() {
    int numStudents;
    // 1. 提示用户输入学生人数
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // 用于存储每个学生的分数、姓名（可选）、平均分、等级
    float scores[numStudents];
    char names[numStudents][50]; 
    char grades[numStudents];

    // 2. 输入每个学生的信息（姓名和分数）
    for (int i = 0; i < numStudents; i++) {
        printf("Enter name for student %d (or press enter to skip): ", i + 1);
        // 读取姓名（支持跳过，即无姓名情况 ）
        scanf(" %[^\n]", names[i]); 
        printf("Enter score for student %d: ", i + 1);
        scanf("%f", &scores[i]);
        // 3. 这里单个科目，平均分即分数本身（若多个科目可扩展数组和计算逻辑 ）
    }

    // 4. 根据平均分（这里等价于分数）用 if - else 确定等级
    for (int i = 0; i < numStudents; i++) {
        if (scores[i] >= 90) {
            grades[i] = 'A';
        }
        else if (scores[i] >= 80) {
            grades[i] = 'B';
        } 
        else if (scores[i] >= 70) {
            grades[i] = 'C';
        }
        else if (scores[i] >= 60) {
            grades[i] = 'D';
        } 
        else {
            grades[i] = 'F';
        }
    }

    // 5. 显示每个学生的结果
    printf("\nStudent Results:\n");
    for (int i = 0; i < numStudents; i++) {
        // 若姓名为空（仅按回车情况 ），简化显示学号形式
        if (names[i][0] == '\0') { 
            printf("Student %d:\n", i + 1);
        } else {
            printf("Student: %s\n", names[i]);
        }
        printf("Score: %.2f\n", scores[i]);
        printf("Grade: %c\n\n", grades[i]);
    }

    return 0;
}
