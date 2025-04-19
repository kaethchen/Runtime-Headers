@class NSString;

@interface GEOComposedStringFormatStyle : NSObject <NSCopying, NSSecureCoding> {
    int _type;
    NSString *_token;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
