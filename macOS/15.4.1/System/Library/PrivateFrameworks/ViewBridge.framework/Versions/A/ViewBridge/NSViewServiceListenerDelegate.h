@class NSXPCListener, NSString;

@interface NSViewServiceListenerDelegate : NSObject <NSXPCListenerDelegate, NSXPCSharedListenerDelegate>

@property (retain) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
