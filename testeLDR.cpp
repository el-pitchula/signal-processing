const int LDRPin = A0;

void setup() {
    Serial.begin(9600); // Inicializa a comunicação serial
}

void loop() {
    int leitura = analogRead(LDRPin); // Lê o valor analógico do LDR
    Serial.println(leitura); // Imprime a leitura no monitor serial
    delay(500); // Espera 500ms entre as leituras
}