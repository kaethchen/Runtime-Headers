@class NSArray;

@interface PKAccountEntityOrdering : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long context;
@property (retain, nonatomic) NSArray *ordering;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToAccountEntityOrdering:(id)a0;
- (id)initWithType:(unsigned long long)a0 dictionary:(id)a1;
- (id)orderingAsJSONString;
- (void)setOrderingFromJSONString:(id)a0;

@end
