const int fv1 = 2; // farol verde 1
const int fa1 = 3; // farol amarelo 1
const int fvm1 = 4; // farol vermelho 1
const int pv1 = 5; // pedestre verde 1
const int pvm1 = 6; // pedestre vermelho 1
const int fv2 = 7; // farol verde 2
const int fa2 = 8; // farol amarelo 2
const int fvm2 = 9; // farol vermelho 2
const int pv2 = 10; // pedestre verde 2
const int pvm2 = 11; // pedestre vermelho 2

void setup()
{
  pinMode(fv1,OUTPUT);
  pinMode(fa1,OUTPUT); 
  pinMode(fvm1,OUTPUT); 
  pinMode(pv1,OUTPUT); 
  pinMode(pvm1,OUTPUT); 
  pinMode(fv2,OUTPUT); 
  pinMode(fa2,OUTPUT); 
  pinMode(fvm2,OUTPUT); 
  pinMode(pv2,OUTPUT); 
  pinMode(pvm2,OUTPUT); 
}

void loop()
{
  digitalWrite(fv1, 1);
  digitalWrite(pvm1, 1);
  digitalWrite(fvm2, 1);
   digitalWrite(pv2, 1);
  delay(3000); // acende Verde, vermelho, vermelho e verde
    digitalWrite(fv1, 0);
  digitalWrite(pvm1, 0);
  digitalWrite(fvm2, 0);
   digitalWrite(pv2, 0);
  delay(3); // apaga tudo pra n dar erro
  digitalWrite(fa1, 1);
  digitalWrite(pvm1, 1);
  digitalWrite(fvm2, 1);
   digitalWrite(pv2, 1);
  delay(2000); // acende amarelo, vermelho, vermelho e verde
   digitalWrite(pv2, 0);
	delay(3); // apaga tudo pra n dar erro
  digitalWrite(pvm2, 1);
  delay(250);// pisca pisca?
  digitalWrite(pvm2,0);
  delay(250);// pisca pisca?
     digitalWrite(pvm2, 1);
  delay(250);
  digitalWrite(pvm2,0);
  delay(250);// pisca pisca?
     digitalWrite(pvm2, 1);
  delay(250);// pisca pisca?
  digitalWrite(pvm2,0);
  delay(250);// pisca pisca?
     digitalWrite(pvm2, 1);
  delay(250);// pisca pisca?
  digitalWrite(pvm2,0);
  delay(250);
  digitalWrite(fa1,0);
  digitalWrite(pvm1,0);
  digitalWrite(fvm2,0);
  delay(3);// apaga tudo pra n dar erro
  digitalWrite(fvm1, 1);
  digitalWrite(pvm1, 1);
  digitalWrite(fvm2, 1);
  digitalWrite(pvm2, 1);
  delay(1000); // tudo vermelho pra n baterem no cruzamento
  digitalWrite(fvm1, 0);
  digitalWrite(pvm1, 0);
  digitalWrite(fvm2, 0);
  digitalWrite(pvm2, 0);
  delay(3); // apaga tudo pra n dar erro
   digitalWrite(fvm1, 1);
  digitalWrite(pv1, 1);
  digitalWrite(fv2, 1);
   digitalWrite(pvm2, 1);
  delay(3000); // vermelho, verde, verde e vermelho
     digitalWrite(fvm1, 0);
  digitalWrite(pv1, 0);
  digitalWrite(fv2, 0);
   digitalWrite(pvm2, 0);
  delay(3); // apaga tudo pra n dar erro
     digitalWrite(fvm1, 1);
  digitalWrite(pv1, 1);
  digitalWrite(fa2, 1);
   digitalWrite(pvm2, 1);
  delay(2000); // vermelho, verde, amarelo e vermelho
  digitalWrite(pv1, 0);
  delay(3);
  digitalWrite(pvm1, 1);
  delay(250); //pisca pisca?
  digitalWrite(pvm1,0);
  delay(250);//pisca pisca?
      digitalWrite(pvm1, 1);
  delay(250);//pisca pisca?
  digitalWrite(pvm1,0);
  delay(250);//pisca pisca?
      digitalWrite(pvm1, 1);
  delay(250);//pisca pisca?
  digitalWrite(pvm1,0);
  delay(250);//pisca pisca?
      digitalWrite(pvm1, 1);
  delay(250);//pisca pisca?
  digitalWrite(pvm1,0);
  delay(250);//pisca pisca?
   digitalWrite(fvm1, 0);
  digitalWrite(fa2, 0);
   digitalWrite(pvm2, 0);
  delay(3); // apaga tudo pra n dar erro
   digitalWrite(fvm1, 1);
  digitalWrite(pvm1, 1);
  digitalWrite(fvm2, 1);
  digitalWrite(pvm2, 1);
  delay(1000); // tudo vermelho pra n baterem no cruzamento
  digitalWrite(fvm1, 0);
  digitalWrite(pvm1, 0);
  digitalWrite(fvm2, 0);
  digitalWrite(pvm2, 0);
  delay(3); // apaga tudo pra n dar erro e poder recomeçar
 } 
