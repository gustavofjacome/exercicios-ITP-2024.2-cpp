float power(float b, int p) {
    float resultado = 1;
    

    for (int i = 0; i < p; i++) {
        resultado *= b;
    }
    
    return resultado;
}