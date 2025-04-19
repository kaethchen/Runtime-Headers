@class NSImageView, NSString, NSImage, NSTextField;

@interface PXSharedLibraryRulesTableViewCell : NSTableCellView {
    NSImageView *_imageView;
    NSTextField *_titleLabel;
    NSTextField *_subtitleLabel;
    NSTextField *_detailLabel;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *detail;
@property (retain, nonatomic) NSImage *image;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateSubtitleAndDetailLabelLayouts;

@end
