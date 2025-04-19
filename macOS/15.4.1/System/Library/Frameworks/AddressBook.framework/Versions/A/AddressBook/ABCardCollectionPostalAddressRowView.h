@class NSNumber, CNPostalAddress, NSStackView;

@interface ABCardCollectionPostalAddressRowView : ABCardCollectionRowView

@property (retain, nonatomic) NSNumber *cachedIntrinsicHeight;
@property (retain, nonatomic) CNPostalAddress *postalAddress;
@property (retain, nonatomic) NSStackView *addressFieldsContainer;
@property (readonly, nonatomic) BOOL isEditing;

- (void).cxx_destruct;
- (BOOL)hasValue;
- (void)controlTextDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)makeTouchBar;
- (id)updateKeyViewLoop;
- (void)focus;
- (void)highlightSearchTerms:(id)a0;
- (id)firstTextField;
- (void)updateValueView;
- (id)calculatedHeightGivenIntrinsicHeight:(double)a0;
- (void)didInsertIntoCollectionView:(id)a0;
- (void)invalidatePostalAddressRowLayout;
- (BOOL)isEmptyAndNotFirstResponder;
- (void)processControlTextDidChange:(id)a0;
- (void)rebuildAddressEntryFields;
- (void)setAddressFieldsEnabled:(BOOL)a0;
- (void)setValueSelectable:(BOOL)a0;
- (void)textFieldWillBecomeFirstResponder:(id)a0;
- (void)textFieldWillResignFirstResponder:(id)a0;
- (id)valueView;

@end
