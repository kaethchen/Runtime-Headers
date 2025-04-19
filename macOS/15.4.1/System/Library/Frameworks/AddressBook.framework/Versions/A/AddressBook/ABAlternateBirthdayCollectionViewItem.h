@interface ABAlternateBirthdayCollectionViewItem : ABDateCollectionViewItem

+ (void)markCalendarMenuItemAsSelected:(id)a0;
+ (void)markCalendarMenuItemAsNotSelected:(id)a0;

- (void)setLabel:(id)a0;
- (void)menuNeedsUpdate:(id)a0;
- (id)placeholderString;
- (id)_labelMenuItems;
- (id)_localizedLabel;
- (void)_updateViewLabel;
- (BOOL)_validateLabelMenuItem:(id)a0;
- (BOOL)allowsLabelCustomization;
- (id)collectionViewAction;
- (id)dateComponentsValueTransformer;
- (void)datumView:(id)a0 textDidChange:(id)a1;
- (void)labelChanged:(id)a0;
- (id)labelForPopup;
- (id)labelItemWithTitle:(id)a0 calendarIdentifier:(id)a1;
- (void)takeValueFromGregorianBirthday;

@end
