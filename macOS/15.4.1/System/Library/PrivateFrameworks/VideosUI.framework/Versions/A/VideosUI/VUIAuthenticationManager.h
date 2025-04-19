@class AOSUIProfilePictureStore, VUIImageProxy, NSImage, AMSBinaryPromise, ACAccount, AMSPromise;

@interface VUIAuthenticationManager : NSObject

@property (retain, nonatomic) AMSPromise *_authPromise;
@property (retain, nonatomic) AMSBinaryPromise *_signoutPromise;
@property (readonly, nonatomic) ACAccount *_activeUserAccount;
@property (readonly, nonatomic) ACAccount *_localUserAccount;
@property (retain, nonatomic) AOSUIProfilePictureStore *_profilePictureStore;
@property (retain, nonatomic) VUIImageProxy *imageProxy;
@property (readonly, nonatomic) NSImage *_profileImage;
@property (nonatomic) BOOL _isLibraryOnlyCountry;
@property (nonatomic) BOOL _isLibraryOnlyCountryResolved;

+ (id)identifier;
+ (id)sharedInstance;
+ (id)userFullName;
+ (id)DSID;
+ (id)userAccountName;
+ (id)storefrontId;
+ (BOOL)allowsAccountModification;
+ (BOOL)lightWeightUserHasActiveAccount;
+ (BOOL)_isLibraryOnlyCountry;
+ (BOOL)_isLibraryOnlyCountryResolved;
+ (void)_performAuthenticationTask:(id)a0 isSilent:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (id)_profileImage;
+ (void)_recordLog:(id)a0 isSignOut:(BOOL)a1 isSilent:(BOOL)a2;
+ (id)_userAccount;
+ (id)creditsString;
+ (BOOL)isLibraryOnlyCountry;
+ (BOOL)isLibraryOnlyCountryResolved;
+ (void)requestAuthenticationAlwaysPrompt:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
+ (void)signInUserWithAppleID:(id)a0 password:(id)a1 completionHandler:(id /* block */)a2;
+ (void)signOutUserWithCompletionHandler:(id /* block */)a0;
+ (id)userFirstName;
+ (BOOL)userHasActiveAccount;
+ (id)userLastName;
+ (id)userProfileImage;

- (id)init;
- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)a0;
- (void)_determineIfLibraryOnlyCountry;
- (void)_fetchProfileImage;
- (void)_fetchProfileImageForOSX;
- (void)_setUpProfileImageStoreAndFetchProfileImage;
- (BOOL)_shouldNotifyAccountChange:(id)a0 newAccount:(id)a1;

@end
