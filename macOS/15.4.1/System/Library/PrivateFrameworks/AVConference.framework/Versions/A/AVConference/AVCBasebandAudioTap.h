@class NSString, AVCAudioPowerSpectrumMeter, NSObject;
@protocol AVCBasebandAudioTapDelegate, OS_dispatch_queue;

@interface AVCBasebandAudioTap : NSObject <AVCAudioPowerSpectrumMeterDelegate> {
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    AVCAudioPowerSpectrumMeter *_powerSpectrumMeter;
    id _weakDelegate;
}

@property (weak, nonatomic) id<AVCBasebandAudioTapDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)registerForTapWithError:(id *)a0;
+ (BOOL)unregisterFromTapWithError:(id *)a0;

- (void)dealloc;
- (id)init;
- (void)meterServerDidDisconnect:(id)a0;
- (void)cleanUpPowerSpectrumMeter;
- (id)dispatchedDelegate;
- (id)registerForTapWithError:(id *)a0;
- (BOOL)setUpPowerSpectrumMeter;
- (BOOL)unregisterFromTapWithError:(id *)a0;

@end
