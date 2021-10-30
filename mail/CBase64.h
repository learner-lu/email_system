#ifndef CBASE64_H
#define CBASE64_H
#include<string>
using namespace std;
//代码
//https://blog.csdn.net/chenxiaohua/article/details/4084602
class CBase64
{
public:
    CBase64();
    ~CBase64();

    /*********************************************************
    * 函数说明：将输入数据进行base64编码
    * 参数说明：[in]pIn		需要进行编码的数据
                [in]uInLen  输入参数的字节数
                [out]strOut 输出的进行base64编码之后的字符串
    * 返回值  ：true处理成功,false失败
    * 作  者  ：ChenLi
    * 编写时间：2009-02-17
    **********************************************************/
    bool static Encode(const char * pIn, unsigned long uInLen, string& strOut);

    /*********************************************************
    * 函数说明：将输入数据进行base64编码
    * 参数说明：[in]pIn			需要进行编码的数据
                [in]uInLen		输入参数的字节数
                [out]pOut		输出的进行base64编码之后的字符串
                [out]uOutLen	输出的进行base64编码之后的字符串长度
    * 返回值  ：true处理成功,false失败
    * 作  者  ：ChenLi
    * 编写时间：2009-02-17
    **********************************************************/
    bool static Encode(const unsigned char *pIn, unsigned long uInLen, unsigned char *pOut, unsigned long *uOutLen);

    /*********************************************************
    * 函数说明：将输入数据进行base64解码
    * 参数说明：[in]strIn		需要进行解码的数据
                [out]pOut		输出解码之后的节数数据
                [out]uOutLen	输出的解码之后的字节数长度
    * 返回值  ：true处理成功,false失败
    * 作  者  ：ChenLi
    * 编写时间：2009-02-17
    **********************************************************/
    bool static Decode(const string& strIn, char *pOut,long *uOutLen) ;

    /*********************************************************
    * 函数说明：将输入数据进行base64解码
    * 参数说明：[in]strIn		需要进行解码的数据
                [out]pOut		输出解码之后的节数数据
                [out]uOutLen	输出的解码之后的字节数长度
    * 返回值  ：true处理成功,false失败
    * 作  者  ：ChenLi
    * 编写时间：2009-02-17
    **********************************************************/
    bool static Decode(const unsigned char *pIn, unsigned long uInLen, unsigned char *pOut, unsigned long *uOutLen) ;
};

#endif // CBASE64_H
