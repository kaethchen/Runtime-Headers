@class SOSRLanguageRowCheckboxButton, NSPopUpButton, NSTextField;

@interface SOSRLanguageTableCellView : NSTableCellView

@property (readonly, nonatomic) SOSRLanguageRowCheckboxButton *activeCheckbox;
@property (readonly, nonatomic) NSTextField *downloadMessageTextField;
@property (readonly, nonatomic) NSPopUpButton *downloadVariantPopUpButton;

@end
