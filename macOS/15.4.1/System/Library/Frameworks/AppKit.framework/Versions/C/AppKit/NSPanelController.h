@class NSString;

@interface NSPanelController : NSObject {
    id alertPanel;
    id iconView;
    id okButton;
    id renameLabel;
    id renameTextField;
    id target;
    SEL action;
    BOOL gotString;
    NSString *textFieldStringValue;
}

- (void)dealloc;
- (id)stringValue;
- (void)ok:(id)a0;
- (void)cancel:(id)a0;
- (void)_setTextFieldStringValue:(id)a0;
- (void)awakeFromNib;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidChange:(id)a0;
- (BOOL)gotString;
- (BOOL)showPanel:(id)a0 andNotify:(id)a1 with:(SEL)a2;

@end
