@class NSString, NSTextField;

@interface PasswordGenerationAssistanceAutoFillCellView : ColorInvertingTableCellView

@property (weak, nonatomic) NSTextField *passwordSuggestionLabel;
@property (copy, nonatomic) NSString *passwordSuggestion;

+ (struct CGSize { double x0; double x1; })sizeWithPasswordSuggestion:(id)a0;

- (void).cxx_destruct;
- (void)awakeFromNib;

@end
