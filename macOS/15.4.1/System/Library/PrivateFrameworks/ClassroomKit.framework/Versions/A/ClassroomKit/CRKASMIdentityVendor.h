@class NSString, CRKASMCredentialStore;
@protocol CRKIdentity;

@interface CRKASMIdentityVendor : NSObject

@property (readonly, copy, nonatomic) NSString *userIdentifier;
@property (readonly, copy, nonatomic) NSString *commonNamePrefix;
@property (readonly, nonatomic) CRKASMCredentialStore *credentialStore;
@property (readonly, nonatomic) id<CRKIdentity> identity;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)makeIdentity;
- (id)existingIdentity;
- (id)initWithUserIdentifier:(id)a0 commonNamePrefix:(id)a1 credentialStore:(id)a2;
- (id)makeIdentityAndAddToKeychain;

@end
