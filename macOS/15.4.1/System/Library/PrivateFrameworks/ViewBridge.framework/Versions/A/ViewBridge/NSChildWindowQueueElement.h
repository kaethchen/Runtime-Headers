@class NSString, NSXPCListenerEndpoint;

@interface NSChildWindowQueueElement : NSObject {
    NSString *_identifier;
    id /* block */ _reply;
    NSXPCListenerEndpoint *_listenerEndpoint;
    struct { long long ordered; BOOL sharesParentKeyState; struct { unsigned long long responderIdentifier; unsigned char base; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRect; unsigned int id; unsigned long long styleMask; } window; } _parameters;
}

- (void)dealloc;
- (id)initWithIdentifier:(id)a0 parameters:(const struct { long long x0; BOOL x1; struct { unsigned long long x0; unsigned char x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; unsigned int x3; unsigned long long x4; } x2; } *)a1 listenerEndpoint:(id)a2 reply:(id /* block */)a3;

@end
