@class CIColor, NSUUID;

@interface IFColor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct CGColor { } *cgColor;
@property (readonly) CIColor *ciColor;
@property (readonly) NSUUID *digest;

+ (struct CGColorSpace { } *)deviceRGBColorSpace;
+ (id)black;
+ (id)borderColorForAppearance:(long long)a0;
+ (struct CGColorSpace { } *)deviceGreyColorSpace;
+ (id)white;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGColor { } *)cgColor;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (id)blendColorWithFraction:(double)a0 ofColor:(id)a1;
- (id)_initWithColorStr:(id)a0 appearance:(long long)a1 contrast:(long long)a2 vibrancy:(long long)a3;
- (id)initWithCIColor:(id)a0;
- (id)initWithSystemColor:(long long)a0;
- (id)initWithSystemColor:(long long)a0 appearance:(long long)a1 contrast:(long long)a2 vibrancy:(long long)a3;

@end
