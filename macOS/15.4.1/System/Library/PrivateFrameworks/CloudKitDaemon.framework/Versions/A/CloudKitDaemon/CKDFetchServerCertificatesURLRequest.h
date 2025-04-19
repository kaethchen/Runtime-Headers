@class NSArray;

@interface CKDFetchServerCertificatesURLRequest : CKDURLRequest

@property (readonly, nonatomic) struct __SecPolicy { } *certificateTrustPolicy;
@property (retain) NSArray *validatedTrusts;

+ (id)certificateListServerPlist:(id)a0;
+ (struct __SecTrust { } *)createTrustEvalFromCertificateList:(id)a0 verifiedWithPolicy:(struct __SecPolicy { } *)a1;
+ (id)nearestExpirationInCertificateList:(id)a0;
+ (BOOL)serverResponseIsComplete:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)url;
- (long long)partitionType;
- (long long)serverType;
- (id)httpMethod;
- (BOOL)allowsAnonymousAccount;
- (BOOL)hasRequestBody;
- (id)initWithOperation:(id)a0 verifyWithPolicy:(struct __SecPolicy { } *)a1;
- (void)requestDidParsePlistObject:(id)a0;
- (BOOL)requiresConfiguration;
- (BOOL)requiresDeviceID;
- (BOOL)requiresTokenRegistration;

@end
