#include "Painting.h"

Painting::Painting(int id)

{
	Painting::pId = id;
}
		
void Painting::changeTitle(string title_){
	Painting::pTitle = title_;
}

void Painting::changeArtist(string artist_){
	Painting::pArtist = artist_;
}

string Painting::getTitle(){
	return Painting::pTitle;
}

string Painting::getArtist(){
	return Painting::pArtist;
}


//not in linkedlist
void Painting::printPainting(){
	//cout<<"Painting Information"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<Painting::pId<<endl<<Painting::pTitle<<endl;
	cout<<Painting::pArtist<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<endl;
	//p->unloadMemory(pId);

}

void Painting::loadMemory(int id_, string title_, string artist_){
	Painting::pId = id_;
	Painting::pTitle = title_;
	Painting::pArtist = artist_;
	
	//p->addNode(id_,title_,artist_);
	Painting::addNode(id_,title_,artist_);
}


void Painting::addNode(int n, string title_, string artist_){
	

	node *newNode = new node;
	newNode->id = n;
	newNode->title = title_;
	newNode->artist_name = artist_;

	if(head==NULL){
		cout<<"Uploading..."<<endl;
		head =newNode;
		return;
	}
	node *cur = head;
	while(cur){
		if(cur->next == NULL){
			cur->next = newNode;
			
			return;
		}
		cur= cur->next;
	}
	
}

struct Painting::node *Painting::searchNode(int n){
	if(head == NULL) return head;
	node *cur = head;
	node *prev = head;
	while(cur){
		if(cur->id == n) return cur;
		prev = cur;
		cur = cur->next;
	}
	return cur;
}

int Painting::isLoaded(int n){
	node *ptr = searchNode(n);
	if(ptr == NULL) return 0;
	else return 1;
}

void Painting::unloadMemory(int n){
	
	node *ptr = searchNode(n);
	if(ptr == NULL)
		cout<<"No Node with ID: "<<n<<endl;
	if(ptr == head){
		//head = ptr->next;
		head = NULL;
		cout<<"ID: "<<n<<" is removed from Memory"<<endl;
		return;
	}
	node *cur = head;
	node *prev = head;

	while(cur){
		if(cur == ptr){
			prev->next = cur->next;
			
			return;
		}
		prev = cur;
		cur= cur->next;
	}
	
}

void Painting::displayPainting(){
	//struct node *list = head;
	//node *list = new node;
	//list = head;
	while(head){
		cout<<"ID: "<<head->id<<endl;
		cout<<"TITLE: "<<head->title<<endl;
		cout<<"ARTIST: "<<head->artist_name<<endl;

		cout<<"-------------------------------"<<endl;
		head = head->next;
	}
	cout<<endl;

	//Painting::deleteNode(list->id);
}
