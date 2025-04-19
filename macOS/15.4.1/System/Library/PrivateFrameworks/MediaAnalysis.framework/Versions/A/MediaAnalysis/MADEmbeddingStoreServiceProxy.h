@class MADEmbeddingStoreService;

@interface MADEmbeddingStoreServiceProxy : NSObject <MADEmbeddingStoreClientProtocol> {
    MADEmbeddingStoreService *_service;
}

- (void).cxx_destruct;
- (id)initWithService:(id)a0;

@end
