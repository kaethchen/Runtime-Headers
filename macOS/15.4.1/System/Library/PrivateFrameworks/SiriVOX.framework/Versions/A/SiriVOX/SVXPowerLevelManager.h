@class SVXModule, SVXPowerLevelListener;
@protocol SVXAudioPowerProviding;

@interface SVXPowerLevelManager : NSObject {
    SVXModule *_module;
    id<SVXAudioPowerProviding> _audioPowerProvider;
    SVXPowerLevelListener *_powerLevelListener;
}

- (void).cxx_destruct;
- (void)_beginUpdateAudioPowerWithCompletion:(id /* block */)a0;
- (void)_endUpdateAudioPower;
- (void)beginUpdateAudioPowerWithCompletion:(id /* block */)a0;
- (void)endUpdateAudioPower;
- (id)initWithModule:(id)a0 audioPowerProvider:(id)a1;
- (id)initWithModule:(id)a0 audioPowerProvider:(id)a1 powerLevelListener:(id)a2;

@end
