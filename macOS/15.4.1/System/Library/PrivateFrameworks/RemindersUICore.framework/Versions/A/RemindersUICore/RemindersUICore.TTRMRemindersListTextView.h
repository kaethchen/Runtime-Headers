@class NSUndoManager;

@interface RemindersUICore.TTRMRemindersListTextView : TTRMTextView_rdar87778381 {
    void /* unknown type, empty encoding */ justBecameFirstResponder;
}

@property (nonatomic, readonly) NSUndoManager *undoManager;
@property (nonatomic) BOOL drawsBackground;
@property (nonatomic) BOOL usesFontPanel;
@property (nonatomic) BOOL supportsAdaptiveImageGlyph;

- (id)initWithCoder:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)copy:(id)a0;
- (void)keyDown:(id)a0;
- (id)makeTouchBar;
- (void)mouseDown:(id)a0;
- (void)paste:(id)a0;
- (id)preferredPasteboardTypeFromArray:(id)a0 restrictedToTypesFromArray:(id)a1;
- (BOOL)resignFirstResponder;
- (id)initWithFrame_rdar87778381:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
