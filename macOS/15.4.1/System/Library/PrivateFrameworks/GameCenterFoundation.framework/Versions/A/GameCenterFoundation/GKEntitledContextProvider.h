@interface GKEntitledContextProvider : NSObject

+ (id)getCurrentDeviceName;
+ (BOOL)hasAnyGameCenterEntitlement;
+ (BOOL)hasBooleanPublicGameCenterEntitlement;
+ (BOOL)hasPublicGroupActivitiesEntitlement;

- (id)init;

@end
