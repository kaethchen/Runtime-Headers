@class HMBModelContainer;

@interface HMBMutableLocalDatabaseConfiguration : HMBLocalDatabaseConfiguration

@property (retain, nonatomic) HMBModelContainer *modelContainer;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
