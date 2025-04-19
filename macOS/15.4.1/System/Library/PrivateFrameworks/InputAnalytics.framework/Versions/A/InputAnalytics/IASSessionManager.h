@class NSObject;
@protocol IASServerAnalyticsDelegate, OS_dispatch_queue;

@interface IASSessionManager : NSObject <IXAXPCProtocol>

@property (copy, nonatomic) id /* block */ eventHandler;
@property (weak, nonatomic) id<IASServerAnalyticsDelegate> serverDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)logMessage:(id)a0;
- (void)didAction:(id)a0;
- (id)garbageCollect;
- (void)broadcastActionToSubscribingAnalyzers:(id)a0;
- (id)createAnalyzerWithId:(id)a0 class:(Class)a1;
- (void)didSessionBeginWithSessionMetadata:(id)a0;
- (void)didSessionEndWithSessionMetadata:(id)a0;
- (void)getDateWithReply:(id /* block */)a0;
- (id)initWithQueue:(id)a0 serverDelegate:(id)a1 eventHandler:(id /* block */)a2;
- (void)periodic24HourEvents;
- (void)reportStatus;

@end
