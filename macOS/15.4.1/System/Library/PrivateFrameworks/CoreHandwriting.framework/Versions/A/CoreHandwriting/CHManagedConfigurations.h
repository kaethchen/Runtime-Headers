@interface CHManagedConfigurations : NSObject

@property (readonly, nonatomic) BOOL isPersonalizedHandwritingResultsAllowed;

+ (id)managedConfigurations;

- (id)init;
- (void)_updateSettings;
- (void)_profileSettingsChanged:(id)a0;

@end
