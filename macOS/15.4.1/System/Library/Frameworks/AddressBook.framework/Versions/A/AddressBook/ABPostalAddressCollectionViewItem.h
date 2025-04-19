@class NSArray;

@interface ABPostalAddressCollectionViewItem : ABCollectionViewItem {
    NSArray *_countryMenuItems;
    unsigned long long _updateViewCallDepth;
}

+ (unsigned long long)numberOfLinesInString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)postalAddress;
- (id)_labelMenuItems;
- (void)_updateViewValue;
- (void)addressFormatChanged:(id)a0;
- (void)addressSubfieldTextDidChange:(id)a0;
- (void)datumView:(id)a0 textDidChange:(id)a1;
- (BOOL)didLineCountChangeBetweenStoredPostalAddressAndAddressSubfied:(id)a0;
- (id)editPostalAddressRowView;
- (id)editViewFocusView;
- (void)mapsButtonPressed:(id)a0;
- (id)nonEditViewFocusView;
- (id)postalAddressRowView;
- (id)storedPostalAddressComponentCorrespondingToAddressSubfield:(id)a0;
- (double)yOffsetOfEditView;
- (double)yOffsetOfValueView;

@end
