@class NSButton, NSImageView, NSTextField;

@interface RPPairedDeviceTableCellView : NSTableCellView

@property (retain, nonatomic) NSImageView *deviceImageView;
@property (retain, nonatomic) NSTextField *deviceNameTextField;
@property (retain, nonatomic) NSTextField *deviceStateTextField;
@property (retain, nonatomic) NSButton *doneButton;
@property (retain, nonatomic) NSButton *pairButton;
@property (retain, nonatomic) NSButton *removeButton;

- (void).cxx_destruct;

@end
