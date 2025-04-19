@interface _GKAlert : NSAlert

@property long long tag;
@property (readonly) long long cancelButtonIndex;

+ (id)alertWithMessageText:(id)a0 defaultButton:(id)a1 alternateButton:(id)a2 otherButton:(id)a3 informativeTextWithFormat:(id)a4;

- (void)dealloc;
- (void)setDelegate:(id)a0;
- (void)dismiss;
- (void)show;
- (id)initWithTitle:(id)a0 message:(id)a1 delegate:(id)a2 cancelButtonTitle:(id)a3 otherButtonTitles:(id)a4;
- (void)showInWindow:(id)a0;
- (void)_alertView:(id)a0 buttonIndex:(long long)a1;
- (void)beginDialogModalForWindow:(id)a0 modalDelegate:(id)a1 didEndSelector:(SEL)a2 contextInfo:(void *)a3;
- (void)showOnWindow:(id)a0;

@end
