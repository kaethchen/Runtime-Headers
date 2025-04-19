@class NSImageView, NSString, NSTextField, QCProgrammablePatch, NSUndoManager, NSTimer;

@interface QCProgrammablePatchView : QCSourceTextView {
    NSTextField *_statusField;
    NSImageView *_statusImage;
    NSString *_sourceType;
    QCProgrammablePatch *_targetPatch;
    NSUndoManager *_undoManager;
    NSTimer *_typingTimer;
    BOOL _disableUpdate;
    void *_unused2[3];
}

+ (void)initialize;
+ (id)_keywordsAndColorsFromXML:(id)a0;
+ (id)_keywordsFromString:(id)a0;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)redo:(id)a0;
- (void)textDidChange:(id)a0;
- (void)undo:(id)a0;
- (BOOL)validateMenuItem:(id)a0;
- (void)setStatusField:(id)a0;
- (id)statusImage;
- (void)setStatusImage:(id)a0;
- (void)_patchUpdated:(id)a0;
- (void)_setCompileResult:(id)a0;
- (void)_setUndoManager:(id)a0;
- (void)_updateSource:(id)a0;
- (void)setProgrammablePatch:(id)a0 sourceType:(id)a1;
- (id)statusField;

@end
