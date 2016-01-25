<?php

echo 'dictGen 0.1 by Miguel Espinoza';
echo 'Source file with common words (one per line):';
$path = trim(fgets(STDIN));

if (!file_exists($path)) die('Oops, that file doesnt exist');
?>