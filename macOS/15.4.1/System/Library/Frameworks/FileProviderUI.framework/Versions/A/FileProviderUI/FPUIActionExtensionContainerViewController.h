@class FPUIActionExtensionViewController;

@interface FPUIActionExtensionContainerViewController : NSServiceViewController <FPUIActionExtensionViewControllerProtocol> {
    FPUIActionExtensionViewController *_actionExtensionViewController;
}

- (void).cxx_destruct;
- (id)exportedInterface;
- (id)exportedObject;
- (void)loadView;
- (unsigned long long)awakeFromRemoteView;
- (void)_prepareAuthenticationUsingURL:(id)a0;
- (void)_configureWithDomainIdentifier:(id)a0;
- (void)_embedActionExtensionViewController;
- (void)_prepareAuthenticationUsingServerURL:(id)a0;
- (void)_prepareForActionWithIdentifier:(id)a0 items:(id)a1;
- (void)_prepareForError:(id)a0;
- (void)_prepareForServerCreation;

@end
