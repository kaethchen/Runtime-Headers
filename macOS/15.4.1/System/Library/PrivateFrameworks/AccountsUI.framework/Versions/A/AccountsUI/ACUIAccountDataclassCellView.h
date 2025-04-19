@class NSButton, NSProgressIndicator;

@interface ACUIAccountDataclassCellView : NSTableCellView

@property (retain) NSButton *checkbox;
@property (retain) NSProgressIndicator *spinner;
@property BOOL checkboxChecked;

- (void).cxx_destruct;
- (void)setObjectValue:(id)a0;
- (void)checkboxAction:(id)a0;
- (void)didClickOptionsButton:(id)a0;

@end
