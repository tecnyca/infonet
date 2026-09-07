<?php
// Recebe os dados do formulário
$login = $_POST['login'] ?? '';
$senha = $_POST['senha'] ?? '';

try {
    if ($login === "admin" && $senha !== "admin@123@") {
        throw new Exception("Senha incorreta para login admin");
    } elseif ($login === "visit" && $senha !== "visit@123@") {
        throw new Exception("Senha incorreta para login visit");
    } elseif ($login === "colab" && $senha !== "colab@123@") {
        throw new Exception("Senha incorreta para login colab");
    } elseif (!in_array($login, ["admin", "visit", "colab"])) {
        throw new Exception("Login inválido");
    } else {
        // Se tudo estiver certo, redireciona para principal.php
        session_start();
        $_SESSION['login'] = $login;
        $_SESSION['senha'] = $senha;

        header("Location: principal.php");
        exit;
    }
} catch (Exception $e) {
    echo "<h3 style='color:red;'>" . $e->getMessage() . "</h3>";
    echo "<a href='index.php'>Voltar</a>";
}
?>
