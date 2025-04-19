@class NSString, NSXPCConnection;

@interface GEOAPShowUploadInfoHandler : NSObject <GEOAPXPCMapsDebugPanelExporting> {
    NSXPCConnection *_xpcConn;
    id /* block */ _historyVisitorBlock;
    id /* block */ _inflightVisitorBlock;
    id /* block */ _completionBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)endInflightData;
- (void)endHistoricalData;
- (void)inflightBatchUUID:(id)a0 createTime:(id)a1 analyticSessionType:(int)a2 eventCount:(unsigned int)a3 uploadSize:(unsigned int)a4 urlSessionType:(int)a5 stageNumber:(unsigned int)a6;
- (id)initWithHistoryVisitorBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (id)initWithInflightVisitorBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)showHistoryOfAge:(unsigned int)a0;
- (void)showInflight;
- (void)uploadHistoryForBatchUUID:(id)a0 endDate:(id)a1 uploadLatency:(unsigned int)a2 analyticSessionType:(int)a3 eventCount:(unsigned int)a4 uploadSize:(unsigned int)a5 urlSessionType:(int)a6 stageNumber:(unsigned int)a7;

@end
