@class LNPropertyQuery, NSArray, NSNumber;

@interface LNPropertyQueryRequestType : LNQueryRequestTypeBase <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNPropertyQuery *propertyQuery;
@property (readonly, nonatomic) NSArray *sortingOptions;
@property (readonly, nonatomic) NSNumber *maximumResultCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPropertyQuery:(id)a0 sortingOptions:(id)a1 maximumResultCount:(id)a2;

@end
