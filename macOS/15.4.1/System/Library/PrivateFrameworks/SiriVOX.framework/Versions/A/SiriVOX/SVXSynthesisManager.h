@class NSString, SVXClientServiceRemoteDelegateSupplier, SVXSpeechSynthesizer;
@protocol SVXPerforming;

@interface SVXSynthesisManager : NSObject <SVXModuleInstance> {
    id<SVXPerforming> _performer;
    SVXClientServiceRemoteDelegateSupplier *_remoteDelegateSupplier;
    SVXSpeechSynthesizer *_speechSynthesizer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_createGroup;
- (id)initWithModule:(id)a0;
- (void)stopWithModuleInstanceProvider:(id)a0;
- (id)initWithPerformer:(id)a0 remoteDelegateSupplier:(id)a1;
- (void)startWithModuleInstanceProvider:(id)a0 platformDependencies:(id)a1;
- (void)synthesizeRequest:(id)a0 xpcConnection:(id)a1 handlerUUID:(id)a2 completion:(id /* block */)a3;

@end
