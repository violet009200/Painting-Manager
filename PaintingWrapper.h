//class for smart pointer for Painting

//#include "PaintingFile.h"
//#include "PaintingCache.h"

class PaintingWrapper{
	public:
		//get a handle to an Painting obj via its ID
		PaintingWrapper(int);

		~PaintingWrapper();

		//send message to the Person obj
		Painting* operator->() const;
		//obtain a reference to the Person obj
		Painting& operator*() const;

	protected:
		int id;
		Painting *pPainting; //local copy of the persistent Painting obj

		PaintingWrapper(const PaintingWrapper&);
		PaintingWrapper& operator = (const PaintingWrapper&);

		//static PatinginFile paintingIndex("filename");
		//static int CACHE_SIZE;
		//static PersonCache cache(CACHE_SIZE);

};

