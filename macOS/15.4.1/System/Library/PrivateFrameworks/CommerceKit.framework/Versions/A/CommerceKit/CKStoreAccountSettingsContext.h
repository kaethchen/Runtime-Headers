@class NSString, CKStoreAccount, CKDialogContext;

@interface CKStoreAccountSettingsContext : NSObject <NSURLSessionDelegate, AMSURLProtocolDelegate>

@property (readonly) CKStoreAccount *account;
@property (retain) CKDialogContext *dialogContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextForStoreAccount:(id)a0;

- (void).cxx_destruct;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleDialogRequest:(id)a2 completion:(id /* block */)a3;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;
- (id)_bag;
- (void)_setEnabledAutomaticDownloadMediaKinds:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)_setEnabledAutomaticDownloadMediaKinds:(long long)a0 withURL:(id)a1 bodyPlist:(id)a2 completionHandler:(id /* block */)a3;
- (void)disableAutomaticDownloadForMediaKinds:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)eligibilityForService:(long long)a0 completionHandler:(id /* block */)a1;
- (void)enableAutomaticDownloadForMediaKinds:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)enabledAutomaticDownloadMediaKindsWithCompletionHandler:(id /* block */)a0;
- (id)initWithStoreAccount:(id)a0;
- (void)passwordSettingsWithCompletionHandler:(id /* block */)a0;
- (void)setPasswordSettings:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)setTouchIDState:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (long long)touchIDState;

@end
