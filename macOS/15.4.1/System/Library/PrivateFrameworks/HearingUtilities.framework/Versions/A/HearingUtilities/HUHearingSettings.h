@interface HUHearingSettings : HCSettings

+ (id)sharedInstance;

- (void)logMessage:(id)a0;
- (id)preferenceDomainForPreferenceKey:(id)a0;
- (BOOL)shouldStoreLocally;

@end
