
#include <stdlib.h> //atoi
#include "PaintingWrapper.h"

int ID;
string Title;
string Artist;


//Read text file and save information in global variable 
void readFile(string fname){
	//cout<<"reading files"<<endl;

			ifstream myfile;
			myfile.open(fname.c_str());
	
			
			string string_id;
			int id =0;
			string title;
			string artist;

			if(!myfile.good()){
	 			cerr<<"ERROR: reading text file"<<endl;
	 			return ;
	 		}
	
	 	
	 	getline(myfile,string_id);
	 	getline(myfile,title);
	 	getline(myfile,artist);
	 	

	Title = title;
	Artist = artist;
	id = atoi(string_id.c_str());
    ID = id;
	//cout<<id<<endl<<title<<endl<<artist<<endl;
	myfile.close();
}

void writeFile(string fname, int id, string title, string name){
	remove(fname.c_str());
	ofstream myfile;
	myfile.open(fname.c_str());
	if(!myfile.good()){
		cerr<<"ERROR: writing file"<<endl;
		return;
	}

	myfile<<id<<endl;
	myfile<<title<<endl;
	myfile<<name<<endl;
	myfile.close();

}

char printInstruction(){
	char cmd;
	//get command from user
	cout<<"l - List all Painting"<<endl;
	cout<<"1...5 - Edit Painting"<<endl;
	cout<<"s - save all Painting"<<endl;
	cout<<"q - quit the program"<<endl;


	cin>>cmd;
	cout<<"user input is "<<cmd<<endl;
	return cmd;
}

