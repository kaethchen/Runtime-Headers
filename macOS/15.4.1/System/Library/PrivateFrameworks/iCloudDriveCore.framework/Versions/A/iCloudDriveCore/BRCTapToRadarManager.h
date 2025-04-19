@class BRCNamedThrottleManager, NSObject;
@protocol OS_dispatch_queue;

@interface BRCTapToRadarManager : NSObject {
    NSObject<OS_dispatch_queue> *_executionQueue;
    BRCNamedThrottleManager *_namedThrottleManager;
}

- (void).cxx_destruct;
- (id)_ttrThrottlingRulesForIdentifier:(id)a0;
- (id)initWithNamedThrottleManager:(id)a0;
- (void)requestTapToRadarWithTitle:(id)a0 description:(id)a1 componentName:(id)a2 componentVersion:(id)a3 componentID:(long long)a4 keywords:(id)a5 attachments:(id)a6 sendFullLog:(BOOL)a7 displayReason:(id)a8 triggerRootCause:(id)a9;
- (void)requestTapToRadarWithTitle:(id)a0 description:(id)a1 componentName:(id)a2 componentVersion:(id)a3 componentID:(long long)a4 keywords:(id)a5 attachments:(id)a6 sendFullLog:(BOOL)a7 displayReason:(id)a8 triggerRootCause:(id)a9 completionHandler:(id /* block */)a10;
- (void)requestTapToRadarWithTitle:(id)a0 description:(id)a1 keywords:(id)a2 attachments:(id)a3 sendFullLog:(BOOL)a4 displayReason:(id)a5 triggerRootCause:(id)a6;
- (void)requestTapToRadarWithTitle:(id)a0 description:(id)a1 keywords:(id)a2 attachments:(id)a3 sendFullLog:(BOOL)a4 displayReason:(id)a5 triggerRootCause:(id)a6 completionHandler:(id /* block */)a7;

@end
