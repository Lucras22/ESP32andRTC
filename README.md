# Registro de Timestamp com RTC DS1307
Este repositório contém um código para captura de timestamps utilizando o módulo RTC DS1307 com um microcontrolador. O principal objetivo é registrar a data e hora local, permitindo que os dados sejam organizados mesmo quando não há conexão com a internet.

## 📌 Funcionalidades
- Captura do timestamp em tempo real utilizando o RTC DS1307.
- Formatação da data e hora no padrão hhmmssddMMyyyy.
- Pode ser utilizado para registrar eventos quando não há conexão com um servidor.
- Integração com outros projetos, como armazenamento de dados em um cartão SD para posterior sincronização.
## 🛠️ Dependências
- Placa compatível com Arduino (ESP32, Arduino Uno, etc.).
- Módulo RTC DS1307.

  ### Bibliotecas necessárias:
   - Wire.h (para comunicação I2C).
    - RTClib.h (para manipulação do RTC).
 
## 🔄 Possível Integração
Este código pode ser complementado por outro repositório focado no armazenamento de dados em um cartão SD. Quando não houver internet disponível, os timestamps capturados podem ser salvos em arquivos .txt no SD card, garantindo que nenhuma informação seja perdida.

![image](https://github.com/user-attachments/assets/0545c1a7-40d4-44f2-8484-d8a671d22ba3)

