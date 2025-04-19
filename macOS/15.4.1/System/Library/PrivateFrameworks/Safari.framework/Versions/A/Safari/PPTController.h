@class BrowserApplication, NSString;

@interface PPTController : NSObject {
    BrowserApplication *_browserApplication;
    NSString *_currentTestName;
    BOOL _currentTestResult;
}

- (void).cxx_destruct;
- (BOOL)runTest:(id)a0 options:(id)a1;
- (void)_failTestWithFailure:(id)a0;
- (void)_performScrollTestWithName:(id)a0 scrollView:(id)a1 completionHandler:(id /* block */)a2;
- (void)_performScrollTestWithName:(id)a0 withOptions:(id)a1;
- (void)_runNewTabTestWithOptions:(id)a0;
- (void)_runOpenCloseSidebarTest;
- (void)_runScrollStartPageTestWithName:(id)a0;
- (id)initWithBrowserApplication:(id)a0;

@end
