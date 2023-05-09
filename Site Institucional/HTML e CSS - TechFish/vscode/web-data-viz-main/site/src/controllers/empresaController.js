var empresaModel = require("../models/empresaModel");

function listar(req, res) {
    empresaModel.listar().then(function (resultado) {
        // precisamos informar que o resultado voltará para o front-end como uma resposta em json
        res.status(200).json(resultado);
    }).catch(function (erro) {
        res.status(500).json(erro.sqlMessage);
    })
}

function cadastrar(req, res) {
    // Crie uma variável que vá recuperar os valores do arquivo cadastro.html
    var nome = nome_empresa.value;
    var cnpj = CNPJ.value;
    var rua = rua.value;
    var numero = numero.value;
    var cidade = cidade.value;
    var telefone = Telefone.var;
    var email = Email.value;

   
    // Faça as validações dos valores
    if (nome == undefined) {
        res.status(400).send("Seu nome está undefined!");
    } else if (cnpj == undefined) {
        res.status(400).send("Sua empresa está undefined!");
    } else if (rua == undefined) {
        res.status(400).send("Seu telefonel está undefined!");
    } else if (numer == undefined) {
        res.status(400).send("Seu telefonel está undefined!");
    }else if (cidade == undefined) {
        res.status(400).send("Seu telefonel está undefined!");
    } else if (email == undefined) {
        res.status(400).send("Seu email está undefined!");
    } else if (telefone == undefined) {
        res.status(400).send("Sua senha está undefined!");
    } else {

        // Passe os valores como parâmetro e vá para o arquivo usuarioModel.js
        empresaModel.cadastrar(nome, cnpj, rua, numero, cidade, email, telefone)
            .then(
                function (resultado) {
                    res.json(resultado);
                }
            ).catch(
                function (erro) {
                    console.log(erro);
                    console.log(
                        "\nHouve um erro ao realizar o cadastro! Erro: ",
                        erro.sqlMessage
                    );
                    res.status(500).json(erro.sqlMessage);
                }
            );
    }
}

module.exports = {
    cadastrar,
    listar,
 
}