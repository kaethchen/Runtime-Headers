@class NSURL;

@interface WBSBulkClassificationController : WBSAutoFillTestController

@property (readonly, nonatomic) NSURL *inputFileURL;
@property (readonly, nonatomic) NSURL *scratchFileURL;

- (void).cxx_destruct;
- (void)_runClassificationForURL:(id)a0 viewportSize:(struct CGSize { double x0; double x1; })a1 delegate:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithSuiteURL:(id)a0 bundleNames:(id)a1;
- (void)runTestsAndStoreResultsIn:(id)a0 completionHandler:(id /* block */)a1;

@end
