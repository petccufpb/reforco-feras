
int MMC(int num1, int num2){
    int mmc, aux, i;

    for(i = 1; i <= num2; i++){
        aux = num1 * i;

        if((aux % num2) == 0){
            mmc = aux;
            i = num2 + i;
        }
    }

    return mmc;
}

int main(){

    int x = 0;
    int y = 0;

    printf("Insira o primeito valor: ");
    scanf("%d",&x);

    printf("Insira o segundo valor: ");
    scanf("%d",&y);

    printf("Resultado do MMC: %d",MMC(x,y));

    return 0;

}
