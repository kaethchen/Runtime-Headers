@interface OAHSUPrefs : NSObject

+ (id)sharedInstance;

- (BOOL)boolForKey:(id)a0;
- (id)valueForKey:(id)a0;
- (BOOL)debugMode;
- (id)catalogOverride;
- (BOOL)allowOnNonAppleSilicon;
- (id)rosettaConfigurationAdditionsPath;
- (BOOL)stagedUpdates;

@end
