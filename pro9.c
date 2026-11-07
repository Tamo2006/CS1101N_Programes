#include <stdio.h>

int main() {
    int mat[100][100];
    int n;

    // 1. Get matrix size
    printf("Enter size n: ");
    scanf("%d", &n);

    // 2. Read matrix elements
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Flags (1 = Yes, 0 = No)
    int sym = 1;
    int lt = 1;
    int diag = 1;

    // Diagonal sums
    int s1 = 0;
    int s2 = 0;

    // 3. Analyze matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            
            if (mat[i][j] != mat[j][i]) {
                sym = 0;
            }

            if (i < j && mat[i][j] != 0) {
                lt = 0;
	    }

            if (i != j && mat[i][j] != 0) {
                diag = 0;
            }

            if (i == j) {
                s1 = s1 + mat[i][j];
            }

            if (i + j == n - 1) {
                s2 = s2 + mat[i][j];
            }
        }
    }

    // 4. Print results
    printf("\nSymmetric: %s\n", sym ? "Yes" : "No");
    printf("Lower Triangular: %s\n", lt ? "Yes" : "No");
    printf("Diagonal: %s\n", diag ? "Yes" : "No");
    
    printf("Main Diagonal Sum: %d\n", s1);
    printf("Secondary Diagonal Sum: %d\n", s2);

    return 0;
}

