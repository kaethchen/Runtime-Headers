@interface SPCompletionListRemoteViewController : NSRemoteViewController <SPCompletionListRemoteViewControllerProtocol>

- (id)exportedInterface;
- (id)serviceViewControllerInterface;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)fillSelectedCredential:(id)a0;
- (void)fillSelectedOneTimeCode:(id)a0;
- (void)resizeRemoteWindow:(struct CGSize { double x0; double x1; })a0;
- (void)showAuthenticationSheetForSelectedCredential;
- (void)showAuthenticationSheetForSelectedOneTimeCode;
- (void)showExternalCredentialAuthenticationWithIdentifier:(id)a0;
- (void)showExternalCredentialListWithIdentifier:(id)a0;
- (void)showOtherPasswordsSelected:(id)a0;

@end
