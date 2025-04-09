``` sql
DROP TABLE Customers;
DROP TABLE Orders;
DROP TABLE Shippings;

CREATE TABLE Musicas (
  ID_music         int PRIMARY KEY,
  nome             varchar (50),
  genero           varchar (50),
  letra            varchar (500),
  views            int,
  likes            int,
  duracao          time
);

CREATE TABLE Artistas (
  CPF               int PRIMARY KEY,
  nome              varchar (100),
  nat               varchar (2),
  cidade            varchar (30),
  album             varchar (50)
);

CREATE TABLE Comunidade (
  ID_c                int PRIMARY KEY,	
  qtd_seg             int,
  qtd_posts           int
);

CREATE TABLE Din_arrecadado (
  ID_d                    int PRIMARY KEY,
  valor                   float,
  banco                   varchar (300)
);

CREATE TABLE Ongs(
  CNPJ        int PRIMARY KEY,
Sede        varchar(100)
);

CREATE TABLE Cntt_ONG (
  Email        varchar(50) PRIMARY KEY,
  Telefone    int,
  Rede_Soc    varchar(50),
  CNPJ            int,
  FOREIGN KEY (CNPJ) REFERENCES Ongs (CNPJ)
);

CREATE TABLE Loc_Op(
  Estado Varchar(2),
  Cidade Varchar(30),
  Bairro Varchar(30),
  Rua Varchar(30),
  CEP int,
  CNPJ int,
  Foreign key (CNPJ) REFERENCES Ongs (CNPJ)
);

CREATE TABLE Agen_Publi (
  CNPJ          int PRIMARY KEY,
  Empresa       varchar (100)
);

CREATE TABLE Cntt_Publi (
  Email         varchar (50) PRIMARY KEY
  Telefone      int,
  Red_Soc       varchar (50),
  CNPJ          int,
  FOREIGN KEY (CNPJ) REFERENCES Agen_Publi (CNPJ)
);

