@class NSString, NSColor, SYDocumentSender, NSVisualEffectView, NSImage, FI_TImageView, FI_TTextField, FI_TRoundImageView, FI_TAllowsVibrancyView;

@interface FI_TReturnToSenderPillView : NSControl {
    FI_TRoundImageView *_imageView;
    FI_TTextField *_textLabel;
    FI_TImageView *_chevronView;
    NSVisualEffectView *_blurView;
    FI_TAllowsVibrancyView *_opaqueBackgroundView;
    BOOL _shouldDrawBackgroundBlur;
    struct unique_function<void ()> { struct unique_ptr<fstd::callable_details::callable_holder_base<void>, std::default_delete<fstd::callable_details::callable_holder_base<void>>> { struct __compressed_pair<fstd::callable_details::callable_holder_base<void> *, std::default_delete<fstd::callable_details::callable_holder_base<void>>> { void *__value_; } __ptr_; } fCallableHolder; } _configureWhenAddedToWindowFunctor;
}

@property (readonly, nonatomic) NSColor *preferredBackgroundColor;
@property (readonly, nonatomic) SYDocumentSender *sender;
@property (copy, nonatomic) NSImage *image;
@property (copy, nonatomic) NSString *senderName;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)titleFont;
- (void)updateLayer;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (id)attributedStringForSenderName:(struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })a0;
- (void)configureWithSender:(id)a0;
- (void)setUpBackgroundViews;
- (void)setUpViews;
- (id)titleFontStyle;
- (id)titleNameFont;

@end
