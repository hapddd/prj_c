//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//#include<stdio.h>
//#include<math.h>
//using  namespace std;

//int main(){
//
//	string s1("Hellllll");        // ����һ������Ϊ0��string����
//	cout << "s1=" << s1 << endl;       // �����s1=
//	cout << "s1.capacity()=" << s1.capacity() << endl;    // ���ص�ǰ���������Դ���ַ���������
//	cout << "s1.size()=" << s1.size() << endl;                   // �������������ݵĴ�С��
//	cout << "������̬������׵�ַ=" << (void*)s1.c_str() << endl;
//	s1 = "xxxxxxxxxxxxxxxxxxxx";
//	cout << "s1.capacity()=" << s1.capacity() << endl;    // ���ص�ǰ���������Դ���ַ���������
//	cout << "s1.size()=" << s1.size() << endl;                   // �������������ݵĴ�С��
//	cout << "������̬������׵�ַ=" << (void*)s1.c_str() << endl;
//
//}


//vector<int> nums = { 2, 7, 11, 15 };
//int target = 18;
//
//class Solution {
//public:
//	vector<int> twoSum(vector<int>& nums, int target) {
//		for (int i = 0; i < nums.size(); i++) {
//			for (int j = i + 1; j < nums.size(); j++) {
//				if (nums[i] + nums[j] == target) {
//					return { i,j };
//				}else if (i == nums.size() - 2 && j == nums.size() - 1) {
//					cout << "No found!" << endl;
//					return {  };
//				}
//			}
//		}
//	}
//};

 //class Solution1 {
 //public:
 //	vector<int> twoSum(vector<int>& nums, int target) {
	//	unordered_map <int,int> num_map;
 //		for (int i = 0; i < nums.size(); i++) {
	//		int imp = target - nums[i];
	//		auto s = num_map.find(imp);
	//		if (s != num_map.end()) {//num_map.find(imp) ����һ����������std::unordered_map<int, int>::iterator����
	//			//ָ���ϣ���м�Ϊ imp ��Ԫ�ء�����Ҳ������򷵻� num_map.end()��
	//			return { num_map[imp],i};
	//		}
	//		num_map[nums[i]] = i;
 //		}
	//	return {};
 //	}
 //};

//class Solution {
//public:
//	vector<vector<string>> groupAnagrams(vector<string>& strs) {
//		unordered_map<string, vector<string>> mp;
//		for (string& s : strs) {
//			string key = s;
//			sort(key.begin(), key.end()); // ���ַ���������Ϊ��
//			mp[key].push_back(s);
//			//cout << key << "    " << s << endl;
//		}
//
//		vector<vector<string>> result;
//		for (auto& entry : mp) {
//			result.push_back(entry.second);
//			cout << mp.second << endl;
//		}
//		return result;
//	}
//};
//vector<string> strs = { "eat", "tea", "tan", "ate", "nat", "bat" };
//int main() {
//	Solution sol;
//	vector<vector<string>>result;
//	result = sol.groupAnagrams(strs);
//
//	
//	//for (const auto& group : result) {  // ����ÿ������
//	//	std::cout << "[";
//	//	for (size_t i = 0; i < group.size(); i++) {  // ���������ڵ��ַ���
//	//		std::cout << "\"" << group[i] << "\"";
//	//		if (i != group.size() - 1) {  // ���һ��Ԫ�ز��Ӷ���
//	//			std::cout << ", ";
//	//		}
//	//	}
//	//	std::cout << "]";
//	//}
//
//	return 0;
//}




//#define GET_LOW_BYTE0(x)   ((x>>0)  & 0xff)
//#define GET_LOW_BYTE1(x)   ((x>>8)  & 0xff)
//#define GET_LOW_BYTE2(x)   ((x>>16) & 0xff)
//#define GET_LOW_BYTE3(x)   ((x>>24) & 0xff)
//int main() {
//	int num = 0x12345678; //ʮ��������
//	printf("��0�ֽ�:0x%x\n" , GET_LOW_BYTE0(num));// 0x78
//	printf("��1�ֽ�:0x%x\n" , GET_LOW_BYTE1(num));// 0x56
//	printf("��2�ֽ�:0x%x\n" , GET_LOW_BYTE2(num));// 0x34
//	printf("��3�ֽ�:0x%x\n" , GET_LOW_BYTE3(num));// 0x12
//	return 0;
//}



//#define GET_BIT(x, bit)   ((x>>bit) & 0x1)
//
//int main() {
//	int num = 0b10101010; //ʮ��������
//	printf("��0λ:%d\n", GET_BIT(num,0));// 0x78
//	printf("��1λ:%d\n", GET_BIT(num,1));// 0x56
//	printf("��7λ:%d\n", GET_BIT(num,7));// 0x34
//	return 0;
//}


//#define CLEAR_BIT(x, bit) (x &= (~(1<<bit)))
//
////������ת��Ϊ�������ַ��������ڴ�ӡ��
//void print_binary(int num) {
//	for (int i = 7; i >= 0; i--) {// ����8λ����
//		printf("%d", (num >> i) & 1);
//		//printf("\n");
//	}
//}
//int main() {
//	int num = 0b11111111;// 170(������:10101010)
//	printf("�����1λǰ��0b");
//	print_binary(num);
//	CLEAR_BIT(num, 1); // �����1λ
//
//	printf("\n");
//
//	printf("�����1λ��0b");
//	print_binary(num);
//	return 0;
//}


//#define SET_BIT(x, bit) (x |= (1<<bit))
//
////������ת��Ϊ�������ַ��������ڴ�ӡ��
//void print_binary(int num) {
//	for (int i = 7; i >= 0; i--) {// ����8λ����
//		printf("%d", (num >> i) & 1);
//		//printf("\n");
//	}
//}
//int main() {
//	int num = 0b00000000;// 170(������:10101010)
//	printf("�����1λǰ��0b");
//	print_binary(num);
//	SET_BIT(num, 1); // �����1λ
//
//	printf("\n");
//
//	printf("�����1λ��0b");
//	print_binary(num);
//	return 0;
//}


//#define TROGGLE_BIT(x, bit) (x ^= (1<<bit))
//
////������ת��Ϊ�������ַ��������ڴ�ӡ��
//void print_binary(int num) {
//	for (int i = 7; i >= 0; i--) {// ����8λ����
//		printf("%d", (num >> i) & 1);
//		//printf("\n");
//	}
//}
//int main() {
//	int num = 0b00000000;// 170(������:10101010)
//	printf("�����1λǰ��0b");
//	print_binary(num);
//	TROGGLE_BIT(num, 1); // �����1λ
//
//	printf("\n");
//
//	printf("�����1λ��0b");
//	print_binary(num);
//	return 0;
//}


//int check_sys() {
//	int a = 1;
//	return *(char*)&a;
//}
//
//int main() {
//	cout << check_sys() << endl;
//	return 0;
//}


