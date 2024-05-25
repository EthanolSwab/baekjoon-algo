/*1991 트리순회*/

#include<iostream>
using namespace std;
typedef pair<char, char> pcc;
pair<char, pcc> tree[26];
int n;
void preorder(char node) { //전위순회 - 루트, 왼, 오
	if (node == '.') return; //leaf
	cout << node; //parent
	preorder(tree[node - 'A'].second.first); // left
	preorder(tree[node - 'A'].second.second); //right
}
void inorder(char node) { //중위순회 - 왼, 루트, 오
	if (node == '.') return; // leaf
	inorder(tree[node - 'A'].second.first); // left
	cout << node; // parent
	inorder(tree[node - 'A'].second.second); //right
}
void postorder(char node) { // 후위순회 - 왼, 오, 루트
	if (node == '.') return; //leaf
	postorder(tree[node - 'A'].second.first);
	postorder(tree[node - 'A'].second.second);
	cout << node;

}
int main(void) {
	cin >> n;
	while (n--) {
		char parent, left, right;
		cin >> parent >> left >> right;
		tree[parent - 'A'].first = parent; //인덱스 번호(아스키코드)
		tree[parent - 'A'].second.first = left;
		tree[parent - 'A'].second.second = right;
		cin.ignore();
	}
	preorder('A');
	cout << endl;
	inorder('A');
	cout << endl;
	postorder('A');
	cout << endl;
}