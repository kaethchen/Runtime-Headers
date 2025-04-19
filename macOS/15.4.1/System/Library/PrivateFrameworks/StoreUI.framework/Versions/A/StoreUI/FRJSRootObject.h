@class NSString, FRJSAppleAccountStore, FRJSCodeRedeemer, CKStoreClient, FRWKView;

@interface FRJSRootObject : FRJSObject <CKAccountObserver, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CKStoreClient *storeClient;
@property (readonly, nonatomic) FRJSAppleAccountStore *jsAccountStore;
@property (readonly, nonatomic) FRJSCodeRedeemer *jsCodeRedeemer;
@property (nonatomic) BOOL startedProgressSpinner;
@property (retain, nonatomic) id accountStoreObserverToken;
@property (readonly, weak, nonatomic) FRWKView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void)dealloc;
- (void).cxx_destruct;
- (id)_cookies;
- (id)_primaryAccount;
- (id)_accounts;
- (void)accountStore:(id)a0 primaryAccountChanged:(id)a1;
- (id)getProperty:(id)a0;
- (id)callFunction:(id)a0 withArguments:(id)a1;
- (id)_sysctlNumberForMIBName:(int *)a0 length:(unsigned int)a1;
- (void)dispatchGlobalEvent:(id)a0 withObject:(id)a1;
- (id)_sysctlStringForMIBName:(int *)a0 length:(unsigned int)a1;
- (id)_accountForDSID:(id)a0;
- (void)_authenticateForAccount:(id)a0 withOptions:(id)a1 callback:(id)a2;
- (void)_authorizeMachine:(id)a0;
- (id)_availableSharingServices;
- (void)_buy:(id)a0;
- (void)_deauthorizeMachine;
- (void)_fetchMarketingItem:(id)a0;
- (id)_getUserAppleID:(id)a0;
- (id)_getUserDSID:(id)a0;
- (void)_handleAppIsFrontmostChangedNotification:(id)a0;
- (void)_openWindow:(id)a0;
- (BOOL)_sendAccountCreationRequest:(id)a0;
- (void)_setCookies:(id)a0;
- (void)_signOut:(id)a0;
- (id)_signStorePlatformRequestData:(id)a0;
- (void)_signTouchIDChallenge:(id)a0;
- (void)_triggerDownloadQueueCheck;
- (void)_viewAccount:(id)a0;
- (void)addProtocolFromDataString:(id)a0;
- (void)dispatchEvent:(id)a0 withObject:(id)a1;
- (void)doDialogXMLWithArgs:(id)a0;
- (id)initWithWebView:(id)a0 storeClient:(id)a1;
- (id)prepareSharingArgumentsWithOptions:(id)a0;
- (void)shareWithServiceNamed:(id)a0 sharingOptions:(id)a1;
- (void)showSharingPickerForServicesNamed:(id)a0 fromPageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 sharingOptions:(id)a2;

@end