//int stoi(char* p) {
//	int i = 0, sign = 1;
//	//���������
//	if (*p == '-') {
//		sign = -1;
//		p++;
//	}
//	//�����ַ�������ת��
//	for (; *p; p++) {
//		if (*p < '0' || *p > '9') {
//			return -1;//�����Ƿ��ַ������� -1��ʾ����
//		}
//		i = (*p - '0') + 10 * i;
//	}
//	return i * sign;
//	
//}
//
//
//int main() {
//	char str1[] = "1234"; // ��������
//	char str2[] = "-5678";// ����
//	char str3[] = "0";
//	// �߽����
//	char str4[] = "999999"; //����
//	char str5[] = "12a4"; // ���зǷ��ַ�
//	char str6[] = "-abc"; // �Ƿ�����
//
//	//���Բ�ͬ���
//	printf("�ַ���\"%s\" ת��Ϊ����:%d\n",str1,stoi(str1));
//	printf("�ַ���\"%s\" ת��Ϊ����:%d\n",str2,stoi(str2));
//	printf("�ַ���\"%s\" ת��Ϊ����:%d\n",str3,stoi(str3));
//	printf("�ַ���\"%s\" ת��Ϊ����:%d\n",str4,stoi(str4));
//	printf("�ַ���\"%s\" ת��Ϊ����:%d\n",str5,stoi(str5));
//	printf("�ַ���\"%s\" ת��Ϊ����:%d\n",str6,stoi(str6));
//	return 0;
//}



//int my_str2num(char*str) {
//	int sign = 1,i = 0;
//	if (*str == '-') {
//		str++;
//		sign = -1;
//	}
//	for (;*str;str++) {
//		if (*str < '0' || *str > '9') {
//			return -1;
//		}
//		i = i * 10 + (*str - '0');
//	}
//	return i * sign;
//}
//
//
//int main() {
//	char str[] = "-29384";
//	cout << my_str2num(str) << endl;
//}


//ʹ��BrianKernighan�㷨��������Ʊ�ʾ��`1�ĸ���
//int NumOneOptimized(int i) {
//	int cnt_1 = 0;
//	while(i > 0) {
//		cnt_1 = (i&0x1)?(cnt_1 + 1):cnt_1;
//		i  = i >> 1;
//	}
//	return cnt_1;
//}
//int NumOneOptimized(int i) {
//	int cnt_1 = 0;
//	while (i > 0) {
//		cnt_1 = (i & 0x1) ? (cnt_1 + 1) : cnt_1;
//		i = i >> 1;
//	}
//	return cnt_1;
//}
//
//int main(){
//	int num1 = 7;
//	//�����ƣ�0111��1�ĸ�����3
//	int num2 = 9;
//	//�����ƣ�1001��1�ĸ��� ��2
//	int num3 = 15;
//	//�����ƣ�1111��1�ĸ��� ��4
//	int num4 = 1023;//�����ƣ�1111111111��1�ĸ���=10
//	int num5 = 0;
//	//�����ƣ�0000��1�ĸ���=0
//	int num6 = - 1;
//	//�������������ʹ��32λ�����ʾ������λ����1��
//	//���Բ�ͬ�����Ķ�����`1`����
//	printf("����%d�Ķ����Ʊ�ʾ��1�ĸ�����%d\n", num1, NumOneOptimized(num1));
//	printf("����%d�Ķ����Ʊ�ʾ��1�ĸ�����%d\n", num2, NumOneOptimized(num2));
//	printf("����%d�Ķ����Ʊ�ʾ��1�ĸ�����%d\n", num3, NumOneOptimized(num3));
//	printf("����%d�Ķ����Ʊ�ʾ��1�ĸ�����%d\n", num4, NumOneOptimized(num4));
//	printf("����%d�Ķ����Ʊ�ʾ��1�ĸ�����%d\n", num5, NumOneOptimized(num5));
//	printf("����%d�Ķ����Ʊ�ʾ��1�ĸ���: %d\n", num6, NumOneOptimized(num6));
//	
//	return 0;
//}


////�ж�һ�����Ƿ�Ϊ2����
//int isPowerOfTwo(int i) {
//	//return (log2(i))
//	if (i <= 0)
//		return 1;
//	return (i & 0x1);
//}
//int main() {
//	vector<int> testCases = { 1,2,3,4,8,16,31,32,64,127,128,255,256,1024,-2,0 };
//	size_t len = testCases.size();
//	//cout << len << endl;
//	for (int i = 0; i < len; i++) {
//		int num = testCases[i];
//		printf("����%d %s 2 ����\n",num, isPowerOfTwo(num) == 0 ?"��" : "����");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include<limits.h> //�������������Ҫʹ��INT_MAX��INT_MIN
//
////��ת�����ĺ������������⣩
//int reverseNumber(int a) {
//	int b = 0;
//	while (a) {
//		//����Ƿ�ᷢ������������&�������
//		if (b > INT_MAX / 10 || (b == INT_MAX / 10 && a % 10 > 7))return 0; // �����
//		if (b < INT_MIN / 10 || (b == INT_MIN / 10 && a % 10 < -8)) return 0; // �����
//		b = b * 10 + a % 10; // ȡ��a�����һλ������ӵ� b
//		a = a / 10;// ȥ�� a�����һλ
//	}
//	return b;//���ط�ת�������
//}
//
////���������洢������ʾ������
//int main() {
////����ʾ������
//int testCases[] = { 1357,-2468,2147483647,-2147483648,1000,-9000,0 };
//int len = sizeof(testCases) / sizeof(testCases[0]);
////����ʾ�����ݽ��в���
//	for (int i = 0; i < len; i++) {
//		int num = testCases[i];
//		int reversed = reverseNumber(num);
//		//�ж��Ƿ������
//		if (reversed == 0 && num != 0)
//			printf("����%d��תʧ�ܣ��������������\n",num);
//		else
//			printf("����%d ��ת��%d\n",num,reversed);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <sys/types.h>
//#include <unistd.h>
//int main(void) {
//	int i;
//	for (i = 0; i < 2; i++) {
//		fork();
//		printf("-\n");
//	}
//	return 0;
//}



	//ת��ָ������Ϊunsignedchar*�������ֽڿ���
//unsigned char* d = (unsigned char*)dest;
//const unsigned char* s = (const unsigned char*)src;
//while (n--) {
//	*d++ = *s++;//���ֽڸ���
//}
//return dest; //����Ŀ���ַ




