#include <iostream>
#include <string>
#include <fstream>
//#include "LinkedList.h"
using namespace std;

class Painting{
	public:
		//Painting();
		Painting(int);
		//Painting(int, string, string);
		void changeTitle(string );
		void changeArtist(string);
		void printPainting();
		void loadMemory(int, string , string);
		//void printList();

		void displayPainting();

		//LinkedList
		struct node
		{
			int id;
			string title;
			string artist_name;
		
			node *next;
		};
		node *head = NULL;

		void addNode(int , string ,string);
		struct node *searchNode(int );
		void unloadMemory(int );
		int isLoaded(int n);
		string getTitle();
		string getArtist();

	protected:
	    int pId;
		string pTitle;
		string pArtist;
		Painting *p;
		
		

};