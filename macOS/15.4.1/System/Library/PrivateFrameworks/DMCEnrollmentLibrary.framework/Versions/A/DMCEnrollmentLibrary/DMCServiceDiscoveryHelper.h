@interface DMCServiceDiscoveryHelper : NSObject

- (id)_fallbackServer;
- (void)_checkForESSOWithMethod:(unsigned long long)a0 authParams:(id)a1 httpResponse:(id)a2 completionHandler:(id /* block */)a3;
- (id)_defaultServiceDiscoveryQueryItemsWithUserIdentifier:(id)a0;
- (void)_discoverAppleServerWithUserIdentifier:(id)a0 anchorCertificateRefs:(id)a1 completionHandler:(id /* block */)a2;
- (void)_discoverServerURLForDomain:(id)a0 port:(id)a1 userIdentifier:(id)a2 anchorCertificateRefs:(id)a3 completionHandler:(id /* block */)a4;
- (void)_discoverServerURLForUserIdentifier:(id)a0 anchorCertificateRefs:(id)a1 completionHandler:(id /* block */)a2;
- (void)_fetchESSODictionaryFromURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_serversFromWellKnownURL:(id)a0 anchorCertificateRefs:(id)a1 completionHandler:(id /* block */)a2;
- (void)determineEnrollmentMethodWithServiceURL:(id)a0 enrollmentType:(unsigned long long)a1 machineInfo:(id)a2 anchorCertificateRefs:(id)a3 completionHandler:(id /* block */)a4;
- (void)discoverEnrollmentMethodWithServiceURL:(id)a0 enrollmentType:(unsigned long long)a1 machineInfo:(id)a2 anchorCertificateRefs:(id)a3 completionHandler:(id /* block */)a4;
- (void)discoverServerForUserIdentifier:(id)a0 anchorCertificateRefs:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchEnrollmentProfileWithServiceURL:(id)a0 authToken:(id)a1 machineInfo:(id)a2 anchorCertificateRefs:(id)a3 completionHandler:(id /* block */)a4;
- (void)fetchEnrollmentProfileWithServiceURL:(id)a0 authTokens:(id)a1 enrollmentMethod:(unsigned long long)a2 machineInfo:(id)a3 anchorCertificateRefs:(id)a4 completionHandler:(id /* block */)a5;
- (void)fetchEnrollmentProfileWithServiceURL:(id)a0 username:(id)a1 password:(id)a2 authTokens:(id)a3 enrollmentMethod:(unsigned long long)a4 machineInfo:(id)a5 anchorCertificateRefs:(id)a6 completionHandler:(id /* block */)a7;

@end
