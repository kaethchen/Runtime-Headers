@class NSImage, NSImageView, NSArray;

@interface AKAuthorizationSubPaneImage : AKAuthorizationSubPane

@property (readonly, nonatomic) NSImageView *imageView;
@property (retain, nonatomic) NSImage *image;
@property (copy, nonatomic) NSArray *imageViewConstraints;

+ (id)_imageViewWithImage:(id)a0;

- (void).cxx_destruct;
- (id)initWithImage:(id)a0;
- (void)setImage:(id)a0 animated:(BOOL)a1;
- (void)addToConstraints:(id)a0 context:(id)a1;
- (void)addToStackView:(id)a0 context:(id)a1;

@end
