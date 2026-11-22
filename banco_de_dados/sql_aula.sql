-- Criando o Banco de Dados com o set para caracteres especiais
create database cadastro
default character set utf8mb4
default collate utf8mb4_general_ci;

use cadastro;

-- Criação da tabela pessosas com a configuração de caracteres padrão
create table pessoas(
id int not null auto_increment,
nome varchar(30) not null,
nascimento date,
sexo enum('M', 'F'),
peso decimal(5,2),
altura decimal(3,2),
nacionalidade varchar(20) default 'Brasil',
primary key(id)
)default charset = utf8mb4;

-- Inserindo dados na tabela informando as colunas, exceto a do id por ser auto_increment
insert into pessoas
(nome, nascimento, sexo, peso, altura, nacionalidade)
values
('Maria', '1999-12-30', 'F', '55.2', '1.65', 'Portugual');

-- Caso a ordem para inserir os dados seja exatamente a mesma dos campos (Utilizando o default caso seja padrão), não precisa informar no início
insert into pessoas values
(default, 'Thiago', '2000-4-19', 'M', '65.0', '1.64', default),
(default, 'João', '2000-3-5', 'M', '80', '2', default),
(default, 'Géssica', '2001-06-22', 'F', '57.9', '1.75', 'EUA');

select * from pessoas;

desc pessoas;

-- Adicionando uma coluna e deletando uma coluna
alter table pessoas
add column test varchar(10);

-- Deletando a coluna
alter table pessoas
drop column test;
  
-- Adicionando uma nova coluna na tabela (after para indicar o local, caso contrario seja criada por último)
alter table pessoas
add column profissao varchar(10) after nome;

-- Modificando definições
alter table pessoas
modify column profissao varchar(20) not null default '';

-- Renomenado Coluna (colocar todas as definições para não perder as configuraçõoes)
alter table pessoas
change column profissao prof varchar(20) not null default '';

-- Renomeando tabela
alter table pessoas
rename to gafanhotos;

-- if not exists (cria caso não exista) impede de sobreescrever um bando ou tabela já existente
create table if not exists cursos(
nome varchar(30) not null unique,
descricao text,
carga int unsigned,
totaulas int,
ano year default '2016'
)default charset = utf8mb4;

-- Criando a chave primária (criando a nova coluna em 1º)
alter table cursos
add column idcurso int first;

-- Criando a chave primária
alter table cursos
add primary key(idcurso);

desc cursos;

-- Inserindo dados na tabela cursos
insert into cursos values
('1','HTML4','Curso de HTML5','40','37','2014'),
('2','Algoritmos','Lógica de Programação','20','15','2014'),
('3','Photoshop','Dicas de Photoshop CC','10','8','2014'),
('4','PGP','Curso de PHP para iniciantes','40','20','2010'),
('5','Jarva','Introdução à Linguagem Java','10','29','2000'),
('6','MySQL','Bancos de Dados MySQL','30','15','2016'),
('7','Word','Curso completo de Word','40','30','2016'),
('8','Sapateado','Danças Rítmicas','40','30','2018'),
('9','Cozinha Árabe','Aprenda a fazer Kibe','40','30','2018'),
('10','YouTuber','Gerar polêmica e ganhar inscritos','5','2','2018');

select * from cursos;

-- Modificando as linhas incirretas
update cursos
set nome = 'HTML5'
where idcurso = '1';

update cursos
set nome = 'PHP', ano = '2015'
where idcurso = '4';

-- Modificação com limitação de linhas
update cursos
set nome = 'Java', ano = '2015', carga = '40'
where idcurso = '5'
limit 1;

-- Removendo uma linha 
delete from cursos
where idcurso = '8';
delete from cursos
where idcurso = '9';
delete from cursos
where idcurso = '10';



select * from cursos;