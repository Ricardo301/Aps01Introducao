algoritmo "Quest07"

var
maior,menor,soma,i:inteiro
inicio


escreva("Limite inferior: ")
leia(menor)
escreva("Limite superior: ")
leia(maior)

escreva("Saida:")

para i de menor+1 ate maior-1   faca
   se (i mod 2 = 0)entao
      soma<-soma+i
      escreva(i)
   fimse

fimpara

escreval("")
escreva("Soma:" ,soma)

fimalgoritmo
