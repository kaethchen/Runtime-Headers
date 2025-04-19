@class NSString, FI_TButton, FI_TPopUpButton, NSStackView, NSObject, FI_TTextField, FI_TScopeBarRadioGroupView, NSLayoutConstraint;
@protocol TSearchScopeSliceControllerDelegate;

@interface FI_TSearchScopeSlice : NSNavBannerView <NSStackViewDelegate> {
    NSStackView *_stackView;
    FI_TTextField *_searchTextField;
    FI_TScopeBarRadioGroupView *_axScopeRadioGroupView;
    FI_TButton *_saveButton;
    FI_TButton *_plusMinusButton;
    FI_TPopUpButton *_scopeDropdown;
    NSLayoutConstraint *_scopeDropdownMaxWidthConstraint;
    NSLayoutConstraint *_scopeDropdownMinWidthConstraint;
    FI_TButton *_genericRadioButton;
    FI_TButton *_genericRadioButtonRetainer;
    struct TNSWeakPtr<NSObject<TSearchScopeSliceControllerDelegate>> { NSObject<TSearchScopeSliceControllerDelegate> *fWeakObject; } _weakDelegate;
}

@property (weak, nonatomic) NSObject<TSearchScopeSliceControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (void)awakeFromNib;
- (void)stackView:(id)a0 didReattachViews:(id)a1;
- (void)stackView:(id)a0 willDetachViews:(id)a1;
- (id)selectedButton;
- (unsigned long long)selectedButtonIndex;
- (id)newRadioButtonForTitle:(const void *)a0 tooltip:(const void *)a1;
- (void)chooseScopeButton:(id)a0;
- (void)plusMinusButtonPressed:(id)a0;
- (void)saveButtonPressed:(id)a0;
- (void)scopeButtonPressed:(id)a0;
- (void)scopeDropdownChanged:(id)a0;
- (void)selectButtonAtIndex:(unsigned long long)a0;
- (id)selectedButtonTitle;
- (void)setButtonTitles:(const void *)a0 andToolTips:(const void *)a1;
- (void)setPlusMinusButtonEnabled:(BOOL)a0;
- (void)setPlusMinusButtonTitle:(BOOL)a0;
- (void)setSaveButtonEnabled:(BOOL)a0;

@end
