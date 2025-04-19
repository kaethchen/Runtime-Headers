@class XPCStreamEventRegister, NSString, CDMDeviceStateLogger, CDMDynamicConfig, CDMDataDispatcherContext, NSUUID, CDMServiceCenter;
@protocol CDMClientDelegate;

@interface CDMFoundationClient : CDMClientInterface {
    id<CDMClientDelegate> _delegate;
    CDMServiceCenter *_serviceCenter;
    NSString *_assetsLocaleIdentifier;
    CDMDeviceStateLogger *_deviceStateLogger;
    XPCStreamEventRegister *_eventRegister;
    CDMDynamicConfig *_dynamicConfig;
    CDMDataDispatcherContext *_dataDispatcherContext;
    NSUUID *_nlSetupId;
    NSString *_invocationSource;
}

+ (id)createEmptyNluRequestId;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)setup:(id)a0;
- (void)waitForDataDispatcherCompletion;
- (BOOL)areAssetsAvailable:(id)a0;
- (void)doHandleCommand:(id)a0 forCallback:(id /* block */)a1;
- (void)doServiceCenterInitWithConfig:(id)a0;
- (id)getNlSetupId;
- (BOOL)handleXPCActivity:(id)a0 fromIdentifier:(id)a1;
- (BOOL)handleXPCEvent:(id)a0 fromStream:(id)a1;
- (id)handleableXPCActivities;
- (id)handleableXPCEventStreams;
- (id)initWithCallingBundleId:(id)a0;
- (id)initWithDelegate:(id)a0 withCallingBundleId:(id)a1;
- (id)initWithServiceCenter:(id)a0 withEventRegister:(id)a1;
- (BOOL)isLighthouseAPIEnabled;
- (void)processCDMNluRequest:(id)a0;
- (void)processCDMNluRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)processCDMNluRequest:(id)a0 nullableCompletionHandler:(id /* block */)a1;
- (BOOL)registerWithAssetsDelegate:(id)a0 withType:(long long)a1;
- (void)setDataDispatcherContext:(id)a0;
- (void)setup:(id)a0 completionHandler:(id /* block */)a1;
- (void)setup:(id)a0 nullableCompletionHandler:(id /* block */)a1;
- (void)warmupWithCompletionHandler:(id /* block */)a0;

@end
