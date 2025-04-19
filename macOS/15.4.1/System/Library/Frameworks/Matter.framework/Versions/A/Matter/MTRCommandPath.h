@class NSNumber;

@interface MTRCommandPath : MTRClusterPath

@property (readonly, copy, nonatomic) NSNumber *command;

+ (BOOL)supportsSecureCoding;
+ (id)commandPathWithEndpointID:(id)a0 clusterID:(id)a1 commandID:(id)a2;
+ (id)commandPathWithEndpointId:(id)a0 clusterId:(id)a1 commandId:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPath:(const struct ConcreteCommandPath { unsigned short x0; BOOL x1; unsigned int x2; unsigned int x3; } *)a0;
- (BOOL)isEqualToCommandPath:(id)a0;

@end
