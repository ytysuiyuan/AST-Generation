"# AST-Generation" 
# 利用flex和bison对一段上古时期的代码进行词法分析和语法分析，然后生成抽象语法树(AST),并利用Graphviz进行画图生成
# 需要先下载flex, bison和Graphviz，然后把这个文件中的所有文件(除了.git)导入到codeblocks里面进行编译运行
# 可以在控制台输入nt x and skip; x <== 1 and skip; if(x > 1) then { x := 2 } else { x := 3 }; x := 4，然后会生成一个dump.dot文件，在cmd中输入dot -Tpdf -o dump.pdf dump.dot就会生成dump.pdf文件
# 打开pdf文件就可以看到生成的AST了
