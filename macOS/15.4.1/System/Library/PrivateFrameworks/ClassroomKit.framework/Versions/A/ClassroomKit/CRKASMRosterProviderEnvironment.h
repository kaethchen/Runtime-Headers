@class CRKASMRosterProviderConfiguration, CRKASMCertificateVendor, CRKASMUserFactory;

@interface CRKASMRosterProviderEnvironment : NSObject

@property (readonly, nonatomic) CRKASMRosterProviderConfiguration *configuration;
@property (readonly, nonatomic) CRKASMCertificateVendor *certificateVendor;
@property (readonly, nonatomic) CRKASMUserFactory *userFactory;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)identityVendorForUserIdentifier:(id)a0;
- (id)initWithConfiguration:(id)a0 certificateVendor:(id)a1 userFactory:(id)a2;

@end
