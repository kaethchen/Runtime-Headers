@interface PXModelSettings : PXSettings

@property (nonatomic) double photoAnalysisGraphInitialGraceDelay;
@property (nonatomic) double photoAnalysisGraphProgressUpdateInterval;

+ (id)sharedInstance;

- (void)setDefaultValues;
- (id)parentSettings;

@end
