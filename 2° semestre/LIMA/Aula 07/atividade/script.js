const nome = document.querySelector("#nome")
const email = document.querySelector("#email")
const matricula = document.querySelector("#matricula")
const salvar = document.querySelector("#salvar")
const tabela = document.querySelector("#tabela")


salvar.addEventListener("click", function(){
    const linha = document.createElement('tr')
    const colunaNome = document.createElement("td")
    const colunaEmail = document.createElement("td")
    const colunaMatricula = document.createElement("td")

    colunaNome.textContent = nome.value
    colunaEmail.textContent = email.value
    colunaMatricula.textContent = matricula.value

    linha.append(colunaNome)
    linha.append(colunaEmail)
    linha.append(colunaMatricula)

    tabela.append(linha)
})

const nome1 = document.querySelector("#nome1")
const email1 = document.querySelector("#email1")
const disciplina1 = document.querySelector("#disciplina1")
const salvar1 = document.querySelector("#salvar1")
const tabela1 = document.querySelector("#tabela1")

salvar1.addEventListener("click", function(){
    const linha = document.createElement('tr')
    const colunaNome1 = document.createElement("td")
    const colunaEmail1 = document.createElement("td")
    const colunaDisciplina1 = document.createElement("td")

    colunaNome1.textContent = nome1.value
    colunaEmail1.textContent = email1.value
    colunaDisciplina1.textContent = disciplina1.value

    linha.append(colunaNome1)
    linha.append(colunaEmail1)
    linha.append(colunaDisciplina1)

    tabela1.append(linha)
})