@interface NSLocalizedNumberFormatRule : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)automatic;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)_formattedString:(id)a0 withStringLocale:(id)a1 andDisplayLocale:(id)a2;

@end
