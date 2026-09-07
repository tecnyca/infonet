<!DOCTYPE html>
<html lang="pt-BR">	
<head>
	<meta charset="UTF-8">
	<title>Sistema PHP</title>
</head>
<body>
	<?php include 'cabecalho.php'; ?>
	<form action="validacao.php" method="POST">
		<label>Login: </label>
			<input type="text" name="login" required><br><br>
			
		<label>Senha: </label>
			<input type="password" name="senha" required><br><br>	
			
		<input type="submit" value="Enviar Dados">
	</form>
	<?php include 'rodape.php'; ?>
</body>
</html>