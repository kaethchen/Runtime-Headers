@class NSString, ICNote, ICTK2TextLayoutManagerDelegate, ICTK2TextController, ICTextContentStorageDelegate, ICOutlineRenderer;

@interface ICTK2MacTextView : ICMacTextView <NSTextViewportLayoutObserver>

@property (retain, nonatomic) ICTK2TextLayoutManagerDelegate *textLayoutManagerDelegate;
@property (retain, nonatomic) ICTextContentStorageDelegate *textContentStorageDelegate;
@property (retain, nonatomic) ICTK2TextController *tk2TextController;
@property (retain, nonatomic) ICOutlineRenderer *outlineRenderer;
@property (nonatomic) long long hoveredCharacterIndex;
@property (nonatomic) BOOL isHoveringOutlineDisclosureButton;
@property (retain, nonatomic) ICNote *note;
@property (copy) id /* block */ renderingAttributesProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)swizzleTextViewportElementHitTest;

- (id)init;
- (void).cxx_destruct;
- (id)accessibilityAttributedStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)accessibilityCustomActions;
- (id)accessibilityValue;
- (void)cursorUpdate:(id)a0;
- (void)flagsChanged:(id)a0;
- (id)layoutManager;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)scrollWheel:(id)a0;
- (void)textViewportLayoutControllerDidLayout:(id)a0;
- (void)textViewportLayoutController:(id)a0 didLayoutTextViewportElement:(id)a1;
- (id)attachmentViewDelegate;
- (void)icaxAddContainsParagraphsAttributesToAttributedString:(id)a0 atRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithNote:(id)a0 size:(struct CGSize { double x0; double x1; })a1 insideSystemPaper:(BOOL)a2 linkDelegate:(id)a3 insideSiriSnippet:(BOOL)a4;
- (void)removeFromTextStorage;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withHeightPercentageAdjustment:(double)a1;
- (void)setAttachmentViewDelegate:(id)a0;
- (void)setCursorForOutlineDisclosure:(id)a0;
- (void)setupTextViewLayout;

@end
