@class NSString;

@interface SCCatalystMacOSBridge : NSObject <SCCatalystMacOSBridgeInterface>

@property (class, readonly, nonatomic) SCCatalystMacOSBridge *shared;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
