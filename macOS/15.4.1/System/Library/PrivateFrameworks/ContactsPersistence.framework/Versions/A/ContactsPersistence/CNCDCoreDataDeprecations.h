@interface CNCDCoreDataDeprecations : NSObject

+ (BOOL)tryLockContext:(id)a0;
+ (BOOL)isConfinedContext:(id)a0;
+ (void)lockContext:(id)a0;
+ (void)lockCoordinator:(id)a0;
+ (id)newConfinedContext;
+ (void)unlockContext:(id)a0;
+ (void)unlockCoordinator:(id)a0;

@end
