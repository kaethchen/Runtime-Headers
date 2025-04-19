@interface _TtC7SwiftUIP33_7B5508BFB2B0CAF1E28E206F2014E66B23SheetPresentationWindow : NSWindow {
    void /* unknown type, empty encoding */ pendingSheetParent;
    void /* unknown type, empty encoding */ behavior;
    void /* unknown type, empty encoding */ presentationID;
    void /* unknown type, empty encoding */ onDismiss;
    void /* unknown type, empty encoding */ sheetDelegate;
    void /* unknown type, empty encoding */ handleEscapeKey;
}

@property (nonatomic, readonly) unsigned long long _automaticApplicationTerminationBehaviorWhenModal;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_dismissModalForTerminate;
- (void)endSheet:(id)a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)parentWindowSizeChanged:(id)a0;

@end
