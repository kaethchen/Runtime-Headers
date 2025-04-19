@class SVXSessionManager, NSString, NSMutableDictionary, SVXDeviceSetupManager, SVXSpeechSynthesizer, SVXModule, SVXSynthesisManager;

@interface SVXClientServiceServer : NSObject <SVXModuleInstance> {
    SVXModule *_module;
    NSMutableDictionary *_connectionsByUUID;
    SVXDeviceSetupManager *_deviceSetupManager;
    SVXSessionManager *_sessionManager;
    SVXSpeechSynthesizer *_speechSynthesizer;
    SVXSynthesisManager *_synthesisManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeConnection:(id)a0;
- (void)addConnection:(id)a0;
- (void)_addConnection:(id)a0;
- (void)_removeConnection:(id)a0;
- (id)initWithModule:(id)a0;
- (void)stopWithModuleInstanceProvider:(id)a0;
- (void)_removeAllConnections;
- (void)startWithModuleInstanceProvider:(id)a0 platformDependencies:(id)a1;

@end
