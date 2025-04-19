@interface PXDuplicatesSettings : PXSettings

@property (nonatomic) BOOL showDuplicateGroupsWithASingleAsset;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
