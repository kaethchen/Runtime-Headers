@interface SFCertificateTrust : NSObject {
    id _reserved_SFCertificateTrust;
}

+ (id)subjectOrgName:(struct __SecCertificate { } *)a0;
+ (BOOL)isSMIMEPolicy:(struct __SecPolicy { } *)a0;
+ (BOOL)isSSLPolicy:(struct __SecPolicy { } *)a0;
+ (id)issuerOrgName:(struct __SecCertificate { } *)a0;
+ (id)issuerSummaryName:(struct __SecCertificate { } *)a0;
+ (id)nameFromCertificate:(struct __SecCertificate { } *)a0 fieldName:(void *)a1 subFieldName:(void *)a2;
+ (id)sslPolicyNameForTrust:(struct __SecTrust { } *)a0;
+ (id)subjectLocationName:(struct __SecCertificate { } *)a0;
+ (id)subjectSummaryName:(struct __SecCertificate { } *)a0;
+ (BOOL)trustStatementsEnabled;

- (void)dealloc;
- (id)init;
- (void)saveTrustValues;
- (void)saveTrustValuesInDomain:(unsigned int)a0;
- (id)certificateData;
- (id)dictionaryExists:(id)a0 policy:(struct __SecPolicy { } *)a1 policyString:(id)a2 allowedError:(id)a3;
- (id)initWithCertificateData:(id)a0;
- (void)setCertificateData:(id)a0;

@end
