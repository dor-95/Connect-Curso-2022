/*
6 – Desenvolva uma maneira de obter um extrato individual de quantos itens foram vendidos.
*/

let sair = false;
const listaProdutos = [];
const extratoProdutos = [{mercadoria: 0, quantidade: 0, custoTotal: 0, rendimentoTotal: 0, lucroTotal: 0},
                         {mercadoria: 0, quantidade: 0, custoTotal: 0, rendimentoTotal: 0, lucroTotal: 0},
                         {mercadoria: 0, quantidade: 0, custoTotal: 0, rendimentoTotal: 0, lucroTotal: 0},
                         {mercadoria: 0, quantidade: 0, custoTotal: 0, rendimentoTotal: 0, lucroTotal: 0},
                         {mercadoria: 0, quantidade: 0, custoTotal: 0, rendimentoTotal: 0, lucroTotal: 0}];
const produtos = [{
    nome: "Cachorro Quente",
    precoNormal: 8.00,
    precoPromocional: 7.50,
    precoCusto: 4.50,
    qtdCorte: 2 }, 
    {nome: "X-Salada",
    precoNormal: 7.00,
    precoPromocional: 6.50,
    precoCusto: 4.00,
    qtdCorte: 4},
    {nome: "X-Bacon",
    precoNormal: 10.00,
    precoPromocional: 9.25,
    precoCusto: 5.95,
    qtdCorte: 2},
    {nome: "Batata Frita P",
    precoNormal: 5.00,
    precoPromocional: 4.5,
    precoCusto: 2.75,
    qtdCorte: 5},
    {nome: "Coca-Cola 600 ML",
    precoNormal: 8.00,
    precoPromocional: 7.50,
    precoCusto: 5.20,
    qtdCorte: 3}];

do{

    let opcao = parseInt(prompt(`
    CANTINA DE OURO

    MENU=============
        1 - Fazer Pedido
        2 - Promoções
        3 - Vendas Individuais
        4 - Vendas Agrupadas
        5 - Saldo do Dia
        6 - Sair
        ==============`));

    if(opcao > 0 && opcao < 7){
        opcoesMenu(opcao);
    } else {
        alert("Opção inválida! Tente novamente...")
    }
    
    

}while(!sair);

function opcoesMenu(opcao){

    switch(opcao){
        case 1:
            let escolha = parseInt(prompt(`DIGITE A OPÇÃO DESEJADA:
            1 : Cachorro Quente - R$ 8.00
            2 : X-Salada - R$ 7.00
            3 : X-Bacon - R$ 10.00
            4 : Batata Frita P - R$ 5.00
            5 : Coca-Cola 600 ML - R$ 8.00
            6 : Voltar
            ==============`));
            if(escolha > 0 && escolha < 6){
                preencheProduto(escolha);
            } else {
                alert("Voltando ao MENU...");
            }
            break;
        case 2:
            alert(`PROMOÇÕES INIMAGINÁVEIS
            ==============================
            2 Cachorro Quente por R$ 15.00
            4 X-Salada por R$ 26.00
            2 X-Bacon - R$ 18.50
            5 Batata Frita P - R$ 22.00
            3 Coca-Cola 600 ML - R$ 22.50
            ==============`);
            break;
        case 3:
            let saida = "Lista de Vendas Individuais:\n\n";
            listaProdutos.forEach((item)=>{
                saida += `Produto: ${item.produto} || Quantidade: ${item.quantidade} || Total: R$ ${item.valorPedido}\n\n` 
            });
            alert(saida);
            break;
        case 4:
            let texto = "Lista de Vendas Agrupadas:\n\n";
            extratoProdutos.forEach((item)=>{
                if(item.quantidade != 0){
                    texto += `Produto: ${item.mercadoria} || Quantidade: ${item.quantidade} || Custo Total: R$ ${item.custoTotal} || Rendimento Total: R$ ${item.rendimentoTotal} || Lucro Líquido: R$ ${item.lucroTotal}\n\n`
                } 
            });
            alert(texto);
            break;
        case 5:
            let saldo = 0;
            let despesas = 0;
            listaProdutos.forEach((item)=>{
                saldo += item.valorPedido;
                despesas += item.custoProducao;
            })

            let lucro = saldo - despesas;

            alert(`=====CANTINA DE OURO=====

            $$CAIXA$$

            Rendimentos: R$ ${saldo.toFixed(2)} reais
            Despesas: R$ ${despesas.toFixed(2)} reais
            ------------------------------------------
            Lucro líquido: R$ ${lucro.toFixed(2)} reais`);
            break;
        case 6:
            return (sair = true);
    }

}

function preencheProduto(escolha){

    let item = {};

    item.produto = produtos[escolha - 1].nome;

    item.quantidade = parseInt(prompt("Digite a quantidade desejada:"));

    item.custoProducao = produtos[escolha - 1].precoCusto * item.quantidade;
    
    item.valorPedido = calculaItem(escolha - 1, item.quantidade);

    listaProdutos.push(item);

    agrupamentoProdutos(escolha, item.produto, item.quantidade, item.custoProducao, item.valorPedido);

}

function calculaItem(item, quantidade){

    let preco;

    if(quantidade < produtos[item].qtdCorte){
        preco = produtos[item].precoNormal;
    } else {
        preco = produtos[item].precoPromocional;
    }

    return (quantidade * preco);

}


function agrupamentoProdutos(escolha, nome, quantidade, custo, ganho){

    for(let i = 0; i < extratoProdutos.length; i++){

        if(i == escolha - 1){
            extratoProdutos[i].mercadoria = nome;
            extratoProdutos[i].quantidade += quantidade;
            extratoProdutos[i].custoTotal += custo;
            extratoProdutos[i].rendimentoTotal += ganho;
            extratoProdutos[i].lucroTotal = extratoProdutos[i].rendimentoTotal - extratoProdutos[i].custoTotal;
        }

    }

}