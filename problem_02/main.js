let valor = 5;

function fibo(valor) {
    let ult;
    let pen;
    let aux;
    let sum;

    for(i = 0; i < valor; i++) {
        if(i == 0) {
            ult = 1;
        }

        if(i == 1) {
            ult == 2;
        }

        if(ult % 2 == 0) {
            sum =+ ult;
        }

        aux = ult + pen;
        pen = ult;
        ult = aux;
    }

    return console.log(sum);
}