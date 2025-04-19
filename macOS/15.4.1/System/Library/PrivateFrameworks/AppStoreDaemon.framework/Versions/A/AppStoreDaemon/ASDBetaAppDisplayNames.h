@class NSDictionary, NSString;

@interface ASDBetaAppDisplayNames : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSDictionary *localizedNames;
@property (copy) NSString *primaryLocale;

+ (id)displayNameWithLocalizedNames:(id)a0 andPrimaryLocale:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
