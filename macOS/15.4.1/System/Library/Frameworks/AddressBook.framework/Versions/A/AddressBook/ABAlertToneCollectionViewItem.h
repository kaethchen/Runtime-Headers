@class NSString, TKTonePickerViewController;

@interface ABAlertToneCollectionViewItem : ABCollectionViewItem <TKTonePickerViewControllerDelegate>

@property (retain, nonatomic) TKTonePickerViewController *tonePickerViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_labelMenuItems;
- (id)_localizedLabel;
- (BOOL)_shouldShowAddItemButton;
- (BOOL)_shouldShowRemoveItemButton;
- (void)_updateViewValue;
- (BOOL)shouldEnableEditPopupButton;
- (BOOL)supportsClickToEdit;
- (id)toneIdentifierFromAlert:(id)a0;
- (id)toneNameForIdentifier:(id)a0;
- (void)tonePickerViewController:(id)a0 selectedToneWithIdentifier:(id)a1;

@end
