@interface PXAudioSettings : PXSettings

@property (nonatomic) BOOL workaround80278485;
@property (nonatomic) BOOL flexReturnOnlyLocalSongs;
@property (nonatomic) BOOL flexSimulateDownloadFailure;
@property (nonatomic) BOOL flexSimulateAssetFetchFailure;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
