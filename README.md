# LP1 2020.5 - Atividade avaliativa 04: Supermercado - Daniel Sehn Colao

## Comandos - Menu Interativo

 * **1 - Comprar produto**
 
      Comando para chamada da função `compra` da classe `Cliente`.

        Apos digitar o comando '1', o usuario terá que digitar o nome do produto a ser comprado e seu respectivo preço.
        
 * **2 - Mostrar sacola**
      
      Comando para chamar a função `verSacola()` da classe `Cliente`.

        Será feita uma listagem de todos os itens da sacola do cliente atual.
    
 * **3 - Adicionar saldo**
 
      Comando para chamar a função `AdicionarSaldo()` da classe `Cliente`.

        Comando para adicionar mais saldo ao cliente atual.

        O usuario terá que digitar um valor para ser adicionado ao saldo.

        Obs.: O saldo inicial do cliente vale R$ 50.00.

 * **4 - Listar produtos da loja**
 
      Comando para chamar a função `ListarProdutos()` da classe `Estabelecimento`.

        Será feita a listagem de todos os produtos da loja.

        Serão listados: código, nome do produto, unidade de medida, preço e quantidade de cada produto no arquivo estoque.csv

        
 * **5 - Mostrar os produtos vendidos e o total ganho da loja**
 
      Comando para chamar a função `registro` da classe `Estabelecimento`.

        Listar todos os produtos vendidos e a quantidade de dinheiro recebida pela loja na atual execução do programa.

        A ordem estará de acordo com o código do produto.

        
 * **6 - Inicializar outro cliente**
 
      Comando para encerrar as compras do cliente atual. 

      Um arquivo cliente_x.txt será criado com todos os itens comprados do cliente atual.

        'x' representa o numero do cliente.

      Após isso, um novo cliente é criado.
         
        
 * **0 - Sair do programa**
 
      Comando para sair do programa.

      A função `registro` será ativada para o último cliente instanciado.

      O arquivo estoque.csv será atualizado. 


## Comandos para a linha de comando do Linux        
 * **make**
 
      Ao digitar este comando na linha de comando, o programa será compilado. Makefile presente.
  
 * **make clean**
 
      Comando para remover todos os arquivos objeto gerados durante o processo de compilação.
