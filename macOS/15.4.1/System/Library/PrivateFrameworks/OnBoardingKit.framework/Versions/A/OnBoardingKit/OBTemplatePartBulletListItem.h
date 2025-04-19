@class NSImageView, NSTextField, NSView, NSLayoutConstraint, NSStackView, NSColor;

@interface OBTemplatePartBulletListItem : NSView

@property (retain, nonatomic) NSView *imageContainer;
@property (retain, nonatomic) NSImageView *imageView;
@property (retain, nonatomic) NSStackView *stackView;
@property (retain, nonatomic) NSTextField *titleLabel;
@property (retain, nonatomic) NSTextField *descriptionLabel;
@property (retain, nonatomic) NSStackView *textStack;
@property (retain, nonatomic) NSTextField *statusLabel;
@property BOOL showsBackground;
@property double iconWidth;
@property double iconHeight;
@property long long iconFontSize;
@property double iconTextSpacing;
@property long long stackAlignment;
@property (retain, nonatomic) NSColor *layerBackgroundColor;
@property (retain, nonatomic) NSLayoutConstraint *trailingConstraint;

- (void).cxx_destruct;
- (void)updateLayer;
- (id)imageFromSymbolName:(id)a0;
- (id)initWithTitle:(id)a0 description:(id)a1 image:(id)a2 imageTintColor:(id)a3 spacing:(long long)a4 showsBackground:(BOOL)a5;
- (id)initWithTitle:(id)a0 description:(id)a1 image:(id)a2 imageTintColor:(id)a3 spacing:(long long)a4 status:(id)a5 showsBackground:(BOOL)a6;
- (id)initWithTitle:(id)a0 description:(id)a1 symbol:(id)a2 symbolTintColor:(id)a3 spacing:(long long)a4 showsBackground:(BOOL)a5;
- (id)initWithTitle:(id)a0 description:(id)a1 symbol:(id)a2 symbolTintColor:(id)a3 spacing:(long long)a4 status:(id)a5 showsBackground:(BOOL)a6;
- (void)updateImage:(id)a0 withColor:(id)a1;
- (void)updateSymbol:(id)a0 withColor:(id)a1;

@end
