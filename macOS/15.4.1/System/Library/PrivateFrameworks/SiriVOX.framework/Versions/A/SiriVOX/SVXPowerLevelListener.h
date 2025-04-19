@class NSString, AFAudioPowerUpdater, SVXAFAudioPowerUpdaterProvider, NSObject;
@protocol OS_dispatch_queue, SVXAudioPowerProviding;

@interface SVXPowerLevelListener : NSObject <AFAudioPowerProviding> {
    SVXAFAudioPowerUpdaterProvider *_audioPowerUpdaterProvider;
    AFAudioPowerUpdater *_outputAudioPowerUpdater;
    NSObject<OS_dispatch_queue> *_outputAudioPowerUpdaterQueue;
}

@property (weak, nonatomic) id<SVXAudioPowerProviding> audioPowerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)endListening;
- (void)didEndAccessPower;
- (BOOL)getAveragePower:(float *)a0 andPeakPower:(float *)a1;
- (void)willBeginAccessPower;
- (long long)_frequency;
- (void)beginListeningToAudioPowerProvider:(id)a0 completion:(id /* block */)a1;
- (id)initWithAudioPowerUpdaterProvider:(id)a0;

@end
