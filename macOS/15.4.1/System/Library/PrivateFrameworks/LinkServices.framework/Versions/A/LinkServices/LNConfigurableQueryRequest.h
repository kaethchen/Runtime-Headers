@class LNQueryRequestTargetBase, NSSet, LNQueryRequestOptions, LNQueryRequestTypeBase;

@interface LNConfigurableQueryRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly, nonatomic) NSSet *xpcClasses;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNQueryRequestTypeBase *queryType;
@property (readonly, nonatomic) LNQueryRequestTargetBase *target;
@property (readonly, nonatomic) LNQueryRequestOptions *options;

+ (id)targetTypes;
+ (id)queryTypes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithQueryType:(id)a0 target:(id)a1 options:(id)a2;

@end
