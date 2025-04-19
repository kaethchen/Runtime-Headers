@class NSDate;

@interface PKTrust : NSObject {
    struct __SecTrust { } *_trustRef;
    struct __SecPolicy { } *_policyRef;
    unsigned int _trustResult;
    int _trustLevel;
    NSDate *_signingDate;
    BOOL _signingDateIsTrusted;
    BOOL _appleRootMode;
    BOOL _allowExpiredCertificates;
    BOOL _allowExpiredRoots;
}

+ (id)stringForTrustLevel:(int)a0;

- (void)dealloc;
- (BOOL)evaluateTrustReturningError:(id *)a0;
- (id)certificateChain;
- (int)trustLevel;
- (struct __SecCertificate { } *)_anchorCertificateFromEvaluation;
- (void)_enterAppleRootMode;
- (BOOL)_enterDateSignedMode;
- (BOOL)_evaluateTrustAtLevel:(int)a0 isDevelopmentSigned:(BOOL *)a1;
- (BOOL)_isTrustedAsRootCertificate:(struct __SecCertificate { } *)a0 inDomain:(unsigned int)a1;
- (BOOL)_restoreCurrentDateMode;
- (BOOL)_restoreSystemTrustMode;
- (BOOL)_setCurrentPolicyWithOID:(struct cssm_data { unsigned long long x0; char *x1; })a0;
- (id)initWithCertificates:(id)a0 usingAppleRoot:(BOOL)a1 signatureDate:(id)a2;
- (id)initWithSecTrust:(struct __SecTrust { } *)a0 usingAppleRoot:(BOOL)a1 signatureDate:(id)a2;
- (void)setAllowExpiredCertificates:(BOOL)a0;
- (void)setAllowExpiredRoots:(BOOL)a0;
- (struct __SecTrust { } *)trustRef;
- (unsigned int)trustResult;

@end
