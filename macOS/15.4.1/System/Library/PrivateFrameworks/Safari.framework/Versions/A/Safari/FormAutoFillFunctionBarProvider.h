@interface FormAutoFillFunctionBarProvider : AutoFillFunctionBarProvider

- (void)_imageForCreditCardItem:(const void *)a0 completionHandler:(id /* block */)a1;
- (id)_imageForFormAutoFillItem:(const void *)a0;
- (id)_imageForPasswordItem:(const void *)a0;
- (BOOL)_isCredentialAutoFillItem:(const void *)a0;
- (id)_keychainImage;
- (id)_textForFormAutoFillItem:(const void *)a0;
- (id)_textForPasswordItem:(const void *)a0;
- (id)_textForSingleCreditCardDataItem:(const void *)a0;
- (BOOL)didShowAutoFillQuickTypeForItem:(const void *)a0;
- (void)imageForCompletionListItem:(const void *)a0 completionHandler:(id /* block */)a1;
- (id)textForCompletionListItem:(const void *)a0;

@end
