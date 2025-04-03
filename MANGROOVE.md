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
