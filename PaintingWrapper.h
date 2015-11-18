//class for smart pointer for Painting
#include "Painting.h"

class PaintingWrapper{
	public:
		//get a handle to an Painting obj via its ID
		explicit PaintingWrapper(Painting* p);

		~PaintingWrapper();

		//send message to the Person obj
		Painting* operator->() const;
		//obtain a reference to the Person obj
		Painting& operator*() const;

	private:
		Painting* pPainting;
		int id;
		string title;
		string artist;


};

