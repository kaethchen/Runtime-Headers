@class NSXPCConnection, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MADEmbeddingStoreService : NSObject <MADEmbeddingStoreClientProtocol> {
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_sandboxQueue;
    NSMutableDictionary *_sandboxHandles;
}

+ (id)allowedClasses;
+ (id)serviceName;
+ (id)sharedService;
+ (void)configureServerInterface:(id)a0;
+ (BOOL)isEntitledForInProcessAccess;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)connection;
- (id)initInternal;
- (id)fetchEmbeddingsWithAssetUUIDs:(id)a0 photoLibraryURL:(id)a1 options:(id)a2 error:(id *)a3;
- (void)prewarmSearchWithConcurrencyLimit:(unsigned long long)a0 photoLibraryURL:(id)a1 error:(id *)a2;
- (id)searchWithEmbeddings:(id)a0 photoLibraryURL:(id)a1 options:(id)a2 error:(id *)a3;
- (void)checkSandboxExtensionForPhotoLibraryURL:(id)a0 error:(id *)a1;

@end
