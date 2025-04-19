@interface RemindersUICore.TTRMComponentViewURLComponent : NSObject <NSTextViewDelegate> {
    void /* unknown type, empty encoding */ hasFocus;
    void /* unknown type, empty encoding */ urlView;
    void /* unknown type, empty encoding */ isHandlingReturnKey;
    void /* unknown type, empty encoding */ action;
}

- (id)init;
- (void).cxx_destruct;
- (void)textDidBeginEditing:(id)a0;
- (void)textDidEndEditing:(id)a0;
- (BOOL)textView:(id)a0 doCommandBySelector:(SEL)a1;
- (id)textView:(id)a0 writablePasteboardTypesForCell:(id)a1 atIndex:(long long)a2;

@end
