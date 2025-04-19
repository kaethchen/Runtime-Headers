@class NSString, RTIDocumentState, AFUIContactsController, RTIDocumentTraits, NSSuggestionItem, NSMutableArray, AFUIMenuView;

@interface AFUIAutofillContactsViewController : NSViewController <AFUIMeDisplayNameObserver, AFUIContactPropertyPickerDelegate, AFUIAutoFillContentController>

@property (retain, nonatomic) RTIDocumentState *documentState;
@property (retain, nonatomic) RTIDocumentTraits *documentTraits;
@property (copy, nonatomic) id /* block */ performTextOperations;
@property (copy, nonatomic) id /* block */ performKeyboardOutput;
@property (retain, nonatomic) AFUIContactsController *contactsController;
@property (nonatomic) BOOL suggestionsLoaded;
@property (retain, nonatomic) NSSuggestionItem *meSuggestionItem;
@property (retain, nonatomic) NSMutableArray *suggestionItems;
@property (retain, nonatomic) NSMutableArray *suggestions;
@property (retain, nonatomic) NSSuggestionItem *chooseOtherSuggestionItem;
@property (retain, nonatomic) AFUIMenuView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (BOOL)hasSuggestions;
- (BOOL)isSingleLineDocument;
- (void)documentStateChanged:(id)a0;
- (void)_displayCustomInfoSuggestions:(id)a0;
- (void)_displayMeSuggestionItemIfNecessary;
- (void)_displaySuggestions:(id)a0;
- (void)_flushSuggestionItemSectionsToView;
- (void)_generateSuggestions;
- (void)_performCustomInfoTextOperations:(id)a0;
- (void)_performKeyboardOutput:(id)a0;
- (void)_performKeyboardOutputForMenuItem:(id)a0;
- (void)_performTextOperations:(id)a0;
- (void)_performTextOperationsForMenuItem:(id)a0;
- (void)_presentContactPicker;
- (void)_presentCustomizeUI;
- (void)_removeSuggestionsOfPreviousDocumentState;
- (id)initWithDocumentTraits:(id)a0 documentState:(id)a1 keyboardOutputHandler:(id /* block */)a2;
- (id)initWithDocumentTraits:(id)a0 documentState:(id)a1 textOperationsHandler:(id /* block */)a2;
- (void)meDisplayNameChanged:(id)a0;
- (void)userSelectedContactProperties:(id)a0;

@end
