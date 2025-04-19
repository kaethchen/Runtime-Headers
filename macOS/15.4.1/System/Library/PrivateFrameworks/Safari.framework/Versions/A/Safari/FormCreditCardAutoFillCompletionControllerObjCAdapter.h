@class WBSCreditCardData, AutoFillLocalAuthenticationManager;

@interface FormCreditCardAutoFillCompletionControllerObjCAdapter : FormAutoFillCompletionControllerObjCAdapter {
    AutoFillLocalAuthenticationManager *_autoFillLocalAuthenticationManager;
}

@property (retain, nonatomic) WBSCreditCardData *lastFilledCreditCard;

- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (long long)_biometricPolicyForCreditCardCompletionListItem:(const void *)a0;
- (id)_itemNameForAutoFillAuthorizationSheetWithItem:(const void *)a0;
- (void)_registerCreditCardAutoFillTableViewCellClasses;
- (BOOL)_shouldAuthenticateForCreditCardCompletionListItem:(const void *)a0;
- (void)didRefreshCompletionListItems:(const void *)a0;
- (id)initWithCompletionController:(void *)a0;
- (BOOL)performActionForListItem:(const void *)a0 result:(BOOL *)a1 shouldAbortCompletion:(BOOL *)a2;
- (double)widthOfCellForItem:(void *)a0;

@end
