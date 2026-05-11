int main() {
    int n1;
    int array[10];

    printf("Quantidade de elementos (1 a 9): ");
    if (scanf("%d", &n1) >= 1 && n1 <= 9) {
        for (int i = 0; i < n1; i++) {
            printf("array[%d]: ", i);
            scanf("%d", &array[i]);
        }
    } else {
        printf("Quantidade incorreta, forneca novamente!\n");
    }


    return 0;
}