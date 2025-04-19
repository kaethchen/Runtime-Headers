@class AMSKeychainOptions;

@interface AMSClientCertificateTask : AMSTask

@property (readonly, copy) AMSKeychainOptions *options;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id)performClientCertChainRequest;
- (id)performClientCertChainRequestWithAccount:(id)a0;

@end