//#include <stdio.h>
//// ʵ�� memcpy����
//const void* my_memcpy(const void* dest, const void* src, size_t n) {
//	char* d = (char*)dest;
//	const char* s = (const char*)src;
//	while (n--) {
//		*d++ = *s++;
//	}
//	return dest;
//}
//
//const void* my_memcpy_opt(const void* dest, const void* src, size_t n) {
//	uint64_t * d = (uint64_t*)dest;
//	const uint64_t* s = (const uint64_t*)src;
//	int t_n = n;
//	if (t_n > 8) {
//		while (n = n - 8) {
//			*d++ = *s++;
//		}
//	}
//	// derl with the last
//
//	while (*(char *)d != '\0') {
//		*d++ = *(char*)s++;
//	}
//
//	return dest;
//}
//
//int main() {
//	//Դ����
//	char src[] = "Hello, memcpy!";
//	char dest[20];//Ŀ�����飬��Ҫ�㹻�Ŀռ��ſ���������
//	// ����my_memcpy(����������
//
//	//cout << sizeof(src) << endl;
//	my_memcpy(dest,src,sizeof(src));//���������ַ��������� '\0'
//	//�����������ַ���
//	printf("��������ַ�����%s\n", dest);
//	return 0;
//}


//#include <stdio.h>
//// ʵ�� strcpy����
//char* my_strcpy(char* dest, const char* src) {
//	char* d = dest;
//	char* s = (char*)src;
//	while(d) {
//
//	}
//}
//int main() {
//	const char* src = "Hello, strcpy!";
//	char dest[20];//Ŀ�����飬�ռ��㹻���src`������
//	my_strcpy(dest, src);
//	printf("��������ַ�����%s\n",dest);
//	return 0;
//}


//#include <stdio.h>
////��ʵ��strcmp����
//int my_strcmp(const char* s, const char* t) {
//	//while(!(judge = *(s+i) - *(t+i))){
//	//	i++;
//	//}
//	while (*s && *t && *s == *t) {
//		s++;
//		t++;
//	}
//	return *s-*t;
//}
//		
//		
//int main() {
//	const char* str1 = "apple";
//	const char* str2 = "banana";
//	const char* str3 = "apple";
//	const char* str4 = "apples";
//	printf("strcmp(\"%s\",\"%s\") = %d\n" , str1, str2, my_strcmp(str1, str2));
//	printf("strcmp(\"%s\", \"%s\") = %d\n", str1, str3, my_strcmp(str1, str3));
//	printf("strcmp(\"%s\", \"%s\") = %d\n", str1, str4, my_strcmp(str1, str4));
//	printf("strcmp(\"%s\", \"%s\") = %d\n", str4, str1, my_strcmp(str4, str1));
//	return 0;
//
//}

//#include <stdio.h>
//char* my_strcat(char* dest, const char* src) {
//	int len_1 = strlen(dest);
//	int len_2 = strlen(src);
//	cout << len_1 <<"  "<< len_2 << endl;
//	int i;
//	for (i = 0; i < len_2; i++) {
//		*(dest + len_1 + i) = *(src + i);
//	}
//	*(dest + len_1 + i) = '\0';
//	return dest;
//}
//
//int main() {
//	char dest[30] = "hello";
//	const char* src = ", World!";
//	my_strcat(dest, src);
//	//dest[12] = 'g';
//	printf("ƴ�Ӻ���ַ�����%s\n",dest);
//	cout << strlen(dest) << endl;
//	//cout << sizeof(dest) << endl;
//	//cout << sizeof(dest) << endl;
//	//printf("%d",  '\0');
//	return 0;
//}

//#include <stdio.h>
//void* my_meminsert(void*dest, void* src, int n) {
//	int t_n = n;
//	char* d = (char*)dest;
//	char* s = (char*)src;
//	int len = strlen((char*)dest);
//	if (n == len) {//�����ǵ����
//		for (int i = 0;i < n;i++) {
//			*(d + i) = *(s + i);
//		}
//	}
//	else if (n < len) {//�м����  ����ǰ�˲���
//		//�ȱ��ݽ������ǵ�����
//		char tmp[30];
//		for (int i = 0; i < len; i++) {
//			tmp[i] = *(d + i);//������
//			//printf("%c", tmp[i]);
//		}
//		for (int i = 0;i < n;i++) {
//			*(d + i) = *(s + i);//��ʼ��ֵ
//		}
//		for (int i = 0; i < len; i++) {
//			*(d + n + i)= tmp[i];//�Ѵ������������û���
//			//printf("%c", *(d + n + i));
//		}
//	}
//	return dest;
//}
//
//int main() {
//	char arr[30] = "Hello";
//	char arr_1[30] = "world";
//	my_meminsert(arr+2, arr_1, 2);
//	printf("%s", arr);
//	return 0;
//}



//
//#include <stdio.h>
//// ʵ��memmove����
//void* my_memmove(void* dest, const void* src, size_t count) {
//	unsigned char* d = (unsigned char*)dest;
//	const unsigned char* s = (const unsigned char*)src;
//	if (d < s || d >= s + count) {
//		while (count--) {
//			*d++ = *s++;
//		}
//	}
//	else {
//		d += count;
//		s += count;
//		while (count--) {
//			*--d = *--s;
//		}
//	}
//	return dest;
//}
//
//
//int main(){
//	char buffer[] = "HelloWorld";
//	printf("ԭʼ���ݣ�%s\n",buffer);
//	my_memmove(buffer + 5, buffer, 5);
//	printf("memmove ���:%s\n",buffer);
//	return 0;
//}
//
//
//#include <stdio.h>
//#include <ctype.h>//isspace isdigit
//#include <limits.h>
//
//int atoi(const char* s) {
//	int sign = 1;
//	int num = 0;
//	if (s == NULL) return 0;
//	while (isspace(*s)) {
//		s++;
//	}
//	if (*s == '-') {
//		s++;
//		sign = -1;
//	}
//	else if (*s == '+') {
//		s++;
//	}
//
//	while (isdigit(*s)) {
//		//��x10֮ǰ  ��ǰԤ��
//		int digit = (*s) - '0';
//		if (num > INT_MAX / 10 || (num == INT_MAX/10 && (sign*digit) > 7))return INT_MAX;
//		if (num < INT_MIN / 10 || (num == INT_MIN/10 && (sign*digit) < -8))return INT_MIN;
//		num = sign*(abs(num) * 10 + (*s) - '0');
//		s++;
//	}
//	return num;
//}
//
//
//int main() {
//	const char arr[30] = "     -123";
//	const char arr_1[30] = "123 ss12";
//	printf("%d\n", atoi(arr_1));
//	printf("INT_MAX = %d\n", INT_MAX);
//	printf("INT_MIN = %d\n", INT_MIN);
//
//	return 0;
//}
//
//
//
//#include <stdio.h>
//#include <ctype.h>
//#include <limits.h>
//int atoi(const char* s) {
//	if (s == NULL) return 0;
//	//��ֹ��ָ�����
//	int abs_num = 0, sign = 1;
//	//����ǰ���ո�
//	while (isspace(*s)) {
//		s++;
//	}
//	if (*s == '-' || *s == '+') {
//		sign = (*s == '-') ? -1 : 1;
//		s++;
//	}
//	// ��������
//	while (isdigit(*s)) {
//		int digit = *s - '0';
//		if (abs_num > (INT_MAX) / 10 || (abs_num == (INT_MAX) / 10 && digit > INT_MAX % 10)) {
//			return (sign == 1) ? INT_MAX : INT_MIN;
//		}
//		abs_num = abs_num * 10 + digit;
//		s++;
//	}
//	return abs_num * sign;
//}
//int main() {
//	const char* test_cases[] = {
//		"42",
//		" -42",
//		"4193 with words",
//		"words and 987",
//		"-91283472332",
//		"2147483647",
//		"-2147483648",
//		"9999999999999999999",
//		NULL
//	};
//	for (int i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
//		printf("atoi(\"%s\") = %d\n", test_cases[i], atoi(test_cases[i]));
//	}
//	return 0;
//
//}

