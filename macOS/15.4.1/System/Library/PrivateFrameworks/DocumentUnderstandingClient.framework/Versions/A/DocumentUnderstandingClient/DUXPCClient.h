@class DUXPCClientHelpers;

@interface DUXPCClient : NSObject <DUDocumentHarvestingProtocol> {
    DUXPCClientHelpers *_clientHelpers;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)foundInEventResultWithSerializedDocument:(id)a0 documentType:(long long)a1 completion:(id /* block */)a2;
- (void)addOrUpdateSearchableItems:(id)a0 bundleID:(id)a1 completion:(id /* block */)a2;
- (void)addSerializedDocument:(id)a0 documentType:(long long)a1 completion:(id /* block */)a2;
- (void)requestExtractionOfPersonalIDFromDocument:(id)a0 pid:(int)a1 completion:(id /* block */)a2;
- (void)synchronousEventExtractionWithSerializedDocument:(id)a0 documentType:(long long)a1 pid:(int)a2 completion:(id /* block */)a3;
- (id)_syncRemoteObjectProxy;

@end
