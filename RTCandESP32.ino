#include <Wire.h>       // Comunicação I2C
#include <RTClib.h>     // Biblioteca para o DS1307

RTC_DS1307 rtc;         // Cria um objeto para acessar o RTC
String datatempo;

void setup() {
    Serial.begin(115200);
    
    if (!rtc.begin()) {         // Verifica se o RTC está conectado
        Serial.println("Erro: RTC não encontrado!");
        while (1);
    }

    Serial.println("RTC iniciado.");
}

void loop() {
  
    // Tempo Real (RTC)
// Obtém a data e hora atuais
DateTime now = rtc.now();

// Formata os dados na variável datatempo com dois dígitos quando necessário
String hora = (now.hour() < 10) ? "0" + String(now.hour()) : String(now.hour());
String minuto = (now.minute() < 10) ? "0" + String(now.minute()) : String(now.minute());
String segundo = (now.second() < 10) ? "0" + String(now.second()) : String(now.second());
String dia = (now.day() < 10) ? "0" + String(now.day()) : String(now.day());
String mes = (now.month() < 10) ? "0" + String(now.month()) : String(now.month());
String ano = String(now.year());

// Concatena tudo em um único formato desejado
datatempo = hora + minuto + segundo + dia + mes + ano;
    
    delay(1000);  // Atualiza a cada 1 segundo
}
