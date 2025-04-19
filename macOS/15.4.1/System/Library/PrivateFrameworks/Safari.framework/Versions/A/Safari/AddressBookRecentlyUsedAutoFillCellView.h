@class NSString, NSTextField;

@interface AddressBookRecentlyUsedAutoFillCellView : ColorInvertingTableCellView

@property (weak) NSTextField *contactNameAndContactLabelTextField;
@property (weak) NSTextField *addressBookDataWillBeFilledTextField;
@property (copy, nonatomic) NSString *contactNameAndContactLabel;
@property (copy, nonatomic) NSString *addressBookDataWillBeFilled;

+ (struct CGSize { double x0; double x1; })sizeWithContactNameAndContactLabel:(id)a0 addressBookDataWillBeFilled:(id)a1;

- (void).cxx_destruct;
- (void)awakeFromNib;

@end
