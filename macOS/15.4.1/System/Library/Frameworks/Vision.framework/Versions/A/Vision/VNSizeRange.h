@interface VNSizeRange : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long minimumDimension;
@property (readonly, nonatomic) unsigned long long maximumDimension;
@property (readonly, nonatomic) unsigned long long idealDimension;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMinimumDimension:(unsigned long long)a0 maximumDimension:(unsigned long long)a1 idealDimension:(unsigned long long)a2;
- (BOOL)isAllowedDimension:(unsigned long long)a0;

@end
