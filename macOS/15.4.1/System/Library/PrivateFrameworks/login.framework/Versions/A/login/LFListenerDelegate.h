@class LFListener, NSString;

@interface LFListenerDelegate : NSObject <NSXPCListenerDelegate>

@property (readonly) LFListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)delegateWithListener:(id)a0;

- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithListener:(id)a0;

@end
