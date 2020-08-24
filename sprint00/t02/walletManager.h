#include <iostream>

struct Wallet {
	int septims;
};

Wallet *createWallet(int num);
void destroyWallet(Wallet* stuc);
Wallet* createWallets(int num);
void destroyWallets(Wallet* stuc);