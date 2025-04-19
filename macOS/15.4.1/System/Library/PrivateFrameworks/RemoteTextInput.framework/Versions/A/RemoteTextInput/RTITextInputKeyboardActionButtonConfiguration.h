@class NSData, NSString, RTIColor;

@interface RTITextInputKeyboardActionButtonConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *imageData;
@property (copy, nonatomic) RTIColor *backgroundColor;
@property (copy, nonatomic) NSString *accessibilityTitle;
@property (nonatomic) BOOL isEnabled;

+ (id)actionButtonWithSystemImageData:(id)a0 backgroundColor:(id)a1 accessibilityTitle:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initButtonWith:(id)a0 backgroundColor:(id)a1 accessibilityTitle:(id)a2 isEnabled:(BOOL)a3;

@end
