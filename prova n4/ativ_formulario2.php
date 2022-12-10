<!DOCTYPE html>
<html lang="pt">
<?php

error_reporting(0);

?>

<head>
    <title>Document</title>
</head>

<body>
    <?php
    //Aqui o arquivo recebe as informações do primeiro e escreve elas na tela
    $nome = $_POST["nome"];
    $idade = $_POST["Idade"];
    $sexo = $_POST["gender"];
    $opc = $_POST["opc"];
    $exp = $_POST["experiencia"];
    echo "Nome : $nome<br>";
    echo "Idade : $idade<br>";
    echo "Sexo : $sexo<br>";
    echo "Experiência : ";
    switch ($exp) {
        case 'n':
            echo "Não Possuo";
            break;
        case 'i':
            echo "Iniciante";
            break;
        case 'ii':
            echo "Intermediário";
            break;
        case 'iii':
            echo "Avançado";
            break;
    }
    echo '<form action="ativ_resultado.php" method="post">';
    //Esses inputs vão servir pra mandar de volta as informações pro arquivo 1 sem precisar usar seccior ou cookie
    //Basicamente a pessoa não consegue nem ver ou alterar esses valores
    echo "<input type=hidden name=nome value=$nome>";
    echo "<input type=hidden name=idade value=$idade>";
    echo "<input type=hidden name=sexo value=$sexo>";
    echo "<input type=hidden name=opc value=$opc>";
    echo "<input type=hidden name=exp value=$exp>";
    //Aqui começa o novo formulário que vai mandar as especificações pro primeiro de volta
    if ($opc != "") {
        echo "<br>Dispositivo : $opc<br>";
        echo "Digite as configurações de seu $opc<br>";
        echo '<textarea id="confg" name="confg" rows="5" cols="33">
Ram :
Processador :
HD :
Outros :
</textarea>
<br>';
    }
    if ($exp == 'i' || $exp == 'ii' || $exp == 'iii') {
        //E aqui a pessoa fala no que ela é boa
        echo '
     Possuo experiência em :<br>
             <INPUT TYPE="checkbox" NAME="ling" VALUE="C"> C<br>
            <INPUT TYPE="checkbox" NAME="ling" VALUE="C++"> C++<br>
            <INPUT TYPE="checkbox" NAME="ling" VALUE="Java"> Java<br>
            <INPUT TYPE="checkbox" NAME="ling" VALUE="PHP"> PHP<br>
            <INPUT TYPE="checkbox" NAME="ling" VALUE="Phyton"> Python<br>
            <INPUT TYPE="checkbox" NAME="ling" VALUE="Perl"> Perl<br>
            <INPUT TYPE="checkbox" NAME="ling" VALUE="Ruby"> Ruby<br>
            <INPUT TYPE="checkbox" NAME="ling" VALUE="Outra"> Outra<br>

    ';
    }
    //E depois clica aqui pra ver o formulário completo no arquivo 1 dnv
    echo '<input type="submit" value="Enviar" />
        </form>';
    ?>
</body>

</html>