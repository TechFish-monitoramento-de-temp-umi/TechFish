create database Sprint; -- criação do banco de dados
use Sprint; -- utilização do banco de dados
create table Clientes( -- criação da tabela clientes
	Id_Cliente int primary key auto_increment,
    Nome_Fantasia varchar(50) not null,
    CNPJ char(14) not null,
    Metragem_cozinha decimal(5,2) not null,
    Qtd_cozinha varchar(3) not null,
    email varchar(100) not null,
    telefone varchar(11)
);
create table Sensores( -- criação da tabela sensores
	IdSensor int primary key auto_increment,
    Nome_sensor varchar(10) not null,
    Local_sensor varchar(10) not null
);
create table Medicao( -- criação da tabela medicao
	Id_medicao int primary key auto_increment,
    Temperatura decimal(4,2),
    Umidade decimal(4,2),
	Data_medicao datetime not null
);


-- Inserções de dados nas tabelas
Insert into Clientes (Nome_Fantasia, CNPJ, Metragem_cozinha, Qtd_cozinha, email, telefone) values
	('Sushi Maluco','12345678901234','12.20','1','sushimaluco@gmail.com','11987654321'),
    ('Naruto','43210987654321','98.50','2','narutosushis@gmail.com','11123456789'),
    ('Shodai sushi','5682435172639','10.50','1','shodaisushi@gmail.com','11864390431');
insert into Sensores (Nome_sensor, Local_sensor) values
	('DHT11','L1'),
    ('LM35','L1'),
    ('DHT11','L2');
insert into Medicao (Temperatura, Umidade, Data_medicao) values
	(null,'76','2023-03-07 10:56:22'),
    ('19',null,'2023-07-03 9:58:43'),
    (null,'78','2023-03-07 10:57:32');


-- Comandos
desc clientes;
desc Sensores;
desc Medicao;
select * from Clientes;
select * from Sensores;
select * from Medicao;