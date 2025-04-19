@class NSTextField, NSArray, NSTextView, NSButton, NSWindow;

@interface CKLicenseAgreementSheet : NSWindowController {
    NSButton *_agreeButton;
    NSButton *_cancelButton;
    NSTextView *_textView;
    NSTextField *_titleField;
    long long _sheetReturnCode;
}

@property (weak) NSWindow *hostWindow;
@property (copy) NSArray *productKeys;

- (id)init;
- (void).cxx_destruct;
- (void)cancel:(id)a0;
- (id)_nibName;
- (void)didEndSheet:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)_dismissPanelWithCode:(long long)a0;
- (id)_textValueKey;
- (id)_titleValueKey;
- (void)agree:(id)a0;
- (void)displaySheetWithTitle:(id)a0 content:(id)a1 onWindow:(id)a2 replyBlock:(id /* block */)a3;
- (id)initWithUpdateProductKeys:(id)a0;
- (BOOL)userAgreedToAllAgreementsWithWindowForSheet:(id)a0;

@end
