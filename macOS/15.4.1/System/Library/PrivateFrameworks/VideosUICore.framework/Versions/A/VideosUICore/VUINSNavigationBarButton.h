@class NSButton, NSString, NSVisualEffectView;

@interface VUINSNavigationBarButton : NSControl <VUIViewScrollPercentageUpdateProtocol>

@property (retain, nonatomic) NSVisualEffectView *backdropView;
@property (retain, nonatomic) NSButton *backingButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)standardBackButton;

- (void).cxx_destruct;
- (void)setTarget:(id)a0;
- (void)setAction:(SEL)a0;
- (void)layout;
- (struct CGSize { double x0; double x1; })fittingSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isFlipped;
- (void)setScrolledNonUberPercentage:(double)a0;

@end
