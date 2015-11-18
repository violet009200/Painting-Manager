//smart pointer class

#include "PaintingWrapper.h"
//class for smart pointer for Painting

//inline PaintingWrapper::PaintingWrapper(Painting* p)
//			:pPainting(NULL){pPainting = p;}
PaintingWrapper::PaintingWrapper(Painting* p = NULL){
	pPainting = p;
}

PaintingWrapper::~PaintingWrapper(){
			delete pPainting;
			cout<<"~PaintingWrapper"<<endl;
		}

		//send message to the Person obj
Painting* PaintingWrapper::operator->() const{
			return pPainting;
		}
		//obtain a reference to the Person obj
Painting& PaintingWrapper::operator*() const{
			return *pPainting;
		}



