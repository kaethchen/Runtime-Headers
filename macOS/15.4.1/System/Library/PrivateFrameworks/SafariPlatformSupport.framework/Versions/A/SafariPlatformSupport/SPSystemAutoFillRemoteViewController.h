@protocol SPSystemAutoFillRemoteViewControllerDelegate;

@interface SPSystemAutoFillRemoteViewController : NSRemoteViewController <SPSystemAutoFillRemoteViewControllerProtocol>

@property (weak, nonatomic) id<SPSystemAutoFillRemoteViewControllerDelegate> delegate;

+ (void)requestViewControllerWithRemoteAppID:(id)a0 remoteLocalizedAppName:(id)a1 remoteUnlocalizedAppName:(id)a2 externallyVerifiedAndApprovedSharedWebCredentialsDomains:(id)a3 autoFillMode:(unsigned long long)a4 explicitAutoFillMode:(BOOL)a5 completion:(id /* block */)a6;

- (void).cxx_destruct;
- (void)cancel;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;
- (void)setExplicitAutoFillMode:(BOOL)a0;
- (void)setRemoteAppID:(id)a0;
- (void)fillPassword:(id)a0;
- (void)fillText:(id)a0;
- (void)fillUsername:(id)a0;
- (void)fillVerificationCode:(id)a0;
- (void)selectedCredential:(id)a0;
- (void)setAutoFillMode:(unsigned long long)a0;
- (void)setExternallyVerifiedAndApprovedSharedWebCredentialsDomains:(id)a0;
- (void)setRemoteLocalizedAppName:(id)a0;
- (void)setRemoteUnlocalizedAppName:(id)a0;

@end
