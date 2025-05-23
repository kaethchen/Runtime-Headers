@interface PXPhotosDataSourceSettings : PXSettings

@property (nonatomic) BOOL slowBackgroundFetch;
@property (nonatomic) BOOL disableKeyAssetCuration;
@property (nonatomic) double delayChanges;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
