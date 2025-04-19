@class VCPObjectPool, NSURL, PHPhotoLibrary, NSObject, MADVSKClient;
@protocol OS_dispatch_queue;

@interface MADVectorDatabase : NSObject {
    NSURL *_directoryURL;
    PHPhotoLibrary *_photoLibrary;
    MADVSKClient *_vskClient;
    NSObject<OS_dispatch_queue> *_vskClientQueue;
    VCPObjectPool *_searchClientPool;
    BOOL _readOnly;
}

@property (readonly, nonatomic) BOOL hasMigration;

+ (id)_vectorDatabaseAttributes;
+ (id)_vectorDatabaseVersion;
+ (id)databaseDirectoryURLForPhotoLibrary:(id)a0;
+ (id)databaseWithPhotoLibrary:(id)a0 readyOnly:(BOOL)a1;
+ (id)historicalFolderNames;

- (void).cxx_destruct;
- (id)databaseDirectoryURL;
- (id)initWithPhotoLibrary:(id)a0 readyOnly:(BOOL)a1;
- (int)_openVSKClientWithError:(id *)a0;
- (void)_purgeHistoricalData;
- (id)_vectorDatabaseReadOnlyConfigWithError:(id *)a0;
- (id)_vectorDatabaseReadWriteConfigWithError:(id *)a0;
- (unsigned long long)assetCountForEmbeddingType:(unsigned long long)a0 error:(id *)a1;
- (unsigned long long)assetCountWithError:(id *)a0;
- (unsigned long long)embeddingCountWithError:(id *)a0;
- (id)fetchAllAssetsWithLimit:(unsigned long long)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (id)fetchAssetsWithEmbeddingType:(unsigned long long)a0 limit:(unsigned long long)a1 offset:(unsigned long long)a2 error:(id *)a3;
- (id)fetchAssetsWithLocalIdentifiers:(id)a0 embeddingType:(unsigned long long)a1 error:(id *)a2;
- (id)fetchAssetsWithLocalIdentifiers:(id)a0 error:(id *)a1;
- (int)insertOrReplaceAssetsEmbeddings:(id)a0 error:(id *)a1;
- (void)prewarmSearchWithConcurrencyLimit:(unsigned long long)a0;
- (int)rebuildWithForce:(BOOL)a0 cancelBlock:(id /* block */)a1 extendTimeoutBlock:(id /* block */)a2;
- (int)removeEmbeddingsWithLocalIdentifiers:(id)a0 embeddingType:(unsigned long long)a1 error:(id *)a2;
- (int)removeEmbeddingsWithLocalIdentifiers:(id)a0 error:(id *)a1;
- (id)searchWithEmbeddings:(id)a0 localIdentifiers:(id)a1 attributeFilters:(id)a2 limit:(int)a3 fullScan:(BOOL)a4 includePayload:(BOOL)a5 numberOfProbes:(id)a6 batchSize:(id)a7 numConcurrentReaders:(id)a8 error:(id *)a9;

@end
