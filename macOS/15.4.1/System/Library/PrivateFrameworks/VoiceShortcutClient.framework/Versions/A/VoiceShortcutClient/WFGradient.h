@class WFColor;

@interface WFGradient : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WFColor *baseColor;
@property (readonly, nonatomic) WFColor *darkBaseColor;
@property (readonly, nonatomic) WFColor *accessibilityBaseColor;
@property (readonly, nonatomic) WFColor *darkAccessibilityBaseColor;
@property (readonly, nonatomic) WFColor *startColor;
@property (readonly, nonatomic) WFColor *endColor;
@property (readonly, nonatomic) struct CGGradient { } *CGGradient;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithColor:(id)a0;
- (BOOL)isDark;
- (id)initWithStartColor:(id)a0 endColor:(id)a1;
- (id)baseColorForDarkMode:(BOOL)a0 highContrast:(BOOL)a1;
- (id)initWithBaseColor:(id)a0 darkBaseColor:(id)a1 accessibilityBaseColor:(id)a2 darkAccessibilityBaseColor:(id)a3 startColor:(id)a4 endColor:(id)a5;
- (id)initWithBaseColor:(id)a0 startColor:(id)a1 endColor:(id)a2;
- (double)perceivedBrightness;

@end
