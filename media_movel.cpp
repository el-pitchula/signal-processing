const int LDRPin = A0;
const int num_amostras = 5; // Número de amostras
int amostras[num_amostras];
int index = 0;

void setup() {
    Serial.begin(9600);
}

void loop() {
    amostras[index] = analogRead(LDRPin);
    index = (index + 1) % num_amostras;

    int soma = 0;
    for (int i = 0; i < num_amostras; i++) {
        soma += amostras[i];
    }
    int media = soma / num_amostras;

    Serial.println(media); // Imprime o valor médio
    delay(100);
}