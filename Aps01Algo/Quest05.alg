algoritmo "Quest05"
//Ricardo de Jesus Santos
//30/04/19
var
num:inteiro
inicio
escreva("Número: ")
leia(num)

se(num mod 2=0) entao

   escreval("Divisivel por 2")
fimse

se (num mod 5=0) entao
   escreval("Divisivel por 5")
fimse

se(num mod 7=0) entao
   escreval("Divisivel por 7")
fimse

se((num mod 2 <>0) e (num mod 5 <>0) e(num mod 7 <>0) )entao
   escreval("Náe é divisivel por 7,5 e 2")
fimse
fimalgoritmo
