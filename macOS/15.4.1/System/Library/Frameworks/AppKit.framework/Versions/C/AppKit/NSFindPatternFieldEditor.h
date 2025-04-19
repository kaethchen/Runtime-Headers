@interface NSFindPatternFieldEditor : NSTextView

+ (id)findPatternFieldEditorForWindow:(id)a0;

- (BOOL)respondsToSelector:(SEL)a0;
- (id)acceptableDragTypes;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)readSelectionFromPasteboard:(id)a0 type:(id)a1;
- (id)readablePasteboardTypes;
- (void)setUsesFontPanel:(BOOL)a0;
- (BOOL)supportsAdaptiveImageGlyph;
- (BOOL)usesFontPanel;
- (id)writablePasteboardTypes;
- (BOOL)writeSelectionToPasteboard:(id)a0 type:(id)a1;

@end
