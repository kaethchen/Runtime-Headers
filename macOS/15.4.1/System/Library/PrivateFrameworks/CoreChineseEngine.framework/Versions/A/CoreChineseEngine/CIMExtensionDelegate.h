@class NSString;

@interface CIMExtensionDelegate : NSObject <IMKExtensionDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)extensionDidLaunch;
- (void)extensionWillTerminate;

@end
