@class CRKIdentityConfiguration;

@interface CRKIdentityRefFactory : NSObject

@property (readonly, copy, nonatomic) CRKIdentityConfiguration *configuration;

- (id)init;
- (void).cxx_destruct;
- (id)subject;
- (id)initWithConfiguration:(id)a0;
- (const void *)CMSHashingAlgorithmForSecAlgorithm:(unsigned int)a0;
- (void)addClientAndServerAuthEKUsToParameters:(id)a0;
- (id)certificateParametersWithCMSAlgorithm:(const void *)a0;
- (id)keyParameters;
- (struct __SecIdentity { } *)makeIdentityRefWithError:(id *)a0;
- (void)safeRelease:(void *)a0;

@end
