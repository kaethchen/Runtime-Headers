@class NSURL, NSDictionary, CABasicConstraintsExtension, CAKeyUsageExtension, CAAdditionalCertInfo, CAIdentityName, NSString, CAExtendedKeyUsageExtension, CAKeyPairAttributes, NSArray, NSData, CACertInfo, SFCSR, CASubjectAltNameExtension;

@interface SFCertificateAuthority_ivars : NSObject {
    BOOL _creatingCA;
    CAIdentityName *_caIdentityName;
    CAKeyPairAttributes *_caKeyPairAttrs;
    CACertInfo *_caCertInfo;
    CAAdditionalCertInfo *_caAdditionalCertInfo;
    CAExtendedKeyUsageExtension *_caExtendedKUE;
    CAKeyUsageExtension *_caKeyUsageExtension;
    CASubjectAltNameExtension *_caSubjAltNameExtension;
    CABasicConstraintsExtension *_caBasicConstraintsExtension;
    struct __SecIdentity { } *_chosenIssuer;
    struct cssm_x509_name { unsigned int x0; struct cssm_x509_rdn *x1; } *_issuerX509Name;
    NSData *_issuerHashPublicKey;
    struct __SecCertificate { } *_caResultingCertificate;
    struct cssm_data { unsigned long long Length; char *Data; } _resultingCertData;
    struct cssm_data { unsigned long long x0; char *x1; } *_issuerX509NameField;
    NSString *_caName;
    NSDictionary *_invite;
    id _authenticator;
    long long _clHand;
    long long _tpHand;
    SFCSR *_csr;
    NSURL *_webURL;
    struct __SecKeychain { } *_destKeychain;
    struct __SecCertificate { } *_CACert;
    NSData *_subjectKeyDigest;
    NSData *_authorityKeyDigest;
    NSArray *_crlDistributionPoints;
    char **_crlDistribPointsArray;
    int _numCRLDistribPointNames;
    struct __CE_GeneralName { int x0; int x1; struct cssm_data { unsigned long long x0; char *x1; } x2; } *_crlDistNames;
    struct __CE_CRLDistributionPoint { struct __CE_DistributionPointName *x0; int x1; unsigned char x2; struct __CE_GeneralNames *x3; } *_distPoint;
    struct __CE_DistributionPointName { int x0; union { struct __CE_GeneralNames *x0; struct cssm_x509_rdn *x1; } x1; } *_distPointName;
    struct __CE_GeneralNames { unsigned int x0; struct __CE_GeneralName *x1; } *_genNames;
}

- (void)dealloc;
- (id)init;
- (void)_releaseCEDistribPoint;
- (void)_releaseCEDistribPointName;
- (void)_releaseCRLDistPointNames;
- (void)_releaseCRLDistPointsArray;
- (void)_releaseGenNames;

@end
