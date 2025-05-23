@class NSString, SVXDeviceSetupContext;
@protocol SVXPerforming, SVXClientServiceProviding;

@interface SVXClientDeviceService : NSObject <SVXClientServiceConsuming, SVXClientDeviceServicing> {
    id<SVXPerforming> _performer;
    id<SVXClientServiceProviding> _clientServiceProvider;
    SVXDeviceSetupContext *_currentSetupContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)endSetup;
- (void)_endSetup;
- (void)_beginSetupWithContext:(id)a0;
- (void)_prepareForSetupWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_updateSetupContext;
- (void)beginSetupWithContext:(id)a0;
- (void)clientServiceDidChange:(BOOL)a0;
- (id)initWithClientServiceProvider:(id)a0 analytics:(id)a1 performer:(id)a2;
- (void)prepareForSetupWithContext:(id)a0 completion:(id /* block */)a1;

@end
