@class SOVoiceRowCheckboxButton, NSTextField;

@interface VoiceTableCellView : NSTableCellView

@property (readonly, nonatomic) SOVoiceRowCheckboxButton *activeCheckbox;
@property (readonly, nonatomic) SOVoiceRowCheckboxButton *downloadCheckbox;
@property (readonly, nonatomic) NSTextField *downloadMessageTextField;

@end
