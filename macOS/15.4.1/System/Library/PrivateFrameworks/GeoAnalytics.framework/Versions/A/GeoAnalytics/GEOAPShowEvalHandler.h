@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_semaphore;

@interface GEOAPShowEvalHandler : NSObject <GEOAPXPCClientExporting> {
    NSXPCConnection *_xpcConn;
    id /* block */ _visitorBlock;
    NSObject<OS_dispatch_semaphore> *_wait;
    id /* block */ _streamLogMsgBlock;
    id /* block */ _streamDailyUsageBlock;
    id /* block */ _streamMonthlyUsageBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)logMsg:(id)a0;
- (void)dailyUsageActionType:(int)a0 usageString:(id)a1 usageBool:(id)a2 appId:(id)a3;
- (void)endEvalData;
- (void)evalData:(id)a0 ofType:(unsigned long long)a1 createTime:(id)a2;
- (void)monthlyUsageActionType:(int)a0 usageString:(id)a1 usageBool:(id)a2 appId:(id)a3;

@end
