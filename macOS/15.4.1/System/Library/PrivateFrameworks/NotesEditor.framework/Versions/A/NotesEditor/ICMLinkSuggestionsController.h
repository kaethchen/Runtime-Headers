@class ICAttachmentInsertionController, ICTableColumnTextView, ICLinkAcceleratorController, ICAutoCompleteSuggestionsViewController, ICNote, NSTextView, NSString;

@interface ICMLinkSuggestionsController : NSObject <ICAutoCompleteSuggestionsViewControllerDelegate>

@property (retain, nonatomic) ICAutoCompleteSuggestionsViewController *autoCompleteController;
@property (weak, nonatomic) ICLinkAcceleratorController *linkAcceleratorController;
@property (readonly, nonatomic) BOOL allowsLinks;
@property (nonatomic) BOOL isUpdatingKeyboard;
@property (weak, nonatomic) ICAttachmentInsertionController *attachmentInsertionController;
@property (readonly, weak, nonatomic) ICNote *note;
@property (weak, nonatomic) ICTableColumnTextView *tableTextView;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } editedRange;
@property (weak, nonatomic) NSTextView *textView;
@property (readonly, nonatomic) long long selectedRow;
@property (readonly, nonatomic) BOOL isAutoCompletionViewVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasAcceleratorTextInTextStorage:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfAcceleratorTextInTextStorage:(id)a0;

- (void).cxx_destruct;
- (void)tableCellFirstResponderChangedInNote:(id)a0;
- (BOOL)attemptSelectionConfirmation;
- (void)autoCompleteSuggestionsViewController:(id)a0 didSelectItem:(id)a1;
- (void)clearAutoCompletionView;
- (void)clearInProcessAcceleratorTextInTextStorage:(id)a0;
- (id)initWithLinkAcceleratorController:(id)a0;
- (void)insertLink:(id)a0 toTextView:(id)a1 atRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 viaAutoComplete:(BOOL)a3;
- (void)insertLinkAttachment:(id)a0 atRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 viaAutoComplete:(BOOL)a2;
- (void)performArrowDown;
- (void)performArrowUp;
- (void)performEscapeKey;
- (void)updateAutoCompletionView:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 textView:(id)a2 requiredWidth:(double)a3 isShowingNewNoteRow:(BOOL)a4 hasNotesSectionHeader:(BOOL)a5 acceleratorString:(id)a6 writingDirection:(long long)a7;
- (double)widthForItems:(id)a0;

@end
