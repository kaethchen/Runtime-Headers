@class NSDate, NSString, SVXSessionManager, SVXModule, SVXAudioServicesUtils, NSMutableDictionary, SVXDeviceSetupFlowScene, SVXDeviceSetupAnnouncer, SVXSpeechSynthesizer, SVXDeviceSetupContext;

@interface SVXDeviceSetupManager : NSObject <SVXModuleInstance, SVXSessionActivationListening> {
    SVXModule *_module;
    SVXSpeechSynthesizer *_speechSynthesizer;
    SVXSessionManager *_sessionManager;
    SVXAudioServicesUtils *_audioServicesUtils;
    SVXDeviceSetupAnnouncer *_announcer;
    NSMutableDictionary *_contextsByUUID;
    NSDate *_beginDate;
    NSDate *_endDate;
    SVXDeviceSetupFlowScene *_activatedDeviceSetupFlowScene;
    SVXDeviceSetupContext *_effectiveContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (void)getContextWithCompletion:(id /* block */)a0;
- (id)initWithModule:(id)a0;
- (void)stopWithModuleInstanceProvider:(id)a0;
- (void)_prepareForSetupWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_setContext:(id)a0 forUUID:(id)a1;
- (void)_setEffectiveContext:(id)a0;
- (void)_updateEffectiveContext;
- (void)prepareForSetupWithContext:(id)a0 completion:(id /* block */)a1;
- (void)sessionManager:(id)a0 didActivateWithContext:(id)a1;
- (void)setContext:(id)a0 forUUID:(id)a1;
- (void)startWithModuleInstanceProvider:(id)a0 platformDependencies:(id)a1;

@end
