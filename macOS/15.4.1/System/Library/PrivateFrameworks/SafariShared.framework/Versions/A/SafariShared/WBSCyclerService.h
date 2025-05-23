@class NSXPCListener, NSString, NSError, NSDate, WBSCyclerTestTargetProxyController, WBSCyclerTestRunner;
@protocol WBSCyclerTestSuite;

@interface WBSCyclerService : NSObject <NSXPCListenerDelegate, WBSCyclerServiceProtocol> {
    NSXPCListener *_xpcListener;
    WBSCyclerTestTargetProxyController *_testTargetProxyController;
    Class _testSuiteClass;
    id<WBSCyclerTestSuite> _testSuite;
    WBSCyclerTestRunner *_testRunner;
    NSDate *_lastTestStart;
    NSDate *_lastTestEnd;
    NSError *_lastError;
    unsigned long long _maximumIterationCount;
}

@property (copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)_errorWithCode:(long long)a0;
- (void)_setSeed:(unsigned long long)a0 reply:(id /* block */)a1;
- (id)_descriptionForErrorCode:(long long)a0;
- (void)_finishedWithResult:(long long)a0 error:(id)a1;
- (void)_postFinishNotificationWithError:(id)a0;
- (void)_setMaximumIterationCount:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)_setTestSuiteName:(id)a0 reply:(id /* block */)a1;
- (id)_startCyclingFromBeginning:(BOOL)a0;
- (void)fetchLastErrorWithReply:(id /* block */)a0;
- (void)fetchLogsWithReply:(id /* block */)a0;
- (void)fetchStatusWithReply:(id /* block */)a0;
- (void)sendRequestToTestSuite:(id)a0 reply:(id /* block */)a1;
- (void)setTestTargetEndpoint:(id)a0 reply:(id /* block */)a1;
- (void)setValue:(id)a0 forConfigurationKey:(id)a1 reply:(id /* block */)a2;
- (void)startCyclingFromBeginning:(BOOL)a0 reply:(id /* block */)a1;
- (void)stopCyclingWithReply:(id /* block */)a0;

@end
