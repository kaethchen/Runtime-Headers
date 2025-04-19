@interface DNDSServerSettings : PTSettings

@property (nonatomic) long long forcedIntelligentBreakthrough;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
