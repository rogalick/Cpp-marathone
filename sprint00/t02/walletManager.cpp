#include "walletManager.h"

Wallet *createWallet(int num) {
	struct Wallet* wallet = new Wallet [1];

	wallet->septims = num;
	return wallet;
}

void destroyWallet(Wallet* stuc) {
	delete [] stuc;
}

Wallet* createWallets(int num) {
	struct Wallet* wallet = new Wallet[num];

	return wallet;
}

void destroyWallets(Wallet* stuc) {
	delete [] stuc;
}