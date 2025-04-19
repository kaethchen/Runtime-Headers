@class PCNativeShadowStyle, PCNativeButtonStyle, PCNativeBorderStyle, PCNativeColor;

@interface PCNativeStyle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PCNativeColor *backgroundColor;
@property (retain, nonatomic) PCNativeBorderStyle *borderStyle;
@property (retain, nonatomic) PCNativeButtonStyle *buttonStyle;
@property (retain, nonatomic) PCNativeShadowStyle *shadowStyle;
@property (retain, nonatomic) PCNativeColor *textColor;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
