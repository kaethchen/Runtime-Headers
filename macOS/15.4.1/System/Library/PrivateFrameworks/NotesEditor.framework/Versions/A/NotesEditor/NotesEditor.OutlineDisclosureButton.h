@interface NotesEditor.OutlineDisclosureButton : NSButton {
    void /* unknown type, empty encoding */ isCollapsed;
    void /* unknown type, empty encoding */ zoomFactor;
    void /* unknown type, empty encoding */ textParagraph;
    void /* unknown type, empty encoding */ stateChangeHandler;
}

@property (nonatomic) void /* unknown type, empty encoding */ writingDirection;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (id)accessibilityUserInputLabels;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)buttonPressedWithSender:(id)a0;

@end
