@class NSString, NSView, _ASCABLEQRCodeImageView, _ASCABLEQRCodeBadgeView;

@interface _ASCABLEQRCodeView : NSView {
    NSString *_message;
    _ASCABLEQRCodeImageView *_imageView;
    NSView *_platterView;
    _ASCABLEQRCodeBadgeView *_badgeView;
}

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)viewDidChangeEffectiveAppearance;
- (id)initWithMessage:(id)a0;
- (id)_qrCodeASImage;
- (id)_qrCodeCIImage;
- (id)_qrCodeColor;
- (void)_updatePlatterBorderStyle;
- (void)_updateQRCodeImage;

@end
