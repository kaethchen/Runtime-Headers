@interface AMSFeatureFlagRemote : AMSFeatureFlag

+ (id)fetchRemoteFlagState;

- (BOOL)isRemote;
- (id)_preferencesKey;
- (void)_activateFlag;
- (long long)_developmentPhase;
- (void)_updateDevelopmentPhase;
- (void)_updateInternalEnabledState;

@end
