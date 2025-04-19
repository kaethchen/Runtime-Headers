@class NSString, NSTextField;

@interface AddressBookAutoFillCellView : ColorInvertingTableCellView

@property (weak, nonatomic) NSTextField *promptLabel;
@property (weak, nonatomic) NSTextField *contactNameLabel;
@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSString *contactName;

+ (struct CGSize { double x0; double x1; })sizeWithPrompt:(id)a0 contactName:(id)a1;

- (void).cxx_destruct;
- (void)awakeFromNib;

@end
