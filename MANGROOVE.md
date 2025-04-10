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

CREATE TABLE Musicos (
  Nome_musico       varchar (50) PRIMARY KEY,
  Data_Pub          date,
  ID_music          int,
  FOREIGN KEY (ID_music) REFERENCES Musicas (ID_music)
);

CREATE TABLE Usuarios (
  Cod_U Int PRIMARY KEY,
  Nome varchar(50),
  Nat varchar(2),
  Data_nasc date
);

CREATE TABLE Musica_fav (
  ID_Fav int PRIMARY KEY,
  Email varchar(50),
  telefone int,
  rede_soc varchar(50),
  Cod_U    int,
FOREIGN KEY (Cod_U ) REFERENCES Usuarios (Cod_U )
);

CREATE TABLE Contatos_U (
  ID_Con_U     int PRIMARY KEY,
  Cod_U        Int,
  Nome         varchar(50),
  Nat          varchar(2),
  Data_nasc    date,
 FOREIGN KEY (Cod_U) REFERENCES Usuários (Cod_U)
);

CREATE TABLE Artistas (
  CPF               int PRIMARY KEY,
  nome              varchar (100),
  nat               varchar (2),
  cidade            varchar (30),
  album             varchar (50)
);

CREATE TABLE Rede_Soc (
  ID_Rede          int PRIMARY KEY,
  Email            varchar (50),
  Insta            varchar (50),
  Facebook         varchar (50),
  Tiktok           varchar (50),
  Kofi            varchar (50),
  Lolja            varchar (50),
  Patreon          varchar (50),
  CPF              int,
  FOREIGN KEY (CPF) REFERENCES Artistas (CPF)
);

CREATE TABLE Posta (
  Data          date PRIMARY KEY,
  Hora          time,
  Hashtag        varchar (30),
  Qtd_View      int,
  Qtd_Like      int,
  CPF           int,
  ID_c          int,
  FOREIGN KEY (CPF) REFERENCES Artistas (CPF),
  FOREIGN KEY (ID_c) REFERENCES Comunidade (ID_c)
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
  CEP    int PRIMARY KEY,
  Estado Varchar(2), 
  Cidade Varchar(30),
  Bairro Varchar(30),
  Rua Varchar(30),
  CNPJ int,
  Foreign key (CNPJ) REFERENCES Ongs (CNPJ)
);

CREATE TABLE Agen_Publi (
  CNPJ          int PRIMARY KEY,
  Empresa       varchar (100)
);

CREATE TABLE Cntt_Publi (
  Email         varchar (50) PRIMARY KEY,
  Telefone      int,
  Red_Soc       varchar (50),
  CNPJ          int,
  FOREIGN KEY (CNPJ) REFERENCES Agen_Publi (CNPJ)
);

