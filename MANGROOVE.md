``` sql
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
