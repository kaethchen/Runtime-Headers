@class ABCollectionRowViewFactory, IPPronounPickerButtonController;

@interface ABAddressingGrammarCollectionViewItem : ABCollectionViewItem <IPPronounPickerButtonControllerDelegate>

@property (retain, nonatomic) ABCollectionRowViewFactory *rowViewFactory;
@property (retain, nonatomic) IPPronounPickerButtonController *pronounPickerController;

- (void).cxx_destruct;
- (void)pronounPickerButtonController:(id)a0 termOfAddressDidChange:(id)a1;
- (id)_localizedLabel;
- (void)_updateViewValue;
- (BOOL)hasTransformedValue;
- (BOOL)shouldEnableEditPopupButton;
- (BOOL)shouldShowLanguageLabel;
- (BOOL)supportsClickToEdit;
- (void)updateValueViewToTextField;

@end
