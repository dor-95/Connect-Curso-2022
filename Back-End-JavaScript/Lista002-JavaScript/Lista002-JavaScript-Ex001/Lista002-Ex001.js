/*
1 – Você é o dono da cantina e deseja iniciar a venda de cachorro quentes.
Um cachorro quente custa R$8,00. Se comprar dois, fica R$15,00 (oportunidade de ouro).
Faça um algoritmo que receba um pedido nesta cantina;
Você deve adicionar uma lista de produtos que já foram vendidos;
Você deve criar um controle de caixa, para ver quanto entrou de dinheiro;
*/

let sair = false;
const listaProdutos = []
const produtos = [{
    nome: "Cachorro Quente(s)",
    precoNormal: 8.00,
    precoPromocional: 7.50,
    qtdCorte: 2
}]

do{

    let opcao = parseInt(prompt(`MENU=============
        1 - Fazer Pedido
        2 - Promoções
        3 - Produtos Vendidos
        4 - Saldo do Caixa
        5 - Sair
        ==============`));

    opcoesMenu(opcao);
    

}while(!sair);

function opcoesMenu(opcao){

    switch(opcao){
        case 1:
            let escolha = parseInt(prompt(`DIGITE A OPÇÃO DESEJADA:
            1 : Cachorro Quente - R$ 8.00
            ==============`));
            preencheProduto(escolha);
            break;
        case 2:
            alert(`PROMOÇÕES INIMAGINÁVEIS
            ==============================
            2 Cachorros Quentes por R$ 15.00
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
            listaProdutos.forEach((item)=>{
                saldo += item.valorProduto;
            })
            alert(`Total do Caixa: R$ ${saldo}`);
            break;
        case 5:
            return (sair = true);
    }

}

function preencheProduto(escolha){

    let item = {};

    switch(escolha){
        case 1:
            item.nome = "Cachorro Quente(s)";
            item.quantidade = parseInt(prompt("Digite a quantidade desejada:"))
            item.valorProduto = calculaItem(escolha - 1, item.quantidade);
            break;
    }

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