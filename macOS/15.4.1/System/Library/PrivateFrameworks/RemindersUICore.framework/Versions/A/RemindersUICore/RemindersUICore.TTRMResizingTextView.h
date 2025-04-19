@interface RemindersUICore.TTRMResizingTextView : NSTextView {
    void /* unknown type, empty encoding */ shouldAllowVibrancy;
    void /* unknown type, empty encoding */ hasFocus;
    void /* unknown type, empty encoding */ bottomLayoutConstraint;
    void /* unknown type, empty encoding */ superViewHeightConstraint;
    void /* unknown type, empty encoding */ trailingLayoutConstraint;
}

@property (nonatomic) void /* unknown type, empty encoding */ maxLinesBeforeScroll;
@property (nonatomic) void /* unknown type, empty encoding */ removesPastedNewlines;
@property (nonatomic) void /* unknown type, empty encoding */ canChangeLayoutOrientation;
@property (nonatomic, readonly) double firstBaselineOffsetFromTop;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic, readonly) BOOL allowsVibrancy;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, retain) void /* unknown type, empty encoding */ placeholderAttributedString;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)didChangeText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (void)paste:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (void)viewDidMoveToSuperview;

@end
