/*
ID: unique integer 
Title: String
Artist Name: first name
Picture: jpeg-formatted file
*/

#include <iostream>
#include <string>
using namespace std;

class Painting{
	public:
		struct node
		{
			int id;
			string title;
			string artist_name;
			//picture
			node *next;
		};

		void initNode(struct node*, int, string,string);
		void addNode(struct node*, int, string, string);
		struct node *searchNode(struct node*, int);
		void display(struct node*);
		int getID(struct node*);
		string getTitle(struct node*);
		string getArtist(struct node*);

};