@class NSString, NSImageView, NSTextField;

@interface SubmenuCommandAutoFillCellView : ColorInvertingTableCellView

@property (weak) NSTextField *titleTextField;
@property (weak) NSImageView *chevronImageView;
@property (copy, nonatomic) NSString *titleText;

+ (struct CGSize { double x0; double x1; })sizeForTitleText:(id)a0;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)_chevronImageWithColor:(id)a0;
- (void)updateImageViewsWhenTextFieldsAreSetToDefaultColor;
- (void)updateImageViewsWhenTextFieldsAreSetToWhite;

@end
