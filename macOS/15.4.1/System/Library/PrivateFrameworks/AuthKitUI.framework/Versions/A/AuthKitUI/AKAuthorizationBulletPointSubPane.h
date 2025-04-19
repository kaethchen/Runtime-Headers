@class NSImageView, NSTextField, NSView, NSImage, NSString, NSStackView;

@interface AKAuthorizationBulletPointSubPane : AKAuthorizationSubPane

@property (readonly, nonatomic) NSView *baseView;
@property (readonly, nonatomic) NSImageView *bulletImageView;
@property (readonly, nonatomic) NSStackView *messageStackView;
@property (readonly, nonatomic) NSTextField *titleLabel;
@property (readonly, nonatomic) NSTextField *messageLabel;
@property (retain, nonatomic) NSImage *image;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;

- (void).cxx_destruct;
- (id)_iconColor;
- (id)_imageViewWithImage:(id)a0;
- (id)_labelWithString:(id)a0 title:(BOOL)a1;
- (struct CGSize { double x0; double x1; })_sizeForBulletImage:(id)a0;
- (id)_verticalStackView;
- (void)addToConstraints:(id)a0 context:(id)a1;
- (id)initWithImage:(id)a0 title:(id)a1 message:(id)a2;

@end
