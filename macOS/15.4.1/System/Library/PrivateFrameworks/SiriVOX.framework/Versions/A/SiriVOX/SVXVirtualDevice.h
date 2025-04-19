@class SVXSessionManager, SVXClientServiceServer, SVXSynthesisManager, SVXDeviceSetupManager, AFPreferences, NSDictionary, SVXModuleInstanceMap, AFInstanceContext, SVXSpeechSynthesizer, AFAnalytics;
@protocol SVXPrewarmHandling, SVXActivationHandling, SVXDeactivationHandling, SVXMyriadEventHandling;

@interface SVXVirtualDevice : NSObject {
    NSDictionary *_modulesByIdentifier;
    SVXModuleInstanceMap *_moduleInstanceMap;
    AFInstanceContext *_instanceContext;
    AFAnalytics *_analytics;
}

@property (readonly, nonatomic) id<SVXPrewarmHandling> prewarmHandler;
@property (readonly, nonatomic) id<SVXActivationHandling> activationHandler;
@property (readonly, nonatomic) id<SVXDeactivationHandling> deactivationHandler;
@property (readonly, nonatomic) SVXDeviceSetupManager *deviceSetupManager;
@property (readonly, nonatomic) SVXSessionManager *sessionManager;
@property (readonly, nonatomic) SVXSpeechSynthesizer *speechSynthesizer;
@property (readonly, nonatomic) SVXClientServiceServer *clientServiceServer;
@property (readonly, nonatomic) id<SVXMyriadEventHandling> myriadEventHandler;
@property (readonly, nonatomic) SVXSynthesisManager *synthesisManager;
@property (readonly, nonatomic) AFPreferences *preferences;

+ (BOOL)_instanceContextIsEndpoint:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithInstanceContext:(id)a0;
- (id)_createBuiltInModules:(id)a0 preferences:(id)a1 analytics:(id)a2 moduleFactory:(id)a3;
- (void)_startWithModuleInstanceMap:(id)a0 platformDependencies:(id)a1;
- (void)_stopWithModuleInstanceMap:(id)a0;
- (id)initWithInstanceContext:(id)a0 preferences:(id)a1 analytics:(id)a2 moduleFactory:(id)a3;
- (void)startWithPlatformDependencies:(id)a0;

@end
