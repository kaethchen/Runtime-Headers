@interface AFFamilyCircleStatusManager : NSObject

@property BOOL childAccount;

+ (id)sharedManager;
+ (BOOL)isChildAccount;

- (void)dealloc;
- (id)init;
- (void)_fetchChildAccountStatus;
- (void)_observeAccountChanges;
- (void)_observeFamilyChanges;
- (void)fetchChildAccountStatus;

@end