//typedef struct ListNode {
//	int val;
//	ListNode* pnext;
//}ListNode;
//
//ListNode * create_node(int val) {
//	ListNode* new_node = (ListNode*)malloc(sizeof(ListNode));
//	if (new_node == NULL) {//������
//		printf("�ڴ����ʧ�ܣ���\r\n");
//		exit(1);
//	}
//	new_node->val = val;
//	new_node->pnext = NULL;
//
//	return new_node;
//}
//void insert_at_head(ListNode** head, int val) {
//	ListNode* new_node = create_node(val);
//	new_node->pnext = *head;
//	*head = new_node;
//}
//
//void insert_at_tail(ListNode* head, int val) {
//	ListNode* new_node = create_node(val);
//	ListNode* tmp_node = head;
//	if (head == NULL) {
//		head = new_node;
//	}
//	while ((tmp_node)->pnext != NULL) {
//		tmp_node = (tmp_node)->pnext;
//	}//�ҵ������һ��
//	(tmp_node)->pnext = new_node;
//	new_node->pnext = NULL;
//}
//
//// delete the first node of the specific val
//void delete_node(ListNode** head,int val) {
//	ListNode* last_node = NULL;
//	ListNode* tmp_node = *head;
//	if (*head == NULL) {
//		return;
//	}
//	while ((tmp_node)->val != val) {
//		last_node = (tmp_node);
//		(tmp_node) = (tmp_node)->pnext;
//		if ((tmp_node) == NULL) {//the
//			return;
//		}
//	}
//	if (tmp_node == *head) {//
//		last_node = *head;
//		*head = (*head)->pnext;//attention the sequence
//		free(tmp_node);
//		return;
//	}
//	// find the val
//	last_node->pnext = (tmp_node)->pnext;
//	free(tmp_node);
//}
////trave the list
//void traval_list(ListNode* head) {
//	ListNode* tmp = head;
//	while (tmp != NULL) {
//		printf("val = %d\r\n", tmp->val);
//		tmp = tmp->pnext;
//	}
//}
//
////free list
//void free_list(ListNode* head) {
//	ListNode* tmp = head;
//	ListNode* last_tmp = NULL;
//	while (tmp != NULL) {
//		last_tmp = tmp;
//		tmp = tmp->pnext;//first move. second free. 
//		free(last_tmp);
//	}
//}
//
//void reverseList(ListNode* &head) {
//	ListNode* temp_node = head;
//	ListNode* last_node = head->pnext;
//	ListNode* next_node = NULL;
//	//deal first node
//	temp_node->pnext = NULL;
//
//	while (last_node!= NULL) {
//		next_node = temp_node;
//		temp_node = last_node;
//		last_node = temp_node->pnext;
//		
//		temp_node->pnext = next_node;
//	}
//	head = temp_node;
//}

//void reverseList(ListNode*& head) {
//	ListNode* prev = nullptr;
//	ListNode* current = head;
//	while (current != nullptr) {
//		ListNode* next = current->pnext;
//		current->pnext = prev;  // ��תָ��
//		prev = current;         // ǰ��ָ�����
//		current = next;         // ��ǰָ�����
//	}
//	head = prev;  // ����ͷָ��Ϊ��������׽ڵ�
//}

//
//int main() {
//	ListNode* head = NULL;
//	head  = create_node(1);
//	insert_at_tail(head, 2);
//	insert_at_tail(head, 3);
//	delete_node(&head, 1);
//	insert_at_head(&head, 9);
//	//delete_node(&head, 2);
//
//
//
//	reverseList(head);
//	traval_list(head);
//	free_list(head);
//	//int a = 10;
//	//int* p = &a;  // p��ָ��������洢a�ĵ�ַ
//	//printf("%d\n" , sizeof(p));
//	//printf("%x" , sizeof(&a));
//
//
//	return 0;
//}

//char str_send[1152]; // ȷ���㹻��Ļ�����
//float weight[16] = {0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,0.1,0.2,0.3,0.4,0.5,0.6,0.7};
//int xdelay_20us[16] = {1,12,123,1234,12345,1,12,123,1234,12345, 1,12,123,1234,12345, 1};
//void chnl_data_update(int idx_chx, float weight_chx, int xdelay_20us_chx) {
//	memset(str_send, 0, sizeof(str_send));
//	const char* title = "ͨ��:      ����Ȩֵ:          ��ʱʱ��:         \r\n";
//	strcat_s(str_send, "/--------------------------------------\\\r\n");
//	strcat_s(str_send, title);
//	weight[idx_chx - 1] = weight_chx;
//	xdelay_20us[idx_chx - 1] = xdelay_20us_chx;
//	for (int i = 0; i < 16; i++) {
//		char tmp[60];
//		snprintf(tmp, sizeof(tmp), "%-2d         %.6f    %10dx20us\r\n", i, weight[i], xdelay_20us[i]);
//		strcat_s(str_send, tmp);
//	}
//	strcat_s(str_send, "\\--------------------------------------/\r\n\r\n");
//	printf("%s\r\n", str_send);
//}


