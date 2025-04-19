@class NSString;

@interface PreferencePaneListenerDelegate : NSObject <NSXPCListenerDelegate, NSXPCSharedListenerDelegate, NSApplicationDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (unsigned long long)applicationShouldTerminate:(id)a0;

@end
