@interface PXVideoPlaybackSettings : PXSettings

@property (nonatomic) BOOL isDownloadingVideoSegmentsEnabled;
@property (nonatomic) double maxHighlightFractionForDisplay;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
