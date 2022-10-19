<html>
<head>
<title>Gerenciador de Tarefas</title>
</head>
<body>
<h1>Gerenciador de Tarefas</h1>
<form>
<?php
$lista_tarefas = array();
if (isset($_GET['nome'])) {
$lista_tarefas[] = $_GET['nome'];
}
?>
<fieldset>
<legend>Nova tarefa</legend>
<label>
Tarefa:
<input type="text" name="nome" />
</label>
<input type="submit" value="Cadastrar" />
</fieldset>
</form>
<table>
<tr>
<th>Tarefas</th>
</tr>
<?php foreach ($lista_tarefas as $tarefa) : ?>
<tr>
<td><?php echo $tarefa; ?> </td>
</tr>
<?php endforeach; ?>
</table>
</body>
</html>