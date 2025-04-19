@class NSString, NSScrollView, NSArray, AFCreditCard, RTIDocumentState, NSStackView, NSMutableArray, RTIDocumentTraits, NSPopover;
@protocol AFUIModalUIDelegate;

@interface AFUICreditCardViewController : NSViewController <NSPopoverDelegate> {
    NSPopover *_popover;
    NSPopover *😁;
    id /* block */ _textOperationsHandler;
}

@property (retain, nonatomic) NSMutableArray *creditCards;
@property (retain, nonatomic) AFCreditCard *creditCard;
@property (nonatomic) BOOL hasSuggestions;
@property (retain, nonatomic) RTIDocumentState *documentState;
@property (retain, nonatomic) RTIDocumentTraits *documentTraits;
@property (copy, nonatomic) id /* block */ performTextOperations;
@property (weak, nonatomic) id<AFUIModalUIDelegate> modalUIDelegate;
@property (retain, nonatomic) NSArray *suggestions;
@property (retain) NSStackView *mainStackView;
@property (retain) NSScrollView *scrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dateStringTextContentType:(id)a0 date:(id)a1 placeholderHint:(id)a2;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)processSuggestions:(id)a0;
- (void)presentFromViewController:(id)a0;
- (void)handleTextInsertion:(id)a0;
- (id)initWithDocumentTraits:(id)a0 documentState:(id)a1 textOperationsHandler:(id /* block */)a2 suggestions:(id)a3;
- (void)insertButtonClicked:(id)a0;

@end
