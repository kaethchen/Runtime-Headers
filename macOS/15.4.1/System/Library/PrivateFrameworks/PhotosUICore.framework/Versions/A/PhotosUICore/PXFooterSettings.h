@interface PXFooterSettings : PXSettings

@property (nonatomic) BOOL shouldAlternateTitleWithGridCycle;
@property (nonatomic) long long alternateTitleGridCycleCount;
@property (nonatomic) double alternateTitleGridCycleDelay;
@property (nonatomic) double alternateTitleCyclingInterval;
@property (nonatomic) double animationDelay;
@property (nonatomic) float minimumDisplayedProgress;
@property (nonatomic) BOOL simulateImportantInformation;
@property (nonatomic) BOOL simulateAnimatedIconMode;
@property (nonatomic) long long simulatedAnimatedIconMode;
@property (nonatomic) BOOL simulateDisplayedProgress;
@property (nonatomic) float simulatedProgressValue;
@property (nonatomic) BOOL showFilterView;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (void)resetLastShownInfo;

- (void)setDefaultValues;
- (id)parentSettings;

@end
