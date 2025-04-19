@class NSString, HKProxyProvider;

@interface HKDiagnosticStore : NSObject <_HKXPCExportable, HKDiagnosticStoreClient> {
    HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)a0;
- (void)fetchDiagnosticsForKeys:(id)a0 completion:(id /* block */)a1;
- (void)fetchPragma:(long long)a0 completion:(id /* block */)a1;
- (id)fetchSQLPragma:(long long)a0 error:(id *)a1;
- (void)fetchURLForAnalyticsFileWithName:(id)a0 completion:(id /* block */)a1;

@end
