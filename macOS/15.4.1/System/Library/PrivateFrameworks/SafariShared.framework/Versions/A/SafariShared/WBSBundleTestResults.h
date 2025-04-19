@class NSURL, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface WBSBundleTestResults : NSObject <WBSTestResults> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableArray *_pendingReports;
}

@property (readonly, nonatomic) NSURL *fileURL;

- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0 error:(id *)a1;
- (void)flushWithCompletionHandler:(id /* block */)a0;
- (void)reportActualResults:(id)a0 expectedResults:(id)a1 expectedResultsName:(id)a2 descriptiveResultsName:(id)a3 uniformTypeIdentifier:(id)a4 forStage:(id)a5 forTest:(id)a6 inBundle:(id)a7;
- (void)beginTest:(id)a0 inBundle:(id)a1;
- (void)endTest:(id)a0 inBundle:(id)a1;
- (void)reportError:(id)a0 descriptiveResultsName:(id)a1 forStage:(id)a2 forTest:(id)a3 inBundle:(id)a4;
- (void)reportPerformance:(id)a0 forStage:(id)a1 forTest:(id)a2 inBundle:(id)a3;
- (void)reportResults:(id)a0 resultsName:(id)a1 descriptiveResultsName:(id)a2 uniformTypeIdentifier:(id)a3 forStage:(id)a4 forTest:(id)a5 inBundle:(id)a6;

@end
