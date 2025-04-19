@class NSPopover, NSArray, NSString, RTIDocumentTraits, RTIDocumentState, AFUIPasswordsController, AFUIMenuView;

@interface AFUIAutoFillPasswordController : NSViewController <NSPopoverDelegate, AFUIPasswordPickerDelegate, AFUIAutoFillContentController> {
    id /* block */ _performTextOperations;
    id /* block */ _performKeyboardOutput;
    RTIDocumentTraits *_documentTraits;
    RTIDocumentState *_documentState;
    NSPopover *_allPasswordsPopover;
    AFUIPasswordsController *_passwordsController;
}

@property (copy, nonatomic) NSArray *suggestionItems;
@property (copy, nonatomic) NSArray *oneTimeCodeSuggestionItems;
@property (nonatomic) BOOL suppressMenu;
@property (retain, nonatomic) AFUIMenuView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_hide;
- (void)loadView;
- (void)popoverDidClose:(id)a0;
- (void)viewDidLoad;
- (BOOL)hasSuggestions;
- (void)documentStateChanged:(id)a0;
- (void)_finishWithAccountSuggestion:(id)a0;
- (void)_finishWithCredential:(id)a0;
- (void)_finishWithOneTimeCodeSuggestion:(id)a0;
- (void)_finishWithStringValue:(id)a0 textContentType:(id)a1;
- (void)_flushSuggestionItemSectionsToView;
- (void)_generateSuggestions;
- (id)_keyboardDictionaryWithAccountSuggestion:(id)a0;
- (id)_keyboardDictionaryWithCredential:(id)a0;
- (void)_loadAccountSuggestions;
- (void)_performKeyboardOutputWithAccountSuggestion:(id)a0;
- (void)_performKeyboardOutputWithCredential:(id)a0;
- (void)_performKeyboardOutputWithStringValue:(id)a0;
- (void)_performTextOperationsWithAccountSuggestion:(id)a0;
- (void)_performTextOperationsWithCredential:(id)a0;
- (void)_performTextOperationsWithStringValue:(id)a0 textContentType:(id)a1;
- (void)_reloadOneTimeCodeSuggestions;
- (void)_showAllPasswordsView;
- (id)initWithDocumentTraits:(id)a0 documentState:(id)a1 keyboardOutputHandler:(id /* block */)a2;
- (id)initWithDocumentTraits:(id)a0 documentState:(id)a1 textOperationsHandler:(id /* block */)a2;
- (void)passwordsController:(id)a0 fillPassword:(id)a1;
- (void)passwordsController:(id)a0 fillText:(id)a1;
- (void)passwordsController:(id)a0 fillUsername:(id)a1;
- (void)passwordsController:(id)a0 fillVerificationCode:(id)a1;
- (void)passwordsController:(id)a0 selectedCredential:(id)a1;
- (void)passwordsControllerDidCancel:(id)a0;

@end
