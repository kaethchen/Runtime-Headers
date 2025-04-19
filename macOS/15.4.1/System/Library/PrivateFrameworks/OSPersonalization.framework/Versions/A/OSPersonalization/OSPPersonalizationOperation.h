@interface OSPPersonalizationOperation : OSPOperation

- (id)description;
- (void)main;
- (int)_configurePersonalization:(struct __AMAuthInstall { } *)a0 entriesToPersonalize:(id)a1;
- (BOOL)_copyBuildManifestToPersonalizedOutputDirectory;
- (BOOL)_ensureInternalUseOnlyBuildForNonzeroBuildGroup;
- (BOOL)_getAppleConnectSSOTicket;
- (void)_personalize;

@end
