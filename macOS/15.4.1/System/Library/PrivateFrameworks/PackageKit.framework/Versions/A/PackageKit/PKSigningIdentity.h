@class NSString, NSArray, NSMutableArray;

@interface PKSigningIdentity : NSObject {
    struct __SecIdentity { } *_identity;
    NSMutableArray *_supportingCerts;
    NSString *_keychainSpec;
}

@property (readonly) NSString *name;
@property (readonly) NSString *keychainPath;
@property (readonly) NSArray *supportingCertificateRefs;

+ (id)commonNameForCertificate:(struct __SecCertificate { } *)a0;
+ (struct __SecKeychain { } *)_copyKeychainWithPath:(id)a0;
+ (id)_identitiesMatchingPrefix:(id)a0 policy:(struct __SecPolicy { } *)a1 fromKeychain:(id)a2;
+ (id)_validIdentitiesMatchingPrefix:(id)a0 fromKeychain:(id)a1 forCodeSigning:(BOOL)a2 didExcludeWrongIdentities:(BOOL *)a3;
+ (id)allSigningIdentitiesWithPrefix:(id)a0 fromKeychain:(id)a1;
+ (id)allSigningIdentitiesWithPrefix:(id)a0 fromKeychain:(id)a1 forCodeSigning:(BOOL)a2;
+ (id)bestSigningIdentityFromString:(id)a0 fromKeychain:(id)a1;
+ (id)bestSigningIdentityFromString:(id)a0 fromKeychain:(id)a1 error:(id *)a2;
+ (id)bestSigningIdentityFromString:(id)a0 fromKeychain:(id)a1 forCodeSigning:(BOOL)a2 error:(id *)a3;

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (struct __SecIdentity { } *)identityRef;
- (id)_initWithIdentityRef:(struct __SecIdentity { } *)a0 keychainSpec:(id)a1;
- (unsigned long long)_levelOfMatch:(id)a0;
- (id)_sha1AsString;
- (BOOL)addIntermediateCertificateWithCommonName:(id)a0;
- (BOOL)shouldUseTSAByDefault;

@end
