# Teste-ViaCast

## Em situações usuais, o código irá funcionar como esperado?

Python: Não. Pois as fórmulas de área e perimetro de alguns poligonos não estão corretas.

C: Não. Pois a função reverse in place não retorna nenhum valor.

## Existe alguma situação em que não irá funcionar?

Python: Sim. valores inseridos como decimais não funcionam e algumas funções de calculo area e perimetro retornam valores incorretos

C: Caso fosse necessário a inversão de uma string mantendo as palavras no mesmo lugar, o código nao funcionaria.

## Caso exista alguma situação em que o código não irá funcionar, quais alterações seriam necessárias para corrigir os problemas?

Python: Alterei as variaveis das entradas "input" de int para float. Alterei as funções de cálculo para que o valor de retorno esteja correto.

C:  Refiz a função onde a string inverte as letras mantendo as palavras no mesmo lugar. Fiz um laço com ponteiro para percorrer a string. Fiz um if para identificar o fim de uma palavra ao chegar em um espaço ou valor nulo, após essa verificaçao, criei um while para realizar a inversão das letras nas palavras.

## Pensando na legibilidade, facilidade de manutenção por outros desenvolvedores, e extensibilidade, você faria alguma refatoração no código?

Python: Fiz comentários para definir cada parte do codigo , troquei todos "this" por "self" de acordo com a linguagem python. Acrescentei a função "pow" para fazer o cálculo de potência.

C: Fiz comentários no código para separar cada parte e o que ela faz. 

## Implementação

A proposta da função é retornar o enésimo termo em uma sequência Fibonacci de forma optimizada. Portanto optei por utilizar como função a própria formula matemática, para que o valor seja calculado de forma direta, evitando funções recursivas. 


