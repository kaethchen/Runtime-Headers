@class NSString, geo_isolater, NSXPCConnection;
@protocol GEOAPXPCDaemonExporting;

@interface GEOAPServiceRemote : NSObject <GEOAPServiceProxy> {
    NSXPCConnection *_conn;
    id<GEOAPXPCDaemonExporting> _daemonSvc;
    geo_isolater *_xpcIso;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_daemonConnectionWithExportedProtocol:(id)a0 instance:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reportDailySettings:(id)a0 completion:(id /* block */)a1;
- (id)_sharedDaemonConnection;
- (void)flushEvalData;
- (void)flushUploadHistoryWithCompletion:(id /* block */)a0;
- (void)reportDailyUsageCountType:(int)a0 usageString:(id)a1 usageBool:(id)a2 appId:(id)a3 completion:(id /* block */)a4;
- (void)reportLogMsg:(id)a0 uploadBatchId:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)runAggregationTasks;
- (void)setEvalMode:(BOOL)a0;
- (void)showEvalDataWithVisitorBlock:(id /* block */)a0;
- (void)showHistoryOfAge:(unsigned int)a0 withVisitorBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)showInflightUploadsWithVisitorBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)showUploadCounts:(id /* block */)a0;
- (void)streamWithLogMsgBlock:(id /* block */)a0 dailyUsageBlock:(id /* block */)a1 monthlyUsageBlock:(id /* block */)a2;

@end
