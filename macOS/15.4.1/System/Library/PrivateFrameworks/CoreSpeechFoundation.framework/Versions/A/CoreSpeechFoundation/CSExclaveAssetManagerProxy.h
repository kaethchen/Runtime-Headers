@class NSObject;
@protocol CSExclaveAdBlockerAnalyzing, CSExclaveAssetsControlling, OS_dispatch_queue;

@interface CSExclaveAssetManagerProxy : NSObject

@property (retain, nonatomic) id<CSExclaveAssetsControlling> exclaveRecordClient;
@property (retain, nonatomic) id<CSExclaveAdBlockerAnalyzing> exclaveAdblockerAnalyzer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)startSecureMobileAssetLoaderService:(BOOL)a0 completion:(id /* block */)a1;
- (void)stopSecureMobileAssetLoaderService:(id /* block */)a0;

@end
