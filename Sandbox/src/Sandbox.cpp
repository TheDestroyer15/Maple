#include <Maple.h>



class Sandbox : public Maple::app {

public:
	Sandbox() {

	}
	~Sandbox() {
		
	}
};


Maple::app* Maple::CreateApplication() {
	return new Sandbox();
}