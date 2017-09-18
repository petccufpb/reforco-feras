void parIMP(){

int par[50];
int impar[50];
int parcount = 0, imparcount = 0;
int aux,i;

for(i = 0; i < 100; i++){
    aux = i;

    if((aux % 2) == 0){
        par[parcount] = aux;
        parcount++;

    }else{
        impar[imparcount] = aux;
        imparcount++;


    }

}

printf("Pares:\t");
for(i = 0; i < 50;i++){
    printf("\t%d",par[i]);
}

printf("\nImpares:\t");
for(i = 0; i < 50;i++){
    printf("\t%d",impar[i]);
}

}



int main(){

parIMP();


}
