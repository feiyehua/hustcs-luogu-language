###
 # @Author       : FeiYehua
 # @Date         : 2025-01-19 22:47:05
 # @LastEditTime : 2025-01-22 23:29:52
 # @LastEditors  : FeiYehua
 # @Description  : 
 # @FilePath     : makedir.sh
 #      © 2024 FeiYehua
### 
#!/bin/zsh
if [ -z "$1" ]; then
  echo "请提供文件夹和文件名作为参数"
  exit 1
fi
name="$1"

cd codes
mkdir "$name"
cd "$name"
echo '#include<iostream>' > "$name.cpp"
echo '' >> "$name.cpp"
echo 'using namespace std;' >> "$name.cpp"
echo 'int n;' >> "$name.cpp"
echo '' >> "$name.cpp"
echo '' >> "$name.cpp"
echo 'int main()' >> "$name.cpp"
echo '{' >> "$name.cpp"
echo '#ifdef LOCAL' >> "$name.cpp"
echo "    freopen(\"${name}1.in\",\"r\",stdin);" >> "$name.cpp"
echo '#endif' >> "$name.cpp"
echo '    ' >> "$name.cpp"
echo '    ' >> "$name.cpp"
echo '}' >> "$name.cpp"
