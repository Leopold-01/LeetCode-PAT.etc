#include <bits/stdc++.h>
//不用写 string头文件。但不是高亮不好看，自己就写下吧
//#include <string> 写了也不高亮
using namespace std;
int main()
{
    //string的定义和初始化
    string s1;//初始化字符串，空字符串
    string s2=s1;//不可以这么写！，要复制s2=s1输入后的值，应写在cin>>s1之后
    string s3="I am JingleQ";
    string s4(10,'a');//连续10个设置为a
    string s5(s4);
    string s6("I am Lins");
    string s7=string (6,'c');


    //常用操作
    string s8= s3+s6;//将两个字符串合并成一个
    s3=s6;//用一个字符串来代替另一个字符串的对应元素

    cin >>s1;
    //s2=s1;
    cout<<"s1："<<s1<<endl;
    cout<<"s2: "<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;
    cout<<s6<<endl;
    cout<<s7<<endl;
    cout<<s8<<endl;
    cout<<"s7 size = "<<s7.size()<<endl;//字符串长度，！不包括结束符
    cout<<(s2.empty()?"This string is empty":"This string is not empty")<<endl;


    


    //遍历
    return 0;
}