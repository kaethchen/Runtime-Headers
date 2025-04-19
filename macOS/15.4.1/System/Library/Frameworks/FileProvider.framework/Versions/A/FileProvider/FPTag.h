@class NSString;

@interface FPTag : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) int color;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)localizedStandardCompare:(id)a0;
- (long long)localizedCompare:(id)a0;
- (id)initWithLabel:(id)a0 color:(int)a1;
- (BOOL)isEqualToTag:(id)a0;

@end
