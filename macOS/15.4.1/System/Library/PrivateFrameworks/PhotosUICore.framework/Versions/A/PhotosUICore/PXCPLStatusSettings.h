@class NSNumber;

@interface PXCPLStatusSettings : PXSettings

@property (retain, nonatomic) NSNumber *resumeOverrideHours;
@property (retain, nonatomic) NSNumber *shouldHideMockStatusWarning;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (void)setDefaultValues;
- (id)parentSettings;

@end
