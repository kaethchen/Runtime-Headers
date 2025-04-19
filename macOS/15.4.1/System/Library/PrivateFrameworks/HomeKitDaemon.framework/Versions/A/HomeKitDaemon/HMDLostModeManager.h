@class NSString;

@interface HMDLostModeManager : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, getter=isLost) BOOL lost;
@property (readonly) BOOL isLostOrNeedsExitAuth;

+ (id)sharedManager;
+ (id)logCategory;

- (id)attributeDescriptions;

@end
