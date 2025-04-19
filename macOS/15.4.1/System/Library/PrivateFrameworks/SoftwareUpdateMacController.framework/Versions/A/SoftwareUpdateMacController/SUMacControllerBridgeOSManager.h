@class NSString, SUCoreLog, BridgeOSInstallDownloader, NSObject;
@protocol OS_dispatch_queue;

@interface SUMacControllerBridgeOSManager : NSObject

@property (readonly, retain, nonatomic) SUCoreLog *logger;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly, retain, nonatomic) NSString *uuid;
@property (readonly, retain, nonatomic) BridgeOSInstallDownloader *downloader;

+ (id)_defaultDownloadDirectory;
+ (void)cleanupDefaultDownloadPath;

- (id)description;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0;
- (id)summary;
- (void)_callDownloadCompletion:(id /* block */)a0 path:(id)a1 error:(id)a2;
- (void)_callDownloadProgressBlock:(id /* block */)a0 withProgress:(id)a1;
- (void)_callScanCompletion:(id /* block */)a0 performUpdate:(BOOL)a1 version:(id)a2 downloadSizeBytes:(id)a3 extractedSizeBytes:(id)a4 withError:(id)a5;
- (id)_ensureDownloadDirectoryWithOverrides:(id)a0 error:(id *)a1;
- (void)_updateDownloaderAuxInfoWithDescriptor:(id)a0;
- (void)_updateDownloaderCatalogURLWithOverrides:(id)a0;
- (void)cancelBridgeOSUpdate;
- (void)downloadBridgeOSProductForSUDescriptor:(id)a0 withOverrides:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (void)locateAvailableBridgeOSUpdateForSUDescriptor:(id)a0 withOverrides:(id)a1 completion:(id /* block */)a2;

@end
