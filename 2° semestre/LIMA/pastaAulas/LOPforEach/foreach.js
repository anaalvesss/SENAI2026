const listaChamada = require("./lista.json")

listaChamada.forEach(aluno => {
    if(aluno.nota < 5){
        console.log(aluno.nome + "não passou de ano")
    }else{
        console.log(aluno.nome + "passou de ano")
    }
});