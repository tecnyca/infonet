<?php
session_start();

function retornarTipoUsuario($login, $senha) {
    if ($login === "admin" && $senha === "admin@123@") {
        return "Administrador";
    } elseif ($login === "visit" && $senha === "visit@123@") {
        return "Visitante";
    } elseif ($login === "colab" && $senha === "colab@123@") {
        return "Colaborador";
    } else {
        return "Usuário desconhecido";
    }
}

// Recupera os dados da sessão
$login = $_SESSION['login'] ?? '';
$senha = $_SESSION['senha'] ?? '';
$tipoUsuario = retornarTipoUsuario($login, $senha);
?>

<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <title>Página Principal</title>
</head>
<body>
    <?php include 'cabecalho.php'; ?>

    <h2>Seja bem-vindo, <?php echo $tipoUsuario; ?>!</h2>

    <?php include 'rodape.php'; ?>
</body>
</html>
