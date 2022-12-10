<?php
//E aqui em baixo ele monta todo o formulário depois que a pessoa preenche as opções no 2º arquivo
$ling = $_POST['ling'];
//Cada if verifica se existe alguma coisa na variavel antes de escrever ela , para escrever só o que a pessoa preencheu
if ($_POST['nome'] != "") {
    echo "Nome : " . $_POST['nome'];
}
if ($_POST['idade'] != "") {
    echo "<br>Idade : " . $_POST['idade'];
}
if ($_POST['sexo'] != "") {
    echo "<br>Sexo : " . $_POST['sexo'];
}
if ($_POST['opc'] != "") {
    echo "<br>Dispositivo :" . $_POST['opc'];
}
if ($_POST['exp'] != "") {
    echo "<br>Experiência :";
    switch ($_POST['exp']) {
        case 'i':
            echo " Iniciante";
            break;
        case 'ii':
            echo " Intermediário";
            break;
        case 'iii':
            echo " Avançado";
            break;
    };
}
if ($ling != "") {
    echo "<br>Linguagem : $ling";
}
if ($_POST['opc'] != "") {
    echo "<br>Configuração : " . $_POST["confg"];
}
