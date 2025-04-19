@class NSSet;

@interface ATXAppProtectionLockedOrHidden : NSObject

@property (readonly, nonatomic) NSSet *lockedApps;
@property (readonly, nonatomic) NSSet *hiddenApps;

- (void).cxx_destruct;
- (id)initWithLockedApps:(id)a0 hiddenApps:(id)a1;

@end
