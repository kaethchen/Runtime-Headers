@class SUOSUProductStub;

@interface SUOSUMajorProductStubImpl : SUOSUMajorProduct

@property (retain) SUOSUProductStub *config;

- (void).cxx_destruct;
- (id)title;
- (id)longDescription;
- (id)versionString;
- (id)initWithConfig:(id)a0;
- (BOOL)allowedToUseInstallLater;
- (long long)downloadSize;
- (id)longAttributedDescription;
- (id)productKey;
- (BOOL)isSplat;
- (id)updateIconImage;
- (BOOL)isMSUUpdate;
- (BOOL)isMajorUpdate;
- (BOOL)isSplatCombo;
- (id)majorOSBuildVersion;
- (id)majorOSDisplayTitle;
- (id)majorOSDisplayVersion;
- (id)majorOSIconImage;
- (id)majorOSMoreInfoLinkString;
- (unsigned long long)postInstallAction;
- (id)shortAttributedDescription;
- (BOOL)splatAppliedRestartNow;

@end
