@class NSString, UIImage, LSApplicationWorkspace, NSURL, VSAppDescription, NSBundle, VSPrivacyFacade, VSOptional, VSRestrictionsCenter;

@interface VSAppSettingsViewModel : NSObject <LSApplicationWorkspaceObserverProtocol>

@property (nonatomic) long long installState;
@property (nonatomic) long long privacyState;
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) VSPrivacyFacade *privacyFacade;
@property (retain, nonatomic) LSApplicationWorkspace *workspace;
@property (nonatomic) int registrationToken;
@property (retain, nonatomic) VSRestrictionsCenter *restrictionsCenter;
@property (retain, nonatomic) NSBundle *bundle;
@property (retain, nonatomic) VSAppDescription *appDescription;
@property (copy, nonatomic) NSString *buyParams;
@property (readonly, nonatomic) long long installSource;
@property (retain, nonatomic) NSString *artistName;
@property (readonly, copy, nonatomic) NSString *adamID;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSURL *appStoreURL;
@property (nonatomic) BOOL forceDSIDlessInstall;
@property (readonly, copy, nonatomic) NSString *storeName;
@property (retain, nonatomic) VSOptional *voucher;
@property (readonly, nonatomic) BOOL canChangePrivacyAccess;
@property (nonatomic, getter=isAccessGranted) BOOL accessGranted;
@property (readonly, nonatomic) BOOL canRevokeVoucher;
@property (readonly, nonatomic, getter=isDecided) BOOL decided;
@property (readonly, nonatomic) NSString *decidedLockupSubtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingAccessGranted;

- (void)dealloc;
- (id)init;
- (id)name;
- (void).cxx_destruct;
- (void)applicationsDidFailToUninstall:(id)a0;
- (void)applicationsDidFailToInstall:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (void)applicationsWillInstall:(id)a0;
- (void)applicationsWillUninstall:(id)a0;
- (id)initWithApplicationWorkspace:(id)a0;
- (void)launchApp;
- (id)appBundleIDs;
- (id)appAdamIDs;
- (id)iconURLForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_denyPrivacyAccess;
- (void)_grantPrivacyAccess;
- (void)_updatePrivacyState;
- (id)appIconURLForSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithAppDescription:(id)a0 privacyVoucher:(id)a1 restrictionsCenter:(id)a2 privacyFacade:(id)a3;
- (id)initWithBundle:(id)a0 restrictionsCenter:(id)a1 privacyFacade:(id)a2;
- (id)initWithBundle:(id)a0 restrictionsCenter:(id)a1 privacyFacade:(id)a2 adamID:(id)a3;
- (void)installApp;
- (void)revokeVoucher;

@end
