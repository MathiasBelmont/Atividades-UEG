<!DOCTYPE html>
<html lang="en">
<?php
error_reporting(0);
?>

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<style>
    .num {
        width: 2.5%;
    }
</style>

<body>
    <!- Bom , coisa basica cada formulário tem um nome , dai quando a pessoa clica em enviar ele vai mandar as informações para o ativ_formulario2 ->
        <form action="ativ_formulario2.php" method="post">
            <fieldset>
                <legend>Formulário computacional</legend>
                <label>
                    Nome:
                    <input type="text" name="nome" placeholder="Insira seu nome aqui" />
                </label>
                <label>
                    Idade:
                    <input type="number" name="Idade" class="num" />
                </label><br>
                <input type="radio" name="gender" <?php if (isset($gender) && $gender == "masculino") echo "checked"; ?> value="masculino">Masculino<br>
                <input type="radio" name="gender" <?php if (isset($gender) && $gender == "feminino") echo "checked"; ?> value="feminino">Feminino<br>
                <INPUT TYPE="checkbox" NAME="opc" VALUE="Computador"> Computador
                <INPUT TYPE="checkbox" NAME="opc" VALUE="Notebook"> Notebook
                <INPUT TYPE="checkbox" NAME="opc" VALUE="Smartphone"> Smartphone<br>
                <select name="experiencia">
                    <option value="">Informe sua Experiência</option>
                    <option value="n">Não posuo</option>
                    <option value="i">Iniciante</option>
                    <option value="ii">Intermediário</option>
                    <option value="iii">Avançádo</option>
                </select>
            </fieldset>
            <input type="submit" value="Cadastrar" />
        </form>
</body>

</html>