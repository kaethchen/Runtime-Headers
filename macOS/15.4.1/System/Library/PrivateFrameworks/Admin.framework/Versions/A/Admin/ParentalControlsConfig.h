@interface ParentalControlsConfig : NSObject

+ (id)sharedConfig;

- (void)setRemoteListening:(BOOL)a0;
- (void)updateDSAppsForUser:(id)a0 bundleIDs:(id)a1 kickMCX:(BOOL)a2;

@end
