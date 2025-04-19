@class NSImageView, NSTextField, NSImage, NSStackView;
@protocol StartPageFullDescriptionViewItemDelegate;

@interface StartPageFullDescriptionViewItem : StartPageViewItem {
    NSStackView *_contentStackView;
    NSStackView *_textStackView;
    NSStackView *_accessoryStackView;
    NSImageView *_accessoryImageView;
    NSTextField *_accessoryLabel;
    NSImageView *_imageView;
    NSTextField *_titleLabel;
    NSTextField *_descriptionLabel;
}

@property (retain, nonatomic) NSImage *image;
@property (weak, nonatomic) id<StartPageFullDescriptionViewItemDelegate> delegate;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;

- (void).cxx_destruct;
- (void)rightMouseDown:(id)a0;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformShowMenu;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)viewDidLoad;
- (void)configureViewWithTitle:(id)a0 description:(id)a1 image:(id)a2 accessoryImage:(id)a3 accessoryLabel:(id)a4;

@end
