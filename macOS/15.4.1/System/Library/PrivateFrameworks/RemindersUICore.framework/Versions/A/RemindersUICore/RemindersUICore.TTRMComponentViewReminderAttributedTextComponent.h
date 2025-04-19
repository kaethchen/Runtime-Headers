@interface RemindersUICore.TTRMComponentViewReminderAttributedTextComponent : NSObject <NSTextViewDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ customDisallowedTypingAttributes;
    void /* unknown type, empty encoding */ allowsNewlines;
    void /* unknown type, empty encoding */ suggestionMenuUtils;
    void /* unknown type, empty encoding */ changeDetailCapturer;
    void /* unknown type, empty encoding */ returnWasPressed;
    void /* unknown type, empty encoding */ programmaticTextUpdateCounter;
}

- (id)init;
- (void).cxx_destruct;
- (id)textView:(id)a0 menu:(id)a1 forEvent:(id)a2 atIndex:(long long)a3;
- (void)textDidBeginEditing:(id)a0;
- (void)textDidChange:(id)a0;
- (void)textDidEndEditing:(id)a0;
- (BOOL)textView:(id)a0 doCommandBySelector:(SEL)a1;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)textView:(id)a0 shouldChangeTypingAttributes:(id)a1 toAttributes:(id)a2;

@end
