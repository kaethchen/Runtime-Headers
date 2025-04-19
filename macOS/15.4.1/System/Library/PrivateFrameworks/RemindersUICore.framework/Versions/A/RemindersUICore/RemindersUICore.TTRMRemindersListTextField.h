@interface RemindersUICore.TTRMRemindersListTextField : NSTextField {
    void /* unknown type, empty encoding */ hasFocus;
    void /* unknown type, empty encoding */ useNextResponderUndoManagerForTextView;
}

@property (class, nonatomic) Class cellClass;

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (id)initWithCoder:(id)a0;
- (BOOL)abortEditing;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetCursorRects;
- (void)textDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;

@end
