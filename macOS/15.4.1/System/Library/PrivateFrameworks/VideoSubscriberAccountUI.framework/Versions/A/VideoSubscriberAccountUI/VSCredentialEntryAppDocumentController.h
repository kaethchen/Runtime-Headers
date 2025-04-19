@class NSString;

@interface VSCredentialEntryAppDocumentController : VSAppDocumentController <VSCredentialEntryViewModelDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewModel:(id)a0 buttonTappedAtIndex:(unsigned long long)a1;
- (void)viewModel:(id)a0 pickerDidSelectRow:(unsigned long long)a1;

@end
