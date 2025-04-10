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
  duracao          varchar (10)
);

INSERT INTO Musicas VALUES (19872617, "Ainda gosto dela", "Pop Rock", "Hoje acordei sem lembrar, Se vivi ou se sonhei, Você aqui nesse lugar, Que eu ainda não deixei.", 22000000, 28000, "00:03:40") 

CREATE TABLE Musicos (
  Nome_musico       varchar (50) PRIMARY KEY,
  Data_Pub          varchar (10),
  ID_music          varchar (10),
  FOREIGN KEY (ID_music) REFERENCES Musicas (ID_music)
);

INSERT INTO Musicos VALUES ("Skank", "09/09/08", 19872617);

CREATE TABLE Usuarios (
  Cod_U    Int PRIMARY KEY,
  Nome     varchar(50),
  Nat      varchar(2),
  Idade    int
);

INSERT INTO Usuarios VALUES (18273516, "GostoDeMetalPesado", "PE", 27);

CREATE TABLE Escuta (
  ID_Es int PRIMARY KEY,
  ID_music int,
  Cod_U varchar(50),
  Rep int,
  FOREIGN KEY (Cod_U) REFERENCES Usuários (Cod_U),
  FOREIGN KEY (ID_music) REFERENCES Musicas (ID_music)
);

INSERT INTO Escuta VALUES (82739165, 19872617, 18273516, 3); 

CREATE TABLE Anuncio (
  ID_A        int PRIMARY KEY,
  Tempo       varchar (10),
  Valor_Gasto float,
  CNPJ_Ag        int,
  FOREIGN KEY (CNPJ_Ag) REFERENCES Agen_Pub (CNPJ_Ag)
);

INSERT INTO Anuncio VALUES (91863517, 00:00:50, 49.09, 00.623.904/0001-73);

CREATE TABLE Visualiza_A (
  ID_V_A   int PRIMARY KEY,
  ID_A     int,
  Cod_U    int,
  Qtd_View int,
  FOREIGN KEY (Cod_U) REFERENCES Usuarios (Cod_U),
  FOREIGN KEY (ID_A) REFERENCES Anuncio (ID_A)
);

INSERT INTO Visualiza_A VALUES (89716356, 91863517, 18273516, 888000);

CREATE TABLE PubAlvo_An (
  Cod_PubAlvo int PRIMARY KEY,
  ID_A        int,
  Gostos      varchar(50),
  Idade       int,
  Class_E     varchar (30),
  Genero      varchar (30),
  Ocup        varchar (100),
  Nat         varchar (2),
  FOREIGN KEY (ID_A) REFERENCES Anuncio (ID_A)
);

INSERT INTO PubAlvo_An VALUES (89762809, 91863517, "MPB, Pagode, Samba e Pisadinha", 45, "Classe media", "Homem", "Engenheiro", "AL"); 

CREATE TABLE Musica_fav (
  ID_Fav             int PRIMARY KEY,
  Cod_U              int,
  Genero             varchar (50),
  Cpstrs             varchar (50),
  Nome_Música        varchar (50),
  Tempo_Duracao      varchar(10),
  Cod_U              int,
FOREIGN KEY (Cod_U ) REFERENCES Usuarios (Cod_U )
);

CREATE TABLE Contatos_U (
  IDcntt_U      int PRIMARY KEY,
  Email         varchar (50),
  Telefone      int,
  Insta         varchar (50),
  Facebook      varchar (50),
  Tiktok        varchar (50),
  Cod_U         int,
  FOREIGN KEY (Cod_U) REFERENCES Usuários (Cod_U)
);

CREATE TABLE Artistas (
  CPF               int PRIMARY KEY,
  nome              varchar (100),
  nat               varchar (2),
  cidade            varchar (30),
  Cod_art           int,
  album             varchar (50)
);

CREATE TABLE Produz (
  ID_P             int PRIMARY KEY,
  Data             varchar (10),
  CPF              int,
  ID_music         int,
  FOREIGN KEY (CPF) REFERENCES Artistas (CPF),
  FOREIGN KEY (ID_music) REFERENCES Musicas (ID_music)
);

