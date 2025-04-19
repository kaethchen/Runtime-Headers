@class NSImageView, NSTextField, AALocalContactInfo, AAInheritanceContactController, NSButton, ACAccount;

@interface AOSUIAccountContactsAccessKeyViewController : NSViewController {
    AAInheritanceContactController *_inheritanceContactController;
    AALocalContactInfo *_contactInfo;
    ACAccount *_appleAccount;
}

@property (weak) NSTextField *descriptionContainerTitle;
@property (weak) NSTextField *descriptionContainerSubTitle;
@property (weak) NSImageView *accessKeyImageView;
@property (weak) NSTextField *accessKeyLabel;
@property (weak) NSButton *accessKeyPrintButton;
@property (weak) NSButton *accessKeyCopyButton;
@property (weak) NSButton *doneButton;

- (void).cxx_destruct;
- (id)nibName;
- (id)nibBundle;
- (void)viewDidLoad;
- (void)doneButtonPressed:(id)a0;
- (void)accessKeyCopyButtonPressed:(id)a0;
- (void)accessKeyPrintButtonPressed:(id)a0;
- (id)initWithAppleAccount:(id)a0 localContactInfo:(id)a1;
- (void)setupStrings;

@end
