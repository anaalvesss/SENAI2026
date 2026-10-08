DROP DATABASE IF EXISTS registros_climaticos;
CREATE DATABASE registros_climaticos;
USE registros_climaticos;

CREATE TABLE usuarios (
    id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    email VARCHAR(100) NOT NULL,
    senha VARCHAR(100) NOT NULL
);

CREATE TABLE eventos (
    id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
    cidade VARCHAR(100) NOT NULL,
    tipoEvento VARCHAR(100) NOT NULL,
    temperaturaMaxima DECIMAL(5,2) NOT NULL,
    data DATE NOT NULL,
    nivelImpacto VARCHAR(20) NOT NULL,
    usuarioId INT NOT NULL,
    FOREIGN KEY (usuarioId) REFERENCES usuarios(id)
);

INSERT INTO usuarios (nome, email, senha) VALUES
('Maria Oliveira', 'maria.oliveira@email.com', 'senha123'),
('João Silva', 'joao.silva@email.com', 'senha123'),
('Ana Souza', 'ana.souza@email.com', 'senha123');

INSERT INTO eventos 
(cidade, tipoEvento, temperaturaMaxima, data, nivelImpacto, usuarioId) 
VALUES
('Campinas', 'Onda de calor', 38.7, '2026-09-23', 'Alto', 1),
('São Paulo', 'Chuva intensa', 25.3, '2026-09-24', 'Médio', 2),
('Rio de Janeiro', 'Tempestade', 30.1, '2026-09-25', 'Alto', 1),
('Belo Horizonte', 'Seca prolongada', 35.0, '2026-09-26', 'Alto', 2),
('Porto Alegre', 'Nevasca', -2.5, '2026-09-27', 'Médio', 3);