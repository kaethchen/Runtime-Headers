@interface WFSpotlightSettingsClient : NSObject

@property (class, nonatomic, readonly) WFSpotlightSettingsClient *shared;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isSpotlightEnabledForBundleIdentifier:(id)a0;

@end
