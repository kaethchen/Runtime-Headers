@interface ICSColor : NSObject <NSSecureCoding> {
    unsigned char _red;
    unsigned char _green;
    unsigned char _blue;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)colorDetailsAreEffectivelyDifferentFirstColor:(id)a0 secondColor:(id)a1 firstSymbolicName:(id)a2 secondSymbolicName:(id)a3;
+ (id)symbolicColorForLegacyRGB:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned char)red;
- (unsigned char)blue;
- (unsigned char)green;
- (id)initWithRed:(unsigned char)a0 green:(unsigned char)a1 blue:(unsigned char)a2;

@end
