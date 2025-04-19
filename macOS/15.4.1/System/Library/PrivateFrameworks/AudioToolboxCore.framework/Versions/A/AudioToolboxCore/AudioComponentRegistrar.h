@class NSString;

@interface AudioComponentRegistrar : NSObject <NSXPCListenerDelegate>

@property (readonly, nonatomic) void *impl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)resumeListeners;
- (id)initForMode:(BOOL)a0;
- (id)replaceListener:(id)a0 withListener:(id)a1;

@end
