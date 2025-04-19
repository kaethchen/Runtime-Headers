@class CKAuthenticationSettings, CKStoreClient, CKDialogContext;

@interface CKAuthenticationContext : NSObject <NSCopying>

@property (readonly) CKStoreClient *storeClient;
@property (retain) CKDialogContext *dialogContext;
@property (retain) CKAuthenticationSettings *settings;

+ (id)authenticationContextForStoreClient:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithStoreClient:(id)a0;
- (void)_authenticateWithDialog:(id)a0 completionHandler:(id /* block */)a1;
- (void)_finishAuthWithResult:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)_signChallenge:(id)a0 withCaller:(id)a1 completionHandler:(id /* block */)a2;
- (id)_viewControllerForAuthentication;
- (void)authenticateWithDialog:(id)a0 completionHandler:(id /* block */)a1;
- (void)signChallenge:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