int main(){

	PaintingWrapper myPainting1(new Painting(1));
	PaintingWrapper myPainting2(new Painting(2));
	PaintingWrapper myPainting3(new Painting(3));
	PaintingWrapper myPainting4(new Painting(4));
	PaintingWrapper myPainting5(new Painting(5));
	
	char cmd = printInstruction();


	while(cmd !='q'){

	/*
	Load text file and print the information then delete from memory
	*/
	if(cmd == 'l'){ 
		cout<<">>>>list all Painting<<<<"<<endl;
		cout<<endl;

		if(myPainting1->isLoaded(1) == 0){
			readFile("painting1.txt");
			myPainting1->loadMemory(ID,Title,Artist);
			myPainting1->printPainting();
		}
		else	myPainting1->printPainting();
		if(myPainting2->isLoaded(2) == 0){
			readFile("painting2.txt");
			myPainting2->loadMemory(ID,Title,Artist);
			myPainting2->printPainting();
		}
		else 	myPainting2->printPainting();
		if(myPainting3->isLoaded(3) == 0){
			readFile("painting3.txt");
			myPainting3->loadMemory(ID,Title,Artist);
			myPainting3->printPainting();
		}
		else 	myPainting3->printPainting();
		if(myPainting4->isLoaded(4) == 0){
			readFile("painting4.txt");
			myPainting4->loadMemory(ID,Title,Artist);
			myPainting4->printPainting();
		}
		else 	myPainting4->printPainting();
		if(myPainting5->isLoaded(5) == 0){
			readFile("painting5.txt");
			myPainting5->loadMemory(ID,Title,Artist);
			myPainting5->printPainting();
		}
		else 	myPainting5->printPainting();

		myPainting1->unloadMemory(1);
		myPainting2->unloadMemory(2);
		myPainting3->unloadMemory(3);

		cmd = printInstruction();
	}
	//number 1 to 5
	else if(cmd == '1' || cmd == '2' || cmd == '3' || cmd == '4' || cmd == '5'){ 
		int curId;
		curId = 0;
		curId = cmd-'0';

		cout<<">>>> you are in Edit mode"<<endl;
		cout<<"Please choose option"<<endl;
		cout<<"t - change title of the current Painting"<<endl;
		cout<<"a - Change name of author of the current Painting"<<endl;
		
		string newTitle;
		string newArtist;
		cin>>cmd;
		cout<<"user input is: "<<cmd<<endl;
		if(cmd == 't'){
			switch(curId){
				case 1:
					if(myPainting1->isLoaded(1) == 0){
						cout<<"Painting is not in memory, uploading now"<<endl;
						readFile("painting1.txt");
						myPainting1->loadMemory(ID,Title,Artist);
					}
					
					myPainting1->printPainting();
					cout<<"change title: type new title"<<endl;
					//TODO:
					//getline(cin,newTitle);
					cin>>newTitle;
					//cout<<"newTitle is : "<< newTitle<<endl;
					myPainting1->changeTitle(newTitle);
					cout<<"after changing"<<endl;
					myPainting1->printPainting();
					break;
				case 2:
					if(myPainting2->isLoaded(2) == 0){
						cout<<"Painting is not in memory, uploading now"<<endl;
						readFile("painting2.txt");
						myPainting2->loadMemory(ID,Title,Artist);
					}
					myPainting2->printPainting();
					cout<<"change title: type new title"<<endl;
					cin>>newTitle;
					myPainting2->changeTitle(newTitle);
					cout<<"after changing"<<endl;
					myPainting2->printPainting();
					break;
				case 3:
					if(myPainting3->isLoaded(3) == 0){
						cout<<"Painting is not in memory, uploading now"<<endl;
						readFile("painting3.txt");
						myPainting3->loadMemory(ID,Title,Artist);
					}
					myPainting3->printPainting();
					cout<<"change title: type new title"<<endl;
					cin>>newTitle;
					myPainting3->changeTitle(newTitle);
					cout<<"after changing"<<endl;
					myPainting3->printPainting();
					break;
				case 4:
					if(myPainting4->isLoaded(4) == 0){
						cout<<"Painting is not in memory, uploading now"<<endl;
						readFile("painting4.txt");
						myPainting4->loadMemory(ID,Title,Artist);
					}
					myPainting4->printPainting();
					cout<<"change title: type new title"<<endl;
					cin>>newTitle;
					myPainting4->changeTitle(newTitle);
					cout<<"after changing"<<endl;
					myPainting4->printPainting();
					break;
				case 5:
					if(myPainting5->isLoaded(5) == 0){
						cout<<"Painting is not in memory, uploading now"<<endl;
						readFile("painting5.txt");
						myPainting5->loadMemory(ID,Title,Artist);
					}
					myPainting5->printPainting();
					cout<<"change title: type new title"<<endl;
					cin>>newTitle;
					myPainting5->changeTitle(newTitle);
					cout<<"after changing"<<endl;
					myPainting5->printPainting();
					break;
				default:
					cout<<"choose 1 to 5"<<endl;
					break;
			}//switch
			
			//cmd = printInstruction();
		}
		else if(cmd =='a'){
			switch(curId){
				case 1:
					if(myPainting1->isLoaded(1) == 0){
						cout<<"Painting is not in memory, uploading now"<<endl;
						readFile("painting1.txt");
						myPainting1->loadMemory(ID,Title,Artist);
					}
					
					myPainting1->printPainting();
					cout<<"change Artist: type new Artist"<<endl;
					//getline(cin,newTitle);
					cin>>newArtist;
					myPainting1->changeArtist(newArtist);
					cout<<"after changing"<<endl;
					myPainting1->printPainting();
					break;
				case 2:
					if(myPainting2->isLoaded(2) == 0){
						cout<<"Painting is not in memory, uploading now"<<endl;
						readFile("painting2.txt");
						myPainting2->loadMemory(ID,Title,Artist);
					}
					myPainting2->printPainting();
					cout<<"change Artist: type new Artist"<<endl;
					cin>>newArtist;
					myPainting2->changeArtist(newArtist);
					cout<<"after changing"<<endl;
					myPainting2->printPainting();
					break;
				case 3:
					if(myPainting3->isLoaded(3) == 0){
						cout<<"Painting is not in memory, uploading now"<<endl;
						readFile("painting3.txt");
						myPainting3->loadMemory(ID,Title,Artist);
					}
					myPainting3->printPainting();
					cout<<"change Artist: type new Artist"<<endl;
					cin>>newArtist;
					myPainting3->changeArtist(newArtist);
					cout<<"after changing"<<endl;
					myPainting3->printPainting();
					break;
				case 4:
					if(myPainting4->isLoaded(4) == 0){
						cout<<"Painting is not in memory, uploading now"<<endl;
						readFile("painting4.txt");
						myPainting4->loadMemory(ID,Title,Artist);
					}
					myPainting4->printPainting();
					cout<<"change Artist: type new Artist"<<endl;
					cin>>newArtist;
					myPainting4->changeArtist(newArtist);
					cout<<"after changing"<<endl;
					myPainting4->printPainting();
					break;
				case 5:
					if(myPainting5->isLoaded(5) == 0){
						cout<<"Painting is not in memory, uploading now"<<endl;
						readFile("painting5.txt");
						myPainting5->loadMemory(ID,Title,Artist);
					}
					myPainting5->printPainting();
					cout<<"change Artist: type new Artist"<<endl;
					cin>>newArtist;
					myPainting5->changeArtist(newArtist);
					cout<<"after changing"<<endl;
					myPainting5->printPainting();
					break;
				default:
					cout<<"choose 1 to 5"<<endl;
					break;
			}//switch
		}
		cmd = printInstruction();
	}
	
	else if(cmd == 's'){
		cout<<"save all Painting"<<endl;
		string title;
		string name;

		title = myPainting1->getTitle();
		name = myPainting1->getArtist();
		writeFile("painting1.txt", 1, title, name);

		title = myPainting2->getTitle();
		name = myPainting2->getArtist();
		writeFile("painting2.txt", 2, title, name);

		title = myPainting3->getTitle();
		name = myPainting3->getArtist();
		writeFile("painting3.txt", 3, title, name);

		title = myPainting4->getTitle();
		name = myPainting4->getArtist();
		writeFile("painting4.txt", 4, title, name);

		title = myPainting5->getTitle();
		name = myPainting5->getArtist();
		writeFile("painting5.txt", 5, title, name);

		myPainting1->unloadMemory(1);
		myPainting2->unloadMemory(2);
		myPainting3->unloadMemory(3);
		myPainting4->unloadMemory(4);
		myPainting5->unloadMemory(5);

		cmd = printInstruction();
	}
	else{
		cout<<"input is not correct"<<endl;
		cmd = printInstruction();
	}
}
	cout<<"Program is quitting"<<endl;
	return 0;

}


