- AULA 1
``` sql 

CREATE TABLE Paciente(
	  CPF            varchar(11) PRIMARY KEY, 
	  tp_sang        varchar(3),
	  nasc           date,
    alergias       varchar(100),
    contato        int,
    endereco       varchar(100)         
); 


INSERT INTO Paciente VALUES("98765432100", "AB+", "31/12/1960", "camarão, corante, ovo, dipirona", "819784716507", "Pau Amarelo, Recife, PE, Brasil");
INSERT INTO Paciente VALUES("69666696969", "A-", "18/08/1987", "amendoim", "81969696969", "Linha do tiro, Recife, PE, Brasil");
INSERT INTO Paciente VALUES("00000000001", "O-", "24/12/1000", "crente", "81901050022", "Janga, Paulista, PE, Brasil");

CREATE TABLE Medico(
  CRM           varchar(20) PRIMARY KEY,
  CPF         varchar (11),
  Nome      varchar (60),
  Area_Atuacao varchar (100),
  Contatos int,
  Graduacao     varchar (100)
);
```

- AULA 2

``` sql
CREATE TABLE Pessoa(
	CPF         varchar(14),
	nome        varchar(100),
	genero      varchar(10),
	data_nasc   date,
);

CREATE TABLE Recebe(
  cod        int PRIMARY KEY,
  CPF      varchar(14),
  FOREGEIN KEY (CPF) REFERENCES Pessoa (CPF)
);
```

- AULA 3
``` sql
CREATE TABLE Protag(
	nome         varchar(60) PRIMARY KEY,
	hp           varchar(20),
	mp           varchar(20),
	fadiga       varchar(20),
    forca        int,
    agilidade    int,
    percepcao    int,
    vitalidade   int,
    intelecto    int,
    pts_hab      int
  
);

INSERT INTO Protag VALUES("Sung Jin Woo", "100/100", "10/10", "50/50", 95, 87, 39, 16, 57, 7);
INSERT INTO Protag VALUES("Ser Absoluto", "10.000/10.000", "500/500", "300/300", 100000, 100000, 100000, 100000, 100000, 100);
INSERT INTO Protag VALUES("Antares", "5000/5000", "250/250", "150/150", 230, 193, 89, 60, 156, 10)
```
- AULA 4
```sql

