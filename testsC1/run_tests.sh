# Dossiers
EX00_DIR="../ex00"
EX01_DIR="../ex01"
EX02_DIR="../ex02"
EX03_DIR="../ex03"
EX04_DIR="../ex04"
EX05_DIR="../ex05"
EX06_DIR="../ex06"
EX07_DIR="../ex07"
EX08_DIR="../ex08"
TEST_DIR="../tests"

# Fichiers
EX00_MAIN="ft_ft.c"
EX00_TEST="test_ft_ft.c"
EX01_MAIN="ft_ultimate_ft.c"
EX01_TEST="test_ft_ultimate_ft.c"
EX02_MAIN="ft_swap.c"
EX02_TEST="test_ft_swap.c"
EX03_MAIN="ft_div_mod.c"
EX03_TEST="test_ft_div_mod.c"
EX04_MAIN="ft_ultimate_div_mod.c"
EX04_TEST="test_ft_ultimate_div_mod.c"
EX05_MAIN="ft_putstr.c"
EX05_TEST="test_ft_putstr.c"
EX06_MAIN="ft_strlen.c"
EX06_TEST="test_ft_strlen.c"
EX07_MAIN="ft_rev_int_tab.c"
EX07_TEST="test_ft_rev_int_tab.c"
EX08_MAIN="ft_sort_int_tab.c"
EX08_TEST="test_ft_sort_int_tab.c"



# Compilation et exécution pour ex00
echo "Compiling and testing ex00..."

gcc -Wall -Wextra -Werror -o $EX00_DIR/$TEST_DIR/test_ft_ft $EX00_DIR/$EX00_MAIN $TEST_DIR/$EX00_TEST
if [ $? -eq 0 ]; then
    echo "Compilation successful for ex00."
    $EX00_DIR/$TEST_DIR/test_ft_ft
else
    echo "Compilation failed for ex00."
fi

echo ""
echo "----------------------------"
echo ""

# Compilation et exécution pour ex01
echo "Compiling and testing ex01..."

gcc -Wall -Wextra -Werror -o $EX01_DIR/$TEST_DIR/test_ft_ultimate_ft $EX01_DIR/$EX01_MAIN $TEST_DIR/$EX01_TEST
if [ $? -eq 0 ]; then
    echo "Compilation successful for ex01."
    $EX01_DIR/$TEST_DIR/test_ft_ultimate_ft
else
    echo "Compilation failed for ex01."
fi

echo ""
echo "----------------------------"
echo ""

# Compilation et exécution pour ex02
echo "Compiling and testing ex02..."

gcc -Wall -Wextra -Werror -o $EX02_DIR/$TEST_DIR/test_ft_swap $EX02_DIR/$EX02_MAIN $TEST_DIR/$EX02_TEST
if [ $? -eq 0 ]; then
    echo "Compilation successful for ex02."
    $EX02_DIR/$TEST_DIR/test_ft_swap
else
    echo "Compilation failed for ex02."
fi

echo ""
echo "----------------------------"
echo ""

# Compilation et exécution pour ex03
echo "Compiling and testing ex03..."

gcc -Wall -Wextra -Werror -o $EX03_DIR/$TEST_DIR/test_ft_div_mod $EX03_DIR/$EX03_MAIN $TEST_DIR/$EX03_TEST
if [ $? -eq 0 ]; then
    echo "Compilation successful for ex03."
    $EX03_DIR/$TEST_DIR/test_ft_div_mod
else
    echo "Compilation failed for ex03."
fi

echo ""
echo "----------------------------"
echo ""

# Compilation et exécution pour ex04
echo "Compiling and testing ex04..."

gcc -Wall -Wextra -Werror -o $EX04_DIR/$TEST_DIR/test_ft_ultimate_div_mod $EX04_DIR/$EX04_MAIN $TEST_DIR/$EX04_TEST
if [ $? -eq 0 ]; then
    echo "Compilation successful for ex04."
    $EX04_DIR/$TEST_DIR/test_ft_ultimate_div_mod
else
    echo "Compilation failed for ex04."
fi

echo ""
echo "----------------------------"
echo ""

# Compilation et exécution pour ex05
echo "Compiling and testing ex05..."

gcc -Wall -Wextra -Werror -o $EX05_DIR/$TEST_DIR/test_ft_putchar $EX05_DIR/$EX05_MAIN $TEST_DIR/$EX05_TEST
if [ $? -eq 0 ]; then
    echo "Compilation successful for ex05."
    $EX05_DIR/$TEST_DIR/test_ft_putchar
else
    echo "Compilation failed for ex05."
fi

echo ""
echo "----------------------------"
echo ""

# Compilation et exécution pour ex06
echo "Compiling and testing ex06..."

gcc -Wall -Wextra -Werror -o $EX06_DIR/$TEST_DIR/test_ft_strlen $EX06_DIR/$EX06_MAIN $TEST_DIR/$EX06_TEST
if [ $? -eq 0 ]; then
    echo "Compilation successful for ex06."
    $EX06_DIR/$TEST_DIR/test_ft_strlen
else
    echo "Compilation failed for ex06."
fi

echo ""
echo "----------------------------"
echo ""

# Compilation et exécution pour ex07
echo "Compiling and testing ex07..."

gcc -Wall -Wextra -Werror -o $EX07_DIR/$TEST_DIR/test_ft_rev_int_tab $EX07_DIR/$EX07_MAIN $TEST_DIR/$EX07_TEST
if [ $? -eq 0 ]; then
    echo "Compilation successful for ex07."
    $EX07_DIR/$TEST_DIR/test_ft_rev_int_tab
else
    echo "Compilation failed for ex07."
fi

echo ""
echo "----------------------------"
echo ""

# Compilation et exécution pour ex08
echo "Compiling and testing ex08..."

gcc -Wall -Wextra -Werror -o $EX08_DIR/$TEST_DIR/test_ft_sort_int_tab $EX08_DIR/$EX08_MAIN $TEST_DIR/$EX08_TEST
if [ $? -eq 0 ]; then
    echo "Compilation successful for ex08."
    $EX08_DIR/$TEST_DIR/test_ft_sort_int_tab
else
    echo "Compilation failed for ex08."
fi

echo ""
echo "----------------------------"
echo ""
