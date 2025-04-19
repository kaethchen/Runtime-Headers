@class CDPUIAccessCodeEntryTextField, OBTemplateContainerViewController, OBTemplateView, NSString, NSText, AKInheritanceAccessKey, NSWindow;

@interface CDPUIInheritanceUIProviderImpl : NSObject <CDPUIAccessCodeEntryTextFieldDelegate, CDPUIInheritanceUIProvider>

@property (weak, nonatomic) NSWindow *keyWindow;
@property (weak, nonatomic) NSWindow *accessKeyWindow;
@property (retain, nonatomic) OBTemplateContainerViewController *containerView;
@property (retain, nonatomic) OBTemplateView *templateView;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) AKInheritanceAccessKey *accessKey;
@property (retain, nonatomic) CDPUIAccessCodeEntryTextField *accessCodeTextView;
@property (retain, nonatomic) NSText *errorTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_setupTemplateView;
- (id)_buildInputView;
- (id)_buildErrorView;
- (void)_attemptEntry;
- (id)_buildTextView;
- (id)_buildWindow;
- (void)_linkButtonTapped;
- (id)_wrappingKeySubstringFromAccessKey:(id)a0;
- (void)accessCodeEntryTextFieldDidReturn:(id)a0;
- (void)accessCodeEntryTextFieldDidUpdate:(id)a0;
- (id)initWithKeyWindow:(id)a0;
- (void)promptForAccessCodeForAccessKey:(id)a0 completion:(id /* block */)a1;

@end
