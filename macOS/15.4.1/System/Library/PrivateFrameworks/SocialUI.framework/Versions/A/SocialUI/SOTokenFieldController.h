@class NSString, SOTokenField, SOHandleMenuController, NSMutableDictionary, NSHashTable;

@interface SOTokenFieldController : SOAddRecipientFieldViewController <SOTokenAttachmentCellDelegate, SOTokenFieldCellDragDelegate, SOTokenFieldDelegate> {
    BOOL _wroteToPasteboard;
    BOOL _addTokensFromDrag;
    SOTokenField *_layoutTestTokenField;
    NSMutableDictionary *_cachedTokenFieldHeights;
    NSHashTable *_tokenAttachmentCells;
}

@property (retain) SOHandleMenuController *handleMenuController;
@property (readonly, nonatomic) SOTokenField *tokenField;
@property (nonatomic) double tokenFontSize;
@property (getter=isChangingFirstResponder) BOOL changingFirstResponder;
@property BOOL suppressErrorDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)control:(id)a0 textShouldEndEditing:(id)a1;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidChange:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (id)tokenField:(id)a0 displayStringForRepresentedObject:(id)a1;
- (id)tokenField:(id)a0 editingStringForRepresentedObject:(id)a1;
- (BOOL)tokenField:(id)a0 hasMenuForRepresentedObject:(id)a1;
- (id)tokenField:(id)a0 menuForRepresentedObject:(id)a1;
- (id)tokenField:(id)a0 readFromPasteboard:(id)a1;
- (id)tokenField:(id)a0 representedObjectForEditingString:(id)a1;
- (id)tokenField:(id)a0 setUpTokenAttachmentCell:(id)a1 forRepresentedObject:(id)a2;
- (id)tokenField:(id)a0 shouldAddObjects:(id)a1 atIndex:(unsigned long long)a2;
- (unsigned long long)tokenField:(id)a0 styleForRepresentedObject:(id)a1;
- (BOOL)tokenField:(id)a0 writeRepresentedObjects:(id)a1 toPasteboard:(id)a2;
- (BOOL)validateMenuItem:(id)a0;
- (void)viewDidLoad;
- (void)selectedResult:(id)a0;
- (void)didSelectResult:(id)a0;
- (id)tokenField;
- (void)chatDisplayControllerDidChange:(id)a0;
- (void)_chatDisplayControllerRecipientsDidChange:(id)a0;
- (void)_newChatDisplayControllerIDSValidationDidChange:(id)a0;
- (void)_registerTokenAttachmentCell:(id)a0;
- (void)_setRecipientTokens:(id)a0;
- (BOOL)_showContactCardForIMHandle:(id)a0;
- (void)_showErrorMessageForHandle:(id)a0;
- (id)_strippedPboardString:(id)a0;
- (void)_tokenFormatDidChange:(id)a0;
- (void)_updateHandleTokenFromNotification:(id)a0;
- (void)_updatePlaceholderAttributedString;
- (unsigned long long)_visibleTokenCountWithLineCount:(unsigned long long)a0 tokenCount:(unsigned long long)a1 recipients:(id)a2 tokenFieldHeight:(double)a3;
- (void)appendIMHandles:(id)a0;
- (id)autocompleteStringForFieldEditor:(id)a0;
- (void)chatDisplayControllerWillChange:(id)a0;
- (BOOL)isNewComposeForTokenAttachmentCell:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForUserCompletionInFieldEditor:(id)a0;
- (void)setTokenFontSize:(double)a0;
- (void)showContactCard:(id)a0;
- (BOOL)tokenAttachmentCell:(id)a0 doubleClickedInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;
- (void)tokenAttachmentCell:(id)a0 willBeDestroyedWithRepresentedObject:(id)a1;
- (id)tokenAttachmentCellEffectiveAppearance:(id)a0;
- (BOOL)tokenAttachmentCellHasErrorState:(id)a0;
- (BOOL)tokenAttachmentCellShouldShowDecidingBackground:(id)a0;
- (void)tokenFieldCellDidBeginDropOperation:(id)a0;
- (void)tokenFieldCellDidEndDropOperation:(id)a0;
- (BOOL)tokenFieldShouldPreventAdditionalTyping:(id)a0;
- (double)tokenFontSize;
- (void)updateRecipients;
- (unsigned long long)visibleTokenCountForLineCount:(unsigned long long)a0 width:(double)a1;

@end
