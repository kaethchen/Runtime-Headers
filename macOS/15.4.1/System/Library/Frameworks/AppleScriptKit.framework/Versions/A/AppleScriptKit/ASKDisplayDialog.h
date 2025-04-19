@class NSTimer;

@interface ASKDisplayDialog : NSObject {
    id alternateButton;
    id answerTextField;
    id defaultButton;
    id iconImageView;
    id otherButton;
    id titleTextField;
    id _modalDelegate;
    SEL _endSelector;
    void *_contextInfo;
    id _buttonReturned;
    BOOL _hasTitle;
    BOOL _hasAnswer;
    BOOL _hasIcon;
    BOOL _hasGivingUp;
    BOOL _gaveUp;
    long long _giveUpAfter;
    NSTimer *_timer;
}

+ (id)displayDialog;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)runModal;
- (void)buttonPressed:(id)a0;
- (id)panel;
- (void)setContextInfo:(void *)a0;
- (void *)contextInfo;
- (void)setModalDelegate:(id)a0;
- (id)endSheet;
- (void)setEndSelector:(SEL)a0;
- (void)beginSheetForWindow:(id)a0 modalDelegate:(id)a1 didEndSelector:(SEL)a2 contextInfo:(void *)a3;
- (id)buttonReturned;
- (SEL)endSelector;
- (BOOL)gaveUp;
- (void)giveUpTimer:(id)a0;
- (id)modalDelegate;
- (void)setupButton:(id)a0 withTitle:(id)a1 defaultTitle:(id)a2 cancelString:(id)a3;
- (void)setupForText:(id)a0 buttons:(id)a1 defaultButton:(id)a2 defaultAnswer:(id)a3 givingUpAfter:(id)a4 withIcon:(id)a5;
- (id)textReturned;

@end
