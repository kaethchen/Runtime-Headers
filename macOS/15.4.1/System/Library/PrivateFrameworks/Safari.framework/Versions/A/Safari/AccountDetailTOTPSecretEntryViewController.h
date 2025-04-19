@class NSTextField, WBSSavedAccount, NSString, NSButton;
@protocol AccountDetailTOTPSecretEntryViewControllerDelegate;

@interface AccountDetailTOTPSecretEntryViewController : NSViewController <NSControlTextEditingDelegate> {
    BOOL _isDismissing;
}

@property (weak, nonatomic) NSTextField *secretField;
@property (weak, nonatomic) NSButton *addButton;
@property (weak, nonatomic) NSTextField *explanatoryTextField;
@property (retain, nonatomic) WBSSavedAccount *savedAccount;
@property (weak, nonatomic) id<AccountDetailTOTPSecretEntryViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidChange:(id)a0;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)_addButtonClicked:(id)a0;
- (void)_cancelButtonClicked:(id)a0;
- (BOOL)_shouldEnableAddButton;

@end
