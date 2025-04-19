@class WBSHideMyEmailRecord, NSTextField;

@interface HideMyEmailAutoFillCellView : ColorInvertingTableCellView

@property (weak, nonatomic) NSTextField *hideMyEmailAddressTextField;
@property (weak, nonatomic) NSTextField *hideMyEmailWebsiteTextField;
@property (retain, nonatomic) WBSHideMyEmailRecord *record;

+ (struct CGSize { double x0; double x1; })sizeForHideMyEmailRecord:(id)a0;

- (void).cxx_destruct;
- (void)awakeFromNib;

@end
