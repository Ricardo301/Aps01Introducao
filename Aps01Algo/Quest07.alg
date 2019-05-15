algoritmo "Quest07"
//Ricardo de Jesus Santos
//30/04/19
var
maior,menor,soma,i:inteiro
inicio


escreva("Limite inferior: ")
leia(menor)
escreva("Limite superior: ")
leia(maior)

escreva("Saida:")

para i de maior-1 ate menor+1 passo -1   faca
   se (i mod 2 = 0)entao
      soma<-soma+i
      escreva(i)
   fimse

fimpara

escreval("")
escreval("Soma:" ,soma)

fimalgoritmo
