/*
3 – Todo mundo sabe que o custo para fazer um cachorro quente fica em torno de R$4,50.
Para cada venda de cachorro quente, adicione este valor ao contador de despesas.
*/

let sair = false;
const listaProdutos = []
const produtos = [{
    nome: "Cachorro Quente(s)",
    precoNormal: 8.00,
    precoPromocional: 7.50,
    precoCusto: 4.50,
    qtdCorte: 2 }, 
    {nome: "X-Salada(s)",
    precoNormal: 7.00,
    precoPromocional: 6.50,
    qtdCorte: 4},
    {nome: "X-Bacon",
    precoNormal: 10.00,
    precoPromocional: 9.25,
    qtdCorte: 2},
    {nome: "Batata Frita P",
    precoNormal: 5.00,
    precoPromocional: 4.5,
    qtdCorte: 5},
    {nome: "Coca-Cola 600 ML",
    precoNormal: 8.00,
    precoPromocional: 7.50,
    qtdCorte: 3}];

do{

    let opcao = parseInt(prompt(`
    CANTINA DE OURO

    MENU=============
        1 - Fazer Pedido
        2 - Promoções
        3 - Produtos Vendidos
        4 - Saldo do Caixa
        5 - Sair
        ==============`));

    if(opcao > 0 && opcao < 6){
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
            2 Cachorros Quentes por R$ 15.00
            4 X-Saladas por R$ 26.00
            2 X-Bacon - R$ 18.50
            5 Batatas Fritas P - R$ 22.00
            3 Coca-Colas 600 ML - R$ 22.50
            ==============`);
            break;
        case 3:
            let saida = "Lista de Vendas:\n\n";
            listaProdutos.forEach((item)=>{
                saida += `Produto: ${item.nome} || Quantidade: ${item.quantidade} || Total: R$ ${item.valorProduto}\n\n` 
            });
            alert(saida);
            console.log(saida);
            break;
        case 4:
            let saldo = 0;
            let despesas = 0;
            listaProdutos.forEach((item)=>{
                saldo += item.valorProduto;
                despesas += item.custo;
            })
            alert(`CAIXA CANTINA DE OURO:
            ============================
            Total do Caixa: R$ ${saldo.toFixed(2)} reais
            Despesas: R$ ${despesas.toFixed(2)} reais`);
            break;
        case 5:
            return (sair = true);
    }

}

function preencheProduto(escolha){

    let item = {};

    item.nome = produtos[escolha - 1].nome

    item.quantidade = parseInt(prompt("Digite a quantidade desejada:"))

    item.custo = produtos[escolha - 1].precoCusto * item.quantidade;
    
    item.valorProduto = calculaItem(escolha - 1, item.quantidade);

    listaProdutos.push(item);

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