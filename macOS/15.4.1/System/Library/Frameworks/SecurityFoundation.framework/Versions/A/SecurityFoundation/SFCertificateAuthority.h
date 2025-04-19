@interface SFCertificateAuthority : NSObject {
    id _reserved_SFCertificateAuthority;
}

+ (int)_createUserKeyPair:(struct __SecKey **)a0 privKey:(struct __SecKey **)a1 keychain:(struct __SecKeychain { } *)a2 algorithm:(unsigned int)a3 size:(int)a4 userName:(id)a5 accessRef:(struct __SecAccess { } *)a6 inputParms:(id)a7;
+ (id)_invitationFromContentsOfFile:(id)a0;
+ (void)_setPrintNameWithName:(id)a0 item:(struct __SecKeychainItem { } *)a1;
+ (id)certificateAuthorityWithFullPath:(id)a0;
+ (id)certificateAuthorityWithName:(id)a0;

- (void)dealloc;
- (id)init;
- (id)name;
- (id)initWithName:(id)a0;
- (struct __SecCertificate { } *)certificate;
- (id)emailAddress;
- (void)setEmailAddress:(id)a0;
- (long long)_tpHand;
- (void)_setInvitation:(id)a0;
- (void)_setupCertExtensions:(struct __CE_DataAndType { int x0; union { struct __CE_AuthorityKeyID { int x0; struct cssm_data { unsigned long long x0; char *x1; } x1; int x2; struct __CE_GeneralNames *x3; int x4; struct cssm_data { unsigned long long x0; char *x1; } x5; } x0; struct cssm_data { unsigned long long x0; char *x1; } x1; unsigned short x2; struct __CE_GeneralNames { unsigned int x0; struct __CE_GeneralName *x1; } x3; struct __CE_GeneralNames { unsigned int x0; struct __CE_GeneralName *x1; } x4; struct __CE_ExtendedKeyUsage { unsigned int x0; struct cssm_data *x1; } x5; struct __CE_BasicConstraints { int x0; int x1; unsigned int x2; } x6; struct __CE_CertPolicies { unsigned int x0; struct __CE_PolicyInformation *x1; } x7; unsigned short x8; unsigned int x9; unsigned int x10; unsigned int x11; struct __CE_CRLDistPointsSyntax { unsigned int x0; struct __CE_CRLDistributionPoint *x1; } x12; struct __CE_IssuingDistributionPoint { struct __CE_DistributionPointName *x0; int x1; int x2; int x3; int x4; int x5; unsigned char x6; int x7; int x8; } x13; struct __CE_AuthorityInfoAccess { unsigned int x0; struct __CE_AccessDescription *x1; } x14; struct __CE_QC_Statements { unsigned int x0; struct __CE_QC_Statement *x1; } x15; struct __CE_NameConstraints { struct __CE_GeneralSubtrees *x0; struct __CE_GeneralSubtrees *x1; } x16; struct __CE_PolicyMappings { unsigned int x0; struct __CE_PolicyMapping *x1; } x17; struct __CE_PolicyConstraints { int x0; unsigned int x1; int x2; unsigned int x3; } x18; unsigned int x19; struct cssm_data { unsigned long long x0; char *x1; } x20; } x1; int x2; } *)a0 numExtens:(unsigned int *)a1;
- (id)_authenticator;
- (void)_chooseIssuer;
- (struct __SecCertificate { } *)_copyCertificateFromPublicKeyHash;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)_copyPrivateKeyFromPublicKeyHash:(id)a0 inKeychainOrArray:(void *)a1;
- (int)_createCA;
- (int)_createCert:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 privKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 keychain:(struct __SecKeychain { } *)a2;
- (int)_createCertExportFileForCAWithFormat:(unsigned int)a0 pathToExportFile:(id *)a1 exportedData:(id *)a2;
- (BOOL)_createWithPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 privateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 keychain:(struct __SecKeychain { } *)a2 authenticator:(id)a3 signer:(struct __SecIdentity { } *)a4 ca:(id)a5 inputParms:(id)a6 error:(id *)a7;
- (id)_crlDistributionPoints;
- (id)_initWithNameBackCompat:(id)a0;
- (id)_lastUsedSerialNumber;
- (void)_presetToCreateCA;
- (id)_publicKeyHash;
- (struct __SecCertificate { } *)_resultingCertificate;
- (int)_selectIssuerBasedOnPublicKeyHash;
- (void)_setAuthenticator:(id)a0;
- (void)_setCACertificate:(struct __SecCertificate { } *)a0;
- (void)_setCRLDistributionPoints:(id)a0;
- (void)_setCSR:(id)a0;
- (void)_setChosenIssuer:(struct __SecIdentity { } *)a0;
- (void)_setIssuerHashOfPublicKey:(id)a0;
- (void)_setResultingCertificate:(struct __SecCertificate { } *)a0;
- (void)_setResultingCertificateData:(struct cssm_data { unsigned long long x0; char *x1; })a0;
- (void)_setSerialNumberToIssuerMappedToCAConfigFile;
- (void)_setupCRLDistPoints:(id)a0 inCEGeneralNames:(struct __CE_GeneralNames { unsigned int x0; struct __CE_GeneralName *x1; } *)a1;
- (void)_setupKeyIdentifier:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;
- (id)createSelfSignedCertificateWithPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 privateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 inputParms:(id)a2 error:(id *)a3;
- (BOOL)createWithPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 privateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 keychain:(struct __SecKeychain { } *)a2 authenticator:(id)a3 signer:(struct __SecIdentity { } *)a4 inputParms:(id)a5 error:(id *)a6;
- (id)fullPath;
- (id)initWithFullPath:(id)a0;
- (id)invitation;
- (void)setAdditionalCertificateInformation:(id)a0;
- (void)setBasicConstraintsExtension:(id)a0;
- (void)setCertificateInformation:(id)a0;
- (void)setDestinationKeychain:(struct __SecKeychain { } *)a0;
- (void)setExtendedKeyUsageExtension:(id)a0;
- (void)setFullPath:(id)a0;
- (void)setIdentityNameInfo:(id)a0;
- (void)setKeyPairAttributes:(id)a0;
- (void)setKeyUsageExtension:(id)a0;
- (void)setSubjectAltNameExtension:(id)a0;
- (void)setWebURL:(id)a0;
- (id)signedCertificateFromCSR:(id)a0 inputParms:(id)a1 error:(id *)a2;

@end
