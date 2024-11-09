#include <stdio.h>
#include <stdlib.h>

// 翻转第 x 行的第 l 到第 r 个元素
void flip_row(int **matrix, int n, int x, int l, int r) {
    for (int i = 0; i < (r - l + 1) / 2; i++) {
        int temp = matrix[x-1][l-1+i];
        matrix[x-1][l-1+i] = matrix[x-1][r-1-i];
        matrix[x-1][r-1-i] = temp;
    }
}

// 翻转第 y 列的第 l 到第 r 个元素
void flip_column(int **matrix, int n, int m, int y, int l, int r) {
    for (int i = 0; i < (r - l + 1) / 2; i++) {
        int temp = matrix[l-1+i][y-1];
        matrix[l-1+i][y-1] = matrix[r-1-i][y-1];
        matrix[r-1-i][y-1] = temp;
    }
}

// 对指定的三个位置上的数进行排序并重新放置
void sort_and_place(int **matrix, int x1, int y1, int x2, int y2, int x3, int y3) {
    int a = matrix[x1-1][y1-1];
    int b = matrix[x2-1][y2-1];
    int c = matrix[x3-1][y3-1];

    // 使用冒泡排序对 a, b, c 进行排序
    if (a > b) { int tmp = a; a = b; b = tmp; }
    if (a > c) { int tmp = a; a = c; c = tmp; }
    if (b > c) { int tmp = b; b = c; c = tmp; }

    // 将排序后的值放回原位置
    matrix[x1-1][y1-1] = a;
    matrix[x2-1][y2-1] = b;
    matrix[x3-1][y3-1] = c;
}

int main() {
    int n, m, q;
    scanf("%d %d %d", &n, &m, &q);

    // 动态分配矩阵空间
    int **matrix = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        matrix[i] = (int *)malloc(m * sizeof(int));
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 处理每个操作
    for (int i = 0; i < q; i++) {
        int op;
        scanf("%d", &op);
        if (op == 1) {
            int x, l, r;
            scanf("%d %d %d", &x, &l, &r);
            flip_row(matrix, n, x, l, r);
        } else if (op == 2) {
            int y, l, r;
            scanf("%d %d %d", &y, &l, &r);
            flip_column(matrix, n, m, y, l, r);
        } else if (op == 3) {
            int x1, y1, x2, y2, x3, y3;
            scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
            sort_and_place(matrix, x1, y1, x2, y2, x3, y3);
        }
    }

    // 输出最终的矩阵
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", matrix[i][j]);
            if (j < m - 1) printf(" ");
            
        }
        printf("\n");
    }
    // 释放矩阵空间
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}