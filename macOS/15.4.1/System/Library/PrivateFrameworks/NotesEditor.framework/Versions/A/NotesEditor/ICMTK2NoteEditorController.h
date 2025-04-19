@class ICNote, NSString, NSView, ICNAEventReporter, ICTK2MacTextView, NSViewController, ICMSidebarScrollView, ICTextViewScrollState, ICTTTextStorage;

@interface ICMTK2NoteEditorController : ICMNoteEditorController <ICAttachmentInsertionDelegate, ICLinkAcceleratorControllerDelegate>

@property (retain, nonatomic) ICMSidebarScrollView *scrollView;
@property (retain, nonatomic) ICTK2MacTextView *tk2TextView;
@property (readonly, nonatomic) ICTextViewScrollState *savedScrollStateForCurrentNote;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) ICTTTextStorage *textStorage;
@property (readonly, nonatomic) NSString *searchString;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } lastSelectedRangeForAccelerator;
@property (readonly, nonatomic) BOOL languageHasSpaces;
@property (readonly, nonatomic) long long writingDirection;
@property (readonly, nonatomic) ICNote *note;
@property (readonly, nonatomic) NSView *acceleratorHostingView;
@property (readonly, nonatomic) NSViewController *acceleratorHostingViewController;
@property (readonly, nonatomic) ICNAEventReporter *eventReporter;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)textView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionRect;
- (id)textController;
- (void)setAuthorHighlightsController:(id)a0;
- (void)acceleratorOriginNeedsUpdate;
- (void)authorHighlightsControllerDidPerformHighlightUpdates:(id)a0;
- (void)renderAuthorHighlights;
- (void)resetCollapsibleSectionAffordanceUsageData;
- (BOOL)shouldRenderAuthorHighlights;
- (long long)uniqueCollapsibleSectionAffordanceExposures;
- (long long)uniqueCollapsibleSectionAffordanceUsages;
- (void)updateTextStorage;
- (void)updateTextViewTypingAttributesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forSelectionChange:(BOOL)a1 forSettingTextStyle:(BOOL)a2;

@end
