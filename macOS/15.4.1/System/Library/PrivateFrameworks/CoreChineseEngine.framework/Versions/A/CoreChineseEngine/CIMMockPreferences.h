@interface CIMMockPreferences : CIMPreferences

+ (id)sharedUserDefaults;

- (void)synchronize;
- (void)logStatistics;
- (void)disableUbiquity;
- (BOOL)ubiquityEnabled;
- (void)enableUbiquity;

@end
