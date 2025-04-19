@class NSString, NSObject;
@protocol OS_xpc_object;

@interface RBSEndowmentGrant : RBSGrant

@property (readonly, copy, nonatomic) NSString *endowmentNamespace;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *encodedEndowment;

+ (id)grantWithNamespace:(id)a0 endowment:(id)a1;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;

@end
