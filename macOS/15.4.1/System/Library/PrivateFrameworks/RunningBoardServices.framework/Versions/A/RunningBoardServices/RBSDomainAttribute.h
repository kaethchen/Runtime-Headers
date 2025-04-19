@class NSString;

@interface RBSDomainAttribute : RBSAttribute

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *sourceEnvironment;
@property (readonly, copy, nonatomic) NSString *fullyQualifiedName;

+ (id)attributeWithDomain:(id)a0 name:(id)a1;
+ (id)attributeWithDomain:(id)a0 name:(id)a1 sourceEnvironment:(id)a2;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;

@end
