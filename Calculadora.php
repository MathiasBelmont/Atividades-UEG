<!DOCTYPE html>
<html lang="pt">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Calculadora.web</title>
</head>

<body>

    <?php
    echo ' <table aling="center">
    <th>
    <form action="">
        <fieldset>
            <legend>Página para calculos</legend>
            <label for="nome">
                Primeiro Numero:
                <input type="number" name="Num1">
                Segundo Numero:
                <input type="number" name="Num2"><br><br>
                Sua Idade:
                <input type="number" name="Idade">
                Opção:
                <input type="text" name="Opc">
            </label>
            <input type="submit" value="Calcular">
        </fieldset>
    </form> 
    </th>
    </table>';
    $Num1 = $_GET["Num1"];
    $Num2 = $_GET["Num2"];
    if (is_numeric($Num1)&&is_numeric($Num2)) {
    $Idade = $_GET["Idade"];
    $Opc = $_GET["Opc"];
    switch ($Opc) {
        case '+': {
                $Resultado = $Num1 + $Num2;
                setcookie("ReAnt", $Resultado);
                break;
            }
        case '-': {
                $Resultado = $Num1 - $Num2;
                setcookie("ReAnt", $Resultado);
                break;
            }
        case '/': {
                $Resultado = $Num1 / $Num2;
                setcookie("ReAnt", $Resultado);
                break;
            }
        case '*': {
                $Resultado = $Num1 * $Num2;
                setcookie("ReAnt", $Resultado);
                break;
            }
        case '%': {
                $Resultado = $_COOKIE["ReAnt"] + $Idade;
                setcookie("ReAnt", $Resultado);
                break;
            }

        default:

            echo "Digite uma operação válida<br>";
            $Resultado = '¯\_(ツ)_/¯';
            break;
    }
    echo "Resultado da conta : $Resultado";
}
else{
    echo 'Digite todos os campos numericos para realizar a conta! (╯°□°）╯︵ ┻━┻ ';
}
    ?>
    <table align="left">
        <fieldset>
            <tr>
                <br>
                <font 16em><b> Bem Vindo a calculadora.web<br></b></font>
            </tr>
            Digite dois numeros nos espaços indicados<br> e depois uma operação<br>
            + para soma<br>
            - para subtração<br>
            * para multiplicação<br>
            / para divisão<br>
            % para somar sua idade ao resultado anterior<br>
        </fieldset>
    </table>
</body>

</html>