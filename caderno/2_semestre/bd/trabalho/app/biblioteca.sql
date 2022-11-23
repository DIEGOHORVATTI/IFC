/* Lógico_1: */

BEGIN

CREATE TABLE Livro (
  codLivro INT(25) PRIMARY KEY,
  tituloLivro VARCHAR(100),
  anoLivro INT(4)
);

CREATE TABLE Lugar (
  codLocal int(25) PRIMARY KEY,
  quantidadeExemplares int(10),
  nomeLocal varchar(50),
  fk_Associado_ID_CPF int(25)
);

CREATE TABLE Editora (
  nomeEditora varchar(250),
  codEditora int(25) PRIMARY KEY,
  fk_Livro_codLivro int(25)
);

CREATE TABLE exemplar (
  numExemplar int(25) PRIMARY KEY,
  dia int(10),
  mes int(10),
  ano int(20),
  fk_Livro_codLivro int(25)
);

CREATE TABLE autor (
  ID_CPFAutor int(25) PRIMARY KEY,
  nome varchar(80),
  sobreNome varchar(80)
);

CREATE TABLE Associado (
  bairro varchar(50),
  rua varchar(50),
  numero int(80),
  sobrenome varchar(50),
  nome varchar(50),
  ID_CPF int(25) PRIMARY KEY
);

CREATE TABLE Adiministrador (
  ID_CPF int(25) PRIMARY KEY,
  nome varchar(100),
  sobrenome varchar(80),
  bairro varchar(50),
  rua varchar(50),
  numero int(80),
  fk_Local_codLocal int(25)
);

CREATE TABLE Pendente (
  quantidadeExemplares int,
  dia int(2),
  ano int(4),
  mes int(2),
  CodPendente int(25) PRIMARY KEY
);

CREATE TABLE Multa (
  ano int(4),
  dia int(2),
  mes int(2),
  quantidadeExemplares int(100),
  valorMulta int,
  CodMulta int(25) PRIMARY KEY
);

CREATE TABLE autorLivro (
  fk_Livro_codLivro int(25),
  fk_autor_ID_CPFAutor int(25)
);

CREATE TABLE ExemplarLocal (
  fk_exemplar_numExemplar int(25),
  fk_Local_codLocal int(25)
);

CREATE TABLE AssociadoExemplar (
  fk_Associado_ID_CPF int(25),
  fk_Pendente_CodPendente int(25)
);

CREATE TABLE MultaPendente (
  fk_Pendente_CodPendente int(25),
  fk_Multa_CodMulta int(25)
);

ALTER TABLE Lugar ADD CONSTRAINT FK_Lugar_2
  FOREIGN KEY (fk_Associado_ID_CPF)
  REFERENCES Associado (ID_CPF)
  ON DELETE RESTRICT;

ALTER TABLE Editora ADD CONSTRAINT FK_Editora_2
  FOREIGN KEY (fk_Livro_codLivro)
  REFERENCES Livro (codLivro)
  ON DELETE RESTRICT;

ALTER TABLE exemplar ADD CONSTRAINT FK_exemplar_2
  FOREIGN KEY (fk_Livro_codLivro)
  REFERENCES Livro (codLivro)
  ON DELETE RESTRICT;

ALTER TABLE Adiministrador ADD CONSTRAINT FK_Adiministrador_2
  FOREIGN KEY (fk_Local_codLocal)
  REFERENCES Lugar (codLocal)
  ON DELETE RESTRICT;

ALTER TABLE autorLivro ADD CONSTRAINT FK_autorLivro_1
  FOREIGN KEY (fk_Livro_codLivro)
  REFERENCES Livro (codLivro)
  ON DELETE RESTRICT;

ALTER TABLE autorLivro ADD CONSTRAINT FK_autorLivro_2
  FOREIGN KEY (fk_autor_ID_CPFAutor)
  REFERENCES autor (ID_CPFAutor)
  ON DELETE SET NULL;

ALTER TABLE ExemplarLocal ADD CONSTRAINT FK_ExemplarLocal_1
  FOREIGN KEY (fk_exemplar_numExemplar)
  REFERENCES exemplar (numExemplar)
  ON DELETE RESTRICT;

ALTER TABLE ExemplarLocal ADD CONSTRAINT FK_ExemplarLocal_2
  FOREIGN KEY (fk_Local_codLocal)
  REFERENCES Lugar (codLocal)
  ON DELETE RESTRICT;

ALTER TABLE AssociadoExemplar ADD CONSTRAINT FK_AssociadoExemplar_1
  FOREIGN KEY (fk_Associado_ID_CPF)
  REFERENCES Associado (ID_CPF)
  ON DELETE SET NULL;

ALTER TABLE AssociadoExemplar ADD CONSTRAINT FK_AssociadoExemplar_2
  FOREIGN KEY (fk_Pendente_CodPendente)
  REFERENCES Pendente (CodPendente)
  ON DELETE SET NULL;

ALTER TABLE MultaPendente ADD CONSTRAINT FK_MultaPendente_1
  FOREIGN KEY (fk_Pendente_CodPendente)
  REFERENCES Pendente (CodPendente)
  ON DELETE SET NULL;

ALTER TABLE MultaPendente ADD CONSTRAINT FK_MultaPendente_2
  FOREIGN KEY (fk_Multa_CodMulta)
  REFERENCES Multa (CodMulta)
  ON DELETE SET NULL;


END