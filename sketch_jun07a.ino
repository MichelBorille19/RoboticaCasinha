const int botao = 8;
const int led = 13;
int estadoBotao = 0;

void setup() {
  pinMode (botao, INPUT_PULLUP);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  estadoBotao = !digitalRead(botao);

  Serial.print("Botao: ");
  Serial.println(estadoBotao);
  
  if (estadoBotao == HIGH) {
    pisca();
    pisca();
    pisca();
    pisca();
    pisca();
    pisca();
    pisca();
    pisca();
  }
}

void pisca(){
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(1000);
}
