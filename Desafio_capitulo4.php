<!DOCTYPE html>
<html lang="pt">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Gerenciador de Logins</title>
    <link rel="stylesheet" href="tarefa.css">
</head>

<body>
    <h1>Gerenciador de Login</h1>
    <form action="">
        <fieldset>
            <legend>Novo Login</legend>
            <label for="nome">
                nome:
                <input type="text" name="nome">
                Telefone:
                <input type="tel" name="Telefone">
                Email:
                <input type="email" name="Email">
            </label>
            <input type="submit" value="Cadastrar">
        </fieldset>
    </form>

    <?php
    $valor = '';
    $lista_nomes = [];
    $lista_telefones = [];
    $lista_emails = [];
    if (array_key_exists('nome', $_GET) && array_key_exists('Telefone', $_GET) && array_key_exists('Email', $_GET)) {
        setcookie('lista_nome', $_GET['nome']);
        $valor = $_COOKIE['lista_nome'];
        $lista_nomes[] = $valor;
        setcookie('lista_telefone', $_GET['Telefone']);
        $valor = $_COOKIE['lista_telefone'];
        $lista_telefones[] = $valor;
        setcookie('lista_email', $_GET['Email']);
        $valor = $_COOKIE['lista_email'];
        $lista_emails[] = $valor;
    }


    ?>
    <hr>
    <table>
        <tr>
            <th>Nome</th>
        </tr>
        <?php foreach ($lista_nomes as $nome) : ?>
            <tr>
                <td><?= $nome ?></td>
            </tr>
        <?php endforeach; ?>
    </table>
    <table>
        <tr>
            <th>Telefones</th>
        </tr>
        <?php foreach ($lista_telefones as $telefone) : ?>
            <tr>
                <td><?= $telefone ?></td>
            </tr>
        <?php endforeach; ?>
    </table>
    <table>
        <tr>
            <th>Emails</th>
        </tr>
        <?php foreach ($lista_emails as $email) : ?>
            <tr>
                <td><?= $email ?></td>
            </tr>
        <?php endforeach; ?>
    </table>
</body>

</html>