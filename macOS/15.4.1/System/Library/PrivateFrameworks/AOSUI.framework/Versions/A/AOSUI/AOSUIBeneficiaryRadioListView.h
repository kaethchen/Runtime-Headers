@class NSStackView, NSButton, AAOBInheritanceShareAccessKeyOptionsModel;
@protocol AOSUIBeneficiaryRadioListViewSelectorDelegate;

@interface AOSUIBeneficiaryRadioListView : NSView

@property (retain, nonatomic) NSStackView *stackView;
@property (retain, nonatomic) NSStackView *verticalStackView;
@property (retain, nonatomic) NSButton *messageRadioButton;
@property (retain, nonatomic) NSButton *printRadioButton;
@property (retain, nonatomic) AAOBInheritanceShareAccessKeyOptionsModel *model;
@property long long stackAlignment;
@property unsigned long long currentSelection;
@property (weak, nonatomic) id<AOSUIBeneficiaryRadioListViewSelectorDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithModel:(id)a0;
- (void)_addMessagesSharingOption;
- (void)_addPrintSharingOption;
- (id)_descriptionAtIndex:(unsigned long long)a0;
- (id)_imageAtIndex:(unsigned long long)a0;
- (void)_informDelegateOfSelection;
- (void)_setupVerticalStackView;
- (id)_titleAtIndex:(unsigned long long)a0;
- (void)addOptionsWithShareOptions:(id)a0;
- (id)addRowWithTitle:(id)a0 description:(id)a1 image:(id)a2 radioButton:(id)a3;
- (void)radioClicked:(id)a0;

@end
