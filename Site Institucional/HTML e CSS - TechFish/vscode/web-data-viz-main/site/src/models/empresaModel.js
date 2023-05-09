var database = require("../database/config")

function listar() {
    var instrucao = `
        SELECT * FROM Empresa;
    `;
    console.log("Executando a instrução SQL: \n" + instrucao);
    return database.executar(instrucao);
}

function cadastrar(nome, cnpj, rua, numero, cidade, email, telefone) {
    console.log("ACESSEI O USUARIO MODEL \n \n\t\t >> Se aqui der erro de 'Error: connect ECONNREFUSED',\n \t\t >> verifique suas credenciais de acesso ao banco\n \t\t >> e se o servidor de seu BD está rodando corretamente. \n\n function cadastrar():", nome, cnpj, rua, numero, cidade, email, telefone);
    var instrucao = `
        INSERT INTO Empresa (Nome, CNPJ, Rua, Numero, Cidade, email_responsavel, telefone_responsavel) VALUES ('${nome}', '${cnpj}', '${rua}', '${numero}', '${cidade}', '${email}', '${telefone}');
    `;
    console.log("Executando a instrução SQL: \n" + instrucao);
    return database.executar(instrucao);
}

module.exports = {
   
    cadastrar,
    listar,
    

};