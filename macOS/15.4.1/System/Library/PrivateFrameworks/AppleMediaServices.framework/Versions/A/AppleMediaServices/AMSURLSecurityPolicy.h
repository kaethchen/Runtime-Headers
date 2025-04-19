@class NSSet;

@interface AMSURLSecurityPolicy : NSObject

@property (class, readonly) AMSURLSecurityPolicy *defaultPolicy;

@property long long trustMode;
@property (retain) NSSet *pinnedCertificates;

- (void).cxx_destruct;
- (BOOL)_evaluateExtendedValidationWithTrust:(struct __SecTrust { } *)a0 forTask:(id)a1;
- (BOOL)_evaluatePinnedCertificatesWithTrust:(struct __SecTrust { } *)a0 forTask:(id)a1;
- (BOOL)_shouldSkipValidation;
- (BOOL)evaluateTrust:(struct __SecTrust { } *)a0 forTask:(id)a1;
- (id)initWithTrustMode:(long long)a0;
- (id)initWithTrustMode:(long long)a0 pinnedCertificated:(id)a1;

@end
