@class NSArray, NSDictionary, NSURL, NSError, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SUScan : NSObject {
    double _progressValue;
    BOOL _isExecuting;
    int _productsCount;
    int _productsComplete;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSArray *installableProducts;
    NSMutableArray *_packageSources;
    NSError *_error;
    BOOL _didLoadAllResourcesSuccessfully;
}

@property (retain) NSURL *catalogURL;
@property (retain) NSArray *previousProducts;
@property (retain) NSArray *preferredLocalizations;
@property BOOL dontRunMakeQueues;
@property (retain) NSDictionary *installedPrinters;
@property BOOL shouldBuildCacheOnly;
@property (retain) NSArray *filteredProductKeys;
@property BOOL ignorePPDVersionCache;
@property (retain) NSDictionary *distributionEnvironment;
@property (retain) NSDictionary *distributionEvaluationMetainfo;
@property unsigned short scanTimeout;
@property (retain) NSArray *filteredProductTypes;
@property BOOL isBackgroundScan;

+ (BOOL)_rangeCheckForMacBuddyEligibleUpdate:(id)a0 maxVersion:(id)a1 currentVersion:(id)a2;
+ (long long)_resultCodeFromScan:(id)a0;

- (void)dealloc;
- (id)init;
- (id)error;
- (void)start;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)didLoadAllResourcesSuccessfully;
- (id)_clientDescription;
- (void)_scanMain:(id)a0;
- (void)_updatePackageSourcesWithCatalog:(id)a0;
- (BOOL)hasInstallableProducts;
- (bycopy id)installableProducts;
- (void)performSynchronousScan;
- (double)progressValue;

@end
