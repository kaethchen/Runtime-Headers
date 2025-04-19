@class NSNumber;

@interface MTRAttributePath : MTRClusterPath <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *attribute;

+ (id)attributePathWithEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2;
+ (id)attributePathWithEndpointId:(id)a0 clusterId:(id)a1 attributeId:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPath:(const void *)a0;
- (struct ConcreteAttributePath { unsigned short x0; BOOL x1; unsigned int x2; unsigned int x3; })_asConcretePath;
- (BOOL)isEqualToAttributePath:(id)a0;

@end
