@class NSError, NSMenu, NSTextField;

@interface NSDocumentNonModalAlertViewController : NSViewController {
    NSTextField *_textField;
    NSError *_errorToDisplay;
    NSMenu *_menu;
}

@property (copy) NSError *errorToDisplay;
@property (retain) NSMenu *menu;

- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (void)awakeFromNib;

@end
