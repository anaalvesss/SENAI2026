let arroz = 100
let frutas = 50
let feijao = 100

function calcularTotal(frutas, arroz, feijao) {
    return frutas + arroz + feijao
}
function processarCompra(frutas, arroz, feijao) {
    let total = calcularTotal(frutas, arroz, feijao)
    return total
}
let total = processarCompra(frutas, arroz, feijao)
console.log("Preço total da compra foi R$" + total.toFixed(2))
    if (total > 200) {
    console.log("A compra falhou! O cartão não passou.")
} else {
    console.log("Compra realizada com sucesso!")
}