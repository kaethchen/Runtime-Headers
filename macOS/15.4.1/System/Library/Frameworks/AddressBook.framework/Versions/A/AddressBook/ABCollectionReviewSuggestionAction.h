@class NSString, ABSuggestedValueViewController, ABCollectionViewItem, NSPopover;
@protocol ABCardCollectionViewDelegate;

@interface ABCollectionReviewSuggestionAction : ABCollectionAbstractAction <NSPopoverDelegate, ABSuggestedValueViewControllerDelegate>

@property (weak, nonatomic) ABCollectionViewItem *targetItem;
@property (weak, nonatomic) id<ABCardCollectionViewDelegate> collectionViewDelegate;
@property (retain, nonatomic) ABSuggestedValueViewController *viewController;
@property (retain, nonatomic) NSPopover *popover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)snippetWithDonatedValue:(id)a0;
+ (id)snippetWithLabeledValue:(id)a0;
+ (id)snippetWithSuggestedLabeledValue:(id)a0;
+ (id)sourceApplicationNameForSuggestedViewItem:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCollectionViewDelegate:(id)a0;
- (void)configureViewWithSnippet:(id)a0 labeledValue:(id)a1;
- (void)confirmationViewController:(id)a0 didConfirmLabeledValue:(id)a1;
- (void)confirmationViewController:(id)a0 didRejectLabeledValue:(id)a1;
- (void)displaySnippetViewControllerInPopoverRelativeToCollectionViewItem:(id)a0;
- (void)ensurePopoverIsCreated;
- (void)executeWithSender:(id)a0 target:(id)a1;
- (void)executeWithTarget:(id)a0;
- (id)labeledValueFromCollectionViewItem:(id)a0;
- (void)messageTraceExecutionOfActionOnCollectionViewItem:(id)a0;
- (id)snippetFromCollectionViewItem:(id)a0;
- (void)updateSnippetViewControllerWithValueFromCollectionViewItem:(id)a0;
- (BOOL)validateWithTarget:(id)a0;

@end
