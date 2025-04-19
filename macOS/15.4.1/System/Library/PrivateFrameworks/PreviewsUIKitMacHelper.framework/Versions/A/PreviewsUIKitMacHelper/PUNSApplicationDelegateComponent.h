@class NSString;

@interface PUNSApplicationDelegateComponent : NSObject <UINSApplicationDelegateComponent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)applicationDelegate:(id)a0 newWindowControllerForScene:(id)a1;

@end
