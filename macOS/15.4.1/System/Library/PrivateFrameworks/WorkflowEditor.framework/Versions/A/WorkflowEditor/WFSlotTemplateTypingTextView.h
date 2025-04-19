@class NSString, NSAttributedString, NSFont;
@protocol WFSlotTemplateTypingTextViewDelegate;

@interface WFSlotTemplateTypingTextView : WFAppKitAutocompleteTextView <WFSlotTemplateTextEntry>

@property (weak) id<WFSlotTemplateTypingTextViewDelegate> delegate;
@property (nonatomic) double topTextContainerInset;
@property (retain, nonatomic) NSFont *emojiOverrideFont;
@property (nonatomic) BOOL clearsZeroWhenTyping;
@property (readonly, nonatomic) NSFont *font;
@property (readonly, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedRange;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } unionRectInVisibleSelectedRange;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } documentVisibleRect;
@property (readonly) BOOL supportsAdaptiveImageGlyph;
@property (copy) NSString *contentType;

- (void).cxx_destruct;
- (void)deleteBackward:(id)a0;
- (void)copy:(id)a0;
- (void)cut:(id)a0;
- (void)drawInsertionPointInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 color:(id)a1 turnedOn:(BOOL)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (void)insertAttributedText:(id)a0;
- (void)insertBacktab:(id)a0;
- (void)insertTab:(id)a0;
- (void)insertText:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)isFlipped;
- (void)paste:(id)a0;
- (struct CGPoint { double x0; double x1; })textContainerOrigin;
- (void)wf_applyEmojiOverrideFont;
- (void)wf_replaceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAttributedText:(id)a1;

@end
