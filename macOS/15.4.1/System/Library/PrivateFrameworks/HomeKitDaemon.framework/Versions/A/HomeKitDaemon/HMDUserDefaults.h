@interface HMDUserDefaults : NSUserDefaults

+ (id)logCategory;
+ (id)protectedUserDefaults;

- (id)initWithSuiteName:(id)a0;
- (void)migrateProtectedKeys;
- (void)migrateProtectedKeys:(id)a0;

@end
