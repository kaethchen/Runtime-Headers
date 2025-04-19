@protocol POUserIdentifierProvider, POJWKSStorageProvider;

@interface POPlatformSSOCoreListener : POAgentListener

@property (retain) id<POUserIdentifierProvider> userIdentifierProvider;
@property (retain) id<POJWKSStorageProvider> jwksStorageProvider;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initForLogin:(BOOL)a0 identifierProvider:(id)a1 jwksStroageProvider:(id)a2;

@end
