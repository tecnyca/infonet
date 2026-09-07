<?php
    if ($_POST){

        $var1 = $_POST['nome'];
        $var11 = filter_input(INPUT_POST,'nome', FILTER_SANITIZE_STRING);

        $var2 = $_POST['sobrenome'];
        $var22 = filter_input(INPUT_POST, 'sobrenome', FILTER_SANITIZE_SPECIAL_CHARS);
        
        $var3 = $_POST['estadoCivil'];
        $var33 = filter_input(INPUT_POST, 'estadoCivil', FILTER_SANITIZE_SPECIAL_CHARS);

        $var4 = $_POST['email'];
        $var44 = filter_input(INPUT_POST, 'email', FILTER_SANITIZE_EMAIL);

        $var5 = $_POST['senha'];
        $var55 = filter_input(INPUT_POST, 'senha', FILTER_SANITIZE_NUMBER_INT);

        $var6 = $_POST['nota'];
        $var66 = filter_input(INPUT_POST, 'nota', FILTER_SANITIZE_NUMBER_FLOAT);

        echo "Nome = $var11 <br>";
        echo htmlspecialchars($var22) . "<br>";
        echo strip_tags($var33) . "<br>";

        if (filter_var($var4, FILTER_VALIDATE_EMAIL)) {
            echo "<br>E-mail válido<br>"; }
        else {
            echo "Formato de e-mail inválido<br>";
            };

        if(filter_var($var5, FILTER_VALIDATE_INT)){
            echo "Senha válida<br>";}
        else{echo "Formato de número inválido";};

        if(filter_var($var6, FILTER_VALIDATE_FLOAT)){
            echo "Nota válida<br>";}
        else{ echo "<br>Formato de número inválido <br>";};
    }else{
        echo "Essa página não pode ser acessada diretamente.";
        echo "<br> <a href='Cadastro.html'>Acesse aqui</a>";
    };

?>
