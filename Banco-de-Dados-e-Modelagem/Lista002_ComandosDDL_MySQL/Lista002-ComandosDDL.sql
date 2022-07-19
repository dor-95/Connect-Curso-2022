-- Exercicio 1 
CREATE DATABASE lista002;

USE lista002;

-- Exercicio 2
CREATE TABLE alunos(
	codigo INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(50),
    telefone VARCHAR(50),
    cidade VARCHAR(50)
);

-- Exercicio 3
DESC alunos;

-- Exercicio 4
CREATE TABLE alunos2(
	codigo INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(200),
    telefone VARCHAR(50),
    cidade VARCHAR(100)
);

DESC alunos2;

-- Exercicio 5
CREATE TABLE funcionarios(
	nome VARCHAR(100),
    endereco VARCHAR(200),
    telefone VARCHAR(50),
    cidade VARCHAR(100),
    estado VARCHAR(100),
    cep VARCHAR(15),
    rg VARCHAR(20),
    cpf CHAR(11) PRIMARY KEY,
    salario FLOAT
);

DESC funcionarios;

-- Exercicio 6
CREATE TABLE fornecedores(
	nome VARCHAR(200),
    endereco VARCHAR(200),
    telefone VARCHAR(50),
    cidade VARCHAR(100),
    estado VARCHAR(100),
    cep VARCHAR(15),
    cnpj CHAR(14) PRIMARY KEY,
    email VARCHAR(50)
);

DESC fornecedores;

-- Exercicio 7
CREATE TABLE livros(
	codigo SMALLINT PRIMARY KEY,
    nome VARCHAR(200),
    categoria VARCHAR(200),
    resumo VARCHAR(500),
    precocusto FLOAT,
    precovenda FLOAT
);

-- Exercicio 8
DESC livros;
DESC alunos;
DESC alunos2;
DESC fornecedores;
DESC funcionarios;

-- Exercicio 9
CREATE TABLE estoque(
	codigo SMALLINT PRIMARY KEY,
    nomedoproduto VARCHAR(200),
    categoria VARCHAR(100),
    quantidade INT,
    fornecedor VARCHAR(200)
);

DESC estoque;

-- Exercicio 10
CREATE TABLE notas(
	codigo SMALLINT PRIMARY KEY,
    nomedoaluno VARCHAR(200),
    bimestre VARCHAR(5)
);

DESC notas;

-- Exercicio 11
CREATE  TABLE caixa(
	codigo SMALLINT PRIMARY KEY,
    data_caixa DATE,
    descricao VARCHAR(300),
    debito FLOAT,
    credito FLOAT
);

DESC caixa;

CREATE TABLE contasAPagar(
	codigo SMALLINT PRIMARY KEY,
    data_conta DATETIME,
    descricao VARCHAR(300),
    valor FLOAT,
    data_pagamento DATETIME   
);

DESC contasAPagar;

-- Exercicio 12
CREATE TABLE contasAReceber(
	codigo SMALLINT PRIMARY KEY,
    data_conta DATETIME,
    descricao VARCHAR(300),
    valor FLOAT,
    data_recebimento DATETIME   
);

DESC contasAReceber;

-- Exercicio 13
CREATE TABLE filmes (
	codigo SMALLINT PRIMARY KEY,
    nome VARCHAR(150),
    sinopse VARCHAR(500),
    categoria VARCHAR(100),
    diretor VARCHAR(100)
);

DESC filmes;

-- Exercicio 14
CREATE TABLE CDs(
	codigo SMALLINT PRIMARY KEY,
    nome VARCHAR(150),
    cantor VARCHAR (100),
    ano CHAR(4),
    quantidademusicas SMALLINT    
);

DESC CDs;

-- Exercicio 15
DROP TABLE alunos2;

-- Exercicio 16
DESC alunos2;

-- Exercicio 17
DROP TABLE livros;
DESC livros;

-- Exercicio 18
DROP TABLE contasAPagar;
DESC contasAPagar;

-- Exercicio 19
DROP TABLE contasAReceber;
DESC contasAReceber;

-- Exercicio 20
DROP TABLE filmes;
DESC filmes;

-- Exercicio 21
DESC alunos;
DESC fornecedores;
DESC funcionarios;

-- Exercicio 22
ALTER TABLE alunos RENAME TO super_alunos;

-- Exercicio 23
DESC super_alunos;

-- Exercicio 24
ALTER TABLE estoque RENAME TO produtos;
DESC produtos;

-- Exercicio 25
ALTER TABLE notas RENAME TO aprovados;
DESC aprovados;

-- Exercicio 26
ALTER TABLE aprovados RENAME TO notas;
DESC notas;

-- Exercicio 27
DROP TABLE dinheiro;
-- Obs: Não foi solicitado criação da Tabela dinheiro. Comando inválido.

-- Exercicio 28
DROP TABLE notas;
DESC notas;

-- Exercicio 29
ALTER TABLE super_alunos RENAME TO alunos;
DESC alunos;

-- Exercicio 30
ALTER TABLE  alunos RENAME TO estudantes;
DESC estudantes;

-- Exercicio 31
ALTER TABLE  estudantes RENAME TO super_estudantes;

-- Exercicio 32
DESC super_estudantes;

-- Exercicio 33
DROP TABLE super_estudantes;

-- Exercicio 34
DESC super_estudantes;
DESC alunos;

-- Criado novamente a tabela aluno para o Exercicio 35
CREATE TABLE alunos(
	codigo INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(50),
    telefone VARCHAR(50),
    cidade VARCHAR(50)
);

DESC alunos;

-- Exercicio 35
ALTER TABLE alunos ADD estado VARCHAR(100);
DESC alunos;

-- Exercicio 36
CREATE  TABLE caixa(
	codigo SMALLINT PRIMARY KEY,
    data_caixa DATE,
    descricao VARCHAR(300),
    debito FLOAT,
    credito FLOAT
);

DESC caixa;

-- Exercicio 37
ALTER TABLE caixa ADD observacao VARCHAR(150);
DESC caixa;

-- Exercicio 38
ALTER TABLE alunos ADD cpf CHAR(11);
DESC alunos;

-- Exercicio 39
DESC caixa;

-- Exercicio 40
ALTER TABLE caixa ADD saldo FLOAT;
DESC caixa;





