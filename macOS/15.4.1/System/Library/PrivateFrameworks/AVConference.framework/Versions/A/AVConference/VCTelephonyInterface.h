@protocol VCTelephonyInterfaceDelegate;

@interface VCTelephonyInterface : NSObject {
    id _delegate;
}

@property id<VCTelephonyInterfaceDelegate> delegate;

- (void)dealloc;
- (id)init;
- (BOOL)registerForNotifications;
- (void)unregisterForNotifications;
- (void)notifyCodecModeChangeEventToCT:(struct _VCAudioCodecModeChangeEvent { int x0; int x1; int x2; unsigned int x3; struct EVSRFParams { unsigned int x0; unsigned int x1; } x4; })a0;
- (void)getAnbrActivationStateWithCompletionHandler:(id /* block */)a0;
- (BOOL)getCarrierBundleValue:(id *)a0 forKey:(id)a1;
- (void)handleTelephonyNotification:(id)a0 withInfo:(id)a1;
- (void)handleVocoderNotificationWithInfo:(id)a0;
- (id)initWithTelephonySubscriptionSlot:(long long)a0;
- (void)queryAnbrBitrateRecommendation:(unsigned int)a0 direction:(long long)a1 completionHandler:(id /* block */)a2;
- (void)setupVCMediaStreamRateAdaptationConfig:(struct tagVCMediaStreamRateAdaptationConfig { long long x0; union tagVCMediaStreamRateAdaptationAlgorithmConfig { struct tagVCMediaStreamRateAdaptationConfigTelephonyUplink { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x0; struct tagVCMediaStreamRateAdaptationConfigScreenShare { unsigned int x0; unsigned int x1; unsigned int x2; int x3; BOOL x4; } x1; } x1; } *)a0;
- (id)translateVocoderTypeToCoreAudioType:(id)a0;
- (unsigned int)validateCarrierBundleConfigParameters:(id)a0 forKey:(id)a1 defaultValue:(unsigned int)a2 minValue:(unsigned int)a3 maxValue:(unsigned int)a4;

@end
