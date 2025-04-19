@class NSString, NSTextField;

@interface SingleCreditCardDataAutoFillCellView : ColorInvertingTableCellView

@property (weak) NSTextField *singleCreditCardDataDisplayTextField;
@property (weak) NSTextField *singleCreditCardDataHeaderTextField;
@property (copy, nonatomic) NSString *displayText;
@property (copy, nonatomic) NSString *headerText;

+ (struct CGSize { double x0; double x1; })sizeForDisplayText:(id)a0 headerText:(id)a1;

- (void).cxx_destruct;
- (void)awakeFromNib;

@end
