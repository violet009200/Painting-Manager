//linked list for painting 

#include "Painting.h"

//create first node
void Painting::initNode(struct node* head, int id_, string title_, string name_){
	head->id = id_;
	head->title= title_;
	head->artist_name = name_;

	head->next = NULL;
}

//add Node after first node
void Painting::addNode(struct node* head, int id_, string title_, string name_){
	if(head == NULL) {
		Painting::initNode(head, id_, title_, name_);
		return;
	}
	node *newNode = new node;
	newNode->id = id_;
	newNode->title= title_;
	newNode->artist_name = name_;

	newNode->next = NULL;

	node *current = head;
	while(current){
		if(current->next == NULL){
			current->next = newNode;
			return;
		}
		current = current->next;
	}
}

//search painting with ID
struct Painting::node *Painting::searchNode(struct node* head, int id_){
	node *current = head;
	while(current){
		if(current->id == id_) {
			return current;
		}
		current = current->next;
	}
	cout<<"Cannot find ID: "<<id_<<"Painting"<<endl;
}

//print all painting 
void Painting::display(struct node* head){
	node *list = head;
	while(list){
		cout<<"ID: "<<list->id<<endl;
		cout<<"TITLE: "<<list->title<<endl;
		cout<<"ARTIST: "<<list->artist_name<<endl;
		cout<<"-------------------------------"<<endl;
		list = list->next;
	}
	cout<<endl;
}

int Painting::getID(struct node* ptr){
	return ptr->id;
}

string Painting::getTitle(struct node* ptr){
	return ptr-> title;
}

string Painting::getArtist(struct node* ptr){
	return ptr->artist_name;
}


