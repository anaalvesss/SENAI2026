drop database if exists gestao_pedidos;
create database gestao_pedidos;
use gestao_pedidos;
create table produto(
    id int not null primary key auto_increment,
    nome varchar(100) not null
);
create table telefone(
    id int not null primary key auto_increment,
    id_cliente int not null,
    numero varchar(100) not null unique,
    tipo enum('Residencial', 'Comercial', 'Celular') not null
);
create table cliente(
    id int not null primary key auto_increment,
    nome varchar(100) not null,
    cep varchar(11) not null,
    numero varchar(10),
    complemento varchar(100)
);
create table pedido(
    id int not null primary key auto_increment,
    id_cliente int not null,
    id_produto int not null,
    quantidade int not null,
    valor_unitario decimal(10,2) not null,
    subtotal decimal(10,2) default (valor_unitario * quantidade)
);

alter table telefone add constraint fk_telefones foreign key (id_cliente) references cliente(id);
alter table pedido add constraint fk_faz foreign key (id_cliente) references cliente(id);
alter table pedido add constraint fk_possui foreign key (id_produto) references produto(id);

describe produto;
describe telefone;
describe cliente;
describe pedido;
show tables;

use gestao_pedidos;
insert into cliente(nome, numero, complemento, cep) values
("Ana Maria Silva",null,"21","13905-522"),
("Valentina Oliveira","Ap:19 Bloco:2","12","13903-333"),
("Enzo Martins","Ap: 19"," 195B","13903-235"),
("Timoteo Matos","Ap: 27"," Ap44 BL01","13905-714"),
("Xeila Teixeira de Souza",null," Fundos","13907-100"),
("Raul Bispo Filho","100",null,"13907-100"),
("Hugo Souza","9090","Fundos","13904-906"),
("Brito Bispo Martim","1313","BL19 AP44","13904-906"),
("Hugo Silva Alves","1010","BL10 AP14","13904-452"),
("Valter Martins","	1245",null,"13904-071"),
("Antônio Martins","	2345",null,"	13905-520"),
("Zélia Júnior","13",null,"13901-329"),
("Evandro Martins de Oliveira","17",	"BL12 AP44","13905-682");

insert into telefone(id_cliente,numero,tipo) values
(1,"19 99987-8789","Celular"),
(1,"19 99980-4848","Celular"),
(2,"19 98450-1212","Residencial"),
(3,"19 99988-2121","Celular"),
(3,"19 99777-2222","Residencial"),
(3,"19 99900-1010","Comercial"),
(4,"19-90952-7709","Celular"),
(4,"19-86960-6613","Residencial"),
(5,"19-59052-5910","Celular"),
(5,"19-70278-3889","Residencial"),
(6,"19-95184-7473","Celular"),
(7,"19-18092-0669","Celular"),
(8,"19-19025-8194","Celular"),
(9,"19-54195-3946","Celular"),
(9,"19-09467-9337","Residencial"),
(10,"19-85553-5217","Celular"),
(11,"19-76827-0808","Celular"),
(12,"19-03094-9372","Celular"),
(12,"19-87797-0571","Comercial"),
(12,"19-06019-6601","Residencial"),
(13,"19-53922-8414","Celular");

insert into produto(nome) values
("Impressora laser"),
("Impressora deskjet"),
("Impressora matricial"),
("Impressora mobile");

insert into pedido(id,id_produto,id_cliente,quantidade,valor_unitario) values
(1005,1,1,5,1500.00),
(1006,2,1,3,350.00),
(1007,3,2,1,190.00),
(1008,4,3,6,980.00);

select * from cliente;
select * from telefone;
select * from produto;
select * from pedido;