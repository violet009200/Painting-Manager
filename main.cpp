
#include <fstream>
#include "Painting.h"

int main(){
	string fname = "";
	cout<<"please enter file name"<<endl;
	cin>>fname;
	cout<<"opening file: "<<fname<<endl<<endl;
	//read text file
	// ifstream myfile;
	// myfile.open(fname.c_str());
	// string txt;
	// //int id;
	// string title;
	// string artist;
	// string picture;
	// if(!myfile.good()){
	// 	cerr<<"ERROR: reading text file"<<endl;
	// 	return -1;
	// }

	// while(!myfile.eof()){
	// 	getline(myfile,txt);
	// 	cout<<txt<<" "<<artist<<" "<<picture<<endl;
	// 	//cin>>title>>artist>>picture;
	// }	

	// myfile.close();
	

	// cout<<picture<<" "<<title<<" "<<artist<<"\n";

	int pID;
	string pTitle;
	string pArtist;

	char cmd;
	//get command from user
	cout<<"l - List all Painting"<<endl;
	cout<<"1...5 - Edit Painting"<<endl;
	cout<<"t - change title of the current painting"<<endl;
	cout<<"a - Change name of author of the current painting"<<endl;
	cout<<"s - save all painting"<<endl;
	cout<<"q - quit the program"<<endl;

	cin>>cmd;
	cout<<"user input is "<<cmd<<endl;

	if(cmd == 'l'){
		cout<<"list all painting"<<endl;
		cout<<"working on it"<<endl;
	}
	else if(cmd == '1'){ //number 1 to 5
		cout<<"Edit mode"<<endl;
		cout<<"working on it"<<endl;
		//if cmd == t 
		//else if cme == a
	}
	else if(cmd == 't'){
		cout<<"change title"<<endl;
		cout<<"working on it"<<endl;
	}
	else if(cmd =='a'){
		cout<<"change name of author"<<endl;
		cout<<"working on it"<<endl;
	}
	else if(cmd == 's'){
		cout<<"save all paiting"<<endl;
		cout<<"working on it"<<endl;
	}
	else if(cmd == 'q'){
		cout<<"Program is quitting"<<endl;
		return 0;
	}
	else{
		cout<<"input is not correct"<<endl;
		return 0;
	}

	//LinkedList
	Painting myPainting;
	//smartPointer
	//PaintingWrapper paint(id);

	//access the painting's title
	//string str(paint->title());

	Painting::node* head = new Painting::node;
	//struct node *head = new node;
	//struct node *foundNode;

	myPainting.addNode(head, 1, "first", "aaaaa");	

	myPainting.addNode(head, 2, "second", "bbbbbb");
	myPainting.addNode(head, 3, "third", "cccccc");
	myPainting.addNode(head, 4, "fourth", "dddddd");
	myPainting.addNode(head, 5, "fifith", "ffffff");
	//foundNode = pPtr->searchNode(head, 3);

	myPainting.display(head);	

	//delete Painting::node;
	return 0;
}


//makefile

/*
	Here's a sample makefile for creating an executable called p1.
OBJS = MovieList.o Movie.o NameList.o Name.o Iterator.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

p1 : $(OBJS)
    $(CC) $(LFLAGS) $(OBJS) -o p1

MovieList.o : MovieList.h MovieList.cpp Movie.h NameList.h Name.h Iterator.h
    $(CC) $(CFLAGS) MovieList.cpp

Movie.o : Movie.h Movie.cpp NameList.h Name.h
    $(CC) $(CFLAGS) Movie.cpp

NameList.o : NameList.h NameList.cpp Name.h 
    $(CC) $(CFLAGS) NameList.cpp

Name.o : Name.h Name.cpp 
    $(CC) $(CFLAGS) Name.cpp

Iterator.o : Iterator.h Iterator.cpp MovieList.h
    $(CC) $(CFLAGS) Iterator.cpp

clean:
    \rm *.o *~ p1

 */