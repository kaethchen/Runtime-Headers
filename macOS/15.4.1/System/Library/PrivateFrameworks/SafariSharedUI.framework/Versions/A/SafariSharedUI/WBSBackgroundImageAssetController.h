@class NSString, NSArray, NSMutableDictionary, NSObject, NSMutableArray;
@protocol WBSBackgroundImageAssetControllerDelegate, OS_dispatch_queue, WBSMobileAssetControllerProtocol;

@interface WBSBackgroundImageAssetController : NSObject <WBSMobileAssetControllerDelegate, WBSBackgroundImageAssetControllerProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
    id<WBSMobileAssetControllerProtocol> _assetController;
    id<WBSBackgroundImageAssetControllerDelegate> _delegate;
    NSMutableDictionary *_assetURLToAttributes;
    NSMutableArray *_fileNames;
    NSMutableDictionary *_imageNamesToDownloadStates;
}

@property (class, readonly, nonatomic) NSString *mobileAssetType;

@property (readonly, copy, nonatomic) NSArray *fileNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<WBSBackgroundImageAssetControllerDelegate> delegate;

+ (id)mobileAssetBackgroundImageNamesOnDisk;

- (id)init;
- (void).cxx_destruct;
- (void)savePendingChangesBeforeTermination;
- (void)downloadMobileAssetBackgroundImage:(id)a0 completionHandler:(id /* block */)a1;
- (long long)downloadStateForFileName:(id)a0;
- (BOOL)_saveAssetAtURL:(id)a0 toURL:(id)a1;
- (void)_sendBackgroundImageThumbnailAssetsToDelegateIfPossible;
- (void)_sendBackgroundImageThumbnailAssetsToDelegateIfPossible:(id)a0;
- (id)initWithMobileAssetController:(id)a0;
- (void)mobileAssetController:(id)a0 didBecomeAvailable:(id)a1 withAttributes:(id)a2;
- (void)mobileAssetController:(id)a0 didDownload:(id)a1 withAttributes:(id)a2;
- (void)mobileAssetController:(id)a0 didFailCatalogDownload:(id)a1;
- (void)mobileAssetController:(id)a0 didFailDownload:(id)a1;
- (void)mobileAssetController:(id)a0 didFailRetrieve:(id)a1;
- (void)mobileAssetController:(id)a0 willPerformQuery:(id)a1;

@end
