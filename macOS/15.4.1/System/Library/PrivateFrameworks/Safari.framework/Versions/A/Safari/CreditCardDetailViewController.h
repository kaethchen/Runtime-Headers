@class NSTextField, WBSCreditCardData, CreditCardDataEditor, NSString, CreditCardNumberTextField, CreditCardNumberFieldEditor, SensitiveDetailTextField, NSBox;

@interface CreditCardDetailViewController : NSViewController <NSTextFieldDelegate, NSWindowDelegate> {
    CreditCardNumberFieldEditor *_creditCardNumberFieldEditor;
}

@property (weak, nonatomic) NSTextField *titleTextField;
@property (weak, nonatomic) NSTextField *nameLabel;
@property (weak, nonatomic) NSTextField *nameTextField;
@property (weak, nonatomic) CreditCardNumberTextField *cardNumberTextField;
@property (weak, nonatomic) NSTextField *expirationTextField;
@property (weak, nonatomic) NSTextField *securityCodeLabel;
@property (weak, nonatomic) SensitiveDetailTextField *securityCodeTextField;
@property (weak, nonatomic) NSTextField *networkTextField;
@property (weak, nonatomic) NSBox *horizontalLine;
@property (weak, nonatomic) NSTextField *explanationText;
@property (readonly, nonatomic) WBSCreditCardData *creditCard;
@property (readonly, nonatomic) CreditCardDataEditor *creditCardDataEditor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)control:(id)a0 textShouldBeginEditing:(id)a1;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)hideSheet:(id)a0;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (id)windowWillReturnFieldEditor:(id)a0 toObject:(id)a1;
- (id)initWithCreditCard:(id)a0 creditCardDataEditor:(id)a1;

@end
