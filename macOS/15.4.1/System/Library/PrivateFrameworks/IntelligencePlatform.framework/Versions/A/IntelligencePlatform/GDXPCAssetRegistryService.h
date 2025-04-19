@class NSXPCInterface, NSXPCConnection;

@interface GDXPCAssetRegistryService : NSObject <GDXPCAssetRegistryServiceProtocol> {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)assetEntryResultDataForAssetId:(id)a0 inDomainId:(id)a1 remoteOptionsData:(id)a2 error:(id *)a3;
- (void)locked_establishConnection;
- (id)overrideAssetEntryForAssetId:(id)a0 inDomainId:(id)a1 overrideAssetEntryParametersData:(id)a2 error:(id *)a3;

@end
