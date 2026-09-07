create database exercicio;
use exercicio;

CREATE TABLE produtos (
    id INT PRIMARY KEY AUTO_INCREMENT,
    descricao VARCHAR(25) NOT NULL,
    estoque int NOT NULL,
    valor decimal NOT NULL
);

select * from produtos;
