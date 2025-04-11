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

INSERT INTO Musicas VALUES (19872617, "Ainda gosto dela", "Pop Rock", "Hoje acordei sem lembrar, Se vivi ou se sonhei, Você aqui nesse lugar, Que eu ainda não deixei.", 22000000, 28000, "00:03:40");

CREATE TABLE Musicos (
  Cod_M               int  PRIMARY KEY,
  Nome_musico       varchar (50),
  Data_Pub          varchar (10),
  ID_music          varchar (10),
  FOREIGN KEY (ID_music) REFERENCES Musicas (ID_music)
);

INSERT INTO Musicos VALUES (87666540, "Skank", "09/09/08", 19872617);

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
  Cod_U Int,
  Rep int,
  FOREIGN KEY (Cod_U) REFERENCES Usuarios (Cod_U),
  FOREIGN KEY (ID_music) REFERENCES Musicas (ID_music)
);

INSERT INTO Escuta VALUES (82739165, 19872617, 18273516, 3); 

CREATE TABLE Musica_fav (
  ID_Fav             int PRIMARY KEY,
  Cod_U              int,
  Genero             varchar (50),
  Cpstrs             varchar (50),
  Nome_Música        varchar (50),
  Tempo_Duracao      varchar(10),
  FOREIGN KEY (Cod_U) REFERENCES Usuarios (Cod_U)
);

INSERT INTO Musica_fav VALUES (53927813, 18273516, "MPB", "Chico Buarque", "Apesar De Você", "00:03:55"); 

CREATE TABLE Contatos_U (
  IDcntt_U      int PRIMARY KEY,
  Email         varchar (50),
  Telefone      int,
  Insta         varchar (50),
  Facebook      varchar (50),
  Tiktok        varchar (50),
  Cod_U         int,
  FOREIGN KEY (Cod_U) REFERENCES Usuarios (Cod_U)
);

INSERT INTO Contatos_U VALUES (22123456, "RogerinDoInga@gmail.com", "67984231", "@JulinhoDaVan", "RenanComCigarro", "Maurilio_Dos_Anjos", 18273516); 

CREATE TABLE Artistas (
  CPF               varchar(15) PRIMARY KEY,
  Nome              varchar (100),
  Nat               varchar (2),
  Cidade            varchar (30),
  Cod_art           int,
  Album             varchar (50)
);

INSERT INTO Artistas VALUES ("123.456.789-09", "FBC", "MG", "Belo Horizonte(BH)", "44423328", "BAILE");

CREATE TABLE Produz (
  ID_P             int PRIMARY KEY,
  Data             varchar (10),
  CPF              varchar (15),
  ID_music         int,
  FOREIGN KEY (CPF) REFERENCES Artistas (CPF),
  FOREIGN KEY (ID_music) REFERENCES Musicas (ID_music)
);

INSERT INTO Produz VALUES (65432891, "12/07/2005", "123.456.789-09", 19872617);

CREATE TABLE Din_arrecadado (
  ID_D                    int PRIMARY KEY,
  valor                   float,
  banco                   varchar (300)
);

INSERT INTO Din_arrecadado VALUES(9090, 20000.95, "Banco Brasil");

CREATE TABLE Art_rec (
  ID_TransArt                       int PRIMARY KEY,
  Valor                             float,
  Data                              varchar (10),
  Hora                              varchar (10),
  ID_D                              int,
  CPF                               varchar(15),
  FOREIGN KEY (CPF) REFERENCES Artistas (CPF),
  FOREIGN KEY (ID_D) REFERENCES Din_arrecadado (ID_D)
);

INSERT INTO Art_rec VALUES(80808, 90.23, "20/05/2025", "20:00", 9090, "123.456.789-09");

CREATE TABLE Rede_Soc (
  ID_Rede          int PRIMARY KEY,
  Email            varchar (50),
  Insta            varchar (50),
  Facebook         varchar (50),
  Tiktok           varchar (50),
  Kofi            varchar (50),
  Lolja            varchar (50),
  Patreon          varchar (50),
  CPF              varchar (15),
  FOREIGN KEY (CPF) REFERENCES Artistas (CPF)
);

INSERT INTO Rede_Soc VALUES (54332198, "FBC_ART@gmail.com", "fbctadoido", "FabricioFBC", "@FBC_Fabricio", "ART_FBC", "FBC_Roupa", "Music_FBC", "123.456.789-09");

CREATE TABLE Comunidade (
  ID_C                int PRIMARY KEY,	
  qtd_seg             int,
  qtd_posts           int
);

INSERT INTO Comunidade VALUES (87654321, 1000000, 50);

CREATE TABLE Posta (
  Data          varchar (10) PRIMARY KEY,
  Hora          varchar (10),
  Hashtag       varchar (30),
  Qtd_View      int,
  Qtd_Like      int,
  CPF           varchar(15),
  ID_C          int,
  FOREIGN KEY (CPF) REFERENCES Artistas (CPF),
  FOREIGN KEY (ID_C) REFERENCES Comunidade (ID_C)
);

INSERT INTO Posta VALUES ("13/04/2025", "03:00:00", "#Show", 500, 300, "123.456.789-09", 87654321);

CREATE TABLE Visualiza_C (
  ID_V_C int PRIMARY KEY,
  Cod_U int,
  ID_C	int,
  Qtd_View int,
  FOREIGN KEY (Cod_U) REFERENCES Usuarios (Cod_U),
  FOREIGN KEY (ID_C) REFERENCES Comunidade (ID_C)
);

