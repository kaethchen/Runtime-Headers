@interface WBSAutoFillTestController : WBSPageTestController

- (id)bundleType;
- (void)cleanSuiteWithCompletionHandler:(id /* block */)a0;
- (id)expectedResultsPathExtension;
- (unsigned long long)pageTestType;
- (void)prepareSuiteWithCompletionHandler:(id /* block */)a0;
- (void)runTest:(id)a0 bundle:(id)a1 storeResultsIn:(id)a2 completionHandler:(id /* block */)a3;
- (void)runTest:(id)a0 bundle:(id)a1 storeResultsIn:(id)a2 tryCount:(unsigned long long)a3 completionHandler:(id /* block */)a4;

@end
