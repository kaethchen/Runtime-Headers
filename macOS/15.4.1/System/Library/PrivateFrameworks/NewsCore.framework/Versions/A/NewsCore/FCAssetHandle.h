@class NSHashTable, NSString, NSURL, NSError, NSDate, NFUnfairLock, FCInterestToken, FCOperation, NSObject, FCContentArchive, NTPBAsset, FCContentManifest;
@protocol OS_dispatch_group, FCAssetDataProvider, FCAssetHandleDelegate;

@interface FCAssetHandle : NSObject <NSCopying, FCContentArchivable> {
    NSError *_downloadError;
    NSURL *_remoteURL;
    FCOperation *_fetchOperation;
    NSHashTable *_downloadRequests;
    NSObject<OS_dispatch_group> *_fetchGroup;
    unsigned long long _countOfPenalizedDownloadAttempts;
    NSDate *_dateOfLastDownloadAttempt;
    NFUnfairLock *_stateLock;
    id<FCAssetHandleDelegate> _delegate;
    FCInterestToken *_holdToken;
    NSString *_assetKey;
    long long _lifetimeHint;
    NSString *_rawFilePath;
    NTPBAsset *_assetMetadata;
}

@property (retain) id<FCAssetDataProvider> dataProvider;
@property (readonly, copy) NSString *filePath;
@property (readonly, copy) NSURL *fileURL;
@property (readonly) NSError *downloadError;
@property (readonly) BOOL isDownloadFailureRecoverable;
@property (readonly, copy, nonatomic) NSString *uniqueKey;
@property (readonly, nonatomic) NSURL *remoteURL;
@property (readonly, nonatomic) FCContentArchive *contentArchive;
@property (readonly, nonatomic) FCContentManifest *contentManifest;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)downloadIfNeededWithCompletion:(id /* block */)a0;
- (id)downloadIfNeededWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (id)downloadIfNeededWithGroup:(id)a0;
- (id)downloadIfNeededWithPriority:(long long)a0 completion:(id /* block */)a1;
- (id)fetchDataProviderWithCompletion:(id /* block */)a0;
- (id)fetchDataProviderWithPriority:(long long)a0 flags:(long long)a1 completion:(id /* block */)a2;

@end
