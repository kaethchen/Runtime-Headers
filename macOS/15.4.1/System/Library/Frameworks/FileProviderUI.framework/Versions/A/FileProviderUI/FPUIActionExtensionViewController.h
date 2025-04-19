@class FPUIActionExtensionContext;

@interface FPUIActionExtensionViewController : NSViewController <FPUIActionExtensionViewControllerProtocol>

@property (readonly, nonatomic) FPUIActionExtensionContext *extensionContext;

- (void)beginRequestWithExtensionContext:(id)a0;
- (void)_prepareAuthenticationUsingURL:(id)a0;
- (void)_configureWithDomainIdentifier:(id)a0;
- (void)_browserUserInterfaceStyleDidChange;
- (BOOL)_extensionImplementsSelector:(SEL)a0;
- (void)_prepareAuthenticationUsingServerURL:(id)a0;
- (void)_prepareForActionWithIdentifier:(id)a0 items:(id)a1;
- (void)_prepareForError:(id)a0;
- (void)_prepareForServerCreation;
- (void)prepareAuthenticationUsingServerURL:(id)a0;
- (void)prepareAuthenticationUsingURL:(id)a0;
- (void)prepareForActionWithIdentifier:(id)a0 itemIdentifiers:(id)a1;
- (void)prepareForAuthentication;
- (void)prepareForError:(id)a0;
- (void)prepareForServerCreation;

@end
