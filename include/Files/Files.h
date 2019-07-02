/*************************************************************************
* All rights reserved.
* 
* 文件名称：Files.h
* 摘    要：文件通用操作导出静态库
* 
* 作    者：何俊强
* 完成日期：2019/06/01
*************************************************************************/

#include <string>
#include <vector>
#include <fstream>

namespace hjq
{
	namespace Files
	{
		
		/**
		* @功能：删除单个文件
		* @参数：strFilePath 文件全路径
		* @输出：true(删除成功)/false(删除失败)
		*/
		bool FileDelete(const std::string& strFilePath);

		/**
		* @功能：复制单个文件
		* @参数：strSrcFilePath 被复制源文件全路径
		* @参数：strDesFilePath 复制后目标文件全路径
		* @参数：bOverWrite 如果目标文件已存在，覆盖目标文件(true)/不覆盖(false)
		* @输出：true(复制成功)/false(复制失败)
		*/
		bool FileCopy(const std::string& strSrcFilePath, const std::string& strDesFilePath, bool bOverWrite);

		/**
		* @功能：移动单个文件
		* @参数：strSrcFilePath 被移动源文件全路径
		* @参数：strDesFilePath 移动后目标文件全路径
		* @输出：true(移动成功)/false(移动失败)
		*/
		bool FileMove(const std::string& strSrcFilePath, const std::string& strDesFilePath);

		/**
		* @功能：判断文件是否存在
		* @参数：strFilePath 文件全路径
		* @输出：true(文件存在)/false(文件不存在)
		*/
		bool FileIsExist(const std::string& strFilePath);

		/**
		* @功能：删除一个文件夹下所有符合指定后缀类型的文件
		* @参数：strRootDir 文件夹全路径
		* @参数：strExt 文件后缀（"*"表示所有文件）
		* @参数：bDoWithSubDir true(遍历子文件夹）/false(不深入子文件夹，只在当前文件夹层)
		*/
		void FileDeleteByExt(const std::string& strRootDir, const std::string& strExt, bool bDoWithSubDir);

		/**
		* @功能：获取一个文件夹下所有符合指定后缀类型的文件
		* @参数：strRootDir 文件夹全路径
		* @参数：strExt 文件后缀（"*"表示所有文件）
		* @参数：bDoWithSubDir true(遍历子文件夹）/false(不深入子文件夹，只在当前文件夹层)
		* @参数：vecStrFileName 用于存放符合要求的文件名
		* @参数：vecStrFilePath 用于存放符合要求的文件全路径
		*/
		void FileRetrieveByExt(const std::string& strRootDir, const std::string& strExt, bool bDoWithSubDir,
			std::vector<std::string>& vecStrFileName, std::vector<std::string>& vecStrFilePath);

		/**
		* @功能：判断文件夹是否为空
		* @参数：strDir 文件夹全路径
		* @输出：true(文件夹为空)/false(文件夹不为空)
		*/
		bool DirIsEmpty(const std::string& strRootDir);

		/**
		* @功能：删除文件夹（包括路径下的所有文件）
		* @参数：strRootDir 文件夹全路径
		* @输出：true(文件夹删除成功)/false(文件夹删除失败)
		*/
		bool DirDelete(const std::string& strRootDir);

		/**
		* @功能：复制文件夹（包括路径下的所有文件）
		* @参数：strSrcDir 被复制源文件夹全路径
		* @参数：strDesDir 被复制目标文件夹全路径
		* @参数：bOverWrite 如果目标文件已存在，覆盖目标文件(true)/不覆盖(false)
		* @输出：true(文件夹复制成功)/false(文件夹复制失败)
		*/
		bool DirCopy(const std::string& strSrcDir, const std::string& strDesDir, bool bOverWrite);

		/**
		* @功能：创建文件夹
		* @参数：strRootDir 文件夹全路径
		* @输出：true(文件夹创建成功)/false(文件夹创建失败)
		*/
		bool DirCreate(const std::string& strRootDir);

		/**
		* @功能：从文件中读取一行数据，并进行分割存储
		* @参数：fin 文件
		* @参数：vecStrData 用于保存被分割的一行数据
		* @参数：szDelim 分割符，用户可以按自己需求设置，也可以不设置，此时默认为" \t,;\n"
		*/
		void ReadOneLineData(std::ifstream& fin, std::vector<std::string>& vecStrData, const char *szDelim = " \t,;\n");

		/**
		* @功能：按指定符号分割字符串
		* @参数：strLine 待分割的字符串
		* @参数：vecStrData 用于保存被分割的一行数据
		* @参数：szDelim 分割符，用户可以按自己需求设置，也可以不设置，此时默认为" \t,;\n"
		*/
		void StringSplit(const std::string& strLine, std::vector<std::string>& vecStrData, const char *szDelim = " \t,;\n");

	}	
}

