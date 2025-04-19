@class NSImageView, NSString, NSImage, NSTextField;

@interface PXSharedLibraryLegacyDevicesFallbackTableViewCell : NSTableCellView {
    NSImageView *_imageView;
    NSTextField *_titleLabel;
    NSTextField *_messageLabel;
}

@property (class, readonly, nonatomic) double preferredHeight;

@property (retain, nonatomic) NSImage *image;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
