//smart pointer class

#include <PaintingWrapper.h>

PaintingWrapper::PaintingWrapper(int id_)
	:id(id_), pPainting(NULL);
	{}

PaintingWrapper::~PaintingWrapper(){
	delete pPainting;
	cout<<"~PaintingWrapper"<<endl;
}

Painting* PaintingWrapper::operator->(){
	if(pPainting == NULL) 
		//pPainting = cache.loadFromFile(...);
	return pPainting;
}

Painting& PaintingWrapper::operator*(){
	if(pPainting == NULL)
		//pPainting = cache.loadFrom..;
	return *pPainting;
}