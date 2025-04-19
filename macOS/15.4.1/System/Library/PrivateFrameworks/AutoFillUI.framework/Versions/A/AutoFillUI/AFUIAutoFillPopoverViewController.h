@class RTIDocumentState, NSViewController, RTIDocumentTraits, NSView;
@protocol AFUIAutoFillContentController;

@interface AFUIAutoFillPopoverViewController : NSViewController <AFUIAutoFillRootVCDelegate>

@property (retain) NSViewController<AFUIAutoFillContentController> *topViewController;
@property (retain, nonatomic) RTIDocumentTraits *documentTraits;
@property (retain, nonatomic) RTIDocumentState *documentState;
@property (copy, nonatomic) id /* block */ performTextOperations;
@property (copy, nonatomic) id /* block */ performKeyboardOutput;
@property (retain, nonatomic) NSView *contentView;

+ (id)presentAsPopoverFromWindow:(id)a0 documentTraits:(id)a1 documentState:(id)a2 keyboardOutputHandler:(id /* block */)a3;
+ (id)presentAsPopoverFromWindow:(id)a0 documentTraits:(id)a1 documentState:(id)a2 textOperationsHandler:(id /* block */)a3;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (BOOL)hasSuggestions;
- (void)presentFromViewController:(id)a0;
- (void)_setupContentView;
- (void)documentStateChanged:(id)a0;
- (void)presentContacts;
- (void)_presentContentViewController:(id)a0;
- (void)_presentViewControllerForAutoFillMode:(unsigned long long)a0;
- (id)initWithDocumentTraits:(id)a0 documentState:(id)a1 keyboardOutputHandler:(id /* block */)a2;
- (id)initWithDocumentTraits:(id)a0 documentState:(id)a1 textOperationsHandler:(id /* block */)a2;
- (void)presentCreditCards;
- (void)presentHME;
- (void)presentPasswords;

@end
