@class NSString, TLAlertConfiguration;
@protocol TLAlertPlaybackObserver;

@interface TLAlert : NSObject {
    long long _instanceIndex;
}

@property (weak, nonatomic) id<TLAlertPlaybackObserver> playbackObserver;
@property (readonly, nonatomic) TLAlertConfiguration *configuration;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *toneIdentifier;

+ (id)alertWithConfiguration:(id)a0;
+ (BOOL)_stopAllAlerts;
+ (void)playAlertForType:(long long)a0;
+ (void)playToneAndVibrationForType:(long long)a0;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithType:(long long)a0;
- (void)play;
- (void)playWithCompletionHandler:(id /* block */)a0;
- (id)_descriptionForDebugging:(BOOL)a0;
- (id)_initWithConfiguration:(id)a0 toneIdentifier:(id)a1;
- (void)_updateAudioVolumeDynamicallyToValue:(float)a0;
- (id)initWithType:(long long)a0 toneIdentifier:(id)a1 vibrationIdentifier:(id)a2;
- (BOOL)playWithCompletionHandler:(id /* block */)a0 targetQueue:(id)a1;
- (void)preheatWithCompletionHandler:(id /* block */)a0;
- (void)stopWithOptions:(id)a0;

@end
