@interface WFHandoffSimulator : NSObject

+ (id)URLForContinuingWorkflowWithState:(id)a0 fromSource:(id)a1;
+ (id)URLForSimulatingHandoffWithActivityType:(id)a0 userInfo:(id)a1 webpageURL:(id)a2 fromSource:(id)a3;
+ (void)deserializeUserInfoAtURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getStateForContinuingWorkflowFromUserActivityUserInfo:(id)a0 completionHandler:(id /* block */)a1;
+ (void)registerHandoffURLRequestHandler:(id /* block */)a0;
+ (id)temporaryFileURLBySerializingUserInfo:(id)a0;
+ (id)userActivityForContinuingWorkflowWithState:(id)a0 fromSource:(id)a1;

@end
