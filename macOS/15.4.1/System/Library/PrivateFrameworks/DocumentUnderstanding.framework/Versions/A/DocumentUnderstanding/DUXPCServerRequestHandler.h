@class NSString, _PASBundleIdResolver, _TtC21DocumentUnderstanding24TextUnderstandingManager;
@protocol DUDocumentHarvestingProtocol;

@interface DUXPCServerRequestHandler : NSObject <DUDocumentHarvestingProtocol> {
    id<DUDocumentHarvestingProtocol> _clientProxy;
    _TtC21DocumentUnderstanding24TextUnderstandingManager *_textUnderstandingManager;
}

@property (copy, nonatomic) NSString *clientProcessName;
@property (retain, nonatomic) _PASBundleIdResolver *bundleIdResolver;

- (void).cxx_destruct;
- (id)initWithManager:(id)a0;
- (void)setRemoteObjectProxy:(id)a0;
- (void)foundInEventResultWithSerializedDocument:(id)a0 documentType:(long long)a1 completion:(id /* block */)a2;
- (void)addOrUpdateSearchableItems:(id)a0 bundleID:(id)a1 completion:(id /* block */)a2;
- (void)addSerializedDocument:(id)a0 documentType:(long long)a1 completion:(id /* block */)a2;
- (void)requestExtractionOfPersonalIDFromDocument:(id)a0 pid:(int)a1 completion:(id /* block */)a2;
- (void)synchronousEventExtractionWithSerializedDocument:(id)a0 documentType:(long long)a1 pid:(int)a2 completion:(id /* block */)a3;

@end
