@class NSStackView, NSButton, NSTouchBar, ICMTextStylesTouchBar, NSString, NSPopoverTouchBarItem, NSSet, NSIndexSet, NSWindowController, NSCandidateListTouchBarItem, NSView, ICMacBaseTextView, NSCustomTouchBarItem, NSArray;

@interface ICMTextStylesTouchBarController : ICMAppTouchBarController <ICMTextStylesTouchBarDelegate, NSTouchBarDelegate>

@property (retain, nonatomic) NSButton *indentButton;
@property (retain, nonatomic) NSButton *outdentButton;
@property (retain, nonatomic) ICMTextStylesTouchBar *stylesTouchBar;
@property (retain, nonatomic) NSStackView *indentStackView;
@property (retain, nonatomic) NSCustomTouchBarItem *addNoteBarItem;
@property (retain, nonatomic) NSPopoverTouchBarItem *stylesBarItem;
@property (retain, nonatomic) NSCustomTouchBarItem *checklistBarItem;
@property (retain, nonatomic) NSCustomTouchBarItem *indentTextBarItem;
@property (retain, nonatomic) NSCandidateListTouchBarItem *candidateBarItem;
@property (readonly, nonatomic) NSSet *textViewProvidedIdentifiers;
@property (readonly, nonatomic) BOOL isRTL;
@property (retain, nonatomic) NSTouchBar *editingTouchBar;
@property (retain, nonatomic) NSView *textViewBIUButton;
@property (weak, nonatomic) ICMacBaseTextView *textView;
@property (retain, nonatomic) NSIndexSet *manualSelectedStyles;
@property (readonly, nonatomic) NSString *customizationIdentifier;
@property (readonly, nonatomic) NSArray *defaultItemIdentifiers;
@property (readonly, nonatomic) NSArray *customizationAllowedItemIdentifiers;
@property (readonly, nonatomic) NSArray *customizationRequiredItemIdentifiers;
@property (readonly, nonatomic) id dfrBIUEnabledBindingObject;
@property (readonly, nonatomic) id canStyleTextEnabledBindingObject;
@property (readonly, nonatomic) id canIndentEnabledBindingObject;
@property (readonly, nonatomic) id canOutdentEnabledBindingObject;
@property (readonly, nonatomic) id canToggleTodoEnabledBindingObject;
@property (readonly, nonatomic) NSWindowController *windowController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (id)touchBar;
- (void)updateTextTouchBarItems;
- (id)textViewProvidedItemIdentifiers;
- (void)addNoteButtonPressed:(id)a0;
- (void)checklistButtonPressed:(id)a0;
- (void)dismissStylePopoverIfNecessary;
- (void)handleStyleButtonPressed:(id)a0;
- (void)indentButtonPressed:(id)a0;
- (id)initWithTextView:(id)a0 touchBarDelegate:(id)a1;
- (void)outdentButtonPressed:(id)a0;
- (void)styleButtonPressed:(id)a0;
- (void)styleCollapsedButtonPressed:(id)a0;
- (void)textStylesTouchBar:(id)a0 didSelectStyle:(id)a1 sender:(id)a2;
- (void)toggleBlockQuote;
- (void)updateChecklistButtonAccessibilityValue;
- (void)updateStyleButtons;
- (void)updateStyleButtonsIfNecessary;

@end
