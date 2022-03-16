int fatorial(int n){
    int fat = 1;
    for (fat = 1; n > 1; n--){
        fat = fat * n;
    }

    return printf("Fatorial: %d", fat);
}