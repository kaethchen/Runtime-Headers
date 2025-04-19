@class NSString;

@interface JIMAppDelegate : NSObject <NSApplicationDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationWillTerminate:(id)a0;

@end
