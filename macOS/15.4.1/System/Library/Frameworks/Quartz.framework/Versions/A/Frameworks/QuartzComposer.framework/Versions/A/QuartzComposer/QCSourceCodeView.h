@class NSImageView, NSTextField, NSTimer, QCPatch, NSPopUpButton;

@interface QCSourceCodeView : QCSourceTextView {
    QCPatch *_rootPatch;
    NSTextField *_statusField;
    NSImageView *_statusImage;
    NSPopUpButton *_functionList;
    NSTimer *_typingTimer;
    void *_unused2[5];
}

+ (id)_keywordsAndColorsFromXML:(id)a0;
+ (id)_keywordsFromString:(id)a0;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textDidChange:(id)a0;
- (void)setStatusField:(id)a0;
- (id)statusImage;
- (void)setStatusImage:(id)a0;
- (void)_finalize_Initialization;
- (void)_setCompileResult:(id)a0;
- (void)_setFunctionListValue:(id)a0;
- (void)_updateSource:(id)a0;
- (id)functionList;
- (unsigned long long)lineOfSelectedFunction;
- (id)rootPatch;
- (void)setFunctionList:(id)a0;
- (void)setRootPatch:(id)a0;
- (void)setSourceFromPatch;
- (id)statusField;

@end
