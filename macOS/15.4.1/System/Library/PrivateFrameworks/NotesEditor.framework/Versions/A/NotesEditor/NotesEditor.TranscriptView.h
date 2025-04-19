@interface NotesEditor.TranscriptView : NSTextView {
    void /* unknown type, empty encoding */ transcriptViewController;
    void /* unknown type, empty encoding */ textFinder;
    void /* unknown type, empty encoding */ canSeekAfterMouseDown;
    void /* unknown type, empty encoding */ scrollAnimationDuration;
    void /* unknown type, empty encoding */ bottomInset;
    void /* unknown type, empty encoding */ padding;
    void /* unknown type, empty encoding */ summaryButton;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (void)mouseDown:(id)a0;
- (void)performTextFinderAction:(id)a0;
- (BOOL)validateUserInterfaceItem:(id)a0;

@end
