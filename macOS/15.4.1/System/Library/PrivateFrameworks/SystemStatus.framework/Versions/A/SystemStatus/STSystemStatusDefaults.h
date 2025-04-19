@interface STSystemStatusDefaults : BSAbstractDefaultDomain

@property (nonatomic) BOOL shouldEnableInternalBundles;
@property (nonatomic) BOOL shouldEnableUnknownBundles;
@property (nonatomic) BOOL shouldEnableUnknownBackgroundActivities;

+ (id)standardDefaults;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
