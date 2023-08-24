char* STR(int numero) {

    int mensura = 10;
    int tamanhoN = 2;
    while (numero > mensura) {
        mensura *= 10;
        tamanhoN++;
    }
    char* String = new char[tamanhoN];
    int ParteNumerica = numero;
    int cont = tamanhoN - 2;
    do {
        String[cont] = ParteNumerica % 10 + 48;
        cont--;
        ParteNumerica /= 10;
    }while (cont >= 0);
            

    String[tamanhoN - 1] = 0;
        return String;
}
