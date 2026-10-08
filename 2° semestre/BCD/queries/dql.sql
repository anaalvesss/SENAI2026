 select * from cliente;
 select * from produto;
 select * from pedido;
 select * from telefone;

 select * from cliente order by nome desc;
 SELECT * from cliente limit 4;
 select * from cliente order by id desc limit 4;
 select * from cliente where id between 10 and 13;
 select * from cliente where nome = "Valter Martins";
 select * from cliente where nome like "Valter%";