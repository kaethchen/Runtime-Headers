@class NSString, NSArray, NSObject;
@protocol OS_xpc_object;

@interface RBSHereditaryGrant : RBSGrant

@property (readonly, copy, nonatomic) NSString *endowmentNamespace;
@property (readonly, copy, nonatomic) NSString *sourceEnvironment;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *encodedEndowment;
@property (readonly, nonatomic) NSArray *attributes;

+ (id)grantWithNamespace:(id)a0 endowment:(id)a1 attributes:(id)a2;
+ (id)grantWithNamespace:(id)a0 sourceEnvironment:(id)a1 attributes:(id)a2;
+ (id)grantWithNamespace:(id)a0 sourceEnvironment:(id)a1 endowment:(id)a2 attributes:(id)a3;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;

@end
