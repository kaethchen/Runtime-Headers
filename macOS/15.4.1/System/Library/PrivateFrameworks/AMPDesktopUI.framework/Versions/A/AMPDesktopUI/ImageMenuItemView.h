@class NSImageView, NSTextField, NSString, NSImage, NSLayoutConstraint;

@interface ImageMenuItemView : NSView

@property (retain, nonatomic) NSImageView *markLabel;
@property (retain, nonatomic) NSTextField *titleLabel;
@property (retain, nonatomic) NSTextField *subtitleLabel;
@property (retain, nonatomic) NSImageView *imageView;
@property (weak, nonatomic) NSLayoutConstraint *imageAspectConstraint;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL marked;
@property (copy, nonatomic) NSImage *image;

- (id)init;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupLayout;

@end