CREATE TABLE Art_rec (
  ID_TransArt                       int PRIMARY KEY,
  Valor                             float,
  Data                              varchar (10),
  Hora                              varchar (10),
  ID_D                              int,
  CPF                               int,
  FOREIGN KEY (CPF) REFERENCES Artistas (CPF),
  FOREIGN KEY (ID_D) REFERENCES Din_arrecadado (ID_D)
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

CREATE TABLE Comunidade (
  ID_c                int PRIMARY KEY,	
  qtd_seg             int,
  qtd_posts           int
);

CREATE TABLE Posta (
  Data          varchar (10) PRIMARY KEY,
  Hora          varchar (10),
  Hashtag       varchar (30),
  Qtd_View      int,
  Qtd_Like      int,
  CPF           int,
  ID_c          int,
  FOREIGN KEY (CPF) REFERENCES Artistas (CPF),
  FOREIGN KEY (ID_c) REFERENCES Comunidade (ID_c)
);

CREATE TABLE Visualiza_C (
  ID_V_C int PRIMARY KEY,
  ID_A int,
  Cod_U int,
  ID_c	int,
  Qtd_View int,
  FOREIGN KEY (Cod_U) REFERENCES Usuarios (Cod_U),
  FOREIGN KEY (ID_c) REFERENCES Comunidade (ID_c)
);

CREATE TABLE Eventos (
  ID_Ev int PRIMARY KEY,
  ID_c int,
  Data varchar (10),
  Hora varchar (10),
  Endereco varchar (100),
  Pnt_Ref varchar(80),
  Valor_Ing float,
  Qtd_Ing int,
  FOREIGN KEY (ID_c) REFERENCES Comunidade (ID_c)
);

CREATE TABLE Din_arrecadado (
  ID_d                    int PRIMARY KEY,
  valor                   float,
  banco                   varchar (300)
);

CREATE TABLE Banco (
  ID_Banco int PRIMARY KEY,
  ID_d int,
  Nome_Banc varchar(50),
  Forma_Trans varchar(20),
  FOREIGN KEY (ID_d) REFERENCES Din_arrecadado (ID_d)
);

CREATE TABLE Ongs(
  CNPJ_Ong        int PRIMARY KEY,
  Sede        varchar(100)
);

CREATE TABLE Cntt_ONG (
  Email        varchar(50) PRIMARY KEY,
  Telefone    int,
  Rede_Soc    varchar(50),
  CNPJ            int,
  FOREIGN KEY (CNPJ_Ong) REFERENCES Ongs (CNPJ_Ong)
);

CREATE TABLE Ong_rec (
  ID_TransOng                  int PRIMARY KEY,
  CNPJ_Ong                         int,
  Valor                        float,
  Data                         varchar (10),
  Hora                         varchar (10),
  ID_D                         int,
  FOREIGN KEY (ID_D) REFERENCES Din_arrecadado (ID_D)
);

CREATE TABLE Loc_Op(
  CEP    int PRIMARY KEY,
  Estado Varchar(2), 
  Cidade Varchar(30),
  Bairro Varchar(30),
  Rua Varchar(30),
  CNPJ_Ong int,
  Foreign key (CNPJ_Ong) REFERENCES Ongs (CNPJ_Ong)
);

CREATE TABLE Agen_Publi (
  CNPJ_Ag          int PRIMARY KEY,
  Empresa       varchar (100)
);

CREATE TABLE Cntt_Publi (
  Email         varchar (50) PRIMARY KEY,
  Telefone      int,
  Red_Soc       varchar (50),
  CNPJ_Ag          int,
  FOREIGN KEY (CNPJ_Ag) REFERENCES Agen_Publi (CNPJ_Ag)
);

CREATE TABLE PubAlvo_Ag(
  Gostos        varchar(50),
  Idade         int,
  Class_E       varchar(30),
  Genero        varchar(30),
  Ocup          varchar(100),
  Nat           varchar(2),
  CNPJ          int,
  FOREIGN KEY (CNPJ_Ag) REFERENCES Agen_Publi (CNPJ_Ag)
);
