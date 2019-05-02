algoritmo "Quest09"
//Ricardo de Jesus Santos
//30/04/19
var
num,i:inteiro
controle:logico
inicio
controle <- verdadeiro
enquanto (controle) faca
   escreva("Num:")
   leia(num)
   se((num>50) e (num<70)) entao
      para i de 10 ate num faca
         escreva(i)
         se i <> num entao
            escreva("-")

         fimse
         se( (i=29)  ou (i=49)) entao
            escreval("")
         fimse

      fimpara
      controle <- (nao controle)
   senao
      escreval("")
      escreval("Numero invalido")
      escreval("")
   fimse


fimenquanto
fimalgoritmo
