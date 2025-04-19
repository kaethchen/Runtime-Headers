@class NSFileManager, NSURL, NSObject, BundleData;
@protocol OS_dispatch_queue;

@interface StagedBundleData : NSObject {
    NSURL *_stagedUrl;
    NSURL *_bundleUrl;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSFileManager *_fileManager;
    id /* block */ _reloadBlock;
    id /* block */ _prepareBlock;
}

@property (readonly, nonatomic) BundleData *bundle;
@property (readonly, nonatomic) BundleData *stagedBundle;

- (void).cxx_destruct;
- (void)access:(id /* block */)a0;
- (void)handleReload;
- (id)initWithURL:(id)a0 withStagedURL:(id)a1 withReloadBlock:(id /* block */)a2 withPrepareBlock:(id /* block */)a3;

@end
