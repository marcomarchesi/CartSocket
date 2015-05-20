// Socket.h

#ifdef CARTSOCKET_EXPORT
#define CARTSOCKET_API __declspec(dllexport) 
#else
#define CART_SOCKET_API __declspec(dllimport)
#endif

extern "C" {
	CART_SOCKET_API int Test();
}