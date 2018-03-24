/**
 * Sirene de polícia com speaker.
 *
 * @author Desconhecido
 **/
#define tempo 10
int frequencia = 0;
int Pinofalante = 12;

void setup()
{
  pinMode(Pinofalante,OUTPUT); //Pino do buzzer
}

void loop()
{
  for (frequencia = 150; frequencia < 1800; frequencia += 1) 
  {
    tone(Pinofalante, frequencia, tempo); 
    delay(1);
  }
  for (frequencia = 1800; frequencia > 150; frequencia -= 1) 
  {
    tone(Pinofalante, frequencia, tempo); 
    delay(1);
  }

}
