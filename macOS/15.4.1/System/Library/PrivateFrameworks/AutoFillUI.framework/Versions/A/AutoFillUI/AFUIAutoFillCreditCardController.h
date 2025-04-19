@class RTIDocumentState, NSArray, RTIDocumentTraits, NSSuggestionItem, AFUIMenuView;

@interface AFUIAutoFillCreditCardController : NSViewController <AFUIAutoFillContentController>

@property (retain, nonatomic) RTIDocumentState *documentState;
@property (retain, nonatomic) RTIDocumentTraits *documentTraits;
@property (copy, nonatomic) id /* block */ performTextOperations;
@property (copy, nonatomic) id /* block */ performKeyboardOutput;
@property (copy, nonatomic) NSArray *suggestionItems;
@property (retain, nonatomic) NSSuggestionItem *openSettingsSuggestionItem;
@property (retain, nonatomic) AFUIMenuView *view;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (BOOL)hasSuggestions;
- (void)documentStateChanged:(id)a0;
- (void)__performKeyboardOutputWithSuggestion:(id)a0;
- (void)__performTextOperationsWithSuggestion:(id)a0;
- (void)_didSelectAutoFillSuggestion:(id)a0;
- (void)_displaySuggestions:(id)a0;
- (void)_flushSuggestionItemSectionsToView;
- (void)_generateSuggestions;
- (void)_openSettings;
- (id)initWithDocumentTraits:(id)a0 documentState:(id)a1 keyboardOutputHandler:(id /* block */)a2;
- (id)initWithDocumentTraits:(id)a0 documentState:(id)a1 textOperationsHandler:(id /* block */)a2;

@end
