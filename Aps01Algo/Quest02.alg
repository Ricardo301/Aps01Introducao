algoritmo "Quest02"

var
   idade:inteiro
inicio

escreva("Digite sua idade: ")
leia(idade)
escreval("=========================================")
se(idade>=0)e (idade<16) entao
     escreval("NAÔ ELEITOR")
senao
     se (idade>=18 ) e (idade<=65) entao
        escreval("Eleitor obrigatorio")
        
     senao
          escreval("eletiro facultativo")
          
        fimse
 fimse
fimalgoritmo
