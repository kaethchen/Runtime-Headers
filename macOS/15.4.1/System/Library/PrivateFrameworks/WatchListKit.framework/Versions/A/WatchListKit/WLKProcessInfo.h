@interface WLKProcessInfo : NSObject

@property (nonatomic) struct __SecTask { } *currentTask;

+ (id)currentProcessInfo;

- (void)dealloc;
- (id)init;
- (id)valueForEntitlement:(id)a0;
- (BOOL)boolValueForEntitlement:(id)a0;
- (BOOL)valueForEntitlement:(id)a0 containsObject:(id)a1;

@end
