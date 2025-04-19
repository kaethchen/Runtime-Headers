@class NSArray;

@interface CKDDownloadAssetsOperationInfo : CKDatabaseOperationInfo

@property (nonatomic) BOOL shouldFetchAssetContentInMemory;
@property (retain, nonatomic) NSArray *assetsToDownload;
@property (nonatomic) BOOL shouldCloneFileInAssetCache;
@property (nonatomic) BOOL fetchingAssetsForRereference;
@property (copy, nonatomic) id /* block */ cloneContextReturnBlock;
@property (retain, nonatomic) NSArray *assetsToDownloadInMemory;
@property (retain, nonatomic) NSArray *assetURLInfosToFillOut;

- (void).cxx_destruct;

@end
