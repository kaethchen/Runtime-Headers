@interface AddressBookAutoFillFunctionBarProvider : AutoFillFunctionBarProvider

- (BOOL)didShowAutoFillQuickTypeForItem:(const void *)a0;
- (void)imageForCompletionListItem:(const void *)a0 completionHandler:(id /* block */)a1;
- (id)textForCompletionListItem:(const void *)a0;

@end