//int main() {
//
//	chnl_data_update(1,0.96 ,5000);
//	//// ʹ��snprintf��ȫд��
//	//int needed = snprintf(buffer, sizeof(buffer), "ͨ��:%-2d  ����Ȩֵ:%.4f ��ʱʱ��:%10dx20us\r\nͨ��:%-2d  ����Ȩֵ:%.4f ��ʱʱ��:%10dx20us\r\n",
//	//	chnl_1, weight_1,xdelay_20us_1, chnl_12, weight_12, xdelay_20us_12);
//
//	//if (needed >= sizeof(buffer)) {
//	//	printf("���棺������ضϣ���Ҫ %d �ַ��Ŀռ䡣\n", needed + 1);
//	//}
//
//	//printf("%s\n", buffer);
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
////˫������ڵ�ṹ
//typedef struct ListNode {
//	int val;
//	struct ListNode* next;
//	struct ListNode* prev;
//}ListNode;
//
//void rt_list_init(ListNode* l){
//	l->next = l->prev = l;
//}
//
//ListNode* create_node(int value) {
//	ListNode* new_node = (ListNode*)malloc(sizeof(ListNode));
//	if (!new_node) {
//		printf("�ڴ����ʧ��\n");
//		exit(1);
//	}
//	new_node->val = value;
//	rt_list_init(new_node);//��ʼ��ָ��
//	return new_node;
//}
//
////��1����� n
//void rt_list_insert_after(ListNode* l, ListNode* n) {
//	l->next->prev = n;
//	n->next = l->next;
//	l->next = n;
//	n->prev = l;
//
//}
////��1ǰ���� n
//void rt_list_insert_before(ListNode* l, ListNode* n) {
//	l->prev->next = n;
//	n->prev = l->prev;
//	l->prev = n;
//	n->next = l;
//}
//
//void rt_list_remove(ListNode* n) {
//	n->next->prev = n->prev;
//	n->prev->next = n->next;
//	n->next = n->prev = n;//�Ͽ�ָ�룬��ֹҰָ��
//}
//
////������������
//void traverse_forward(ListNode * head) {
//	ListNode* current = head->next;
//	while (current != head) {
//		printf("Node value: %d at %p\n", current->val, (void*)current);
//		current = current->next;
//	}
//}
//
//void traverse_backward(ListNode* head) {
//	ListNode* current = head->prev;
//	while (current != head) {
//		printf("Node value: %d at %p\n", current->val, (void*)current);
//		current = current->prev;
//	}
//}
//
//int main() {
//	ListNode* head;
//	rt_list_init(&head);
//
//
//	return 0;
//}


//
//#include <stdio.h>
//#include <stdlib.h>
////˫������ڵ�ṹ
//typedef struct ListNode {
//	int val;
//	ListNode* prev;
//	ListNode* pnext;
//}ListNode;
//
//void rt_list_init(ListNode* l) {
//	(l)->pnext = l;
//	(l)->prev = l;
//}
//
//ListNode* create_node(int value) {
//	ListNode* new_node = (ListNode*)malloc(sizeof(ListNode));
//	if (new_node == NULL) {
//		printf("Malloc error!!\r\n");
//		exit(1);
//	}
//	new_node->val = value;
//	rt_list_init(new_node);
//	return new_node;
//}
//
////��1����� n
//void rt_list_insert_after(ListNode* l, ListNode* n) {
//	(n)->pnext = (l)->pnext;
//	(n)->prev = (l);
//	(l)->pnext->prev = n;//�Ⱥ�˳��  ����Ҫ
//	(l)->pnext = (n);
//}
////��1ǰ���� n
//void rt_list_insert_before(ListNode* l, ListNode* n) {
//	(n)->pnext =(l);
//	(n)->prev = (l)->prev;
//	(l)->prev->pnext = (n);
//	(l)->prev = (n);
//}
//
//void rt_list_remove(ListNode* n) {
//	(n)->prev->pnext = (n)->pnext;
//	(n)->pnext->prev = (n)->prev;
//	free(n);
//}
//
////������������
//void traverse_forward(ListNode* head) {
//	ListNode* tmp_head = head->pnext;
//	while (tmp_head != head) {
//		printf("%d\r\n", tmp_head->val);
//		tmp_head = tmp_head->pnext;
//	}
//}
//
//void traverse_backward(ListNode* head) {
//	ListNode* tmp_head = head->prev;
//	while (tmp_head != head) {
//		printf("%d\r\n", tmp_head->val);
//		tmp_head = tmp_head->prev;
//	}
//}
//int main() {
//	//ListNode* head = (ListNode*)malloc(sizeof(ListNode));
//	ListNode head;
//	rt_list_init(&head);
//	ListNode* node1 = create_node(1);
//	//ListNode* node1 = create_node(1);
//	rt_list_insert_after(&head, node1);
//	ListNode* node2 = create_node(2);
//	rt_list_insert_after(node1, node2);
//	ListNode* node3 = create_node(3);
//	rt_list_insert_before(node2, node3);
//	printf("traverse_forward\r\n");
//	traverse_forward(&head);
//
//	printf("traverse_backward\r\n");
//	traverse_backward(&head);
//
//	rt_list_remove(node3);
//	printf("traverse_forward\r\n");
//	traverse_forward(&head);
//
//
//	return 0;
//}

//#include <stdio.h>

//// ����������>=Ŀ��ֵ
//int minSubArrayLen(int target, int* nums, int numsSize) {
//	int left = 0, right = 0;//������������ָ��
//	int sum = 0;//��¼����Ԫ���ܺ�
//	int best_len = -1;//��¼���Ž⣨��̳��ȣ�
//	while (right < numsSize) {//��ָ���������
//		sum += nums[right]; //������Ԫ��
//		while (sum >= target) {//��������������
//			int len = right - left + 1;// ���㴰�ڴ�С
//			if (best_len == 0 || len < best_len) {// ������С����
//				best_len = len;
//			}
//			sum -= nums[left];//�Ƴ����Ԫ��
//			left++;//��ָ�����ƣ���С������
//		}
//		right++;//��ָ�����ƣ����󴰿�
//	}
//	return best_len;
//}
//
//
//int main() {
//	int nums[] = {1,2,3,4,5};
//	int target = 16;
//	int size = sizeof(nums) / sizeof(int);
//
//	int result = minSubArrayLen(target, nums, size);
//	printf("%d\r\n", result);
//	return 0;
//}

