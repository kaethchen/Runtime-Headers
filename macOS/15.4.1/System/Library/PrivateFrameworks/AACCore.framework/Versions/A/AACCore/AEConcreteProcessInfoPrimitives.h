@interface AEConcreteProcessInfoPrimitives : NSObject <AEProcessInfoPrimitives>

@property (readonly) double systemUptime;

- (BOOL)hasEntitlement:(id)a0;
- (BOOL)isBeingTested;

@end