INSERT INTO Visualiza_C VALUES (12345678, 18273516, 87654321, 500);

CREATE TABLE Eventos (
  ID_Ev int PRIMARY KEY,
  ID_C int,
  Data varchar (10),
  Hora varchar (10),
  Endereco varchar (100),
  Pnt_Ref varchar(80),
  Valor_Ing float,
  Qtd_Ing int,
  FOREIGN KEY (ID_C) REFERENCES Comunidade (ID_C)
);

INSERT INTO Eventos VALUES (97865342, 87654321, "14/06/2023", "04:30:44", "Av. João de Barros", "Posto de Gasolina", 70.00, 500);

CREATE TABLE Banco (
  ID_Banco int PRIMARY KEY,
  ID_D int,
  Nome_Banco varchar(50),
  Forma_Trans varchar(20),
  FOREIGN KEY (ID_D) REFERENCES Din_arrecadado (ID_D)
);

INSERT INTO Banco VALUES (98097043, 9090, "Banco Brasil", "Pix");

CREATE TABLE Ongs(
  CNPJ_Ong    varchar(20) PRIMARY KEY,
  Sede        varchar(100)
);

INSERT INTO Ongs VALUES ("14.666.759/6969-13", "Recife");

CREATE TABLE Cntt_ONG (
  ID_Cntt_ONG int  PRIMARY KEY,
  Email        varchar(50),
  Telefone    int,
  Rede_Soc    varchar(50),
  CNPJ_Ong    varchar(20),
  FOREIGN KEY (CNPJ_Ong) REFERENCES Ongs (CNPJ_Ong)
);

INSERT INTO Cntt_ONG VALUES (13259704, "MediotecSenac@gmail.com", 34136666, "@mediotec.2b", "14.666.759/6969-13");

CREATE TABLE Ong_rec (
  ID_TransOng                  int PRIMARY KEY,
  CNPJ_Ong                     varchar(20),
  Valor                        float,
  Data                         varchar (10),
  Hora                         varchar (10),
  ID_D                         int,
  FOREIGN KEY (ID_D) REFERENCES Din_arrecadado (ID_D)
);

INSERT INTO Ong_rec VALUES (8090, "14.666.759/6969-13", 300000.69, "25/05/2025", "10:0", 9090);

CREATE TABLE Loc_Op(
  ID_Op int  PRIMARY KEY,
  CEP    varchar(10),
  Estado Varchar(2), 
  Cidade Varchar(30),
  Bairro Varchar(30),
  Rua Varchar(30),
  CNPJ_Ong varchar(20),
  FOREIGN KEY (CNPJ_Ong) REFERENCES Ongs (CNPJ_Ong)
);

INSERT INTO Loc_Op VALUES (55467321, "50050-180", "PE", "Recife", "Santo Amaro", "Av. João de Barros", "14.666.759/6969-13");

CREATE TABLE Agen_Publi (
  CNPJ_Ag       varchar(20) PRIMARY KEY,
  Empresa       varchar (100)
);

INSERT INTO Agen_Publi VALUES ("00.623.904/0001-73", "Burguer King");

CREATE TABLE Anuncio (
  ID_A        int PRIMARY KEY,
  Tempo       varchar (10),
  Valor_Gasto float,
  CNPJ_Ag     varchar(20),
  FOREIGN KEY (CNPJ_Ag) REFERENCES Agen_Publi (CNPJ_Ag)
);

INSERT INTO Anuncio VALUES (91863517, "00:00:50", 49.09, "00.623.904/0001-73");

CREATE TABLE PubAlvo_An (
  Cod_PubAlvo_An int PRIMARY KEY,
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

CREATE TABLE Visualiza_A (
  ID_V_A   int PRIMARY KEY,
  ID_A     int,
  Cod_U    int,
  Qtd_View int,
  FOREIGN KEY (Cod_U) REFERENCES Usuarios (Cod_U),
  FOREIGN KEY (ID_A) REFERENCES Anuncio (ID_A)
);

INSERT INTO Visualiza_A VALUES (89716356, 91863517, 18273516, 888000);

CREATE TABLE Cntt_Publi (
  ID_Cntt_Publi int PRIMARY KEY,
  Email         varchar (50),
  Telefone      int,
  Red_Soc       varchar (50),
  CNPJ_Ag       varchar(20),
  FOREIGN KEY (CNPJ_Ag) REFERENCES Agen_Publi (CNPJ_Ag)
);

INSERT INTO Cntt_Publi VALUES (67854321, "AgenciaPubli@gmail.com", 87643211, "@SuaAgen_Publi", "00.623.904/0001-73");

CREATE TABLE PubAlvo_Ag(
  Cod_PubAlvo_Ag int PRIMARY KEY,
  Gostos        varchar(50),
  Idade         int,
  Class_E       varchar(30),
  Genero        varchar(30),
  Ocup          varchar(100),
  Nat           varchar(2),
  CNPJ_Ag       varchar(20),
  FOREIGN KEY (CNPJ_Ag) REFERENCES Agen_Publi (CNPJ_Ag)
);

INSERT INTO PubAlvo_Ag VALUES (03022476, "Rock", 24, "Classe Baixa", "Masculino", "Caixa do McDonald's", "PE", "00.623.904/0001-73")
