@class NSImage, NSImageView;

@interface CNAutocompleteResultIconView : NSTableCellView

@property (retain, nonatomic) NSImage *image;
@property (retain, nonatomic) NSImage *selectedImage;
@property (retain, nonatomic) NSImageView *iconView;

+ (id)iconViewWithImage:(id)a0;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })fittingSize;
- (void)setBackgroundStyle:(long long)a0;
- (id)initWithImage:(id)a0 selectedImage:(id)a1 leftMargin:(double)a2 rightMargin:(double)a3;
- (void)setupConstraintsWithLeftMargin:(double)a0 rightMargin:(double)a1 imageSize:(struct CGSize { double x0; double x1; })a2;
- (void)updateIconViewForDisplayOverBackgroundWithStyle:(long long)a0;

@end
