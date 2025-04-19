@interface MAThirdPartyCompatibility : NSObject

+ (BOOL)__addTrustedSigningCertificateAuthority:(id)a0;
+ (id)_thirdPartyAssetTypeStorage;
+ (BOOL)addTrustedSigningCertificateAuthority:(id)a0;
+ (BOOL)clearAllTrustedSigningCertificateAuthorities;
+ (id)compatibilityVersionForAssetType:(id)a0;
+ (id)defaultThirdPartyServerURLForAssetType:(id)a0;
+ (BOOL)isThirdPartyAssetType:(id)a0;
+ (BOOL)permitThirdPartySigningForAssetType:(id)a0 outOrganizations:(id *)a1;

@end
