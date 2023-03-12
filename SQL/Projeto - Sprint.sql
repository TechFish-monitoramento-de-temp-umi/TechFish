-- criação do banco de dados
CREATE DATABASE Sprint; 

-- utilização do banco de dados
USE Sprint; 

 -- criação da tabela clientes
CREATE TABLE Clientes(
	Id_Cliente INT PRIMARY KEY AUTO_INCREMENT,
    Nome_Fantasia VARCHAR(50) NOT NULL,
    CNPJ CHAR(14) NOT NULL,
    Metragem_cozinha DECIMAL(5,2) NOT NULL,
    Qtd_cozinha VARCHAR(3) NOT NULL,
    email VARCHAR(100) NOT NULL,
    telefone VARCHAR(11)
);

-- criação da tabela sensores
CREATE TABLE Sensores( 
	IdSensor INT PRIMARY KEY AUTO_INCREMENT,
    Nome_sensor VARCHAR(10) NOT NULL,
    Local_sensor VARCHAR(10) NOT NULL
);

-- criação da tabela medicao
CREATE TABLE Medicao( 
	Id_medicao INT PRIMARY KEY AUTO_INCREMENT,
    Temperatura DECIMAL(4,2),
    Umidade DECIMAL(4,2),
	Data_medicao DATETIME NOT NULL
);


-- Inserções de dados nas tabelas
INSERT INTO Clientes (Nome_Fantasia, CNPJ, Metragem_cozinha, Qtd_cozinha, email, telefone) VALUES
	('Sushi Maluco','12345678901234','12.20','1','sushimaluco@gmail.com','11987654321'),
    ('Naruto','43210987654321','98.50','2','narutosushis@gmail.com','11123456789'),
    ('Shodai sushi','5682435172639','10.50','1','shodaisushi@gmail.com','11864390431');
    
INSERT INTO Sensores (Nome_sensor, Local_sensor) VALUES
	('DHT11','L1'),
    ('LM35','L1'),
    ('DHT11','L2');
    
INSERT INTO Medicao (Temperatura, Umidade, Data_medicao) VALUES
	(null,'76','2023-03-07 10:56:22'),
    ('19',null,'2023-07-03 9:58:43'),
    (null,'78','2023-03-07 10:57:32');


-- Comandos
DESC clientes;
DESC Sensores;
DESC Medicao;
SELECT * FROM Clientes;
SELECT * FROM Sensores;
SELECT * FROM Medicao;