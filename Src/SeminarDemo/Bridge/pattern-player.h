#pragma once
#include <iostream>
#include <string>
using namespace std;

class CImpPlay {
public:
	virtual int playVideo(void) = 0;
	virtual int playAudio(void) = 0;
};

class CPlayer {
protected:
	CImpPlay *m_pImpPlay;
public:
	virtual int loadPlaylist(string path) = 0;
	virtual int parserPlaylist(void) = 0;
};


class CX9Play :public CImpPlay {
public:
	virtual int playVideo(void) {
		//...
	}
	virtual int playAudio(void) {
		//...
	}
};

class CXtudioPlayer :public CPlayer {
public:
	virtual int loadPlaylist(string path) {
		//...
	}
	virtual int parserPlaylist(void) {
		//...
	}
};

class CBeaconPlayer :public CPlayer {
public:
	virtual int loadPlaylist(string path) {
		//...
	}
	virtual int parserPlaylist(void) {
		//...
	}
};
