@class NSImageView, NSTextField, NSProgressIndicator, NSButton;

@interface AMSNetworkDeviceTableCellView : NSTableCellView

@property (readonly) NSProgressIndicator *progressIndicator;
@property (readonly) NSImageView *indicatorImage;
@property (readonly) NSButton *deviceCheckbox;
@property (readonly) NSTextField *deviceNameLabel;
@property (readonly) NSImageView *errorImage;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