//
//
////˫ָ��  ����ָ��  �Ƴ�Ԫ��
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int removeElement(vector<int> &nums,int val) {
//	int slow = 0;
//	//for (int fast = 0; fast < nums.size(); fast++){
//	for (int &num : nums){
//		int idx = &num - &nums[0];
//		if (num != val) {
//			nums[slow++] = num;
//		}
//	}
//	return slow;
//}
//
//
//int main() {
//	vector<int> nums = { 3,2,2,3,4,3,5,6 }; 
//	int len = removeElement(nums, 5);
//	for (int num : vector<int>(nums.begin(), nums.begin() + len)){
//		cout << num << endl;
//	}
//	return 0;
//}
//
//
//
////˫ָ��  ��Ч�����ƽ��
//
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//vector<int> sortedSquares(vector<int>& nums) {
//	//sort(nums.begin(), nums.end());
//	vector<int>array(nums.size()); // �������
//	int i = 0;
//	int j = nums.size() - 1;
//
//	for (int k = nums.size() - 1; k >= 0; k--) {
//		if (nums[i] * nums[i] < nums[j] * nums[j]) {
//			array[k] = nums[j] * nums[j];//�Ҳ���ֵƽ���ϴ�
//			j--;//��ָ������
//		}
//		else {
//			array[k] = nums[i] * nums[i]; //�����ֵƽ���ϴ�
//			i++;//��ָ������
//		}
//	}
//	return array;
//}
//
//
//int main() {
//	vector<int> nums = { -14,-1,0,6,13}; // �ǵݼ�  
//	vector<int> result = sortedSquares(nums);
//		cout << "������ƽ�����飺";
//	for (int num : result) {
//		cout << num << " ";
//	}
//	cout << endl;
//	return 0;
//
//}
//
//
//

//void func(int *a, int **out1,int **out2) {
//	for (int j = 0; j < 2; j++) {
//		for (int i = 0; i < 3; i++) {
//			//*(out1 + 3 * j + i) = *(a + j * 3 + i) + 1;
//			//*(out2 + 3 * j + i) = *(a + j * 3 + i) - 1;
//
//			out1[j][i] = *(a + j * 3 + i) + 1;
//			out2[j][i] = *(a + j * 3 + i) - 1;
//		}
//	}
//}
//
//int main(){
//	//int** out1 = (int**)malloc(2 * sizeof(int*));
//	//int** out2 = (int**)malloc(2 * sizeof(int*));
//	//// Ϊÿ�з��� 3 �� int �ռ�
//	//for (int j = 0; j < 2; j++) {
//	//	out1[j] = (int*)malloc(3 * sizeof(int));
//	//	out2[j] = (int*)malloc(3 * sizeof(int));
//	//}
//
//
//	//int a[][3] = {1, 2, 3, 4, 5, 6};
//
//	//int len = sizeof(a) / sizeof(int);
//	//func(&a[0][0], out1, out2);
//	//for (int i = 0; i < 2; i++) {
//	//	for (int j = 0; j < 3; j++) {
//	//		cout << out1[i][j] << endl;
//	//	}
//	//}
//	//cout << "outb---------------" << endl;
//	//for (int i = 0; i < 2; i++) {
//	//	for (int j = 0; j < 3; j++) {
//	//		cout << out2[i][j] << endl;
//	//	}
//	//}
//
//	int a[2][2][2] = {1,2,3,4,5,6,7,8};//��ά���������  Ҳ��������׵�ַ
//
//	cout << a << endl;
//	cout << &a[0][0][0] << endl;
//
//
//
//	return 0;
//}
//
////����ͼ���
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//
//	vector<int>Array(n);
//	vector<int>Sum(n);
//	cin >> Array[0];
//	Sum[0] = Array[0];
//	for (int i = 1; i < n; i++) {
//		cin >> Array[i];
//		//Sum[i] = Sum[i] + Sum[i - 1];
//		Sum[i] = Array[i] + Sum[i - 1];
//	}
//
//	int a = 0, b = 0;
//	while (cin >> a >> b) {
//		if (a == 0) {
//			cout << Sum[b] << endl;
//		}
//		else {
//			cout << Sum[b] - Sum[a-1] << endl;
//		}
//	}
//
//	cout << n<< endl;
//	return 0;
//}
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int binary_search(vector<int> &a, int num) {
//	int left = 0,right = a.size() - 1;
//	while (left <= right) {//����������������
//		int mid = left+ (right-left)/ 2;
//		if (a[mid] == num) {
//			return mid;
//		}else if (a[mid] > num) {
//			right = mid - 1;
//		}else if (a[mid] < num) {
//			left = mid + 1;
//		}
//	}
//	return -1;
//}
//
//int main() {
//	vector<int> a  = {1,3,4,7,13,15,26};
//	int idx = binary_search(a, 13);
//	printf("idx = %d\r\n", idx);
//}
//
//
//
//#include <iostream>
//#include <stack>
//using namespace std;
//class MyQueue
//{
//	stack <int>staIn;
//	stack <int>staOut;
//public:
//	MyQueue() {}
//	void push(int val) {
//		staIn.push(val);
//	}
//	int pop() {
//		if (staOut.empty()) {
//			while (!staIn.empty()) {
//				staOut.push(staIn.top());
//				staIn.pop();
//			}
//		}
//		int val = staOut.top();
//		staOut.pop();
//		return val;
//	}
//	int peek() {
//		int val = this->pop();
//		staOut.push(val);
//		return val;
//	}
//	int empty(){
//		return staIn.empty() && staOut.empty();
//	}
//};
//
//int main() {
//	MyQueue q;
//	q.push(1);
//	q.push(2);
//	q.push(3);
//	cout << "����Ԫ��" << q.peek() << endl;
//	cout << "����Ԫ��" << q.pop() << endl;
//	cout << "����Ԫ��" << q.peek() << endl;
//	cout << "����Ԫ��" << q.pop() << endl;
//	cout << "�����Ƿ�Ϊ��" << q.empty() << endl;
//	cout << "����Ԫ��" << q.pop() << endl;
//	cout << "�����Ƿ�Ϊ��" << q.empty() << endl;
//
//}
//
//
//#include <iostream>
//#include <queue>
//using namespace std;
//
//class MyStack {
//	queue <int> que;
//public:
//	void push(int val) {
//		que.push(val);
//	}
//	int pop(){
//		int size = que.size();
//		size = size - 1;
//		while (size--) {
//			que.push(que.front());
//			que.pop();
//		}
//		int val = que.front();
//		que.pop();
//		return val;
//	}
//	int top() {
//		int val = que.back();
//		return val;
//	}
//	int empty() {
//		return !que.size();
//	}
//};
//
//
//
//int main() {
//	MyStack stk;
//	stk.push(1);
//	stk.push(2);
//	stk.push(3);
//	cout << "ջ��Ԫ��" << stk.top() << endl;
//	cout << "��ջԪ��" << stk.pop() << endl;
//	cout << "ջ��Ԫ��" << stk.top() << endl;
//	cout << "��ջԪ��" << stk.pop() << endl;
//	cout << "ջ�Ƿ�Ϊ��" << stk.empty() << endl;
//	cout << "��ջԪ��" << stk.pop() << endl;
//	cout << "ջ�Ƿ�Ϊ��" << stk.empty() << endl;
//
//
//	return 0;
//}
//
//
//#include <iostream>
//#include <stack>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//	string removeDuplicates(string s) {
//		stack <char> st;
//		for (char c : s) {
//			if (!st.empty() && st.top() == c) {
//				st.pop();
//			}
//			else {
//				st.push(c);
//			}
//		}
//
//		string dest = "";
//		while (!st.empty()) {
//			dest+=st.top();
//			st.pop();
//		}
//		reverse(dest.begin(),dest.end());
//		return dest;
//	}
//};
//
//int main() {
//	string str = "abbaca";
//	Solution sol;
//	string result = sol.removeDuplicates(str);
//	cout << result << endl;
//	return 0;
//}
//
////#include <iostream>
////#include <vector>
////using namespace std;
////struct TreeNode {
////	int val;
////	TreeNode* left;
////	TreeNode* right;
////	TreeNode(int x) :val(x), left(NULL), right(NULL) {};
////};
////
////class Solution {
////public:
////	void traversalPre(TreeNode* cur, vector<int> &vec) {
////		if (cur == NULL) return;
////		vec.push_back(cur->val);
////		traversalPre(cur->left, vec);
////		traversalPre(cur->right, vec);
////	}
////	void traversalMid(TreeNode* cur, vector<int>& vec) {
////		if (cur == NULL) return;
////		traversalPost(cur->left, vec);
////		vec.push_back(cur->val);
////		traversalPost(cur->right, vec);
////	}
////	void traversalPost(TreeNode* cur, vector<int>& vec) {
////		if (cur == NULL) return;
////		traversalPost(cur->left, vec);
////		traversalPost(cur->right, vec);
////		vec.push_back(cur->val);
////	}
////	vector<int> preorderTraversal(TreeNode* root) {
////		vector<int>result;
////		traversalPre(root, result);
////		return result;
////	}
////	vector<int> midorderTraversal(TreeNode* root) {
////		vector<int>result;
////		traversalMid(root, result);
////		return result;
////	}
////	vector<int> postorderTraversal(TreeNode* root) {
////		vector<int>result;
////		traversalPost(root, result);
////		return result;
////	}
////};
////
////int main() {
////	Solution sol;
////	TreeNode *root = new TreeNode(1);
////	root->right = new TreeNode(2);
////	root->right->left = new TreeNode(3);
////
////
////	vector <int> result;
////	cout << "preorderTraversal" << endl;
////	result = sol.preorderTraversal(root);
////	for (int val : result) {
////		cout << val <<endl;
////	}
////
////	vector <int> result_1;
////	cout << "midorderTraversal" << endl;
////	result_1 = sol.midorderTraversal(root);
////	for (int val : result_1) {
////		cout << val << endl;
////	}
////
////	vector <int> result_2;
////	cout << "postorderTraversal" << endl;
////	result_2 = sol.postorderTraversal(root);
////	for (int val : result_2) {
////		cout << val << endl;
////	}
////}
//
//#include <iostream>
//
//using namespace std;
//
////void bubblu_sort(int arr[], int n) {
//void bubblu_sort(int *arr, int n) {//*
//	int tmp;
//	for (int j = 0; j < n-1; j++) {//*
//		for (int i = j+1; i < n; i++) {
//			if (arr[i] < arr[j]) {
//				tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//
//int main() {
//	int a[] = { 1,6,3,7,9,12,0 };
//	int len = sizeof(a) / sizeof(int);
//	bubblu_sort(a, len);
//	for (int num : a) {
//		cout << num << endl;
//	}
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//
//void select_sort(int *arr,int len) {
//	int minVal_idx;
//	for (int j = 0; j < len -1; j++) {//*
//		for (int i = j+1; i < len; i++) {
//			if (arr[i] < arr[j]) {
//				minVal_idx = i;
//			}
//		}
//		swap(arr[j], arr[minVal_idx]);
//	}
//}
//
//int main() {
//	int a[] = { 1,6,3,7,9,12,0 };
//	int len = sizeof(a) / sizeof(int);
//	select_sort(a, len);
//	for (int num : a) {
//		cout << num << endl;
//	}
//	return 0;
//}
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//void insert_sort(vector<int> &arr) {
//	for (int i = 1; i < arr.size(); i++) {
//		int j = i - 1,tmp = arr[i];
//		//while (j >0 && arr[j] >= tmp) {//*�����ڵ�һ��λ�ò���
//		while (j >=0 && arr[j] >= tmp) {
//			arr[j+1] = arr[j];
//			j--;
//		}
//		//arr[j] = tmp;//*�����ڵ�һ��λ�ò���
//		arr[j+1] = tmp;
//	}
//}
//
//int main() {
//	vector<int > a = { 1,6,3,7,9,12,0 };
//	insert_sort(a);
//	for (int num : a) {
//		cout << num << endl;
//	}
//	return 0;
//}
//
//
//
//#include <iostream>
//#include <vector>
//using namespace std;
////void func(int *a) {
////	cout << sizeof(a) / sizeof(char) << endl;
////}
//
//void shell_sort(vector<int>&a) {
//	int n = a.size();
//	for (int stride = n / 2; stride >= 1; stride = stride / 2) {
//		for (int i = stride; i < n; i = i + stride) {
//			int minval_tmp = a[i];
//			int j = i;
//
//			while (j >= stride && a[j - stride] > minval_tmp) {
//				a[j] = a[j - stride];
//				j -= stride;
//			}
//			a[j] = minval_tmp;
//		}
//	}
//}
//
//
//int main() {
//	vector<int> a = { 1,6,3,7,9,12,0 };
//	shell_sort(a);
//	for (int num : a) {
//		cout << num << endl;
//	}
//	return 0;
//}
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int partition(vector<int>&arr,int left,int right) {
//	int ref = arr[left];
//	while (left < right) {
//	//while (left <= right) {
//		while (left < right && arr[right] >= ref) right--;
//			arr[left] = arr[right];
//		while (left < right && arr[left] <= ref) left++;
//			arr[right] = arr[left];
//	}
//	arr[left] = ref;//*ûд
//	return left;
//}
//void quck_sort(vector<int>& arr, int left, int right) {
//	if (left >= right) return;//*ע����Ⱥ�
//	int ref_idx = partition(arr, left, right);
//	quck_sort(arr, left, ref_idx-1);
//	quck_sort(arr, ref_idx + 1, right);
//}
//int main() {
//	vector<int> a = { 1,6,3,7,9,12,0 };
//	quck_sort(a,0,a.size()-1);
//
//	for (int num : a) {
//		cout << num << endl;
//	}
//
//	return 0;
//}
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//void merge(vector <int> &arr, int left, int mid,int right) {
//	int i = left, j = mid + 1, k = 0;
//	vector <int> tmp_arr(right-left+1);
//	//while (i < j) {//*
//	while (i <= mid && j <= right) {
//		//if (arr[i] < tmp_arr[j]) {//*
//		if (arr[i] <= arr[j]) {
//			tmp_arr[k++] = arr[i++];
//		}
//		else {
//			tmp_arr[k++] = arr[j++];
//		}
//	}
//	while (i <= mid) {
//		tmp_arr[k++] = arr[i++];
//	}
//	while (j <= right) {
//		tmp_arr[k++] = arr[j++];
//	}
//	for (int i = 0; i < right - left + 1; i++) {
//		arr[left+i] = tmp_arr[i];
//	}
//}
//void merge_sort(vector <int>& arr, int left, int right) {
//	if (left >= right) return;//*
//	int mid= left + (right-left)/2;
//	merge_sort(arr, left, mid);//*
//	merge_sort(arr, mid+1, right);//*
//	merge(arr, left, mid, right);
//}
//
//int main() {
//	vector<int> a = { 1,6,3,7,9,12,0 };
//	merge_sort(a,0,a.size()-1);
//
//	for (int num : a) {
//		cout << num << endl;
//	}
//	return 0;
//}
//
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//void heapify(vector <int>& nums,int n_node, int idx_root) {
//	int idx_l = 2 * idx_root + 1;
//	int idx_r = 2 * idx_root + 2;
//	//int largest = nums[idx_root];
//	int largest = idx_root;
//	if(idx_l < n_node && nums[idx_l] > nums[largest]) {
//		largest = idx_l;
//	}
//	if (idx_r < n_node && nums[idx_r] > nums[largest]) {
//		largest = idx_r;
//	}
//
//	//swap(nums[largest], nums[idx_root]);
//	//heapify(nums, n_node, largest);// ���� ���������Ľڵ�
//	if (largest != idx_root) {
//		swap(nums[largest], nums[idx_root]);
//		heapify(nums, n_node, largest);// ���� ���������Ľڵ�
//	}
//}
//void heap_sort(vector <int> &nums) {
//	int len = nums.size();
//	//for (int i = len / 2 - 1; i > 0; i--) {
//	for (int i = len / 2 - 1; i >= 0; i--) {
//		heapify(nums, len, i);
//	}
//	for (int i = len - 1; i > 0; i--) {
//		swap(nums[0], nums[i]);
//		//heapify(nums, len, i);
//		//heapify(nums, len, 0);
//		heapify(nums, i, 0);//*ÿ�ζ��ó�ȥ����  ������
//	}
//}
//
//
//int main() {
//	vector <int> nums = {1,9,5,2,7,0};
//	heap_sort(nums);
//	for (int num : nums) {
//		cout << num << endl;
//	}
//
//	return 0;
//}
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//void counter_sort(vector<int>& nums) {
//	if (nums.size() <= 1)return;
//	int min_val = *min_element(nums.begin(), nums.end());
//	int max_val = *max_element(nums.begin(), nums.end());
//	vector<int> counter(max_val-min_val+1);
//	int offset = min_val;
//	int k = 0;
//	//vector<int> nums_out(nums.size());
//	for (int num : nums) {
//		counter[num - offset] += 1;
//	}
//	for (int &cnt : counter) {
//		int index = &cnt - &counter[0];
//		if (cnt >= 1) {
//			for (int i = 0; i < cnt; i++) {
//				//cout << index+offset <<endl;
//				//nums_out[i] = index + offset;
//				nums[k++] = index + offset;
//				//cout << nums_out[i] <<endl;
//			}
//		}
//	}
//}
//
//
//int main() {
//	vector <int> nums = {1,9,5,-2,7,0};
//	counter_sort(nums);
//	for (int num : nums) {
//		cout << num << endl;
//	}
//	return 0;
//}
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//void bucket_sort(vector <float> &nums){
//	int num_bucket = nums.size() / 2;
//	vector <vector<float>> bucket(num_bucket);
//	//����ͰԪ��
//	for (float num: nums) {
//		int idx_bucket = num * num_bucket;
//		bucket[idx_bucket].push_back(num);
//	}
//	//Ͱ������
//	//for (auto bkt : bucket) {//*for (auto bkt : bucket) �� bkt ��Ͱ�ĸ�����������δ���浽ԭͰ��
//	for (auto &bkt : bucket) {
//		sort(bkt.begin(), bkt.end());
//	}
//	//�ϲ�Ͱ����
//	int k = 0;
//	for (const auto &bkt : bucket) {
//	//for (auto &bkt : bucket) {
//	//for (auto bkt : bucket) {//���� ֵ���ݣ�pass by value�� ���µĲ���Ҫ�� ���ݿ�������
//		for (float num : bkt) {
//			nums[k++] = num;
//		}
//	}
//}
//
//int main() {
//	//vector <int> nums = {1,9,5,-2,7,0};
//	vector <float> nums = {0.123,0.365,0.102,0.9,0.2,0.36,0.45};
//	bucket_sort(nums);
//	for (float num : nums) {
//		cout << num << endl;
//	}
//	return 0;
//}
//
//#include <iostream>
//#include <vector>
//#include <string>//to_string
////#include <algorithm>
//using namespace std;
//
//
//void counting_sort(vector<int> &nums) {
//	int min_val = *min_element(nums.begin(), nums.end());
//	int max_val = *max_element(nums.begin(), nums.end());
//	/*cout << min_val << " "<< max_val << endl;*/
//	int len = to_string(max_val).size();
//	vector<vector <int>> buckets(10);
//	//for (const auto & bucket:buckets) {
//	//	bucket.push_back();
//	//}
//	for (int i = 0; i < len; i++) {
//		for (auto& bucket : buckets) bucket.clear();
//		for (int& num : nums) {
//			int divisor = pow(10, i);//*10^2�����
//			int idx_bkt = (num / divisor )% 10;
//			buckets[idx_bkt].push_back(num);
//		}
//		int k = 0;
//		for (const auto& bucket : buckets) {
//			if (bucket.size() > 0) {
//				for (auto bkt : bucket) {
//					nums[k++] = bkt;
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	//vector <int> nums = {1,79,775,92,4565,137,61};
//	vector <int> nums = {37,4,72,385,6};
//	counting_sort(nums);
//	for (int num : nums) {
//		cout << num << endl;
//	}
//	//cout << divisor << endl;
//	return 0;
//}
//
//
//#include <stdlib.h>
//#include <stdio.h>
//int* wrongFunction() {
//	int localVar = 10;
//	return &localVar;//����ָ��ջ�ڴ��ָ��
//}
//int main()
//	wrongFunction();
//}
//
//int* correctFunction() {
//	int* ptr = (int*)malloc(sizeof(int));
//	//������ڴ�
//	* ptr = 10;
//	return ptr;//���ض��ڴ�ָ��
//}
//int main()
//	correctFunction();
//}
//
//
//#ifdef XXX
//#else
//#endif
//
//#ifdef XXX
//#error	"xxx has been defined"
//#else
//#endif
//
//
//class Node {
//public:
//	shared_ptr<Node> next;
//};
//
//int main() {
//	auto nodeA = make_shared<Node>();
//	auto nodeB = make_shared<Node>();
//	nodeA->next = nodeB;  // nodeB �����ü��� +1 �� 2
//	nodeB->next = nodeA;  // nodeA �����ü��� +1 �� 2
//
//	// �˳�������ʱ��
//	// nodeA ������ 2 �� 1
//	// nodeB ������ 2 �� 1
//	// ���߾�δ�ͷ� �� �ڴ�й©
//}



// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     __int32 a = 56;
//     __int32 b;                     // ��ջ�Ϸ����ڴ�
//     __int32* rx = &b;              // ��ʼ��ָ��
//     *rx = a;                       // ��ȫ��ֵ
//     //printf("Address of rx: %p\n", (void*)rx);

//     __int32 arr[2] = { 0 };          // ָ������ʾ��
//     rx = arr;                      // ָ��������Ԫ��
//     printf("Original address: %p\n", (void*)rx);
//     rx = rx + 1;                   // ��ȫ�ƶ�������ڶ���Ԫ��
//     printf("New address: %p\n", (void*)rx);

//     printf("New address: %d\n", (__int32)rx);


//     return 0;
// }



#include <stdio.h>
#include <stdlib.h>
void func(int *a){
    *a = 5;
}


int main() {
    int a = 1;
    func(&a);

    printf("%d",a);
    return 0;
}