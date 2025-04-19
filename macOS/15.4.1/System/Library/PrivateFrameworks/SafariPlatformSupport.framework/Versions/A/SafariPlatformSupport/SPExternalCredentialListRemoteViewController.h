@interface SPExternalCredentialListRemoteViewController : NSRemoteViewController <SPExternalCredentialListRemoteProtocol>

- (id)exportedInterface;
- (id)serviceViewControllerInterface;
- (void)connectToExtensionWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)credentialSelected:(id)a0;

@end
