create database TechFish;
use TechFish;

create table Empresa(
	idEmpresa int primary key auto_increment,
    Nome varchar(50),
    CNPJ char(14),
    Rua varchar(50),
    Numero varchar(5),
    Cidade varchar(45),
    CEP varchar(9),
    Responsável varchar(45),
    email_responsavel varchar(50),
    telefone_responsavel varchar(11)
);

create table Usuario(
	idUsuario int auto_increment,
    Nome varchar(50),
    email varchar(50),
    senha varchar(20),
    fkEmpresa int,
    constraint fkEmpresa foreign key (fkEmpresa) references Empresa(idEmpresa),
    constraint pkComp primary key (idUsuario, fkEmpresa)
);

create table Localizacao(
	idLocalizacao int auto_increment primary key,
    Localizacao varchar(30),
    fkEmpresa int, 
    constraint fkEmpresa2 foreign key (fkEmpresa) references Empresa(idEmpresa)
);

create table Sensores(
	idSensores int auto_increment primary key,
    Modelo varchar(30),
	Temp_min float,
    Temp_max float,
    Umi_min float,
    Umi_max float,
    fkLocal int,
    constraint fkLocal foreign key (fkLocal) references Localizacao(idLocalizacao)
);

create table Leitura(
	idLeitura int auto_increment,
    dtHora_leitura datetime,
    tempDHT11 float,
    tempLM35 float,
    umidade float,
    fkSensores int,
    constraint fkSensores foreign key (fkSensores) references Sensores(idSensores),
    constraint pkComp4 primary key (idLeitura, fkSensores)
);
