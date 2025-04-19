@class AVConferenceXPCClient, NSString, NSSet, VCAudioPowerSpectrumMeter, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AVCAudioPowerSpectrumMeter : NSObject <VCAudioPowerSpectrumMeterDelegate> {
    AVConferenceXPCClient *_connection;
    double _audioSpectrumRefreshRate;
    unsigned short _audioSpectrumBinCount;
    NSSet *_allowListedXPCObjects;
    VCAudioPowerSpectrumMeter *_powerSpectrumMeter;
    NSMutableDictionary *_basebandAudioTapTypeToStreamTokenMap;
    NSObject<OS_dispatch_queue> *_stateQueue;
    BOOL _enableAsyncTapStart;
}

@property (readonly, nonatomic) id delegate;
@property (readonly, nonatomic) unsigned int sessionToken;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)cellularTapTypeWithClientCellularTapType:(unsigned int)a0;

- (void)dealloc;
- (void)audioPowerSpectrumMeter:(id)a0 didUpdateAudioPowerSpectrums:(id)a1;
- (id)initWithConfig:(struct _AVCAudioPowerSpectrumMeterConfig { long long x0; unsigned int x1; unsigned short x2; double x3; })a0 delegate:(id)a1 queue:(id)a2;
- (BOOL)registerPowerSpectrumForCellularTapType:(unsigned int)a0 error:(id *)a1;
- (void)registerPowerSpectrumForStreamToken:(long long)a0;
- (BOOL)unregisterPowerSpectrumForCellularTapType:(unsigned int)a0 error:(id *)a1;
- (void)unregisterPowerSpectrumForStreamToken:(long long)a0;
- (void)cleanupDelegate;
- (void)cleanupPowerSpectrumMeter;
- (void)cleanupXPCConnection;
- (void)deregisterBlocksForService;
- (BOOL)dispatchedProcessBasebandRegistrationResult:(id)a0 forTapType:(unsigned int)a1 withError:(id *)a2;
- (BOOL)dispatchedRegisterPowerSpectrumForCellularTapType:(unsigned int)a0 error:(id *)a1;
- (void)dispatchedUnregisterBasebandTokensForAudioTapType:(unsigned int)a0;
- (BOOL)dispatchedUnregisterPowerSpectrumForCellularTapType:(unsigned int)a0 error:(id *)a1;
- (BOOL)enableAsyncTapStart;
- (void)invalidateBasebandTokens;
- (void)registerBlocksForNotifications;
- (void)setEnableAsyncTapStart:(BOOL)a0;
- (BOOL)setupPowerSpectrumMeter;
- (BOOL)setupXPCConnection;
- (BOOL)storeDelegate:(id)a0 delegateQueue:(id)a1;
- (long long)streamTokenForCellularTapType:(unsigned int)a0;

@end
