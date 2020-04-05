#pragma once
#include <iostream>
#include <string>
using namespace std;


class CPlayer {
public:
	virtual int loadPlaylist(string path) = 0;
	virtual int parserPlaylist(void) = 0;

	virtual int playVideo(void) = 0;
	virtual int playAudio(void) = 0;
};

class CX9Player :public CPlayer {
public:
	virtual int loadPlaylist(string path) = 0;
	virtual int parserPlaylist(void) = 0;
	virtual int playVideo(void) {
		//...
	}
	virtual int playAudio(void) {
		//...
	}
};

class CXtudioPlayer :public CPlayer {
protected:
	CX9Player* m_player;
public:
	virtual int loadPlaylist(string path) {
		//...
	}
	virtual int parserPlaylist(void) {
		//...
	}
};

class CBeaconPlayer :public CPlayer {
protected:
	CX9Player* m_player;
public:
	virtual int loadPlaylist(string path) {
		//...
	}
	virtual int parserPlaylist(void) {
		//...
	}
};