@class NSURL, NSArray;

@interface OSLogEventStore : NSObject

@property (retain, nonatomic) NSURL *_archiveURL;
@property (retain, nonatomic) NSArray *_relativeFilePaths;
@property (copy, nonatomic) id /* block */ _progressHandler;
@property (copy, nonatomic) id /* block */ _upgradeHandler;

+ (id)localStore;
+ (id)localStoreWithRelativePaths:(id)a0;
+ (id)storeWithArchiveURL:(id)a0;
+ (id)storeWithArchiveURL:(id)a0 relativePaths:(id)a1;
+ (id)storeWithFileURL:(id)a0;

- (void).cxx_destruct;
- (void)setProgressHandler:(id /* block */)a0;
- (void)prepareWithCompletionHandler:(id /* block */)a0;
- (void)addFilesToSource:(id)a0 forCollection:(id)a1 withProgress:(id)a2;
- (id)initWithArchiveURL:(id)a0;
- (id)initWithArchiveURL:(id)a0 relativePaths:(id)a1;
- (void)setUpgradeConfirmationHandler:(id /* block */)a0;

@end
