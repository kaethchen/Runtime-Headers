@class NSString;

@interface IMBasePlatformLookupService : IMBaseStoreService

@property (retain, nonatomic) NSString *protocolVersion;

- (id)init;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)baseUrl;
- (void)performRequest:(id /* block */)a0;
- (id)platformAction;

@end
