@protocol SiriUITextInputViewDelegate;

@interface SiriUITextInputView : NSTextView

@property (weak) id<SiriUITextInputViewDelegate> inputDelegate;

- (void).cxx_destruct;
- (void)insertNewline:(id)a0;
- (void)insertTab:(id)a0;
- (void)insertText:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)menuForEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)moveDown:(id)a0;
- (void)setAnnotations:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1;
- (void)insertBackTab:(id)a0;

@end
