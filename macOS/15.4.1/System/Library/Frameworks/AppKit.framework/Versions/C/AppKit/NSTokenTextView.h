@interface NSTokenTextView : NSTextView

+ (id)tokenTextViewForWindow:(id)a0;
+ (id)trackingTokenTextView:(BOOL)a0;

- (id)initWithCoder:(id)a0;
- (void)setDelegate:(id)a0;
- (void)rightMouseDown:(id)a0;
- (BOOL)_characterAtIndex:(unsigned long long)a0 shouldTerminateString:(id)a1;
- (void)_detachFieldEditorFromWindow:(id)a0;
- (id)_textRangeWithoutTokenAttachmentsInTextRange:(id)a0;
- (id)_tokenAttachmentForPoint:(struct CGPoint { double x0; double x1; })a0 charIndex:(out unsigned long long *)a1 glyphIndex:(out unsigned long long *)a2 drawingRect:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (id)acceptableDragTypes;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)draggingEnded:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)insertNewline:(id)a0;
- (void)insertText:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)mouseDown:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForUserCompletion;
- (BOOL)readSelectionFromPasteboard:(id)a0 type:(id)a1;
- (id)readablePasteboardTypes;
- (id)renderableTextRangeForSelectionsInTextRange:(id)a0;
- (id)tokenizingCharacterSet;
- (void)viewWillMoveToWindow:(id)a0;
- (id)writablePasteboardTypes;
- (BOOL)writeSelectionToPasteboard:(id)a0 type:(id)a1;

@end
