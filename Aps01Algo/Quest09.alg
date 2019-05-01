algoritmo "Quest09"

var
num,i:inteiro
controle:logico
inicio

enquanto (nao controle) faca
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
      controle<- verdadeiro
   senao
      escreval("")
      escreval("Numero invalido")
      escreval("")
   fimse


fimenquanto
fimalgoritmo
