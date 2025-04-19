@interface RemindersUICore.TTRMReminderCellNotesViewController : NSObject <NSTextFieldDelegate> {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ suggestionMenuUtils;
    void /* unknown type, empty encoding */ notesTextField;
    void /* unknown type, empty encoding */ firstResponderChangeFilter;
    void /* unknown type, empty encoding */ changeDetailCapturer;
    void /* unknown type, empty encoding */ programmaticTextUpdateCounter;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidChange:(id)a0;

@end
