@interface PXGridSettings : PXSettings

@property (nonatomic) BOOL disableSelectionOverlayView;
@property (nonatomic) long long weightingScheme;
@property (nonatomic) BOOL enableAutomaticTransitionToSelectMode;
@property (nonatomic) BOOL simulateLongTitles;
@property (nonatomic) long long simulatedNumberOfLocations;

+ (id)sharedInstance;

- (void)setDefaultValues;
- (id)parentSettings;

@end
