#include <Alpha.h>

class Sandbox : public Alpha::application
{
public:

	Sandbox() {

	}
	~Sandbox() {

	}
};
Alpha::application* Alpha::CreateApplication() {
	return new Sandbox();
}




