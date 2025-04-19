@interface SPAutoFillAuthorizationRemoteViewController : NSRemoteViewController <SPAutoFillAuthorizationRemoteViewControllerProtocol>

- (id)exportedInterface;
- (id)serviceViewControllerInterface;
- (void)credentialSelected:(id)a0;
- (void)oneTimeCodeSelected:(id)a0;
- (void)requestAuthorizationForSelectedCredential;
- (void)requestAuthorizationForSelectedOneTimeCode;

@end
