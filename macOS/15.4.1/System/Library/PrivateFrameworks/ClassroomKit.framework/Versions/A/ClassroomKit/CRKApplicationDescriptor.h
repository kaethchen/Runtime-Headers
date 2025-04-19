@class NSString;

@interface CRKApplicationDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL includeIcon;
@property (readonly, nonatomic) BOOL includeBadgeIcon;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToApplicationDescriptor:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 includeIcon:(BOOL)a1 includeBadgeIcon:(BOOL)a2;

@end
