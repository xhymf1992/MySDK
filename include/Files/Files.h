/*************************************************************************
* All rights reserved.
* 
* �ļ����ƣ�Files.h
* ժ    Ҫ���ļ�ͨ�ò���������̬��
* 
* ��    �ߣ��ο�ǿ
* ������ڣ�2019/06/01
*************************************************************************/

#include <string>
#include <vector>
#include <fstream>

namespace hjq
{
	namespace Files
	{
		
		/**
		* @���ܣ�ɾ�������ļ�
		* @������strFilePath �ļ�ȫ·��
		* @�����true(ɾ���ɹ�)/false(ɾ��ʧ��)
		*/
		bool FileDelete(const std::string& strFilePath);

		/**
		* @���ܣ����Ƶ����ļ�
		* @������strSrcFilePath ������Դ�ļ�ȫ·��
		* @������strDesFilePath ���ƺ�Ŀ���ļ�ȫ·��
		* @������bOverWrite ���Ŀ���ļ��Ѵ��ڣ�����Ŀ���ļ�(true)/������(false)
		* @�����true(���Ƴɹ�)/false(����ʧ��)
		*/
		bool FileCopy(const std::string& strSrcFilePath, const std::string& strDesFilePath, bool bOverWrite);

		/**
		* @���ܣ��ƶ������ļ�
		* @������strSrcFilePath ���ƶ�Դ�ļ�ȫ·��
		* @������strDesFilePath �ƶ���Ŀ���ļ�ȫ·��
		* @�����true(�ƶ��ɹ�)/false(�ƶ�ʧ��)
		*/
		bool FileMove(const std::string& strSrcFilePath, const std::string& strDesFilePath);

		/**
		* @���ܣ��ж��ļ��Ƿ����
		* @������strFilePath �ļ�ȫ·��
		* @�����true(�ļ�����)/false(�ļ�������)
		*/
		bool FileIsExist(const std::string& strFilePath);

		/**
		* @���ܣ�ɾ��һ���ļ��������з���ָ����׺���͵��ļ�
		* @������strRootDir �ļ���ȫ·��
		* @������strExt �ļ���׺��"*"��ʾ�����ļ���
		* @������bDoWithSubDir true(�������ļ��У�/false(���������ļ��У�ֻ�ڵ�ǰ�ļ��в�)
		*/
		void FileDeleteByExt(const std::string& strRootDir, const std::string& strExt, bool bDoWithSubDir);

		/**
		* @���ܣ���ȡһ���ļ��������з���ָ����׺���͵��ļ�
		* @������strRootDir �ļ���ȫ·��
		* @������strExt �ļ���׺��"*"��ʾ�����ļ���
		* @������bDoWithSubDir true(�������ļ��У�/false(���������ļ��У�ֻ�ڵ�ǰ�ļ��в�)
		* @������vecStrFileName ���ڴ�ŷ���Ҫ����ļ���
		* @������vecStrFilePath ���ڴ�ŷ���Ҫ����ļ�ȫ·��
		*/
		void FileRetrieveByExt(const std::string& strRootDir, const std::string& strExt, bool bDoWithSubDir,
			std::vector<std::string>& vecStrFileName, std::vector<std::string>& vecStrFilePath);

		/**
		* @���ܣ��ж��ļ����Ƿ�Ϊ��
		* @������strDir �ļ���ȫ·��
		* @�����true(�ļ���Ϊ��)/false(�ļ��в�Ϊ��)
		*/
		bool DirIsEmpty(const std::string& strRootDir);

		/**
		* @���ܣ�ɾ���ļ��У�����·���µ������ļ���
		* @������strRootDir �ļ���ȫ·��
		* @�����true(�ļ���ɾ���ɹ�)/false(�ļ���ɾ��ʧ��)
		*/
		bool DirDelete(const std::string& strRootDir);

		/**
		* @���ܣ������ļ��У�����·���µ������ļ���
		* @������strSrcDir ������Դ�ļ���ȫ·��
		* @������strDesDir ������Ŀ���ļ���ȫ·��
		* @������bOverWrite ���Ŀ���ļ��Ѵ��ڣ�����Ŀ���ļ�(true)/������(false)
		* @�����true(�ļ��и��Ƴɹ�)/false(�ļ��и���ʧ��)
		*/
		bool DirCopy(const std::string& strSrcDir, const std::string& strDesDir, bool bOverWrite);

		/**
		* @���ܣ������ļ���
		* @������strRootDir �ļ���ȫ·��
		* @�����true(�ļ��д����ɹ�)/false(�ļ��д���ʧ��)
		*/
		bool DirCreate(const std::string& strRootDir);

		/**
		* @���ܣ����ļ��ж�ȡһ�����ݣ������зָ�洢
		* @������fin �ļ�
		* @������vecStrData ���ڱ��汻�ָ��һ������
		* @������szDelim �ָ�����û����԰��Լ��������ã�Ҳ���Բ����ã���ʱĬ��Ϊ" \t,;\n"
		*/
		void ReadOneLineData(std::ifstream& fin, std::vector<std::string>& vecStrData, const char *szDelim = " \t,;\n");

		/**
		* @���ܣ���ָ�����ŷָ��ַ���
		* @������strLine ���ָ���ַ���
		* @������vecStrData ���ڱ��汻�ָ��һ������
		* @������szDelim �ָ�����û����԰��Լ��������ã�Ҳ���Բ����ã���ʱĬ��Ϊ" \t,;\n"
		*/
		void StringSplit(const std::string& strLine, std::vector<std::string>& vecStrData, const char *szDelim = " \t,;\n");

	}	
}

