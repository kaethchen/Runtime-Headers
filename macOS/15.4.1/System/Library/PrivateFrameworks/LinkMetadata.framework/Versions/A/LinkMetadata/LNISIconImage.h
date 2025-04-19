@class NSString;

@interface LNISIconImage : LNImage

@property (readonly, nonatomic) long long iconType;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAppBundleIdentifier:(id)a0;
- (id)initWithUTType:(id)a0;
- (id)initWithIconType:(long long)a0 identifier:(id)a1;
- (id)proxiedImageCopy;

@end
