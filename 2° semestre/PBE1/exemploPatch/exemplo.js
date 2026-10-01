const clientes = require("./dados.json");

const id = 1;

const dados = {
    telefone: "(12) 3456-7890",
    email: "teste"
};

const chaves = Object.keys();

const cliente = clientes.find((c) => c.id == id);

chaves.forEach((chave) => {
    cliente[chave] = dados[chave];
})

console.log(clientes);