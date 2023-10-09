# Teste-ViaCast

# Em situações usuais, o código irá funcionar como esperado?

Python: Não. Pois as formulas de area e perimetro dos poligonos nao estao corretas: Retangulo (perimetro), Triangulo isoceles (Perimetro)
C: Não. Pois a função reverse in place não retornava nenhum valor.

# Existe alguma situação em que não irá funcionar?

Python: Sim. valores inseridos como decimais não funcionam e as funções de calculo area e perimetro retornam valores incorretos

C: Caso foce necessário a inversão de uma string mantendo as palavras no mesmo lugar, o codigo nao funcionaria.

# Caso exista alguma situação em que o código não irá funcionar, quais alterações seriam necessárias para corrigir os problemas?

Python: Alterei as variaveis das entradas "input" de int para float. Alterei as funçoes de calculo para que o valor de retorno esteja correto.
C:  Refiz a funçao onde a string reverte mantendo as palavras no mesmo lugar. Fiz um laço com ponteiro para se movimentar dentro do "vetor" string. Fiz um if para identificar inicio e fim de uma palavra ao chegar em um espaço ou campo nulo, após essa verificaçao, criei um while para realizar a inversão das letras nas palavras.

# Pensando na legibilidade, facilidade de manutenção por outros desenvolvedores, e extensibilidade, você faria alguma refatoração no código?

Python: Fiz comentários para definir cada parte do codigo , troquei todos "this" por "self" de acordo com a linguagem python. Acrescentei a função "pow" para fazer o calculo de potencia.

C: Fiz comentários no código para separar cada parte e o que ela faz.

# Implementação

A proposta da função é retornar o enésimo termo em uma sequência Fibonacci de forma optimizada. Portanto optei por utilizar como função a própria formula matemática, para que o valor seja calculado de forma direta, evitando funções recursivas. 


