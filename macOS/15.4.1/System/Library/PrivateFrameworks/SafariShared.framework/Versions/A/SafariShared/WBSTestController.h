@class NSString, NSArray, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface WBSTestController : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSArray *_testBundles;
}

@property (readonly, nonatomic) NSString *bundleType;
@property (readonly, nonatomic) NSURL *suiteURL;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) NSArray *bundles;

- (void).cxx_destruct;
- (void)_runTestsAndStoreResultsIn:(id)a0 completionBlock:(id /* block */)a1;
- (id)bundleFromNSBundle:(id)a0;
- (void)cleanBundle:(id)a0 completionHandler:(id /* block */)a1;
- (void)cleanSuiteWithCompletionHandler:(id /* block */)a0;
- (void)cleanTest:(id)a0 bundle:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithSuiteURL:(id)a0 bundleNames:(id)a1;
- (void)prepareBundle:(id)a0 completionHandler:(id /* block */)a1;
- (void)prepareSuiteWithCompletionHandler:(id /* block */)a0;
- (void)prepareTest:(id)a0 bundle:(id)a1 completionHandler:(id /* block */)a2;
- (void)runTest:(id)a0 bundle:(id)a1 storeResultsIn:(id)a2 completionHandler:(id /* block */)a3;
- (void)runTestsAndStoreResultsIn:(id)a0 completionHandler:(id /* block */)a1;

@end
