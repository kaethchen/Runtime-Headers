@class NSSet;

@interface ATXAppProtectionUnLockedOrUnHidden : NSObject

@property (readonly, nonatomic) NSSet *unLockedApps;
@property (readonly, nonatomic) NSSet *unHiddenApps;

- (void).cxx_destruct;
- (id)initWithUnLockedApps:(id)a0 unHiddenApps:(id)a1;

@end
