<?php
    if ($_POST) {

    $var1 = $_POST['info1'];
    $var2 = $_POST['info2'];
    $var3 = $_POST['info3'];
    $var4 = $_POST['info4'];
    $var5 = $_POST['info5'];
    $var6 = $_POST['info6'];
    $var7 = $_POST['info7'];
    $var8 = $_POST['info8'];

    echo "<br><br><strong>RESULTADO</strong> <hr>";
    echo "<b>Nome:</b> $var1 <br>";
    echo "<b>E-mail:</b> $var2 <br>";
    echo "<b>Data de nascimento:</b> $var3 <br>";
    echo "<b>Endereço:</b> $var4 <br>";
    echo "<b>Tipo de usuário:</b> $var5 <br><br>";
    echo "<b>Login:</b> $var6 <br>";
    echo "<b>Senha:</b> $var7 <br>";
    echo "<b>Confirmação de senha:</b> $var8 <br><br>";

    if  (isset($_POST['info1'],
            $_POST['info5'],
            $_POST['info7'],
            $_POST['info8']
            )
        )
    {
        $var1 = $_POST['info1'];
        $var5 = $_POST['info5'];
        $var7 = $_POST['info7'];
        $var8 = $_POST['info8'];
    }
    else {
        echo "<hr>As informações de nome, login, tipo de usuário, senha e confirmação de senha são de preenchimento obrigatório.<br>";
        }

    if ($var7 == $var8 && !empty($var7) && !empty($var8) ){
        echo "<hr>Senha validada com sucesso!<hr>";
    }
    else {
        echo "<hr>Confirmação de senha incorreta.<hr>";
        }
    
    echo "<br><button><a href='formulario.html'>Retornar ao início</button>";
    }

    else{
    echo "<hr><br>Você não possui acesso à essa página.<br><br>";
    echo "<br><button><a href='formulario.html'>Ir ao formulário</button>";
    } 
?>